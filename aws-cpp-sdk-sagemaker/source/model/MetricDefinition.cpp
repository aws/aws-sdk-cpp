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

#include <aws/sagemaker/model/MetricDefinition.h>
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

MetricDefinition::MetricDefinition() : 
    m_nameHasBeenSet(false),
    m_regexHasBeenSet(false)
{
}

MetricDefinition::MetricDefinition(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_regexHasBeenSet(false)
{
  *this = jsonValue;
}

MetricDefinition& MetricDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Regex"))
  {
    m_regex = jsonValue.GetString("Regex");

    m_regexHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_regexHasBeenSet)
  {
   payload.WithString("Regex", m_regex);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
