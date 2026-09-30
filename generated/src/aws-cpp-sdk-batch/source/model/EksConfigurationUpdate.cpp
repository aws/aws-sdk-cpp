/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksConfigurationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

EksConfigurationUpdate::EksConfigurationUpdate(JsonView jsonValue) { *this = jsonValue; }

EksConfigurationUpdate& EksConfigurationUpdate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accessEntry")) {
    m_accessEntry = jsonValue.GetObject("accessEntry");
    m_accessEntryHasBeenSet = true;
  }
  return *this;
}

JsonValue EksConfigurationUpdate::Jsonize() const {
  JsonValue payload;

  if (m_accessEntryHasBeenSet) {
    payload.WithObject("accessEntry", m_accessEntry.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
