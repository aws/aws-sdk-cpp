/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ObfuscationSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

ObfuscationSetting::ObfuscationSetting() : 
    m_obfuscationSettingType(ObfuscationSettingType::NOT_SET),
    m_obfuscationSettingTypeHasBeenSet(false)
{
}

ObfuscationSetting::ObfuscationSetting(JsonView jsonValue) : 
    m_obfuscationSettingType(ObfuscationSettingType::NOT_SET),
    m_obfuscationSettingTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ObfuscationSetting& ObfuscationSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("obfuscationSettingType"))
  {
    m_obfuscationSettingType = ObfuscationSettingTypeMapper::GetObfuscationSettingTypeForName(jsonValue.GetString("obfuscationSettingType"));

    m_obfuscationSettingTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ObfuscationSetting::Jsonize() const
{
  JsonValue payload;

  if(m_obfuscationSettingTypeHasBeenSet)
  {
   payload.WithString("obfuscationSettingType", ObfuscationSettingTypeMapper::GetNameForObfuscationSettingType(m_obfuscationSettingType));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
