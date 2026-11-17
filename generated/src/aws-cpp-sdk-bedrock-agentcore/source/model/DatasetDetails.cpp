/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/DatasetDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

DatasetDetails::DatasetDetails(JsonView jsonValue) { *this = jsonValue; }

DatasetDetails& DatasetDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("datasetId")) {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetVersion")) {
    m_datasetVersion = jsonValue.GetString("datasetVersion");
    m_datasetVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue DatasetDetails::Jsonize() const {
  JsonValue payload;

  if (m_datasetIdHasBeenSet) {
    payload.WithString("datasetId", m_datasetId);
  }

  if (m_datasetVersionHasBeenSet) {
    payload.WithString("datasetVersion", m_datasetVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
