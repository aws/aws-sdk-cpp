/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/RetentionPeriod.h>
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

RetentionPeriod::RetentionPeriod() : 
    m_retentionPeriodValue(0),
    m_retentionPeriodValueHasBeenSet(false),
    m_retentionPeriodUnit(RetentionPeriodUnit::NOT_SET),
    m_retentionPeriodUnitHasBeenSet(false)
{
}

RetentionPeriod::RetentionPeriod(JsonView jsonValue) : 
    m_retentionPeriodValue(0),
    m_retentionPeriodValueHasBeenSet(false),
    m_retentionPeriodUnit(RetentionPeriodUnit::NOT_SET),
    m_retentionPeriodUnitHasBeenSet(false)
{
  *this = jsonValue;
}

RetentionPeriod& RetentionPeriod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetentionPeriodValue"))
  {
    m_retentionPeriodValue = jsonValue.GetInteger("RetentionPeriodValue");

    m_retentionPeriodValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionPeriodUnit"))
  {
    m_retentionPeriodUnit = RetentionPeriodUnitMapper::GetRetentionPeriodUnitForName(jsonValue.GetString("RetentionPeriodUnit"));

    m_retentionPeriodUnitHasBeenSet = true;
  }

  return *this;
}

JsonValue RetentionPeriod::Jsonize() const
{
  JsonValue payload;

  if(m_retentionPeriodValueHasBeenSet)
  {
   payload.WithInteger("RetentionPeriodValue", m_retentionPeriodValue);

  }

  if(m_retentionPeriodUnitHasBeenSet)
  {
   payload.WithString("RetentionPeriodUnit", RetentionPeriodUnitMapper::GetNameForRetentionPeriodUnit(m_retentionPeriodUnit));
  }

  return payload;
}

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
