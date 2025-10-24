/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/PipelineLoggingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

PipelineLoggingConfiguration::PipelineLoggingConfiguration(JsonView jsonValue) { *this = jsonValue; }

PipelineLoggingConfiguration& PipelineLoggingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("imageLogGroupName")) {
    m_imageLogGroupName = jsonValue.GetString("imageLogGroupName");
    m_imageLogGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pipelineLogGroupName")) {
    m_pipelineLogGroupName = jsonValue.GetString("pipelineLogGroupName");
    m_pipelineLogGroupNameHasBeenSet = true;
  }
  return *this;
}

JsonValue PipelineLoggingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_imageLogGroupNameHasBeenSet) {
    payload.WithString("imageLogGroupName", m_imageLogGroupName);
  }

  if (m_pipelineLogGroupNameHasBeenSet) {
    payload.WithString("pipelineLogGroupName", m_pipelineLogGroupName);
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
