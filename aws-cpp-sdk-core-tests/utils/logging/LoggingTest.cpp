/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */



#include <aws/external/gtest.h>

#include <aws/core/utils/logging/DefaultLogSystem.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/CRTLogging.h>
#include <aws/core/utils/logging/CRTLogSystem.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/StringUtils.h>

#include <cstdarg>
#include <thread>

using namespace Aws::Utils;
using namespace Aws::Utils::Logging;

static const char* AllocationTag = "LoggingTests";

class ScopedLogger
{
    public:
        ScopedLogger(const std::shared_ptr<LogSystemInterface>& logger)
        {
            Aws::Utils::Logging::PushLogger(logger);
        }

        ~ScopedLogger()
        {
            Aws::Utils::Logging::PopLogger();
        }

};

class MockCRTLogSystem : public DefaultCRTLogSystem
{
public:
    MockCRTLogSystem(LogLevel logLevel, std::shared_ptr<Aws::StringStream> crtLogs) :
        DefaultCRTLogSystem(logLevel),
        m_localLogs(crtLogs) {}

    void Log(LogLevel logLevel, const char* subjectName, const char* formatStr, va_list args) override
    {
        va_list tmp_args;
        va_copy(tmp_args, args);
    #ifdef _WIN32
        const int requiredLength = _vscprintf(formatStr, tmp_args) + 1;
    #else
        const int requiredLength = vsnprintf(nullptr, 0, formatStr, tmp_args) + 1;
    #endif
        va_end(tmp_args);

        Array<char> outputBuff(requiredLength);
    #ifdef _WIN32
        vsnprintf_s(outputBuff.GetUnderlyingData(), requiredLength, _TRUNCATE, formatStr, args);
    #else
        vsnprintf(outputBuff.GetUnderlyingData(), requiredLength, formatStr, args);
    #endif // WIN32

        Aws::OStringStream logStream;
        logStream << outputBuff.GetUnderlyingData();
        *m_localLogs << outputBuff.GetUnderlyingData() << std::endl;
        Logging::GetLogSystem()->LogStream(logLevel, subjectName, logStream);
    }

private:
    std::shared_ptr<Aws::StringStream> m_localLogs;
};

class ScopedCRTLogger
{
    public:
        ScopedCRTLogger(const std::shared_ptr<CRTLogSystemInterface>& crtLogger)
        {
            Aws::Utils::Logging::ShutdownCRTLogging();
            Aws::Utils::Logging::InitializeCRTLogging(crtLogger);
        }

        ~ScopedCRTLogger()
        {
            Aws::Utils::Logging::ShutdownCRTLogging();
            Aws::Utils::Logging::InitializeCRTLogging(Aws::MakeShared<Aws::Utils::Logging::DefaultCRTLogSystem>(AllocationTag, Aws::Utils::Logging::LogLevel::Trace));
        }
};

void LogAllPossibilities(const char* tag)
{
    AWS_LOG_FATAL(tag, "test fatal level");
    AWS_LOG_FATAL(tag, "test %s format level", "fatal");
    AWS_LOGSTREAM_FATAL(tag, "test " << "fatal " << "stream level" );
    AWS_LOG_ERROR(tag, "test error level");
    AWS_LOG_ERROR(tag, "test %s format level", "error");
    AWS_LOGSTREAM_ERROR(tag, "test " << "error " << "stream level" );
    AWS_LOG_WARN(tag, "test warn level");
    AWS_LOG_WARN(tag, "test %s format level", "warn");
    AWS_LOGSTREAM_WARN(tag, "test " << "warn " << "stream level" );
    AWS_LOG_INFO(tag, "test info level");
    AWS_LOG_INFO(tag, "test %s format level", "info");
    AWS_LOGSTREAM_INFO(tag, "test " << "info " << "stream level" );
    AWS_LOG_DEBUG(tag, "test debug level");
    AWS_LOG_DEBUG(tag, "test %s format level", "debug");
    AWS_LOGSTREAM_DEBUG(tag, "test " << "debug " << "stream level" );
    AWS_LOG_TRACE(tag, "test trace level");
    AWS_LOG_TRACE(tag, "test %s format level", "trace");
    AWS_LOGSTREAM_TRACE(tag, "test " << "trace " << "stream level" );

    AWS_LOG_FLUSH();
    AWS_LOGSTREAM_FLUSH();
}

void VerifyAllLogsAtOrBelow(LogLevel logLevel, const Aws::String& tag, const Aws::Vector<Aws::String>& loggedStatements)
{
    static const uint32_t STATEMENTS_PER_LEVEL = 3;
    uint32_t expectedLogLevels = static_cast<uint32_t>(logLevel);
    uint32_t expectedStatementCount = expectedLogLevels * STATEMENTS_PER_LEVEL;
    ASSERT_EQ(expectedStatementCount, loggedStatements.size());

    for(uint32_t i = 0; i < expectedLogLevels; ++i)
    {
        LogLevel currentLevel = static_cast<LogLevel>(i + 1);
        Aws::String levelTag = "[" + GetLogLevelName(currentLevel) + "]";

        for(uint32_t j = 0; j < STATEMENTS_PER_LEVEL; ++j)
        {
            uint32_t statementIndex = i * STATEMENTS_PER_LEVEL + j;
            ASSERT_TRUE(loggedStatements[statementIndex].find(levelTag) != Aws::String::npos);
            ASSERT_TRUE(loggedStatements[statementIndex].find(tag) != Aws::String::npos);
        }

        Aws::String logText1 = "test " + StringUtils::ToLower(GetLogLevelName(currentLevel).c_str()) + " level";
        ASSERT_TRUE(loggedStatements[i * STATEMENTS_PER_LEVEL].find(logText1) != Aws::String::npos);

        Aws::String logText2 = "test " + StringUtils::ToLower(GetLogLevelName(currentLevel).c_str()) + " format level";
        ASSERT_TRUE(loggedStatements[i * STATEMENTS_PER_LEVEL + 1].find(logText2) != Aws::String::npos);

        Aws::String logText3 = "test " + StringUtils::ToLower(GetLogLevelName(currentLevel).c_str()) + " stream level";
        ASSERT_TRUE(loggedStatements[i * STATEMENTS_PER_LEVEL + 2].find(logText3) != Aws::String::npos);
    }
}

void DoLogTest(LogLevel logLevel, const char *testTag)
{
    auto ss = Aws::MakeShared<Aws::StringStream>(AllocationTag);

    {
        ScopedLogger loggingScope(Aws::MakeShared<DefaultLogSystem>(AllocationTag, logLevel, ss));

        LogAllPossibilities(testTag);
    }

    Aws::Vector<Aws::String> loggedStatements = StringUtils::SplitOnLine(ss->str());
    VerifyAllLogsAtOrBelow(logLevel, testTag, loggedStatements);
}

TEST(LoggingTest, testFatalLogLevel)
{
    DoLogTest(LogLevel::Fatal, "LoggingTest_testFatalLogLevel");
}

TEST(LoggingTest, testErrorLogLevel)
{
    DoLogTest(LogLevel::Error, "LoggingTest_testErrorLogLevel");
}

TEST(LoggingTest, testWarnLogLevel)
{
    DoLogTest(LogLevel::Warn, "LoggingTest_testWarnLogLevel");
}

TEST(LoggingTest, testInfoLogLevel)
{
    DoLogTest(LogLevel::Info, "LoggingTest_testInfoLogLevel");
}

TEST(LoggingTest, testDebugLogLevel)
{
    DoLogTest(LogLevel::Debug, "LoggingTest_testDebugLogLevel");
}

TEST(LoggingTest, testTraceLogLevel)
{
    DoLogTest(LogLevel::Trace, "LoggingTest_testTraceLogLevel");
}

void CRTLogAllPossibilities()
{
    AWS_LOGF_FATAL(AWS_LS_COMMON_GENERAL, "test fatal level");
    AWS_LOGF_FATAL(AWS_LS_COMMON_GENERAL, "test %s format level", "fatal");
    AWS_LOGF_ERROR(AWS_LS_COMMON_GENERAL, "test error level");
    AWS_LOGF_ERROR(AWS_LS_COMMON_GENERAL, "test %s format level", "error");
    AWS_LOGF_WARN(AWS_LS_COMMON_GENERAL, "test warn level");
    AWS_LOGF_WARN(AWS_LS_COMMON_GENERAL, "test %s format level", "warn");
    AWS_LOGF_INFO(AWS_LS_COMMON_GENERAL, "test info level");
    AWS_LOGF_INFO(AWS_LS_COMMON_GENERAL, "test %s format level", "info");
    AWS_LOGF_DEBUG(AWS_LS_COMMON_GENERAL, "test debug level");
    AWS_LOGF_DEBUG(AWS_LS_COMMON_GENERAL, "test %s format level", "debug");
    AWS_LOGF_TRACE(AWS_LS_COMMON_GENERAL, "test trace level");
    AWS_LOGF_TRACE(AWS_LS_COMMON_GENERAL, "test %s format level", "trace");

    AWS_LOG_FLUSH();
    AWS_LOGSTREAM_FLUSH();
}

void VerifyAllCRTLogsAtOrBelow(LogLevel logLevel, const Aws::Vector<Aws::String>& loggedStatements, const Aws::Vector<Aws::String>& crtLoggedStatements)
{
    static const uint32_t STATEMENTS_PER_LEVEL = 2;
    uint32_t expectedLogLevels = static_cast<uint32_t>(logLevel);
    uint32_t expectedStatementCount = expectedLogLevels * STATEMENTS_PER_LEVEL;
    ASSERT_EQ(expectedStatementCount, loggedStatements.size());
    ASSERT_EQ(expectedStatementCount, crtLoggedStatements.size());

    for(uint32_t i = 0; i < expectedLogLevels; ++i)
    {
        LogLevel currentLevel = static_cast<LogLevel>(i + 1);
        Aws::String levelTag = "[" + GetLogLevelName(currentLevel) + "]";

        for(uint32_t j = 0; j < STATEMENTS_PER_LEVEL; ++j)
        {
            uint32_t statementIndex = i * STATEMENTS_PER_LEVEL + j;
            ASSERT_TRUE(loggedStatements[statementIndex].find(levelTag) != Aws::String::npos);
            ASSERT_TRUE(loggedStatements[statementIndex].find("aws-c-common") != Aws::String::npos);
        }

        Aws::String logText1 = "test " + StringUtils::ToLower(GetLogLevelName(currentLevel).c_str()) + " level";
        ASSERT_TRUE(loggedStatements[i * STATEMENTS_PER_LEVEL].find(logText1) != Aws::String::npos);
        ASSERT_TRUE(crtLoggedStatements[i * STATEMENTS_PER_LEVEL].find(logText1) != Aws::String::npos);

        Aws::String logText2 = "test " + StringUtils::ToLower(GetLogLevelName(currentLevel).c_str()) + " format level";
        ASSERT_TRUE(loggedStatements[i * STATEMENTS_PER_LEVEL + 1].find(logText2) != Aws::String::npos);
        ASSERT_TRUE(crtLoggedStatements[i * STATEMENTS_PER_LEVEL + 1].find(logText2) != Aws::String::npos);
    }
}

void DoCRTLogTest(LogLevel logLevel)
{
    auto logs = Aws::MakeShared<Aws::StringStream>(AllocationTag);
    auto crtLogs = Aws::MakeShared<Aws::StringStream>(AllocationTag);

    {
        ScopedLogger loggingScope(Aws::MakeShared<DefaultLogSystem>(AllocationTag, logLevel, logs));
        ScopedCRTLogger crtLoggingScope(Aws::MakeShared<MockCRTLogSystem>(AllocationTag, logLevel, crtLogs));
        CRTLogAllPossibilities();
    }

    Aws::Vector<Aws::String> loggedStatements = StringUtils::SplitOnLine(logs->str());
    Aws::Vector<Aws::String> crtLoggedStatements = StringUtils::SplitOnLine(crtLogs->str());
    VerifyAllCRTLogsAtOrBelow(logLevel, loggedStatements, crtLoggedStatements);
}

TEST(CRTLoggingTest, testFatalLogLevel)
{
    DoCRTLogTest(LogLevel::Fatal);
}

TEST(CRTLoggingTest, testWarnLogLevel)
{
    DoCRTLogTest(LogLevel::Warn);
}

TEST(CRTLoggingTest, testInfoLogLevel)
{
    DoCRTLogTest(LogLevel::Info);
}

TEST(CRTLoggingTest, testDebugLogLevel)
{
    DoCRTLogTest(LogLevel::Debug);
}

TEST(CRTLoggingTest, testTraceLogLevel)
{
    DoCRTLogTest(LogLevel::Trace);
}
