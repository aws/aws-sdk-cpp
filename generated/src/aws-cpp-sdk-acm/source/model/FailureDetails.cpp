/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/FailureDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

FailureDetails::FailureDetails(JsonView jsonValue) { *this = jsonValue; }

FailureDetails& FailureDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Reason")) {
    m_reason = AcmeDomainValidationFailureReasonMapper::GetAcmeDomainValidationFailureReasonForName(jsonValue.GetString("Reason"));
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue FailureDetails::Jsonize() const {
  JsonValue payload;

  if (m_reasonHasBeenSet) {
    payload.WithString("Reason", AcmeDomainValidationFailureReasonMapper::GetNameForAcmeDomainValidationFailureReason(m_reason));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
