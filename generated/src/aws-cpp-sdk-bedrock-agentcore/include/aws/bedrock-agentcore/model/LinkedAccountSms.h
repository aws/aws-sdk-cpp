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
 * <p>Linked account using a phone number in E.164 format.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/LinkedAccountSms">AWS
 * API Reference</a></p>
 */
class LinkedAccountSms {
 public:
  AWS_BEDROCKAGENTCORE_API LinkedAccountSms() = default;
  AWS_BEDROCKAGENTCORE_API LinkedAccountSms(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API LinkedAccountSms& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The phone number in E.164 format (e.g., +1234567890).</p>
   */
  inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
  inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
  template <typename PhoneNumberT = Aws::String>
  void SetPhoneNumber(PhoneNumberT&& value) {
    m_phoneNumberHasBeenSet = true;
    m_phoneNumber = std::forward<PhoneNumberT>(value);
  }
  template <typename PhoneNumberT = Aws::String>
  LinkedAccountSms& WithPhoneNumber(PhoneNumberT&& value) {
    SetPhoneNumber(std::forward<PhoneNumberT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_phoneNumber;
  bool m_phoneNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
