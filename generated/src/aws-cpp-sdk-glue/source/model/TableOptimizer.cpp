﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/TableOptimizer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

TableOptimizer::TableOptimizer(JsonView jsonValue) { *this = jsonValue; }

TableOptimizer& TableOptimizer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = TableOptimizerTypeMapper::GetTableOptimizerTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastRun")) {
    m_lastRun = jsonValue.GetObject("lastRun");
    m_lastRunHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configurationSource")) {
    m_configurationSource = ConfigurationSourceMapper::GetConfigurationSourceForName(jsonValue.GetString("configurationSource"));
    m_configurationSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue TableOptimizer::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", TableOptimizerTypeMapper::GetNameForTableOptimizerType(m_type));
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_lastRunHasBeenSet) {
    payload.WithObject("lastRun", m_lastRun.Jsonize());
  }

  if (m_configurationSourceHasBeenSet) {
    payload.WithString("configurationSource", ConfigurationSourceMapper::GetNameForConfigurationSource(m_configurationSource));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
