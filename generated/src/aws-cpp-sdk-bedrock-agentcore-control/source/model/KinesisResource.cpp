/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/KinesisResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

KinesisResource::KinesisResource(JsonView jsonValue) { *this = jsonValue; }

KinesisResource& KinesisResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dataStreamArn")) {
    m_dataStreamArn = jsonValue.GetString("dataStreamArn");
    m_dataStreamArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contentConfigurations")) {
    Aws::Utils::Array<JsonView> contentConfigurationsJsonList = jsonValue.GetArray("contentConfigurations");
    for (unsigned contentConfigurationsIndex = 0; contentConfigurationsIndex < contentConfigurationsJsonList.GetLength();
         ++contentConfigurationsIndex) {
      m_contentConfigurations.push_back(contentConfigurationsJsonList[contentConfigurationsIndex].AsObject());
    }
    m_contentConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue KinesisResource::Jsonize() const {
  JsonValue payload;

  if (m_dataStreamArnHasBeenSet) {
    payload.WithString("dataStreamArn", m_dataStreamArn);
  }

  if (m_contentConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> contentConfigurationsJsonList(m_contentConfigurations.size());
    for (unsigned contentConfigurationsIndex = 0; contentConfigurationsIndex < contentConfigurationsJsonList.GetLength();
         ++contentConfigurationsIndex) {
      contentConfigurationsJsonList[contentConfigurationsIndex].AsObject(m_contentConfigurations[contentConfigurationsIndex].Jsonize());
    }
    payload.WithArray("contentConfigurations", std::move(contentConfigurationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
