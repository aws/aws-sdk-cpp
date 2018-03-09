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

#include <aws/events/model/BatchRetryStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

BatchRetryStrategy::BatchRetryStrategy() : 
    m_attempts(0),
    m_attemptsHasBeenSet(false)
{
}

BatchRetryStrategy::BatchRetryStrategy(const JsonValue& jsonValue) : 
    m_attempts(0),
    m_attemptsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchRetryStrategy& BatchRetryStrategy::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Attempts"))
  {
    m_attempts = jsonValue.GetInteger("Attempts");

    m_attemptsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchRetryStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_attemptsHasBeenSet)
  {
   payload.WithInteger("Attempts", m_attempts);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
