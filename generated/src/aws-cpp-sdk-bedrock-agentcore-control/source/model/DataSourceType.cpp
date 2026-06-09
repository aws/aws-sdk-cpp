/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DataSourceType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

DataSourceType::DataSourceType(JsonView jsonValue) { *this = jsonValue; }

DataSourceType& DataSourceType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inlineExamples")) {
    m_inlineExamples = jsonValue.GetObject("inlineExamples");
    m_inlineExamplesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Source")) {
    m_s3Source = jsonValue.GetObject("s3Source");
    m_s3SourceHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSourceType::Jsonize() const {
  JsonValue payload;

  if (m_inlineExamplesHasBeenSet) {
    payload.WithObject("inlineExamples", m_inlineExamples.Jsonize());
  }

  if (m_s3SourceHasBeenSet) {
    payload.WithObject("s3Source", m_s3Source.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
