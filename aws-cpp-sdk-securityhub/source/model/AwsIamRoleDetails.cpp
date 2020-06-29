/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamRoleDetails.h>
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

AwsIamRoleDetails::AwsIamRoleDetails() : 
    m_assumeRolePolicyDocumentHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_maxSessionDuration(0),
    m_maxSessionDurationHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

AwsIamRoleDetails::AwsIamRoleDetails(JsonView jsonValue) : 
    m_assumeRolePolicyDocumentHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_maxSessionDuration(0),
    m_maxSessionDurationHasBeenSet(false),
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamRoleDetails& AwsIamRoleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssumeRolePolicyDocument"))
  {
    m_assumeRolePolicyDocument = jsonValue.GetString("AssumeRolePolicyDocument");

    m_assumeRolePolicyDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetString("CreateDate");

    m_createDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleId"))
  {
    m_roleId = jsonValue.GetString("RoleId");

    m_roleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleName"))
  {
    m_roleName = jsonValue.GetString("RoleName");

    m_roleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxSessionDuration"))
  {
    m_maxSessionDuration = jsonValue.GetInteger("MaxSessionDuration");

    m_maxSessionDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamRoleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assumeRolePolicyDocumentHasBeenSet)
  {
   payload.WithString("AssumeRolePolicyDocument", m_assumeRolePolicyDocument);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithString("CreateDate", m_createDate);

  }

  if(m_roleIdHasBeenSet)
  {
   payload.WithString("RoleId", m_roleId);

  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("RoleName", m_roleName);

  }

  if(m_maxSessionDurationHasBeenSet)
  {
   payload.WithInteger("MaxSessionDuration", m_maxSessionDuration);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
