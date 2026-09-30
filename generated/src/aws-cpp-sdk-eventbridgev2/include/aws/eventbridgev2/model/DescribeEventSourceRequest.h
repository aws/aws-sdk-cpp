/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2Request.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

/**
 */
class DescribeEventSourceRequest : public EventBridgeV2Request {
 public:
  AWS_EVENTBRIDGEV2_API DescribeEventSourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeEventSource"; }

  AWS_EVENTBRIDGEV2_API Aws::String SerializePayload() const override;

  AWS_EVENTBRIDGEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetEventSourceArn() const { return m_eventSourceArn; }
  inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }
  template <typename EventSourceArnT = Aws::String>
  void SetEventSourceArn(EventSourceArnT&& value) {
    m_eventSourceArnHasBeenSet = true;
    m_eventSourceArn = std::forward<EventSourceArnT>(value);
  }
  template <typename EventSourceArnT = Aws::String>
  DescribeEventSourceRequest& WithEventSourceArn(EventSourceArnT&& value) {
    SetEventSourceArn(std::forward<EventSourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventSourceArn;
  bool m_eventSourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
