/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleNumberEmailAttribute.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace MailManager {
namespace Model {

/**
 * <p>The number to evaluate in a numeric condition expression.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleNumberToEvaluate">AWS
 * API Reference</a></p>
 */
class RuleNumberToEvaluate {
 public:
  AWS_MAILMANAGER_API RuleNumberToEvaluate() = default;
  AWS_MAILMANAGER_API RuleNumberToEvaluate(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MAILMANAGER_API RuleNumberToEvaluate& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MAILMANAGER_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>An email attribute that is used as the number to evaluate.</p>
   */
  inline RuleNumberEmailAttribute GetAttribute() const { return m_attribute; }
  inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
  inline void SetAttribute(RuleNumberEmailAttribute value) {
    m_attributeHasBeenSet = true;
    m_attribute = value;
  }
  inline RuleNumberToEvaluate& WithAttribute(RuleNumberEmailAttribute value) {
    SetAttribute(value);
    return *this;
  }
  ///@}
 private:
  RuleNumberEmailAttribute m_attribute{RuleNumberEmailAttribute::NOT_SET};
  bool m_attributeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
