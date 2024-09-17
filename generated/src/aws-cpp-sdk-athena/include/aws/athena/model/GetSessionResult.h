/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/EngineConfiguration.h>
#include <aws/athena/model/SessionConfiguration.h>
#include <aws/athena/model/SessionStatus.h>
#include <aws/athena/model/SessionStatistics.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Athena
{
namespace Model
{
  class GetSessionResult
  {
  public:
    AWS_ATHENA_API GetSessionResult();
    AWS_ATHENA_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The session ID.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline GetSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline GetSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline GetSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetSessionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetSessionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetSessionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }
    inline void SetWorkGroup(const Aws::String& value) { m_workGroup = value; }
    inline void SetWorkGroup(Aws::String&& value) { m_workGroup = std::move(value); }
    inline void SetWorkGroup(const char* value) { m_workGroup.assign(value); }
    inline GetSessionResult& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}
    inline GetSessionResult& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}
    inline GetSessionResult& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version used by the session (for example, <code>PySpark engine
     * version 3</code>). You can get a list of engine versions by calling
     * <a>ListEngineVersions</a>.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }
    inline GetSessionResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline GetSessionResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline GetSessionResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains engine configuration information like DPU usage.</p>
     */
    inline const EngineConfiguration& GetEngineConfiguration() const{ return m_engineConfiguration; }
    inline void SetEngineConfiguration(const EngineConfiguration& value) { m_engineConfiguration = value; }
    inline void SetEngineConfiguration(EngineConfiguration&& value) { m_engineConfiguration = std::move(value); }
    inline GetSessionResult& WithEngineConfiguration(const EngineConfiguration& value) { SetEngineConfiguration(value); return *this;}
    inline GetSessionResult& WithEngineConfiguration(EngineConfiguration&& value) { SetEngineConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notebook version.</p>
     */
    inline const Aws::String& GetNotebookVersion() const{ return m_notebookVersion; }
    inline void SetNotebookVersion(const Aws::String& value) { m_notebookVersion = value; }
    inline void SetNotebookVersion(Aws::String&& value) { m_notebookVersion = std::move(value); }
    inline void SetNotebookVersion(const char* value) { m_notebookVersion.assign(value); }
    inline GetSessionResult& WithNotebookVersion(const Aws::String& value) { SetNotebookVersion(value); return *this;}
    inline GetSessionResult& WithNotebookVersion(Aws::String&& value) { SetNotebookVersion(std::move(value)); return *this;}
    inline GetSessionResult& WithNotebookVersion(const char* value) { SetNotebookVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the workgroup configuration information used by the session.</p>
     */
    inline const SessionConfiguration& GetSessionConfiguration() const{ return m_sessionConfiguration; }
    inline void SetSessionConfiguration(const SessionConfiguration& value) { m_sessionConfiguration = value; }
    inline void SetSessionConfiguration(SessionConfiguration&& value) { m_sessionConfiguration = std::move(value); }
    inline GetSessionResult& WithSessionConfiguration(const SessionConfiguration& value) { SetSessionConfiguration(value); return *this;}
    inline GetSessionResult& WithSessionConfiguration(SessionConfiguration&& value) { SetSessionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the status of the session.</p>
     */
    inline const SessionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SessionStatus& value) { m_status = value; }
    inline void SetStatus(SessionStatus&& value) { m_status = std::move(value); }
    inline GetSessionResult& WithStatus(const SessionStatus& value) { SetStatus(value); return *this;}
    inline GetSessionResult& WithStatus(SessionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the DPU execution time.</p>
     */
    inline const SessionStatistics& GetStatistics() const{ return m_statistics; }
    inline void SetStatistics(const SessionStatistics& value) { m_statistics = value; }
    inline void SetStatistics(SessionStatistics&& value) { m_statistics = std::move(value); }
    inline GetSessionResult& WithStatistics(const SessionStatistics& value) { SetStatistics(value); return *this;}
    inline GetSessionResult& WithStatistics(SessionStatistics&& value) { SetStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;

    Aws::String m_description;

    Aws::String m_workGroup;

    Aws::String m_engineVersion;

    EngineConfiguration m_engineConfiguration;

    Aws::String m_notebookVersion;

    SessionConfiguration m_sessionConfiguration;

    SessionStatus m_status;

    SessionStatistics m_statistics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
