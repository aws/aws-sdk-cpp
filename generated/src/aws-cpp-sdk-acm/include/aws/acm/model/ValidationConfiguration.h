/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/DomainStatus.h>
#include <aws/acm/model/ValidationChallenge.h>
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
 * <p>Contains the validation method, validation status, and validation challenge
 * details for a domain. This structure appears in <a>DomainValidationSummary</a>
 * as both the active and requested validation configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ValidationConfiguration">AWS
 * API Reference</a></p>
 */
class ValidationConfiguration {
 public:
  AWS_ACM_API ValidationConfiguration() = default;
  AWS_ACM_API ValidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API ValidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The validation method for this configuration. Valid values:</p> <ul> <li> <p>
   * <code>DNS</code> – Validation using a CNAME record added to your DNS
   * configuration.</p> </li> <li> <p> <code>EMAIL</code> – Validation using an
   * approval email sent to domain contacts.</p> </li> <li> <p> <code>HTTP</code> –
   * Validation using an HTTP resource placed on your web server.</p> </li> </ul>
   */
  inline ValidationMethod GetValidationMethod() const { return m_validationMethod; }
  inline bool ValidationMethodHasBeenSet() const { return m_validationMethodHasBeenSet; }
  inline void SetValidationMethod(ValidationMethod value) {
    m_validationMethodHasBeenSet = true;
    m_validationMethod = value;
  }
  inline ValidationConfiguration& WithValidationMethod(ValidationMethod value) {
    SetValidationMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validation challenge details for this configuration. The structure varies
   * by validation method: for DNS validation, contains a
   * <code>DnsValidationChallenge</code> with the CNAME record to add; for email
   * validation, contains an <code>EmailValidationChallenge</code> with the
   * validation email addresses.</p>
   */
  inline const ValidationChallenge& GetValidationChallenge() const { return m_validationChallenge; }
  inline bool ValidationChallengeHasBeenSet() const { return m_validationChallengeHasBeenSet; }
  template <typename ValidationChallengeT = ValidationChallenge>
  void SetValidationChallenge(ValidationChallengeT&& value) {
    m_validationChallengeHasBeenSet = true;
    m_validationChallenge = std::forward<ValidationChallengeT>(value);
  }
  template <typename ValidationChallengeT = ValidationChallenge>
  ValidationConfiguration& WithValidationChallenge(ValidationChallengeT&& value) {
    SetValidationChallenge(std::forward<ValidationChallengeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validation status for this domain. Valid values:</p> <ul> <li> <p>
   * <code>PENDING_VALIDATION</code> – The domain is waiting for validation to
   * complete.</p> </li> <li> <p> <code>SUCCESS</code> – Validation completed
   * successfully.</p> </li> <li> <p> <code>FAILED</code> – Validation failed.</p>
   * </li> </ul>
   */
  inline DomainStatus GetValidationStatus() const { return m_validationStatus; }
  inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
  inline void SetValidationStatus(DomainStatus value) {
    m_validationStatusHasBeenSet = true;
    m_validationStatus = value;
  }
  inline ValidationConfiguration& WithValidationStatus(DomainStatus value) {
    SetValidationStatus(value);
    return *this;
  }
  ///@}
 private:
  ValidationMethod m_validationMethod{ValidationMethod::NOT_SET};

  ValidationChallenge m_validationChallenge;

  DomainStatus m_validationStatus{DomainStatus::NOT_SET};
  bool m_validationMethodHasBeenSet = false;
  bool m_validationChallengeHasBeenSet = false;
  bool m_validationStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
