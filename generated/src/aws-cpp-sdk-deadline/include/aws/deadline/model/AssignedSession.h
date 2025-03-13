/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/LogConfiguration.h>
#include <aws/deadline/model/AssignedSessionAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{

  /**
   * <p>The assigned session for the worker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssignedSession">AWS
   * API Reference</a></p>
   */
  class AssignedSession
  {
  public:
    AWS_DEADLINE_API AssignedSession() = default;
    AWS_DEADLINE_API AssignedSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AssignedSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The queue ID of the assigned session.</p>
     */
    inline const Aws::String& GetQueueId() const { return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    template<typename QueueIdT = Aws::String>
    void SetQueueId(QueueIdT&& value) { m_queueIdHasBeenSet = true; m_queueId = std::forward<QueueIdT>(value); }
    template<typename QueueIdT = Aws::String>
    AssignedSession& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID for the assigned session.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    AssignedSession& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session actions to apply to the assigned session.</p>
     */
    inline const Aws::Vector<AssignedSessionAction>& GetSessionActions() const { return m_sessionActions; }
    inline bool SessionActionsHasBeenSet() const { return m_sessionActionsHasBeenSet; }
    template<typename SessionActionsT = Aws::Vector<AssignedSessionAction>>
    void SetSessionActions(SessionActionsT&& value) { m_sessionActionsHasBeenSet = true; m_sessionActions = std::forward<SessionActionsT>(value); }
    template<typename SessionActionsT = Aws::Vector<AssignedSessionAction>>
    AssignedSession& WithSessionActions(SessionActionsT&& value) { SetSessionActions(std::forward<SessionActionsT>(value)); return *this;}
    template<typename SessionActionsT = AssignedSessionAction>
    AssignedSession& AddSessionActions(SessionActionsT&& value) { m_sessionActionsHasBeenSet = true; m_sessionActions.emplace_back(std::forward<SessionActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The log configuration for the worker's assigned session.</p>
     */
    inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LogConfiguration>
    AssignedSession& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::Vector<AssignedSessionAction> m_sessionActions;
    bool m_sessionActionsHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
