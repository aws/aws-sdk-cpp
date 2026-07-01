/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/AcmeAccountSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

AcmeAccountSummary::AcmeAccountSummary(JsonView jsonValue) { *this = jsonValue; }

AcmeAccountSummary& AcmeAccountSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccountUrl")) {
    m_accountUrl = jsonValue.GetString("AccountUrl");
    m_accountUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PublicKeyThumbprint")) {
    m_publicKeyThumbprint = jsonValue.GetString("PublicKeyThumbprint");
    m_publicKeyThumbprintHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = AcmeAccountStatusMapper::GetAcmeAccountStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcmeExternalAccountBindingArn")) {
    m_acmeExternalAccountBindingArn = jsonValue.GetString("AcmeExternalAccountBindingArn");
    m_acmeExternalAccountBindingArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Contacts")) {
    Aws::Utils::Array<JsonView> contactsJsonList = jsonValue.GetArray("Contacts");
    for (unsigned contactsIndex = 0; contactsIndex < contactsJsonList.GetLength(); ++contactsIndex) {
      m_contacts.push_back(contactsJsonList[contactsIndex].AsString());
    }
    m_contactsHasBeenSet = true;
  }
  return *this;
}

JsonValue AcmeAccountSummary::Jsonize() const {
  JsonValue payload;

  if (m_accountUrlHasBeenSet) {
    payload.WithString("AccountUrl", m_accountUrl);
  }

  if (m_publicKeyThumbprintHasBeenSet) {
    payload.WithString("PublicKeyThumbprint", m_publicKeyThumbprint);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", AcmeAccountStatusMapper::GetNameForAcmeAccountStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_acmeExternalAccountBindingArnHasBeenSet) {
    payload.WithString("AcmeExternalAccountBindingArn", m_acmeExternalAccountBindingArn);
  }

  if (m_contactsHasBeenSet) {
    Aws::Utils::Array<JsonValue> contactsJsonList(m_contacts.size());
    for (unsigned contactsIndex = 0; contactsIndex < contactsJsonList.GetLength(); ++contactsIndex) {
      contactsJsonList[contactsIndex].AsString(m_contacts[contactsIndex]);
    }
    payload.WithArray("Contacts", std::move(contactsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
