/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/EnvironmentFile.h>
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

EnvironmentFile::EnvironmentFile() : 
    m_valueHasBeenSet(false),
    m_type(EnvironmentFileType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

EnvironmentFile::EnvironmentFile(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_type(EnvironmentFileType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentFile& EnvironmentFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = EnvironmentFileTypeMapper::GetEnvironmentFileTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentFile::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", EnvironmentFileTypeMapper::GetNameForEnvironmentFileType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
