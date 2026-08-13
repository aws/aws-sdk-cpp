/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Contains the email addresses used for email-based domain
 * validation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/EmailValidationChallenge">AWS
 * API Reference</a></p>
 */
class EmailValidationChallenge {
 public:
  AWS_ACM_API EmailValidationChallenge() = default;
  AWS_ACM_API EmailValidationChallenge(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API EmailValidationChallenge& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of email addresses that ACM uses to send domain validation emails.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValidationEmails() const { return m_validationEmails; }
  inline bool ValidationEmailsHasBeenSet() const { return m_validationEmailsHasBeenSet; }
  template <typename ValidationEmailsT = Aws::Vector<Aws::String>>
  void SetValidationEmails(ValidationEmailsT&& value) {
    m_validationEmailsHasBeenSet = true;
    m_validationEmails = std::forward<ValidationEmailsT>(value);
  }
  template <typename ValidationEmailsT = Aws::Vector<Aws::String>>
  EmailValidationChallenge& WithValidationEmails(ValidationEmailsT&& value) {
    SetValidationEmails(std::forward<ValidationEmailsT>(value));
    return *this;
  }
  template <typename ValidationEmailsT = Aws::String>
  EmailValidationChallenge& AddValidationEmails(ValidationEmailsT&& value) {
    m_validationEmailsHasBeenSet = true;
    m_validationEmails.emplace_back(std::forward<ValidationEmailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain name that ACM uses to send validation emails.</p>
   */
  inline const Aws::String& GetValidationDomain() const { return m_validationDomain; }
  inline bool ValidationDomainHasBeenSet() const { return m_validationDomainHasBeenSet; }
  template <typename ValidationDomainT = Aws::String>
  void SetValidationDomain(ValidationDomainT&& value) {
    m_validationDomainHasBeenSet = true;
    m_validationDomain = std::forward<ValidationDomainT>(value);
  }
  template <typename ValidationDomainT = Aws::String>
  EmailValidationChallenge& WithValidationDomain(ValidationDomainT&& value) {
    SetValidationDomain(std::forward<ValidationDomainT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_validationEmails;

  Aws::String m_validationDomain;
  bool m_validationEmailsHasBeenSet = false;
  bool m_validationDomainHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
