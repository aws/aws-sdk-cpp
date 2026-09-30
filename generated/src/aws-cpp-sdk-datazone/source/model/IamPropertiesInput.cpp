/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/IamPropertiesInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

IamPropertiesInput::IamPropertiesInput(JsonView jsonValue) { *this = jsonValue; }

IamPropertiesInput& IamPropertiesInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("glueLineageSyncEnabled")) {
    m_glueLineageSyncEnabled = jsonValue.GetBool("glueLineageSyncEnabled");
    m_glueLineageSyncEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IamPropertiesInput::Jsonize() const {
  JsonValue payload;

  if (m_glueLineageSyncEnabledHasBeenSet) {
    payload.WithBool("glueLineageSyncEnabled", m_glueLineageSyncEnabled);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
