/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/UpdateValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

UpdateValue::UpdateValue() : 
    m_oSUpdateSettingsHasBeenSet(false)
{
}

UpdateValue::UpdateValue(JsonView jsonValue) : 
    m_oSUpdateSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateValue& UpdateValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OSUpdateSettings"))
  {
    m_oSUpdateSettings = jsonValue.GetObject("OSUpdateSettings");

    m_oSUpdateSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateValue::Jsonize() const
{
  JsonValue payload;

  if(m_oSUpdateSettingsHasBeenSet)
  {
   payload.WithObject("OSUpdateSettings", m_oSUpdateSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
