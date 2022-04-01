/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ExternalSourceSetting.h>
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

ExternalSourceSetting::ExternalSourceSetting() : 
    m_grammarSlotTypeSettingHasBeenSet(false)
{
}

ExternalSourceSetting::ExternalSourceSetting(JsonView jsonValue) : 
    m_grammarSlotTypeSettingHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalSourceSetting& ExternalSourceSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("grammarSlotTypeSetting"))
  {
    m_grammarSlotTypeSetting = jsonValue.GetObject("grammarSlotTypeSetting");

    m_grammarSlotTypeSettingHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalSourceSetting::Jsonize() const
{
  JsonValue payload;

  if(m_grammarSlotTypeSettingHasBeenSet)
  {
   payload.WithObject("grammarSlotTypeSetting", m_grammarSlotTypeSetting.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
