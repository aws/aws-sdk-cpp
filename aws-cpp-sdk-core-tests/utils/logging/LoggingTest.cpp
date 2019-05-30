/*
  * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */



#include <aws/external/gtest.h>

#include <aws/core/utils/logging/DefaultLogSystem.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/StringUtils.h>

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
