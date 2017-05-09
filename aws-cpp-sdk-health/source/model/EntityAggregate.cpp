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

#include <aws/health/model/EntityAggregate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

EntityAggregate::EntityAggregate() : 
    m_eventArnHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

EntityAggregate::EntityAggregate(const JsonValue& jsonValue) : 
    m_eventArnHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

EntityAggregate& EntityAggregate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("eventArn"))
  {
    m_eventArn = jsonValue.GetString("eventArn");

    m_eventArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityAggregate::Jsonize() const
{
  JsonValue payload;

  if(m_eventArnHasBeenSet)
  {
   payload.WithString("eventArn", m_eventArn);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws