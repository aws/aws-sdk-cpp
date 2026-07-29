/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/DatasetConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

DatasetConfig::DatasetConfig(JsonView jsonValue) { *this = jsonValue; }

DatasetConfig& DatasetConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("session")) {
    m_session = jsonValue.GetObject("session");
    m_sessionHasBeenSet = true;
  }
  return *this;
}

JsonValue DatasetConfig::Jsonize() const {
  JsonValue payload;

  if (m_sessionHasBeenSet) {
    payload.WithObject("session", m_session.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
