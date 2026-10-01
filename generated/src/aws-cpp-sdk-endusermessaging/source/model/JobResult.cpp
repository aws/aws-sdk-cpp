/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/JobResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

JobResult::JobResult(JsonView jsonValue) { *this = jsonValue; }

JobResult& JobResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceIdentifier")) {
    m_resourceIdentifier = jsonValue.GetString("resourceIdentifier");
    m_resourceIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue JobResult::Jsonize() const {
  JsonValue payload;

  if (m_jobIdHasBeenSet) {
    payload.WithString("jobId", m_jobId);
  }

  if (m_resourceIdentifierHasBeenSet) {
    payload.WithString("resourceIdentifier", m_resourceIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
