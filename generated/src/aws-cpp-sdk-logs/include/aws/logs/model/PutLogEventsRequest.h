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
    AWS_CLOUDWATCHLOGS_API PutLogEventsRequest();

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
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }
    inline PutLogEventsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}
    inline PutLogEventsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}
    inline PutLogEventsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log stream.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }
    inline PutLogEventsRequest& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}
    inline PutLogEventsRequest& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}
    inline PutLogEventsRequest& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log events.</p>
     */
    inline const Aws::Vector<InputLogEvent>& GetLogEvents() const{ return m_logEvents; }
    inline bool LogEventsHasBeenSet() const { return m_logEventsHasBeenSet; }
    inline void SetLogEvents(const Aws::Vector<InputLogEvent>& value) { m_logEventsHasBeenSet = true; m_logEvents = value; }
    inline void SetLogEvents(Aws::Vector<InputLogEvent>&& value) { m_logEventsHasBeenSet = true; m_logEvents = std::move(value); }
    inline PutLogEventsRequest& WithLogEvents(const Aws::Vector<InputLogEvent>& value) { SetLogEvents(value); return *this;}
    inline PutLogEventsRequest& WithLogEvents(Aws::Vector<InputLogEvent>&& value) { SetLogEvents(std::move(value)); return *this;}
    inline PutLogEventsRequest& AddLogEvents(const InputLogEvent& value) { m_logEventsHasBeenSet = true; m_logEvents.push_back(value); return *this; }
    inline PutLogEventsRequest& AddLogEvents(InputLogEvent&& value) { m_logEventsHasBeenSet = true; m_logEvents.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetSequenceToken() const{ return m_sequenceToken; }
    inline bool SequenceTokenHasBeenSet() const { return m_sequenceTokenHasBeenSet; }
    inline void SetSequenceToken(const Aws::String& value) { m_sequenceTokenHasBeenSet = true; m_sequenceToken = value; }
    inline void SetSequenceToken(Aws::String&& value) { m_sequenceTokenHasBeenSet = true; m_sequenceToken = std::move(value); }
    inline void SetSequenceToken(const char* value) { m_sequenceTokenHasBeenSet = true; m_sequenceToken.assign(value); }
    inline PutLogEventsRequest& WithSequenceToken(const Aws::String& value) { SetSequenceToken(value); return *this;}
    inline PutLogEventsRequest& WithSequenceToken(Aws::String&& value) { SetSequenceToken(std::move(value)); return *this;}
    inline PutLogEventsRequest& WithSequenceToken(const char* value) { SetSequenceToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity associated with the log events.</p>
     */
    inline const Entity& GetEntity() const{ return m_entity; }
    inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
    inline void SetEntity(const Entity& value) { m_entityHasBeenSet = true; m_entity = value; }
    inline void SetEntity(Entity&& value) { m_entityHasBeenSet = true; m_entity = std::move(value); }
    inline PutLogEventsRequest& WithEntity(const Entity& value) { SetEntity(value); return *this;}
    inline PutLogEventsRequest& WithEntity(Entity&& value) { SetEntity(std::move(value)); return *this;}
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
