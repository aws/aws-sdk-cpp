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

#include <aws/lambda/model/Concurrency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

Concurrency::Concurrency() : 
    m_reservedConcurrentExecutions(0),
    m_reservedConcurrentExecutionsHasBeenSet(false)
{
}

Concurrency::Concurrency(const JsonValue& jsonValue) : 
    m_reservedConcurrentExecutions(0),
    m_reservedConcurrentExecutionsHasBeenSet(false)
{
  *this = jsonValue;
}

Concurrency& Concurrency::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ReservedConcurrentExecutions"))
  {
    m_reservedConcurrentExecutions = jsonValue.GetInteger("ReservedConcurrentExecutions");

    m_reservedConcurrentExecutionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Concurrency::Jsonize() const
{
  JsonValue payload;

  if(m_reservedConcurrentExecutionsHasBeenSet)
  {
   payload.WithInteger("ReservedConcurrentExecutions", m_reservedConcurrentExecutions);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
