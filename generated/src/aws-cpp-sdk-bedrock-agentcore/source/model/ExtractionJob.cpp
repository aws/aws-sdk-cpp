/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ExtractionJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ExtractionJob::ExtractionJob(JsonView jsonValue) { *this = jsonValue; }

ExtractionJob& ExtractionJob::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractionJob::Jsonize() const {
  JsonValue payload;

  if (m_jobIdHasBeenSet) {
    payload.WithString("jobId", m_jobId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
