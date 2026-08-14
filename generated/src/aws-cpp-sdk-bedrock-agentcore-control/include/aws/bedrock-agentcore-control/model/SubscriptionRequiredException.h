/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The request failed because it requires an active Amazon Web Services
 * Marketplace subscription that is not present. Subscribe to the required product
 * in Amazon Web Services Marketplace and try again.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SubscriptionRequiredException">AWS
 * API Reference</a></p>
 */
class SubscriptionRequiredException {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API SubscriptionRequiredException() = default;
  AWS_BEDROCKAGENTCORECONTROL_API SubscriptionRequiredException(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API SubscriptionRequiredException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  SubscriptionRequiredException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>URL to the Marketplace listing for subscription</p>
   */
  inline const Aws::String& GetSubscriptionUrl() const { return m_subscriptionUrl; }
  inline bool SubscriptionUrlHasBeenSet() const { return m_subscriptionUrlHasBeenSet; }
  template <typename SubscriptionUrlT = Aws::String>
  void SetSubscriptionUrl(SubscriptionUrlT&& value) {
    m_subscriptionUrlHasBeenSet = true;
    m_subscriptionUrl = std::forward<SubscriptionUrlT>(value);
  }
  template <typename SubscriptionUrlT = Aws::String>
  SubscriptionRequiredException& WithSubscriptionUrl(SubscriptionUrlT&& value) {
    SetSubscriptionUrl(std::forward<SubscriptionUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The product requiring subscription</p>
   */
  inline const Aws::String& GetProductName() const { return m_productName; }
  inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
  template <typename ProductNameT = Aws::String>
  void SetProductName(ProductNameT&& value) {
    m_productNameHasBeenSet = true;
    m_productName = std::forward<ProductNameT>(value);
  }
  template <typename ProductNameT = Aws::String>
  SubscriptionRequiredException& WithProductName(ProductNameT&& value) {
    SetProductName(std::forward<ProductNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_subscriptionUrl;

  Aws::String m_productName;
  bool m_messageHasBeenSet = false;
  bool m_subscriptionUrlHasBeenSet = false;
  bool m_productNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
