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

#include <aws/shield/model/SummarizedAttackVector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

SummarizedAttackVector::SummarizedAttackVector() : 
    m_vectorTypeHasBeenSet(false),
    m_vectorCountersHasBeenSet(false)
{
}

SummarizedAttackVector::SummarizedAttackVector(const JsonValue& jsonValue) : 
    m_vectorTypeHasBeenSet(false),
    m_vectorCountersHasBeenSet(false)
{
  *this = jsonValue;
}

SummarizedAttackVector& SummarizedAttackVector::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("VectorType"))
  {
    m_vectorType = jsonValue.GetString("VectorType");

    m_vectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VectorCounters"))
  {
    Array<JsonValue> vectorCountersJsonList = jsonValue.GetArray("VectorCounters");
    for(unsigned vectorCountersIndex = 0; vectorCountersIndex < vectorCountersJsonList.GetLength(); ++vectorCountersIndex)
    {
      m_vectorCounters.push_back(vectorCountersJsonList[vectorCountersIndex].AsObject());
    }
    m_vectorCountersHasBeenSet = true;
  }

  return *this;
}

JsonValue SummarizedAttackVector::Jsonize() const
{
  JsonValue payload;

  if(m_vectorTypeHasBeenSet)
  {
   payload.WithString("VectorType", m_vectorType);

  }

  if(m_vectorCountersHasBeenSet)
  {
   Array<JsonValue> vectorCountersJsonList(m_vectorCounters.size());
   for(unsigned vectorCountersIndex = 0; vectorCountersIndex < vectorCountersJsonList.GetLength(); ++vectorCountersIndex)
   {
     vectorCountersJsonList[vectorCountersIndex].AsObject(m_vectorCounters[vectorCountersIndex].Jsonize());
   }
   payload.WithArray("VectorCounters", std::move(vectorCountersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws