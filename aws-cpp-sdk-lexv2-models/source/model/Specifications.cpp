/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/Specifications.h>
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

Specifications::Specifications() : 
    m_slotTypeIdHasBeenSet(false),
    m_valueElicitationSettingHasBeenSet(false)
{
}

Specifications::Specifications(JsonView jsonValue) : 
    m_slotTypeIdHasBeenSet(false),
    m_valueElicitationSettingHasBeenSet(false)
{
  *this = jsonValue;
}

Specifications& Specifications::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("slotTypeId"))
  {
    m_slotTypeId = jsonValue.GetString("slotTypeId");

    m_slotTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("valueElicitationSetting"))
  {
    m_valueElicitationSetting = jsonValue.GetObject("valueElicitationSetting");

    m_valueElicitationSettingHasBeenSet = true;
  }

  return *this;
}

JsonValue Specifications::Jsonize() const
{
  JsonValue payload;

  if(m_slotTypeIdHasBeenSet)
  {
   payload.WithString("slotTypeId", m_slotTypeId);

  }

  if(m_valueElicitationSettingHasBeenSet)
  {
   payload.WithObject("valueElicitationSetting", m_valueElicitationSetting.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
