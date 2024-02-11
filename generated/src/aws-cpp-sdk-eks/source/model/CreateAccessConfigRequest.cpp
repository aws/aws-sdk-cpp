/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/CreateAccessConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

CreateAccessConfigRequest::CreateAccessConfigRequest() : 
    m_bootstrapClusterCreatorAdminPermissions(false),
    m_bootstrapClusterCreatorAdminPermissionsHasBeenSet(false),
    m_authenticationMode(AuthenticationMode::NOT_SET),
    m_authenticationModeHasBeenSet(false)
{
}

CreateAccessConfigRequest::CreateAccessConfigRequest(JsonView jsonValue) : 
    m_bootstrapClusterCreatorAdminPermissions(false),
    m_bootstrapClusterCreatorAdminPermissionsHasBeenSet(false),
    m_authenticationMode(AuthenticationMode::NOT_SET),
    m_authenticationModeHasBeenSet(false)
{
  *this = jsonValue;
}

CreateAccessConfigRequest& CreateAccessConfigRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bootstrapClusterCreatorAdminPermissions"))
  {
    m_bootstrapClusterCreatorAdminPermissions = jsonValue.GetBool("bootstrapClusterCreatorAdminPermissions");

    m_bootstrapClusterCreatorAdminPermissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authenticationMode"))
  {
    m_authenticationMode = AuthenticationModeMapper::GetAuthenticationModeForName(jsonValue.GetString("authenticationMode"));

    m_authenticationModeHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateAccessConfigRequest::Jsonize() const
{
  JsonValue payload;

  if(m_bootstrapClusterCreatorAdminPermissionsHasBeenSet)
  {
   payload.WithBool("bootstrapClusterCreatorAdminPermissions", m_bootstrapClusterCreatorAdminPermissions);

  }

  if(m_authenticationModeHasBeenSet)
  {
   payload.WithString("authenticationMode", AuthenticationModeMapper::GetNameForAuthenticationMode(m_authenticationMode));
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
