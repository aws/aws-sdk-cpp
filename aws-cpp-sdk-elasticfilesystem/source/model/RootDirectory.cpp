/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/RootDirectory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

RootDirectory::RootDirectory() : 
    m_pathHasBeenSet(false),
    m_creationInfoHasBeenSet(false)
{
}

RootDirectory::RootDirectory(JsonView jsonValue) : 
    m_pathHasBeenSet(false),
    m_creationInfoHasBeenSet(false)
{
  *this = jsonValue;
}

RootDirectory& RootDirectory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationInfo"))
  {
    m_creationInfo = jsonValue.GetObject("CreationInfo");

    m_creationInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue RootDirectory::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_creationInfoHasBeenSet)
  {
   payload.WithObject("CreationInfo", m_creationInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
