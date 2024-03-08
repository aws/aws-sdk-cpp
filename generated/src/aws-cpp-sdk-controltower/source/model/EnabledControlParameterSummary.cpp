/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledControlParameterSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

EnabledControlParameterSummary::EnabledControlParameterSummary() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

EnabledControlParameterSummary::EnabledControlParameterSummary(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

EnabledControlParameterSummary& EnabledControlParameterSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue EnabledControlParameterSummary::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_valueHasBeenSet)
  {
    if(!m_value.View().IsNull())
    {
       payload.WithObject("value", JsonValue(m_value.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
