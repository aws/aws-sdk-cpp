/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/TaskConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

TaskConfiguration::TaskConfiguration(JsonView jsonValue) { *this = jsonValue; }

TaskConfiguration& TaskConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("containerTaskConfiguration")) {
    m_containerTaskConfiguration = jsonValue.GetObject("containerTaskConfiguration");
    m_containerTaskConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue TaskConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_containerTaskConfigurationHasBeenSet) {
    payload.WithObject("containerTaskConfiguration", m_containerTaskConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
