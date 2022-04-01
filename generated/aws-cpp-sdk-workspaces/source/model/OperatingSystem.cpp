/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/OperatingSystem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

OperatingSystem::OperatingSystem() : 
    m_type(OperatingSystemType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

OperatingSystem::OperatingSystem(JsonView jsonValue) : 
    m_type(OperatingSystemType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

OperatingSystem& OperatingSystem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = OperatingSystemTypeMapper::GetOperatingSystemTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue OperatingSystem::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", OperatingSystemTypeMapper::GetNameForOperatingSystemType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
