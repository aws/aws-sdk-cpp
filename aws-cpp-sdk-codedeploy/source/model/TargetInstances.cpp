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

#include <aws/codedeploy/model/TargetInstances.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

TargetInstances::TargetInstances() : 
    m_tagFiltersHasBeenSet(false),
    m_autoScalingGroupsHasBeenSet(false),
    m_ec2TagSetHasBeenSet(false)
{
}

TargetInstances::TargetInstances(JsonView jsonValue) : 
    m_tagFiltersHasBeenSet(false),
    m_autoScalingGroupsHasBeenSet(false),
    m_ec2TagSetHasBeenSet(false)
{
  *this = jsonValue;
}

TargetInstances& TargetInstances::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tagFilters"))
  {
    Array<JsonView> tagFiltersJsonList = jsonValue.GetArray("tagFilters");
    for(unsigned tagFiltersIndex = 0; tagFiltersIndex < tagFiltersJsonList.GetLength(); ++tagFiltersIndex)
    {
      m_tagFilters.push_back(tagFiltersJsonList[tagFiltersIndex].AsObject());
    }
    m_tagFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingGroups"))
  {
    Array<JsonView> autoScalingGroupsJsonList = jsonValue.GetArray("autoScalingGroups");
    for(unsigned autoScalingGroupsIndex = 0; autoScalingGroupsIndex < autoScalingGroupsJsonList.GetLength(); ++autoScalingGroupsIndex)
    {
      m_autoScalingGroups.push_back(autoScalingGroupsJsonList[autoScalingGroupsIndex].AsString());
    }
    m_autoScalingGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2TagSet"))
  {
    m_ec2TagSet = jsonValue.GetObject("ec2TagSet");

    m_ec2TagSetHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetInstances::Jsonize() const
{
  JsonValue payload;

  if(m_tagFiltersHasBeenSet)
  {
   Array<JsonValue> tagFiltersJsonList(m_tagFilters.size());
   for(unsigned tagFiltersIndex = 0; tagFiltersIndex < tagFiltersJsonList.GetLength(); ++tagFiltersIndex)
   {
     tagFiltersJsonList[tagFiltersIndex].AsObject(m_tagFilters[tagFiltersIndex].Jsonize());
   }
   payload.WithArray("tagFilters", std::move(tagFiltersJsonList));

  }

  if(m_autoScalingGroupsHasBeenSet)
  {
   Array<JsonValue> autoScalingGroupsJsonList(m_autoScalingGroups.size());
   for(unsigned autoScalingGroupsIndex = 0; autoScalingGroupsIndex < autoScalingGroupsJsonList.GetLength(); ++autoScalingGroupsIndex)
   {
     autoScalingGroupsJsonList[autoScalingGroupsIndex].AsString(m_autoScalingGroups[autoScalingGroupsIndex]);
   }
   payload.WithArray("autoScalingGroups", std::move(autoScalingGroupsJsonList));

  }

  if(m_ec2TagSetHasBeenSet)
  {
   payload.WithObject("ec2TagSet", m_ec2TagSet.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
