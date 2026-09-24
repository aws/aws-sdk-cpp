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
class DescribeSubscriberRequest : public EventBridgeV2Request {
 public:
  AWS_EVENTBRIDGEV2_API DescribeSubscriberRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeSubscriber"; }

  AWS_EVENTBRIDGEV2_API Aws::String SerializePayload() const override;

  AWS_EVENTBRIDGEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetSubscriberArn() const { return m_subscriberArn; }
  inline bool SubscriberArnHasBeenSet() const { return m_subscriberArnHasBeenSet; }
  template <typename SubscriberArnT = Aws::String>
  void SetSubscriberArn(SubscriberArnT&& value) {
    m_subscriberArnHasBeenSet = true;
    m_subscriberArn = std::forward<SubscriberArnT>(value);
  }
  template <typename SubscriberArnT = Aws::String>
  DescribeSubscriberRequest& WithSubscriberArn(SubscriberArnT&& value) {
    SetSubscriberArn(std::forward<SubscriberArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subscriberArn;
  bool m_subscriberArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
