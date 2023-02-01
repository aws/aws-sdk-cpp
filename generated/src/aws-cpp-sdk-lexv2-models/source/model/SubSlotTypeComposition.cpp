/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SubSlotTypeComposition.h>
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

SubSlotTypeComposition::SubSlotTypeComposition() : 
    m_nameHasBeenSet(false),
    m_slotTypeIdHasBeenSet(false)
{
}

SubSlotTypeComposition::SubSlotTypeComposition(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_slotTypeIdHasBeenSet(false)
{
  *this = jsonValue;
}

SubSlotTypeComposition& SubSlotTypeComposition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotTypeId"))
  {
    m_slotTypeId = jsonValue.GetString("slotTypeId");

    m_slotTypeIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SubSlotTypeComposition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_slotTypeIdHasBeenSet)
  {
   payload.WithString("slotTypeId", m_slotTypeId);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
