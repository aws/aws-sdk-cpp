/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class AWS_EVENTBRIDGE_API CancelReplayRequest : public EventBridgeRequest
  {
  public:
    CancelReplayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelReplay"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the replay to cancel.</p>
     */
    inline const Aws::String& GetReplayName() const{ return m_replayName; }

    /**
     * <p>The name of the replay to cancel.</p>
     */
    inline bool ReplayNameHasBeenSet() const { return m_replayNameHasBeenSet; }

    /**
     * <p>The name of the replay to cancel.</p>
     */
    inline void SetReplayName(const Aws::String& value) { m_replayNameHasBeenSet = true; m_replayName = value; }

    /**
     * <p>The name of the replay to cancel.</p>
     */
    inline void SetReplayName(Aws::String&& value) { m_replayNameHasBeenSet = true; m_replayName = std::move(value); }

    /**
     * <p>The name of the replay to cancel.</p>
     */
    inline void SetReplayName(const char* value) { m_replayNameHasBeenSet = true; m_replayName.assign(value); }

    /**
     * <p>The name of the replay to cancel.</p>
     */
    inline CancelReplayRequest& WithReplayName(const Aws::String& value) { SetReplayName(value); return *this;}

    /**
     * <p>The name of the replay to cancel.</p>
     */
    inline CancelReplayRequest& WithReplayName(Aws::String&& value) { SetReplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the replay to cancel.</p>
     */
    inline CancelReplayRequest& WithReplayName(const char* value) { SetReplayName(value); return *this;}

  private:

    Aws::String m_replayName;
    bool m_replayNameHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
