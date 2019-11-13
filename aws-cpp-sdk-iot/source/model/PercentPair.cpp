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

#include <aws/iot/model/PercentPair.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

PercentPair::PercentPair() : 
    m_percent(0.0),
    m_percentHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

PercentPair::PercentPair(JsonView jsonValue) : 
    m_percent(0.0),
    m_percentHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

PercentPair& PercentPair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("percent"))
  {
    m_percent = jsonValue.GetDouble("percent");

    m_percentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue PercentPair::Jsonize() const
{
  JsonValue payload;

  if(m_percentHasBeenSet)
  {
   payload.WithDouble("percent", m_percent);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
