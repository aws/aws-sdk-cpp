/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/model/SubmissionRequirementException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AbuseSignal {
namespace Model {

SubmissionRequirementException::SubmissionRequirementException(JsonView jsonValue) { *this = jsonValue; }

SubmissionRequirementException& SubmissionRequirementException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("unmetRequirements")) {
    Aws::Utils::Array<JsonView> unmetRequirementsJsonList = jsonValue.GetArray("unmetRequirements");
    for (unsigned unmetRequirementsIndex = 0; unmetRequirementsIndex < unmetRequirementsJsonList.GetLength(); ++unmetRequirementsIndex) {
      m_unmetRequirements.push_back(unmetRequirementsJsonList[unmetRequirementsIndex].AsObject());
    }
    m_unmetRequirementsHasBeenSet = true;
  }
  return *this;
}

JsonValue SubmissionRequirementException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_unmetRequirementsHasBeenSet) {
    Aws::Utils::Array<JsonValue> unmetRequirementsJsonList(m_unmetRequirements.size());
    for (unsigned unmetRequirementsIndex = 0; unmetRequirementsIndex < unmetRequirementsJsonList.GetLength(); ++unmetRequirementsIndex) {
      unmetRequirementsJsonList[unmetRequirementsIndex].AsObject(m_unmetRequirements[unmetRequirementsIndex].Jsonize());
    }
    payload.WithArray("unmetRequirements", std::move(unmetRequirementsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
