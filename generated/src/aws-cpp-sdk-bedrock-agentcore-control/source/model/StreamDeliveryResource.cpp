/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/StreamDeliveryResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

StreamDeliveryResource::StreamDeliveryResource(JsonView jsonValue) { *this = jsonValue; }

StreamDeliveryResource& StreamDeliveryResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kinesis")) {
    m_kinesis = jsonValue.GetObject("kinesis");
    m_kinesisHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamDeliveryResource::Jsonize() const {
  JsonValue payload;

  if (m_kinesisHasBeenSet) {
    payload.WithObject("kinesis", m_kinesis.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
