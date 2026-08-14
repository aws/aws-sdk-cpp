/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ValidationChallenge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

ValidationChallenge::ValidationChallenge(JsonView jsonValue) { *this = jsonValue; }

ValidationChallenge& ValidationChallenge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EmailValidationChallenge")) {
    m_emailValidationChallenge = jsonValue.GetObject("EmailValidationChallenge");
    m_emailValidationChallengeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DnsValidationChallenge")) {
    m_dnsValidationChallenge = jsonValue.GetObject("DnsValidationChallenge");
    m_dnsValidationChallengeHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationChallenge::Jsonize() const {
  JsonValue payload;

  if (m_emailValidationChallengeHasBeenSet) {
    payload.WithObject("EmailValidationChallenge", m_emailValidationChallenge.Jsonize());
  }

  if (m_dnsValidationChallengeHasBeenSet) {
    payload.WithObject("DnsValidationChallenge", m_dnsValidationChallenge.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
