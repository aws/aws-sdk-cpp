/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServiceECRImagePullerRoleRequest.h>
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

ContainerServiceECRImagePullerRoleRequest::ContainerServiceECRImagePullerRoleRequest() : 
    m_isActive(false),
    m_isActiveHasBeenSet(false)
{
}

ContainerServiceECRImagePullerRoleRequest::ContainerServiceECRImagePullerRoleRequest(JsonView jsonValue) : 
    m_isActive(false),
    m_isActiveHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerServiceECRImagePullerRoleRequest& ContainerServiceECRImagePullerRoleRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isActive"))
  {
    m_isActive = jsonValue.GetBool("isActive");

    m_isActiveHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerServiceECRImagePullerRoleRequest::Jsonize() const
{
  JsonValue payload;

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
