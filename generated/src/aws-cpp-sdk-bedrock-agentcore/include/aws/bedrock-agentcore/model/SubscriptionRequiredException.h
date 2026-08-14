/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Returned when you attempt a wallet operation against a Coinbase Marketplace
 * connector whose account does not hold an active Marketplace subscription and is
 * not within the legacy exception period. Subscribe to the Marketplace listing
 * before you retry the operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/SubscriptionRequiredException">AWS
 * API Reference</a></p>
 */
class SubscriptionRequiredException {
 public:
  AWS_BEDROCKAGENTCORE_API SubscriptionRequiredException() = default;
  AWS_BEDROCKAGENTCORE_API SubscriptionRequiredException(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API SubscriptionRequiredException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

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
   * <p>The URL to the Marketplace listing where you can subscribe.</p>
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
   * <p>The name of the product that requires a Marketplace subscription.</p>
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
}  // namespace BedrockAgentCore
}  // namespace Aws
