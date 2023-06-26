/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/S3BucketAclGrantConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

S3BucketAclGrantConfiguration::S3BucketAclGrantConfiguration() : 
    m_permission(AclPermission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_granteeHasBeenSet(false)
{
}

S3BucketAclGrantConfiguration::S3BucketAclGrantConfiguration(JsonView jsonValue) : 
    m_permission(AclPermission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_granteeHasBeenSet(false)
{
  *this = jsonValue;
}

S3BucketAclGrantConfiguration& S3BucketAclGrantConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("permission"))
  {
    m_permission = AclPermissionMapper::GetAclPermissionForName(jsonValue.GetString("permission"));

    m_permissionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("grantee"))
  {
    m_grantee = jsonValue.GetObject("grantee");

    m_granteeHasBeenSet = true;
  }

  return *this;
}

JsonValue S3BucketAclGrantConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_permissionHasBeenSet)
  {
   payload.WithString("permission", AclPermissionMapper::GetNameForAclPermission(m_permission));
  }

  if(m_granteeHasBeenSet)
  {
   payload.WithObject("grantee", m_grantee.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
