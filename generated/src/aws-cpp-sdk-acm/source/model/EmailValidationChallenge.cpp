/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/EmailValidationChallenge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

EmailValidationChallenge::EmailValidationChallenge(JsonView jsonValue) { *this = jsonValue; }

EmailValidationChallenge& EmailValidationChallenge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ValidationEmails")) {
    Aws::Utils::Array<JsonView> validationEmailsJsonList = jsonValue.GetArray("ValidationEmails");
    for (unsigned validationEmailsIndex = 0; validationEmailsIndex < validationEmailsJsonList.GetLength(); ++validationEmailsIndex) {
      m_validationEmails.push_back(validationEmailsJsonList[validationEmailsIndex].AsString());
    }
    m_validationEmailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValidationDomain")) {
    m_validationDomain = jsonValue.GetString("ValidationDomain");
    m_validationDomainHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailValidationChallenge::Jsonize() const {
  JsonValue payload;

  if (m_validationEmailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> validationEmailsJsonList(m_validationEmails.size());
    for (unsigned validationEmailsIndex = 0; validationEmailsIndex < validationEmailsJsonList.GetLength(); ++validationEmailsIndex) {
      validationEmailsJsonList[validationEmailsIndex].AsString(m_validationEmails[validationEmailsIndex]);
    }
    payload.WithArray("ValidationEmails", std::move(validationEmailsJsonList));
  }

  if (m_validationDomainHasBeenSet) {
    payload.WithString("ValidationDomain", m_validationDomain);
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
