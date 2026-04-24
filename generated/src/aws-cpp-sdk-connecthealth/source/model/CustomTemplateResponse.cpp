/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/CustomTemplateResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

CustomTemplateResponse::CustomTemplateResponse(JsonView jsonValue) { *this = jsonValue; }

CustomTemplateResponse& CustomTemplateResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("templateType")) {
    m_templateType = CustomTemplateBaseMapper::GetCustomTemplateBaseForName(jsonValue.GetString("templateType"));
    m_templateTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomTemplateResponse::Jsonize() const {
  JsonValue payload;

  if (m_templateTypeHasBeenSet) {
    payload.WithString("templateType", CustomTemplateBaseMapper::GetNameForCustomTemplateBase(m_templateType));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
