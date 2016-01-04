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
#include <aws/rds/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int db_instance_HASH = HashingUtils::HashString("db-instance");
static const int db_parameter_group_HASH = HashingUtils::HashString("db-parameter-group");
static const int db_security_group_HASH = HashingUtils::HashString("db-security-group");
static const int db_snapshot_HASH = HashingUtils::HashString("db-snapshot");

namespace Aws
{
namespace RDS
{
namespace Model
{
namespace SourceTypeMapper
{
SourceType GetSourceTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == db_instance_HASH)
  {
    return SourceType::db_instance;
  }
  else if (hashCode == db_parameter_group_HASH)
  {
    return SourceType::db_parameter_group;
  }
  else if (hashCode == db_security_group_HASH)
  {
    return SourceType::db_security_group;
  }
  else if (hashCode == db_snapshot_HASH)
  {
    return SourceType::db_snapshot;
  }

  return SourceType::NOT_SET;
}

Aws::String GetNameForSourceType(SourceType value)
{
  switch(value)
  {
  case SourceType::db_instance:
    return "db-instance";
  case SourceType::db_parameter_group:
    return "db-parameter-group";
  case SourceType::db_security_group:
    return "db-security-group";
  case SourceType::db_snapshot:
    return "db-snapshot";
  default:
    return "";
  }
}

} // namespace SourceTypeMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
