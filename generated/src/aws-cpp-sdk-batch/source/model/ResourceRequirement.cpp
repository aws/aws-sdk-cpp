/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ResourceRequirement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ResourceRequirement::ResourceRequirement() : 
    m_valueHasBeenSet(false),
    m_type(ResourceType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ResourceRequirement::ResourceRequirement(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_type(ResourceType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceRequirement& ResourceRequirement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceRequirement::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ResourceTypeMapper::GetNameForResourceType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
