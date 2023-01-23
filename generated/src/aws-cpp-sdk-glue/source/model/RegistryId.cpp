/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RegistryId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

RegistryId::RegistryId() : 
    m_registryNameHasBeenSet(false),
    m_registryArnHasBeenSet(false)
{
}

RegistryId::RegistryId(JsonView jsonValue) : 
    m_registryNameHasBeenSet(false),
    m_registryArnHasBeenSet(false)
{
  *this = jsonValue;
}

RegistryId& RegistryId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegistryName"))
  {
    m_registryName = jsonValue.GetString("RegistryName");

    m_registryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistryArn"))
  {
    m_registryArn = jsonValue.GetString("RegistryArn");

    m_registryArnHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistryId::Jsonize() const
{
  JsonValue payload;

  if(m_registryNameHasBeenSet)
  {
   payload.WithString("RegistryName", m_registryName);

  }

  if(m_registryArnHasBeenSet)
  {
   payload.WithString("RegistryArn", m_registryArn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
