/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IntermediateTableComputeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

IntermediateTableComputeConfiguration::IntermediateTableComputeConfiguration(JsonView jsonValue) { *this = jsonValue; }

IntermediateTableComputeConfiguration& IntermediateTableComputeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("queryComputeConfiguration")) {
    m_queryComputeConfiguration = jsonValue.GetObject("queryComputeConfiguration");
    m_queryComputeConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobComputeConfiguration")) {
    m_jobComputeConfiguration = jsonValue.GetObject("jobComputeConfiguration");
    m_jobComputeConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue IntermediateTableComputeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_queryComputeConfigurationHasBeenSet) {
    payload.WithObject("queryComputeConfiguration", m_queryComputeConfiguration.Jsonize());
  }

  if (m_jobComputeConfigurationHasBeenSet) {
    payload.WithObject("jobComputeConfiguration", m_jobComputeConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
