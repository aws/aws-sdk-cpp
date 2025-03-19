/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/Entity.h>
#include <aws/logs/model/InputLogEvent.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class PutLogEventsRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutLogEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLogEvents"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    PutLogEventsRequest& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log stream.</p>
     */
    inline const Aws::String& GetLogStreamName() const { return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    template<typename LogStreamNameT = Aws::String>
    void SetLogStreamName(LogStreamNameT&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::forward<LogStreamNameT>(value); }
    template<typename LogStreamNameT = Aws::String>
    PutLogEventsRequest& WithLogStreamName(LogStreamNameT&& value) { SetLogStreamName(std::forward<LogStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log events.</p>
     */
    inline const Aws::Vector<InputLogEvent>& GetLogEvents() const { return m_logEvents; }
    inline bool LogEventsHasBeenSet() const { return m_logEventsHasBeenSet; }
    template<typename LogEventsT = Aws::Vector<InputLogEvent>>
    void SetLogEvents(LogEventsT&& value) { m_logEventsHasBeenSet = true; m_logEvents = std::forward<LogEventsT>(value); }
    template<typename LogEventsT = Aws::Vector<InputLogEvent>>
    PutLogEventsRequest& WithLogEvents(LogEventsT&& value) { SetLogEvents(std::forward<LogEventsT>(value)); return *this;}
    template<typename LogEventsT = InputLogEvent>
    PutLogEventsRequest& AddLogEvents(LogEventsT&& value) { m_logEventsHasBeenSet = true; m_logEvents.emplace_back(std::forward<LogEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The sequence token obtained from the response of the previous
     * <code>PutLogEvents</code> call.</p>  <p>The
     * <code>sequenceToken</code> parameter is now ignored in <code>PutLogEvents</code>
     * actions. <code>PutLogEvents</code> actions are now accepted and never return
     * <code>InvalidSequenceTokenException</code> or
     * <code>DataAlreadyAcceptedException</code> even if the sequence token is not
     * valid.</p> 
     */
    inline const Aws::String& GetSequenceToken() const { return m_sequenceToken; }
    inline bool SequenceTokenHasBeenSet() const { return m_sequenceTokenHasBeenSet; }
    template<typename SequenceTokenT = Aws::String>
    void SetSequenceToken(SequenceTokenT&& value) { m_sequenceTokenHasBeenSet = true; m_sequenceToken = std::forward<SequenceTokenT>(value); }
    template<typename SequenceTokenT = Aws::String>
    PutLogEventsRequest& WithSequenceToken(SequenceTokenT&& value) { SetSequenceToken(std::forward<SequenceTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity associated with the log events.</p>
     */
    inline const Entity& GetEntity() const { return m_entity; }
    inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
    template<typename EntityT = Entity>
    void SetEntity(EntityT&& value) { m_entityHasBeenSet = true; m_entity = std::forward<EntityT>(value); }
    template<typename EntityT = Entity>
    PutLogEventsRequest& WithEntity(EntityT&& value) { SetEntity(std::forward<EntityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    Aws::Vector<InputLogEvent> m_logEvents;
    bool m_logEventsHasBeenSet = false;

    Aws::String m_sequenceToken;
    bool m_sequenceTokenHasBeenSet = false;

    Entity m_entity;
    bool m_entityHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
