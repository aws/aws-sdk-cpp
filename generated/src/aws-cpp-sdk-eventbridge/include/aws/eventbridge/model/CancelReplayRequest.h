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
  class CancelReplayRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API CancelReplayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelReplay"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the replay to cancel.</p>
     */
    inline const Aws::String& GetReplayName() const { return m_replayName; }
    inline bool ReplayNameHasBeenSet() const { return m_replayNameHasBeenSet; }
    template<typename ReplayNameT = Aws::String>
    void SetReplayName(ReplayNameT&& value) { m_replayNameHasBeenSet = true; m_replayName = std::forward<ReplayNameT>(value); }
    template<typename ReplayNameT = Aws::String>
    CancelReplayRequest& WithReplayName(ReplayNameT&& value) { SetReplayName(std::forward<ReplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replayName;
    bool m_replayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
