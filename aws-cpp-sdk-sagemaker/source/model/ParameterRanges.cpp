﻿/*
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

#include <aws/sagemaker/model/ParameterRanges.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ParameterRanges::ParameterRanges() : 
    m_integerParameterRangesHasBeenSet(false),
    m_continuousParameterRangesHasBeenSet(false),
    m_categoricalParameterRangesHasBeenSet(false)
{
}

ParameterRanges::ParameterRanges(JsonView jsonValue) : 
    m_integerParameterRangesHasBeenSet(false),
    m_continuousParameterRangesHasBeenSet(false),
    m_categoricalParameterRangesHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterRanges& ParameterRanges::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IntegerParameterRanges"))
  {
    Array<JsonView> integerParameterRangesJsonList = jsonValue.GetArray("IntegerParameterRanges");
    for(unsigned integerParameterRangesIndex = 0; integerParameterRangesIndex < integerParameterRangesJsonList.GetLength(); ++integerParameterRangesIndex)
    {
      m_integerParameterRanges.push_back(integerParameterRangesJsonList[integerParameterRangesIndex].AsObject());
    }
    m_integerParameterRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContinuousParameterRanges"))
  {
    Array<JsonView> continuousParameterRangesJsonList = jsonValue.GetArray("ContinuousParameterRanges");
    for(unsigned continuousParameterRangesIndex = 0; continuousParameterRangesIndex < continuousParameterRangesJsonList.GetLength(); ++continuousParameterRangesIndex)
    {
      m_continuousParameterRanges.push_back(continuousParameterRangesJsonList[continuousParameterRangesIndex].AsObject());
    }
    m_continuousParameterRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoricalParameterRanges"))
  {
    Array<JsonView> categoricalParameterRangesJsonList = jsonValue.GetArray("CategoricalParameterRanges");
    for(unsigned categoricalParameterRangesIndex = 0; categoricalParameterRangesIndex < categoricalParameterRangesJsonList.GetLength(); ++categoricalParameterRangesIndex)
    {
      m_categoricalParameterRanges.push_back(categoricalParameterRangesJsonList[categoricalParameterRangesIndex].AsObject());
    }
    m_categoricalParameterRangesHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterRanges::Jsonize() const
{
  JsonValue payload;

  if(m_integerParameterRangesHasBeenSet)
  {
   Array<JsonValue> integerParameterRangesJsonList(m_integerParameterRanges.size());
   for(unsigned integerParameterRangesIndex = 0; integerParameterRangesIndex < integerParameterRangesJsonList.GetLength(); ++integerParameterRangesIndex)
   {
     integerParameterRangesJsonList[integerParameterRangesIndex].AsObject(m_integerParameterRanges[integerParameterRangesIndex].Jsonize());
   }
   payload.WithArray("IntegerParameterRanges", std::move(integerParameterRangesJsonList));

  }

  if(m_continuousParameterRangesHasBeenSet)
  {
   Array<JsonValue> continuousParameterRangesJsonList(m_continuousParameterRanges.size());
   for(unsigned continuousParameterRangesIndex = 0; continuousParameterRangesIndex < continuousParameterRangesJsonList.GetLength(); ++continuousParameterRangesIndex)
   {
     continuousParameterRangesJsonList[continuousParameterRangesIndex].AsObject(m_continuousParameterRanges[continuousParameterRangesIndex].Jsonize());
   }
   payload.WithArray("ContinuousParameterRanges", std::move(continuousParameterRangesJsonList));

  }

  if(m_categoricalParameterRangesHasBeenSet)
  {
   Array<JsonValue> categoricalParameterRangesJsonList(m_categoricalParameterRanges.size());
   for(unsigned categoricalParameterRangesIndex = 0; categoricalParameterRangesIndex < categoricalParameterRangesJsonList.GetLength(); ++categoricalParameterRangesIndex)
   {
     categoricalParameterRangesJsonList[categoricalParameterRangesIndex].AsObject(m_categoricalParameterRanges[categoricalParameterRangesIndex].Jsonize());
   }
   payload.WithArray("CategoricalParameterRanges", std::move(categoricalParameterRangesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
