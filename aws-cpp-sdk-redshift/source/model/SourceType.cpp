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
#include <aws/redshift/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int cluster_HASH = HashingUtils::HashString("cluster");
static const int cluster_parameter_group_HASH = HashingUtils::HashString("cluster-parameter-group");
static const int cluster_security_group_HASH = HashingUtils::HashString("cluster-security-group");
static const int cluster_snapshot_HASH = HashingUtils::HashString("cluster-snapshot");

namespace Aws
{
namespace Redshift
{
namespace Model
{
namespace SourceTypeMapper
{
SourceType GetSourceTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == cluster_HASH)
  {
    return SourceType::cluster;
  }
  else if (hashCode == cluster_parameter_group_HASH)
  {
    return SourceType::cluster_parameter_group;
  }
  else if (hashCode == cluster_security_group_HASH)
  {
    return SourceType::cluster_security_group;
  }
  else if (hashCode == cluster_snapshot_HASH)
  {
    return SourceType::cluster_snapshot;
  }

  return SourceType::cluster;
}

Aws::String GetNameForSourceType(SourceType value)
{
  switch(value)
  {
  case SourceType::cluster:
    return "cluster";
  case SourceType::cluster_parameter_group:
    return "cluster-parameter-group";
  case SourceType::cluster_security_group:
    return "cluster-security-group";
  case SourceType::cluster_snapshot:
    return "cluster-snapshot";
  default:
    return "cluster";
  }
}

} // namespace SourceTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
