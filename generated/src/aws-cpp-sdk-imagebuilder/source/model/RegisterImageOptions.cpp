/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/RegisterImageOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

RegisterImageOptions::RegisterImageOptions(JsonView jsonValue) { *this = jsonValue; }

RegisterImageOptions& RegisterImageOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("secureBootEnabled")) {
    m_secureBootEnabled = jsonValue.GetBool("secureBootEnabled");
    m_secureBootEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("uefiData")) {
    m_uefiData = jsonValue.GetString("uefiData");
    m_uefiDataHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisterImageOptions::Jsonize() const {
  JsonValue payload;

  if (m_secureBootEnabledHasBeenSet) {
    payload.WithBool("secureBootEnabled", m_secureBootEnabled);
  }

  if (m_uefiDataHasBeenSet) {
    payload.WithString("uefiData", m_uefiData);
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
