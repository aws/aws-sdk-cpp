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

#include <aws/shield/model/AttackSummary.h>
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

AttackSummary::AttackSummary() : 
    m_attackIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_attackVectorsHasBeenSet(false)
{
}

AttackSummary::AttackSummary(JsonView jsonValue) : 
    m_attackIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_attackVectorsHasBeenSet(false)
{
  *this = jsonValue;
}

AttackSummary& AttackSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttackId"))
  {
    m_attackId = jsonValue.GetString("AttackId");

    m_attackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttackVectors"))
  {
    Array<JsonView> attackVectorsJsonList = jsonValue.GetArray("AttackVectors");
    for(unsigned attackVectorsIndex = 0; attackVectorsIndex < attackVectorsJsonList.GetLength(); ++attackVectorsIndex)
    {
      m_attackVectors.push_back(attackVectorsJsonList[attackVectorsIndex].AsObject());
    }
    m_attackVectorsHasBeenSet = true;
  }

  return *this;
}

JsonValue AttackSummary::Jsonize() const
{
  JsonValue payload;

  if(m_attackIdHasBeenSet)
  {
   payload.WithString("AttackId", m_attackId);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_attackVectorsHasBeenSet)
  {
   Array<JsonValue> attackVectorsJsonList(m_attackVectors.size());
   for(unsigned attackVectorsIndex = 0; attackVectorsIndex < attackVectorsJsonList.GetLength(); ++attackVectorsIndex)
   {
     attackVectorsJsonList[attackVectorsIndex].AsObject(m_attackVectors[attackVectorsIndex].Jsonize());
   }
   payload.WithArray("AttackVectors", std::move(attackVectorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
