/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StepAmountCapability.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

StepAmountCapability::StepAmountCapability() : 
    m_max(0.0),
    m_maxHasBeenSet(false),
    m_min(0.0),
    m_minHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

StepAmountCapability::StepAmountCapability(JsonView jsonValue) : 
    m_max(0.0),
    m_maxHasBeenSet(false),
    m_min(0.0),
    m_minHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

StepAmountCapability& StepAmountCapability::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("max"))
  {
    m_max = jsonValue.GetDouble("max");

    m_maxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("min"))
  {
    m_min = jsonValue.GetDouble("min");

    m_minHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue StepAmountCapability::Jsonize() const
{
  JsonValue payload;

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("max", m_max);

  }

  if(m_minHasBeenSet)
  {
   payload.WithDouble("min", m_min);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
