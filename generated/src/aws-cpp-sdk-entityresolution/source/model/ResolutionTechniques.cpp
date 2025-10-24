﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/entityresolution/model/ResolutionTechniques.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EntityResolution {
namespace Model {

ResolutionTechniques::ResolutionTechniques(JsonView jsonValue) { *this = jsonValue; }

ResolutionTechniques& ResolutionTechniques::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resolutionType")) {
    m_resolutionType = ResolutionTypeMapper::GetResolutionTypeForName(jsonValue.GetString("resolutionType"));
    m_resolutionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleBasedProperties")) {
    m_ruleBasedProperties = jsonValue.GetObject("ruleBasedProperties");
    m_ruleBasedPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleConditionProperties")) {
    m_ruleConditionProperties = jsonValue.GetObject("ruleConditionProperties");
    m_ruleConditionPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("providerProperties")) {
    m_providerProperties = jsonValue.GetObject("providerProperties");
    m_providerPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ResolutionTechniques::Jsonize() const {
  JsonValue payload;

  if (m_resolutionTypeHasBeenSet) {
    payload.WithString("resolutionType", ResolutionTypeMapper::GetNameForResolutionType(m_resolutionType));
  }

  if (m_ruleBasedPropertiesHasBeenSet) {
    payload.WithObject("ruleBasedProperties", m_ruleBasedProperties.Jsonize());
  }

  if (m_ruleConditionPropertiesHasBeenSet) {
    payload.WithObject("ruleConditionProperties", m_ruleConditionProperties.Jsonize());
  }

  if (m_providerPropertiesHasBeenSet) {
    payload.WithObject("providerProperties", m_providerProperties.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
