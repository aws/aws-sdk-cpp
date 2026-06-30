/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmeAccountStatus.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>Contains summary information about an ACME account.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/AcmeAccountSummary">AWS
 * API Reference</a></p>
 */
class AcmeAccountSummary {
 public:
  AWS_ACM_API AcmeAccountSummary() = default;
  AWS_ACM_API AcmeAccountSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API AcmeAccountSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL of the ACME account.</p>
   */
  inline const Aws::String& GetAccountUrl() const { return m_accountUrl; }
  inline bool AccountUrlHasBeenSet() const { return m_accountUrlHasBeenSet; }
  template <typename AccountUrlT = Aws::String>
  void SetAccountUrl(AccountUrlT&& value) {
    m_accountUrlHasBeenSet = true;
    m_accountUrl = std::forward<AccountUrlT>(value);
  }
  template <typename AccountUrlT = Aws::String>
  AcmeAccountSummary& WithAccountUrl(AccountUrlT&& value) {
    SetAccountUrl(std::forward<AccountUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The thumbprint of the public key associated with the ACME account.</p>
   */
  inline const Aws::String& GetPublicKeyThumbprint() const { return m_publicKeyThumbprint; }
  inline bool PublicKeyThumbprintHasBeenSet() const { return m_publicKeyThumbprintHasBeenSet; }
  template <typename PublicKeyThumbprintT = Aws::String>
  void SetPublicKeyThumbprint(PublicKeyThumbprintT&& value) {
    m_publicKeyThumbprintHasBeenSet = true;
    m_publicKeyThumbprint = std::forward<PublicKeyThumbprintT>(value);
  }
  template <typename PublicKeyThumbprintT = Aws::String>
  AcmeAccountSummary& WithPublicKeyThumbprint(PublicKeyThumbprintT&& value) {
    SetPublicKeyThumbprint(std::forward<PublicKeyThumbprintT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the ACME account.</p>
   */
  inline AcmeAccountStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AcmeAccountStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AcmeAccountSummary& WithStatus(AcmeAccountStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the ACME account was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AcmeAccountSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the external account binding associated
   * with this ACME account.</p>
   */
  inline const Aws::String& GetAcmeExternalAccountBindingArn() const { return m_acmeExternalAccountBindingArn; }
  inline bool AcmeExternalAccountBindingArnHasBeenSet() const { return m_acmeExternalAccountBindingArnHasBeenSet; }
  template <typename AcmeExternalAccountBindingArnT = Aws::String>
  void SetAcmeExternalAccountBindingArn(AcmeExternalAccountBindingArnT&& value) {
    m_acmeExternalAccountBindingArnHasBeenSet = true;
    m_acmeExternalAccountBindingArn = std::forward<AcmeExternalAccountBindingArnT>(value);
  }
  template <typename AcmeExternalAccountBindingArnT = Aws::String>
  AcmeAccountSummary& WithAcmeExternalAccountBindingArn(AcmeExternalAccountBindingArnT&& value) {
    SetAcmeExternalAccountBindingArn(std::forward<AcmeExternalAccountBindingArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contact information for the ACME account.</p>
   */
  inline const Aws::Vector<Aws::String>& GetContacts() const { return m_contacts; }
  inline bool ContactsHasBeenSet() const { return m_contactsHasBeenSet; }
  template <typename ContactsT = Aws::Vector<Aws::String>>
  void SetContacts(ContactsT&& value) {
    m_contactsHasBeenSet = true;
    m_contacts = std::forward<ContactsT>(value);
  }
  template <typename ContactsT = Aws::Vector<Aws::String>>
  AcmeAccountSummary& WithContacts(ContactsT&& value) {
    SetContacts(std::forward<ContactsT>(value));
    return *this;
  }
  template <typename ContactsT = Aws::String>
  AcmeAccountSummary& AddContacts(ContactsT&& value) {
    m_contactsHasBeenSet = true;
    m_contacts.emplace_back(std::forward<ContactsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountUrl;

  Aws::String m_publicKeyThumbprint;

  AcmeAccountStatus m_status{AcmeAccountStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_acmeExternalAccountBindingArn;

  Aws::Vector<Aws::String> m_contacts;
  bool m_accountUrlHasBeenSet = false;
  bool m_publicKeyThumbprintHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_acmeExternalAccountBindingArnHasBeenSet = false;
  bool m_contactsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
