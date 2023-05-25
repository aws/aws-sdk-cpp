/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ParameterRanges.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

ParameterRanges::ParameterRanges() : 
    m_categoricalParameterRangesHasBeenSet(false),
    m_continuousParameterRangesHasBeenSet(false),
    m_integerParameterRangesHasBeenSet(false)
{
}

ParameterRanges::ParameterRanges(JsonView jsonValue) : 
    m_categoricalParameterRangesHasBeenSet(false),
    m_continuousParameterRangesHasBeenSet(false),
    m_integerParameterRangesHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterRanges& ParameterRanges::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CategoricalParameterRanges"))
  {
    Aws::Utils::Array<JsonView> categoricalParameterRangesJsonList = jsonValue.GetArray("CategoricalParameterRanges");
    for(unsigned categoricalParameterRangesIndex = 0; categoricalParameterRangesIndex < categoricalParameterRangesJsonList.GetLength(); ++categoricalParameterRangesIndex)
    {
      m_categoricalParameterRanges.push_back(categoricalParameterRangesJsonList[categoricalParameterRangesIndex].AsObject());
    }
    m_categoricalParameterRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContinuousParameterRanges"))
  {
    Aws::Utils::Array<JsonView> continuousParameterRangesJsonList = jsonValue.GetArray("ContinuousParameterRanges");
    for(unsigned continuousParameterRangesIndex = 0; continuousParameterRangesIndex < continuousParameterRangesJsonList.GetLength(); ++continuousParameterRangesIndex)
    {
      m_continuousParameterRanges.push_back(continuousParameterRangesJsonList[continuousParameterRangesIndex].AsObject());
    }
    m_continuousParameterRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegerParameterRanges"))
  {
    Aws::Utils::Array<JsonView> integerParameterRangesJsonList = jsonValue.GetArray("IntegerParameterRanges");
    for(unsigned integerParameterRangesIndex = 0; integerParameterRangesIndex < integerParameterRangesJsonList.GetLength(); ++integerParameterRangesIndex)
    {
      m_integerParameterRanges.push_back(integerParameterRangesJsonList[integerParameterRangesIndex].AsObject());
    }
    m_integerParameterRangesHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterRanges::Jsonize() const
{
  JsonValue payload;

  if(m_categoricalParameterRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoricalParameterRangesJsonList(m_categoricalParameterRanges.size());
   for(unsigned categoricalParameterRangesIndex = 0; categoricalParameterRangesIndex < categoricalParameterRangesJsonList.GetLength(); ++categoricalParameterRangesIndex)
   {
     categoricalParameterRangesJsonList[categoricalParameterRangesIndex].AsObject(m_categoricalParameterRanges[categoricalParameterRangesIndex].Jsonize());
   }
   payload.WithArray("CategoricalParameterRanges", std::move(categoricalParameterRangesJsonList));

  }

  if(m_continuousParameterRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> continuousParameterRangesJsonList(m_continuousParameterRanges.size());
   for(unsigned continuousParameterRangesIndex = 0; continuousParameterRangesIndex < continuousParameterRangesJsonList.GetLength(); ++continuousParameterRangesIndex)
   {
     continuousParameterRangesJsonList[continuousParameterRangesIndex].AsObject(m_continuousParameterRanges[continuousParameterRangesIndex].Jsonize());
   }
   payload.WithArray("ContinuousParameterRanges", std::move(continuousParameterRangesJsonList));

  }

  if(m_integerParameterRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> integerParameterRangesJsonList(m_integerParameterRanges.size());
   for(unsigned integerParameterRangesIndex = 0; integerParameterRangesIndex < integerParameterRangesJsonList.GetLength(); ++integerParameterRangesIndex)
   {
     integerParameterRangesJsonList[integerParameterRangesIndex].AsObject(m_integerParameterRanges[integerParameterRangesIndex].Jsonize());
   }
   payload.WithArray("IntegerParameterRanges", std::move(integerParameterRangesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
