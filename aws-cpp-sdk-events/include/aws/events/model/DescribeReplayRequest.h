/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class DescribeReplayRequest : public CloudWatchEventsRequest
  {
  public:
    AWS_CLOUDWATCHEVENTS_API DescribeReplayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReplay"; }

    AWS_CLOUDWATCHEVENTS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the replay to retrieve.</p>
     */
    inline const Aws::String& GetReplayName() const{ return m_replayName; }

    /**
     * <p>The name of the replay to retrieve.</p>
     */
    inline bool ReplayNameHasBeenSet() const { return m_replayNameHasBeenSet; }

    /**
     * <p>The name of the replay to retrieve.</p>
     */
    inline void SetReplayName(const Aws::String& value) { m_replayNameHasBeenSet = true; m_replayName = value; }

    /**
     * <p>The name of the replay to retrieve.</p>
     */
    inline void SetReplayName(Aws::String&& value) { m_replayNameHasBeenSet = true; m_replayName = std::move(value); }

    /**
     * <p>The name of the replay to retrieve.</p>
     */
    inline void SetReplayName(const char* value) { m_replayNameHasBeenSet = true; m_replayName.assign(value); }

    /**
     * <p>The name of the replay to retrieve.</p>
     */
    inline DescribeReplayRequest& WithReplayName(const Aws::String& value) { SetReplayName(value); return *this;}

    /**
     * <p>The name of the replay to retrieve.</p>
     */
    inline DescribeReplayRequest& WithReplayName(Aws::String&& value) { SetReplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the replay to retrieve.</p>
     */
    inline DescribeReplayRequest& WithReplayName(const char* value) { SetReplayName(value); return *this;}

  private:

    Aws::String m_replayName;
    bool m_replayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
