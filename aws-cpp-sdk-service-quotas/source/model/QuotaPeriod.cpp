/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/service-quotas/model/QuotaPeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{

QuotaPeriod::QuotaPeriod() : 
    m_periodValue(0),
    m_periodValueHasBeenSet(false),
    m_periodUnit(PeriodUnit::NOT_SET),
    m_periodUnitHasBeenSet(false)
{
}

QuotaPeriod::QuotaPeriod(JsonView jsonValue) : 
    m_periodValue(0),
    m_periodValueHasBeenSet(false),
    m_periodUnit(PeriodUnit::NOT_SET),
    m_periodUnitHasBeenSet(false)
{
  *this = jsonValue;
}

QuotaPeriod& QuotaPeriod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PeriodValue"))
  {
    m_periodValue = jsonValue.GetInteger("PeriodValue");

    m_periodValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeriodUnit"))
  {
    m_periodUnit = PeriodUnitMapper::GetPeriodUnitForName(jsonValue.GetString("PeriodUnit"));

    m_periodUnitHasBeenSet = true;
  }

  return *this;
}

JsonValue QuotaPeriod::Jsonize() const
{
  JsonValue payload;

  if(m_periodValueHasBeenSet)
  {
   payload.WithInteger("PeriodValue", m_periodValue);

  }

  if(m_periodUnitHasBeenSet)
  {
   payload.WithString("PeriodUnit", PeriodUnitMapper::GetNameForPeriodUnit(m_periodUnit));
  }

  return payload;
}

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
