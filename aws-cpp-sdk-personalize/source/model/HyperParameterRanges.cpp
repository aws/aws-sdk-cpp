/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/HyperParameterRanges.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

HyperParameterRanges::HyperParameterRanges() : 
    m_integerHyperParameterRangesHasBeenSet(false),
    m_continuousHyperParameterRangesHasBeenSet(false),
    m_categoricalHyperParameterRangesHasBeenSet(false)
{
}

HyperParameterRanges::HyperParameterRanges(JsonView jsonValue) : 
    m_integerHyperParameterRangesHasBeenSet(false),
    m_continuousHyperParameterRangesHasBeenSet(false),
    m_categoricalHyperParameterRangesHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterRanges& HyperParameterRanges::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("integerHyperParameterRanges"))
  {
    Array<JsonView> integerHyperParameterRangesJsonList = jsonValue.GetArray("integerHyperParameterRanges");
    for(unsigned integerHyperParameterRangesIndex = 0; integerHyperParameterRangesIndex < integerHyperParameterRangesJsonList.GetLength(); ++integerHyperParameterRangesIndex)
    {
      m_integerHyperParameterRanges.push_back(integerHyperParameterRangesJsonList[integerHyperParameterRangesIndex].AsObject());
    }
    m_integerHyperParameterRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("continuousHyperParameterRanges"))
  {
    Array<JsonView> continuousHyperParameterRangesJsonList = jsonValue.GetArray("continuousHyperParameterRanges");
    for(unsigned continuousHyperParameterRangesIndex = 0; continuousHyperParameterRangesIndex < continuousHyperParameterRangesJsonList.GetLength(); ++continuousHyperParameterRangesIndex)
    {
      m_continuousHyperParameterRanges.push_back(continuousHyperParameterRangesJsonList[continuousHyperParameterRangesIndex].AsObject());
    }
    m_continuousHyperParameterRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("categoricalHyperParameterRanges"))
  {
    Array<JsonView> categoricalHyperParameterRangesJsonList = jsonValue.GetArray("categoricalHyperParameterRanges");
    for(unsigned categoricalHyperParameterRangesIndex = 0; categoricalHyperParameterRangesIndex < categoricalHyperParameterRangesJsonList.GetLength(); ++categoricalHyperParameterRangesIndex)
    {
      m_categoricalHyperParameterRanges.push_back(categoricalHyperParameterRangesJsonList[categoricalHyperParameterRangesIndex].AsObject());
    }
    m_categoricalHyperParameterRangesHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterRanges::Jsonize() const
{
  JsonValue payload;

  if(m_integerHyperParameterRangesHasBeenSet)
  {
   Array<JsonValue> integerHyperParameterRangesJsonList(m_integerHyperParameterRanges.size());
   for(unsigned integerHyperParameterRangesIndex = 0; integerHyperParameterRangesIndex < integerHyperParameterRangesJsonList.GetLength(); ++integerHyperParameterRangesIndex)
   {
     integerHyperParameterRangesJsonList[integerHyperParameterRangesIndex].AsObject(m_integerHyperParameterRanges[integerHyperParameterRangesIndex].Jsonize());
   }
   payload.WithArray("integerHyperParameterRanges", std::move(integerHyperParameterRangesJsonList));

  }

  if(m_continuousHyperParameterRangesHasBeenSet)
  {
   Array<JsonValue> continuousHyperParameterRangesJsonList(m_continuousHyperParameterRanges.size());
   for(unsigned continuousHyperParameterRangesIndex = 0; continuousHyperParameterRangesIndex < continuousHyperParameterRangesJsonList.GetLength(); ++continuousHyperParameterRangesIndex)
   {
     continuousHyperParameterRangesJsonList[continuousHyperParameterRangesIndex].AsObject(m_continuousHyperParameterRanges[continuousHyperParameterRangesIndex].Jsonize());
   }
   payload.WithArray("continuousHyperParameterRanges", std::move(continuousHyperParameterRangesJsonList));

  }

  if(m_categoricalHyperParameterRangesHasBeenSet)
  {
   Array<JsonValue> categoricalHyperParameterRangesJsonList(m_categoricalHyperParameterRanges.size());
   for(unsigned categoricalHyperParameterRangesIndex = 0; categoricalHyperParameterRangesIndex < categoricalHyperParameterRangesJsonList.GetLength(); ++categoricalHyperParameterRangesIndex)
   {
     categoricalHyperParameterRangesJsonList[categoricalHyperParameterRangesIndex].AsObject(m_categoricalHyperParameterRanges[categoricalHyperParameterRangesIndex].Jsonize());
   }
   payload.WithArray("categoricalHyperParameterRanges", std::move(categoricalHyperParameterRangesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
