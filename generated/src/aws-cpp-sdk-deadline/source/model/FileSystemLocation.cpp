/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/FileSystemLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

FileSystemLocation::FileSystemLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

FileSystemLocation& FileSystemLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = FileSystemLocationTypeMapper::GetFileSystemLocationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue FileSystemLocation::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FileSystemLocationTypeMapper::GetNameForFileSystemLocationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
