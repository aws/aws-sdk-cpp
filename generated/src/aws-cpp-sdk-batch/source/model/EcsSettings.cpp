/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EcsSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

EcsSettings::EcsSettings(JsonView jsonValue) { *this = jsonValue; }

EcsSettings& EcsSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("containerInsights")) {
    m_containerInsights = ContainerInsightsMapper::GetContainerInsightsForName(jsonValue.GetString("containerInsights"));
    m_containerInsightsHasBeenSet = true;
  }
  return *this;
}

JsonValue EcsSettings::Jsonize() const {
  JsonValue payload;

  if (m_containerInsightsHasBeenSet) {
    payload.WithString("containerInsights", ContainerInsightsMapper::GetNameForContainerInsights(m_containerInsights));
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
