/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GranularAccessControlConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

GranularAccessControlConfiguration::GranularAccessControlConfiguration(JsonView jsonValue) { *this = jsonValue; }

GranularAccessControlConfiguration& GranularAccessControlConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DataTableAccessControlConfiguration")) {
    m_dataTableAccessControlConfiguration = jsonValue.GetObject("DataTableAccessControlConfiguration");
    m_dataTableAccessControlConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue GranularAccessControlConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_dataTableAccessControlConfigurationHasBeenSet) {
    payload.WithObject("DataTableAccessControlConfiguration", m_dataTableAccessControlConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
