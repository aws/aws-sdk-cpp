/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/PlacementStrategy.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int cluster_HASH = HashingUtils::HashString("cluster");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace PlacementStrategyMapper
{
PlacementStrategy GetPlacementStrategyForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == cluster_HASH)
  {
    return PlacementStrategy::cluster;
  }

  return PlacementStrategy::NOT_SET;
}

Aws::String GetNameForPlacementStrategy(PlacementStrategy value)
{
  switch(value)
  {
  case PlacementStrategy::cluster:
    return "cluster";
  default:
    return "";
  }
}

} // namespace PlacementStrategyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
