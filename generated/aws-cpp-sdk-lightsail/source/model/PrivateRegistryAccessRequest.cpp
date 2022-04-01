/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/PrivateRegistryAccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

PrivateRegistryAccessRequest::PrivateRegistryAccessRequest() : 
    m_ecrImagePullerRoleHasBeenSet(false)
{
}

PrivateRegistryAccessRequest::PrivateRegistryAccessRequest(JsonView jsonValue) : 
    m_ecrImagePullerRoleHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateRegistryAccessRequest& PrivateRegistryAccessRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ecrImagePullerRole"))
  {
    m_ecrImagePullerRole = jsonValue.GetObject("ecrImagePullerRole");

    m_ecrImagePullerRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivateRegistryAccessRequest::Jsonize() const
{
  JsonValue payload;

  if(m_ecrImagePullerRoleHasBeenSet)
  {
   payload.WithObject("ecrImagePullerRole", m_ecrImagePullerRole.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
