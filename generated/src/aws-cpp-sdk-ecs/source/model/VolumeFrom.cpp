/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/VolumeFrom.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

VolumeFrom::VolumeFrom() : 
    m_sourceContainerHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false)
{
}

VolumeFrom::VolumeFrom(JsonView jsonValue) : 
    m_sourceContainerHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeFrom& VolumeFrom::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceContainer"))
  {
    m_sourceContainer = jsonValue.GetString("sourceContainer");

    m_sourceContainerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readOnly"))
  {
    m_readOnly = jsonValue.GetBool("readOnly");

    m_readOnlyHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeFrom::Jsonize() const
{
  JsonValue payload;

  if(m_sourceContainerHasBeenSet)
  {
   payload.WithString("sourceContainer", m_sourceContainer);

  }

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("readOnly", m_readOnly);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
