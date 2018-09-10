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

#include <aws/iot/model/Behavior.h>
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

Behavior::Behavior() : 
    m_nameHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_criteriaHasBeenSet(false)
{
}

Behavior::Behavior(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_criteriaHasBeenSet(false)
{
  *this = jsonValue;
}

Behavior& Behavior::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metric"))
  {
    m_metric = jsonValue.GetString("metric");

    m_metricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("criteria"))
  {
    m_criteria = jsonValue.GetObject("criteria");

    m_criteriaHasBeenSet = true;
  }

  return *this;
}

JsonValue Behavior::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_metricHasBeenSet)
  {
   payload.WithString("metric", m_metric);

  }

  if(m_criteriaHasBeenSet)
  {
   payload.WithObject("criteria", m_criteria.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
