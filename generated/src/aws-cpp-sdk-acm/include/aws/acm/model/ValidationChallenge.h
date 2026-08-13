/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/DnsValidationChallenge.h>
#include <aws/acm/model/EmailValidationChallenge.h>

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
 * <p>Contains the challenge details that you use to prove domain ownership. Only
 * one member is set, depending on the validation method.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ValidationChallenge">AWS
 * API Reference</a></p>
 */
class ValidationChallenge {
 public:
  AWS_ACM_API ValidationChallenge() = default;
  AWS_ACM_API ValidationChallenge(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API ValidationChallenge& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const EmailValidationChallenge& GetEmailValidationChallenge() const { return m_emailValidationChallenge; }
  inline bool EmailValidationChallengeHasBeenSet() const { return m_emailValidationChallengeHasBeenSet; }
  template <typename EmailValidationChallengeT = EmailValidationChallenge>
  void SetEmailValidationChallenge(EmailValidationChallengeT&& value) {
    m_emailValidationChallengeHasBeenSet = true;
    m_emailValidationChallenge = std::forward<EmailValidationChallengeT>(value);
  }
  template <typename EmailValidationChallengeT = EmailValidationChallenge>
  ValidationChallenge& WithEmailValidationChallenge(EmailValidationChallengeT&& value) {
    SetEmailValidationChallenge(std::forward<EmailValidationChallengeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const DnsValidationChallenge& GetDnsValidationChallenge() const { return m_dnsValidationChallenge; }
  inline bool DnsValidationChallengeHasBeenSet() const { return m_dnsValidationChallengeHasBeenSet; }
  template <typename DnsValidationChallengeT = DnsValidationChallenge>
  void SetDnsValidationChallenge(DnsValidationChallengeT&& value) {
    m_dnsValidationChallengeHasBeenSet = true;
    m_dnsValidationChallenge = std::forward<DnsValidationChallengeT>(value);
  }
  template <typename DnsValidationChallengeT = DnsValidationChallenge>
  ValidationChallenge& WithDnsValidationChallenge(DnsValidationChallengeT&& value) {
    SetDnsValidationChallenge(std::forward<DnsValidationChallengeT>(value));
    return *this;
  }
  ///@}
 private:
  EmailValidationChallenge m_emailValidationChallenge;

  DnsValidationChallenge m_dnsValidationChallenge;
  bool m_emailValidationChallengeHasBeenSet = false;
  bool m_dnsValidationChallengeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
