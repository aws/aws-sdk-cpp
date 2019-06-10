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

#include <aws/personalize/model/HPOObjective.h>
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

HPOObjective::HPOObjective() : 
    m_typeHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_metricRegexHasBeenSet(false)
{
}

HPOObjective::HPOObjective(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_metricRegexHasBeenSet(false)
{
  *this = jsonValue;
}

HPOObjective& HPOObjective::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricRegex"))
  {
    m_metricRegex = jsonValue.GetString("metricRegex");

    m_metricRegexHasBeenSet = true;
  }

  return *this;
}

JsonValue HPOObjective::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", m_metricName);

  }

  if(m_metricRegexHasBeenSet)
  {
   payload.WithString("metricRegex", m_metricRegex);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
