/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DataTableAccessControlConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

DataTableAccessControlConfiguration::DataTableAccessControlConfiguration(JsonView jsonValue) { *this = jsonValue; }

DataTableAccessControlConfiguration& DataTableAccessControlConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrimaryAttributeAccessControlConfiguration")) {
    m_primaryAttributeAccessControlConfiguration = jsonValue.GetObject("PrimaryAttributeAccessControlConfiguration");
    m_primaryAttributeAccessControlConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DataTableAccessControlConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_primaryAttributeAccessControlConfigurationHasBeenSet) {
    payload.WithObject("PrimaryAttributeAccessControlConfiguration", m_primaryAttributeAccessControlConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
