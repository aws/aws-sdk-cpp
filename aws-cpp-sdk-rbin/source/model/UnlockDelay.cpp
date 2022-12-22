/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/UnlockDelay.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RecycleBin
{
namespace Model
{

UnlockDelay::UnlockDelay() : 
    m_unlockDelayValue(0),
    m_unlockDelayValueHasBeenSet(false),
    m_unlockDelayUnit(UnlockDelayUnit::NOT_SET),
    m_unlockDelayUnitHasBeenSet(false)
{
}

UnlockDelay::UnlockDelay(JsonView jsonValue) : 
    m_unlockDelayValue(0),
    m_unlockDelayValueHasBeenSet(false),
    m_unlockDelayUnit(UnlockDelayUnit::NOT_SET),
    m_unlockDelayUnitHasBeenSet(false)
{
  *this = jsonValue;
}

UnlockDelay& UnlockDelay::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UnlockDelayValue"))
  {
    m_unlockDelayValue = jsonValue.GetInteger("UnlockDelayValue");

    m_unlockDelayValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnlockDelayUnit"))
  {
    m_unlockDelayUnit = UnlockDelayUnitMapper::GetUnlockDelayUnitForName(jsonValue.GetString("UnlockDelayUnit"));

    m_unlockDelayUnitHasBeenSet = true;
  }

  return *this;
}

JsonValue UnlockDelay::Jsonize() const
{
  JsonValue payload;

  if(m_unlockDelayValueHasBeenSet)
  {
   payload.WithInteger("UnlockDelayValue", m_unlockDelayValue);

  }

  if(m_unlockDelayUnitHasBeenSet)
  {
   payload.WithString("UnlockDelayUnit", UnlockDelayUnitMapper::GetNameForUnlockDelayUnit(m_unlockDelayUnit));
  }

  return payload;
}

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
