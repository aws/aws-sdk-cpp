/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpdateAccessConfigRequest.h>
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

UpdateAccessConfigRequest::UpdateAccessConfigRequest() : 
    m_authenticationMode(AuthenticationMode::NOT_SET),
    m_authenticationModeHasBeenSet(false)
{
}

UpdateAccessConfigRequest::UpdateAccessConfigRequest(JsonView jsonValue) : 
    m_authenticationMode(AuthenticationMode::NOT_SET),
    m_authenticationModeHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateAccessConfigRequest& UpdateAccessConfigRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authenticationMode"))
  {
    m_authenticationMode = AuthenticationModeMapper::GetAuthenticationModeForName(jsonValue.GetString("authenticationMode"));

    m_authenticationModeHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateAccessConfigRequest::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationModeHasBeenSet)
  {
   payload.WithString("authenticationMode", AuthenticationModeMapper::GetNameForAuthenticationMode(m_authenticationMode));
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
