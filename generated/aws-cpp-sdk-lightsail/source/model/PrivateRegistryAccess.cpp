/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/PrivateRegistryAccess.h>
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

PrivateRegistryAccess::PrivateRegistryAccess() : 
    m_ecrImagePullerRoleHasBeenSet(false)
{
}

PrivateRegistryAccess::PrivateRegistryAccess(JsonView jsonValue) : 
    m_ecrImagePullerRoleHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateRegistryAccess& PrivateRegistryAccess::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ecrImagePullerRole"))
  {
    m_ecrImagePullerRole = jsonValue.GetObject("ecrImagePullerRole");

    m_ecrImagePullerRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivateRegistryAccess::Jsonize() const
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
