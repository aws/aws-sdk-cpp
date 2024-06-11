﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/LogConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_DEADLINE_API AssignedSession();
    AWS_DEADLINE_API AssignedSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AssignedSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job ID for the assigned session.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline AssignedSession& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline AssignedSession& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline AssignedSession& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log configuration for the worker's assigned session.</p>
     */
    inline const LogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    inline void SetLogConfiguration(const LogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }
    inline void SetLogConfiguration(LogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }
    inline AssignedSession& WithLogConfiguration(const LogConfiguration& value) { SetLogConfiguration(value); return *this;}
    inline AssignedSession& WithLogConfiguration(LogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID of the assigned session.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline AssignedSession& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline AssignedSession& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline AssignedSession& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session actions to apply to the assigned session.</p>
     */
    inline const Aws::Vector<AssignedSessionAction>& GetSessionActions() const{ return m_sessionActions; }
    inline bool SessionActionsHasBeenSet() const { return m_sessionActionsHasBeenSet; }
    inline void SetSessionActions(const Aws::Vector<AssignedSessionAction>& value) { m_sessionActionsHasBeenSet = true; m_sessionActions = value; }
    inline void SetSessionActions(Aws::Vector<AssignedSessionAction>&& value) { m_sessionActionsHasBeenSet = true; m_sessionActions = std::move(value); }
    inline AssignedSession& WithSessionActions(const Aws::Vector<AssignedSessionAction>& value) { SetSessionActions(value); return *this;}
    inline AssignedSession& WithSessionActions(Aws::Vector<AssignedSessionAction>&& value) { SetSessionActions(std::move(value)); return *this;}
    inline AssignedSession& AddSessionActions(const AssignedSessionAction& value) { m_sessionActionsHasBeenSet = true; m_sessionActions.push_back(value); return *this; }
    inline AssignedSession& AddSessionActions(AssignedSessionAction&& value) { m_sessionActionsHasBeenSet = true; m_sessionActions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::Vector<AssignedSessionAction> m_sessionActions;
    bool m_sessionActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
