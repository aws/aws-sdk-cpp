/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/model/InstancesHealthAttribute.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int HealthStatus_HASH = HashingUtils::HashString("HealthStatus");
static const int Color_HASH = HashingUtils::HashString("Color");
static const int Causes_HASH = HashingUtils::HashString("Causes");
static const int ApplicationMetrics_HASH = HashingUtils::HashString("ApplicationMetrics");
static const int RefreshedAt_HASH = HashingUtils::HashString("RefreshedAt");
static const int LaunchedAt_HASH = HashingUtils::HashString("LaunchedAt");
static const int System_HASH = HashingUtils::HashString("System");
static const int All_HASH = HashingUtils::HashString("All");

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{
namespace InstancesHealthAttributeMapper
{


InstancesHealthAttribute GetInstancesHealthAttributeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HealthStatus_HASH)
  {
     return InstancesHealthAttribute::HealthStatus;
  }
  else if (hashCode == Color_HASH)
  {
     return InstancesHealthAttribute::Color;
  }
  else if (hashCode == Causes_HASH)
  {
     return InstancesHealthAttribute::Causes;
  }
  else if (hashCode == ApplicationMetrics_HASH)
  {
     return InstancesHealthAttribute::ApplicationMetrics;
  }
  else if (hashCode == RefreshedAt_HASH)
  {
     return InstancesHealthAttribute::RefreshedAt;
  }
  else if (hashCode == LaunchedAt_HASH)
  {
     return InstancesHealthAttribute::LaunchedAt;
  }
  else if (hashCode == System_HASH)
  {
     return InstancesHealthAttribute::System;
  }
  else if (hashCode == All_HASH)
  {
     return InstancesHealthAttribute::All;
  }
  return InstancesHealthAttribute::NOT_SET;
}

Aws::String GetNameForInstancesHealthAttribute(InstancesHealthAttribute enumValue)
{
  switch(enumValue)
  {
  case InstancesHealthAttribute::HealthStatus:
    return "HealthStatus";
  case InstancesHealthAttribute::Color:
    return "Color";
  case InstancesHealthAttribute::Causes:
    return "Causes";
  case InstancesHealthAttribute::ApplicationMetrics:
    return "ApplicationMetrics";
  case InstancesHealthAttribute::RefreshedAt:
    return "RefreshedAt";
  case InstancesHealthAttribute::LaunchedAt:
    return "LaunchedAt";
  case InstancesHealthAttribute::System:
    return "System";
  case InstancesHealthAttribute::All:
    return "All";
  default:
    return "";
  }
}

} // namespace InstancesHealthAttributeMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
