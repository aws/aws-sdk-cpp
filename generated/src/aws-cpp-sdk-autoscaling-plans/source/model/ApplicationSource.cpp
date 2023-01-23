/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ApplicationSource::ApplicationSource(JsonView jsonValue) : 
    m_cloudFormationStackARNHasBeenSet(false),
    m_tagFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSource& ApplicationSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudFormationStackARN"))
  {
    m_cloudFormationStackARN = jsonValue.GetString("CloudFormationStackARN");

    m_cloudFormationStackARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagFilters"))
  {
    Aws::Utils::Array<JsonView> tagFiltersJsonList = jsonValue.GetArray("TagFilters");
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
   Aws::Utils::Array<JsonValue> tagFiltersJsonList(m_tagFilters.size());
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
