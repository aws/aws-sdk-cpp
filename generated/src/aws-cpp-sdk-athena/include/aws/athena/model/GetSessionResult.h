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
    AWS_ATHENA_API GetSessionResult() = default;
    AWS_ATHENA_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The session ID.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    GetSessionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetSessionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline const Aws::String& GetWorkGroup() const { return m_workGroup; }
    template<typename WorkGroupT = Aws::String>
    void SetWorkGroup(WorkGroupT&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::forward<WorkGroupT>(value); }
    template<typename WorkGroupT = Aws::String>
    GetSessionResult& WithWorkGroup(WorkGroupT&& value) { SetWorkGroup(std::forward<WorkGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version used by the session (for example, <code>PySpark engine
     * version 3</code>). You can get a list of engine versions by calling
     * <a>ListEngineVersions</a>.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    GetSessionResult& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains engine configuration information like DPU usage.</p>
     */
    inline const EngineConfiguration& GetEngineConfiguration() const { return m_engineConfiguration; }
    template<typename EngineConfigurationT = EngineConfiguration>
    void SetEngineConfiguration(EngineConfigurationT&& value) { m_engineConfigurationHasBeenSet = true; m_engineConfiguration = std::forward<EngineConfigurationT>(value); }
    template<typename EngineConfigurationT = EngineConfiguration>
    GetSessionResult& WithEngineConfiguration(EngineConfigurationT&& value) { SetEngineConfiguration(std::forward<EngineConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notebook version.</p>
     */
    inline const Aws::String& GetNotebookVersion() const { return m_notebookVersion; }
    template<typename NotebookVersionT = Aws::String>
    void SetNotebookVersion(NotebookVersionT&& value) { m_notebookVersionHasBeenSet = true; m_notebookVersion = std::forward<NotebookVersionT>(value); }
    template<typename NotebookVersionT = Aws::String>
    GetSessionResult& WithNotebookVersion(NotebookVersionT&& value) { SetNotebookVersion(std::forward<NotebookVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the workgroup configuration information used by the session.</p>
     */
    inline const SessionConfiguration& GetSessionConfiguration() const { return m_sessionConfiguration; }
    template<typename SessionConfigurationT = SessionConfiguration>
    void SetSessionConfiguration(SessionConfigurationT&& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration = std::forward<SessionConfigurationT>(value); }
    template<typename SessionConfigurationT = SessionConfiguration>
    GetSessionResult& WithSessionConfiguration(SessionConfigurationT&& value) { SetSessionConfiguration(std::forward<SessionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the status of the session.</p>
     */
    inline const SessionStatus& GetStatus() const { return m_status; }
    template<typename StatusT = SessionStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = SessionStatus>
    GetSessionResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the DPU execution time.</p>
     */
    inline const SessionStatistics& GetStatistics() const { return m_statistics; }
    template<typename StatisticsT = SessionStatistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = SessionStatistics>
    GetSessionResult& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    EngineConfiguration m_engineConfiguration;
    bool m_engineConfigurationHasBeenSet = false;

    Aws::String m_notebookVersion;
    bool m_notebookVersionHasBeenSet = false;

    SessionConfiguration m_sessionConfiguration;
    bool m_sessionConfigurationHasBeenSet = false;

    SessionStatus m_status;
    bool m_statusHasBeenSet = false;

    SessionStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
