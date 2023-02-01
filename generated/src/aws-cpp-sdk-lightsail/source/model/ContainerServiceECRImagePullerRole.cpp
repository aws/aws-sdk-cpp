/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServiceECRImagePullerRole.h>
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

ContainerServiceECRImagePullerRole::ContainerServiceECRImagePullerRole() : 
    m_isActive(false),
    m_isActiveHasBeenSet(false),
    m_principalArnHasBeenSet(false)
{
}

ContainerServiceECRImagePullerRole::ContainerServiceECRImagePullerRole(JsonView jsonValue) : 
    m_isActive(false),
    m_isActiveHasBeenSet(false),
    m_principalArnHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerServiceECRImagePullerRole& ContainerServiceECRImagePullerRole::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isActive"))
  {
    m_isActive = jsonValue.GetBool("isActive");

    m_isActiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalArn"))
  {
    m_principalArn = jsonValue.GetString("principalArn");

    m_principalArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerServiceECRImagePullerRole::Jsonize() const
{
  JsonValue payload;

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  if(m_principalArnHasBeenSet)
  {
   payload.WithString("principalArn", m_principalArn);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
