/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/Indicator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

Indicator::Indicator() : 
    m_indicatorType(IndicatorType::NOT_SET),
    m_indicatorTypeHasBeenSet(false),
    m_indicatorDetailHasBeenSet(false)
{
}

Indicator::Indicator(JsonView jsonValue) : 
    m_indicatorType(IndicatorType::NOT_SET),
    m_indicatorTypeHasBeenSet(false),
    m_indicatorDetailHasBeenSet(false)
{
  *this = jsonValue;
}

Indicator& Indicator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndicatorType"))
  {
    m_indicatorType = IndicatorTypeMapper::GetIndicatorTypeForName(jsonValue.GetString("IndicatorType"));

    m_indicatorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndicatorDetail"))
  {
    m_indicatorDetail = jsonValue.GetObject("IndicatorDetail");

    m_indicatorDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue Indicator::Jsonize() const
{
  JsonValue payload;

  if(m_indicatorTypeHasBeenSet)
  {
   payload.WithString("IndicatorType", IndicatorTypeMapper::GetNameForIndicatorType(m_indicatorType));
  }

  if(m_indicatorDetailHasBeenSet)
  {
   payload.WithObject("IndicatorDetail", m_indicatorDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
