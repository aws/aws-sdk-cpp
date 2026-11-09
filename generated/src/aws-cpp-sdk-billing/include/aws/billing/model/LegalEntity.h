/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Billing {
namespace Model {

/**
 * <p>A legal entity on a private pricing contract. It can be found on your
 * contract's signature page.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/LegalEntity">AWS
 * API Reference</a></p>
 */
class LegalEntity {
 public:
  AWS_BILLING_API LegalEntity() = default;
  AWS_BILLING_API LegalEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API LegalEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the legal entity as it appears on the contract document. This
   * value can be up to 256 characters.</p>
   */
  inline const Aws::String& GetLegalEntityName() const { return m_legalEntityName; }
  inline bool LegalEntityNameHasBeenSet() const { return m_legalEntityNameHasBeenSet; }
  template <typename LegalEntityNameT = Aws::String>
  void SetLegalEntityName(LegalEntityNameT&& value) {
    m_legalEntityNameHasBeenSet = true;
    m_legalEntityName = std::forward<LegalEntityNameT>(value);
  }
  template <typename LegalEntityNameT = Aws::String>
  LegalEntity& WithLegalEntityName(LegalEntityNameT&& value) {
    SetLegalEntityName(std::forward<LegalEntityNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_legalEntityName;
  bool m_legalEntityNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
