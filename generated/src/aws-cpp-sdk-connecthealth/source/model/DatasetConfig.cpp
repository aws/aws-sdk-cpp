/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/DatasetConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

DatasetConfig::DatasetConfig(JsonView jsonValue) { *this = jsonValue; }

DatasetConfig& DatasetConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("medicalCoding")) {
    m_medicalCoding = jsonValue.GetObject("medicalCoding");
    m_medicalCodingHasBeenSet = true;
  }
  return *this;
}

JsonValue DatasetConfig::Jsonize() const {
  JsonValue payload;

  if (m_medicalCodingHasBeenSet) {
    payload.WithObject("medicalCoding", m_medicalCoding.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
