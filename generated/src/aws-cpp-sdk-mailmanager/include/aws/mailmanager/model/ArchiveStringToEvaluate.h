/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ArchiveStringEmailAttribute.h>

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
 * <p>Specifies the email attribute to evaluate in a string
 * expression.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ArchiveStringToEvaluate">AWS
 * API Reference</a></p>
 */
class ArchiveStringToEvaluate {
 public:
  AWS_MAILMANAGER_API ArchiveStringToEvaluate() = default;
  AWS_MAILMANAGER_API ArchiveStringToEvaluate(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MAILMANAGER_API ArchiveStringToEvaluate& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MAILMANAGER_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of the email attribute to evaluate.</p>
   */
  inline ArchiveStringEmailAttribute GetAttribute() const { return m_attribute; }
  inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
  inline void SetAttribute(ArchiveStringEmailAttribute value) {
    m_attributeHasBeenSet = true;
    m_attribute = value;
  }
  inline ArchiveStringToEvaluate& WithAttribute(ArchiveStringEmailAttribute value) {
    SetAttribute(value);
    return *this;
  }
  ///@}
 private:
  ArchiveStringEmailAttribute m_attribute{ArchiveStringEmailAttribute::NOT_SET};
  bool m_attributeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
