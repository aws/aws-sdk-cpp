/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/ValidationMethod.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Contains information about a domain validation method migration, including
 * the previous validation method and the target validation method.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DomainValidationMethodUpdateSummary">AWS
 * API Reference</a></p>
 */
class DomainValidationMethodUpdateSummary {
 public:
  AWS_ACM_API DomainValidationMethodUpdateSummary() = default;
  AWS_ACM_API DomainValidationMethodUpdateSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API DomainValidationMethodUpdateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The validation method that the certificate was using before the update.</p>
   */
  inline ValidationMethod GetFrom() const { return m_from; }
  inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
  inline void SetFrom(ValidationMethod value) {
    m_fromHasBeenSet = true;
    m_from = value;
  }
  inline DomainValidationMethodUpdateSummary& WithFrom(ValidationMethod value) {
    SetFrom(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target validation method for the update.</p>
   */
  inline ValidationMethod GetTo() const { return m_to; }
  inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
  inline void SetTo(ValidationMethod value) {
    m_toHasBeenSet = true;
    m_to = value;
  }
  inline DomainValidationMethodUpdateSummary& WithTo(ValidationMethod value) {
    SetTo(value);
    return *this;
  }
  ///@}
 private:
  ValidationMethod m_from{ValidationMethod::NOT_SET};

  ValidationMethod m_to{ValidationMethod::NOT_SET};
  bool m_fromHasBeenSet = false;
  bool m_toHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
