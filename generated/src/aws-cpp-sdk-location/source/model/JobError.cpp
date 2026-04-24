/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/model/JobError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {

JobError::JobError(JsonView jsonValue) { *this = jsonValue; }

JobError& JobError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Code")) {
    m_code = JobErrorCodeMapper::GetJobErrorCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Messages")) {
    Aws::Utils::Array<JsonView> messagesJsonList = jsonValue.GetArray("Messages");
    for (unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex) {
      m_messages.push_back(messagesJsonList[messagesIndex].AsString());
    }
    m_messagesHasBeenSet = true;
  }
  return *this;
}

JsonValue JobError::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("Code", JobErrorCodeMapper::GetNameForJobErrorCode(m_code));
  }

  if (m_messagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
    for (unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex) {
      messagesJsonList[messagesIndex].AsString(m_messages[messagesIndex]);
    }
    payload.WithArray("Messages", std::move(messagesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
