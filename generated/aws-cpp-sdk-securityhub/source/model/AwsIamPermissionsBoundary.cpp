/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamPermissionsBoundary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsIamPermissionsBoundary::AwsIamPermissionsBoundary() : 
    m_permissionsBoundaryArnHasBeenSet(false),
    m_permissionsBoundaryTypeHasBeenSet(false)
{
}

AwsIamPermissionsBoundary::AwsIamPermissionsBoundary(JsonView jsonValue) : 
    m_permissionsBoundaryArnHasBeenSet(false),
    m_permissionsBoundaryTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamPermissionsBoundary& AwsIamPermissionsBoundary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PermissionsBoundaryArn"))
  {
    m_permissionsBoundaryArn = jsonValue.GetString("PermissionsBoundaryArn");

    m_permissionsBoundaryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermissionsBoundaryType"))
  {
    m_permissionsBoundaryType = jsonValue.GetString("PermissionsBoundaryType");

    m_permissionsBoundaryTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamPermissionsBoundary::Jsonize() const
{
  JsonValue payload;

  if(m_permissionsBoundaryArnHasBeenSet)
  {
   payload.WithString("PermissionsBoundaryArn", m_permissionsBoundaryArn);

  }

  if(m_permissionsBoundaryTypeHasBeenSet)
  {
   payload.WithString("PermissionsBoundaryType", m_permissionsBoundaryType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
