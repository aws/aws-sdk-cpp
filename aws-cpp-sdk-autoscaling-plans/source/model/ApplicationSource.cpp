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

#include <aws/autoscaling-plans/model/ApplicationSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{

ApplicationSource::ApplicationSource() : 
    m_cloudFormationStackARNHasBeenSet(false),
    m_tagFiltersHasBeenSet(false)
{
}

ApplicationSource::ApplicationSource(const JsonValue& jsonValue) : 
    m_cloudFormationStackARNHasBeenSet(false),
    m_tagFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSource& ApplicationSource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CloudFormationStackARN"))
  {
    m_cloudFormationStackARN = jsonValue.GetString("CloudFormationStackARN");

    m_cloudFormationStackARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagFilters"))
  {
    Array<JsonValue> tagFiltersJsonList = jsonValue.GetArray("TagFilters");
    for(unsigned tagFiltersIndex = 0; tagFiltersIndex < tagFiltersJsonList.GetLength(); ++tagFiltersIndex)
    {
      m_tagFilters.push_back(tagFiltersJsonList[tagFiltersIndex].AsObject());
    }
    m_tagFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSource::Jsonize() const
{
  JsonValue payload;

  if(m_cloudFormationStackARNHasBeenSet)
  {
   payload.WithString("CloudFormationStackARN", m_cloudFormationStackARN);

  }

  if(m_tagFiltersHasBeenSet)
  {
   Array<JsonValue> tagFiltersJsonList(m_tagFilters.size());
   for(unsigned tagFiltersIndex = 0; tagFiltersIndex < tagFiltersJsonList.GetLength(); ++tagFiltersIndex)
   {
     tagFiltersJsonList[tagFiltersIndex].AsObject(m_tagFilters[tagFiltersIndex].Jsonize());
   }
   payload.WithArray("TagFilters", std::move(tagFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
