/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
