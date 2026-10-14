/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/ParentInstanceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

ParentInstanceConfiguration::ParentInstanceConfiguration(JsonView jsonValue) { *this = jsonValue; }

ParentInstanceConfiguration& ParentInstanceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("autoScalingGroup")) {
    m_autoScalingGroup = jsonValue.GetObject("autoScalingGroup");
    m_autoScalingGroupHasBeenSet = true;
  }
  return *this;
}

JsonValue ParentInstanceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_autoScalingGroupHasBeenSet) {
    payload.WithObject("autoScalingGroup", m_autoScalingGroup.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
