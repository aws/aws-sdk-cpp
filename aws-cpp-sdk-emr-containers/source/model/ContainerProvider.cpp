/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/ContainerProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

ContainerProvider::ContainerProvider() : 
    m_type(ContainerProviderType::NOT_SET),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_infoHasBeenSet(false)
{
}

ContainerProvider::ContainerProvider(JsonView jsonValue) : 
    m_type(ContainerProviderType::NOT_SET),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_infoHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerProvider& ContainerProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ContainerProviderTypeMapper::GetContainerProviderTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("info"))
  {
    m_info = jsonValue.GetObject("info");

    m_infoHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerProvider::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ContainerProviderTypeMapper::GetNameForContainerProviderType(m_type));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_infoHasBeenSet)
  {
   payload.WithObject("info", m_info.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
