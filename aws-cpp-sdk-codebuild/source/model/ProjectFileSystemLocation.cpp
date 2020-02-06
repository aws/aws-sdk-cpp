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

#include <aws/codebuild/model/ProjectFileSystemLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ProjectFileSystemLocation::ProjectFileSystemLocation() : 
    m_type(FileSystemType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_mountPointHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_mountOptionsHasBeenSet(false)
{
}

ProjectFileSystemLocation::ProjectFileSystemLocation(JsonView jsonValue) : 
    m_type(FileSystemType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_mountPointHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_mountOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectFileSystemLocation& ProjectFileSystemLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = FileSystemTypeMapper::GetFileSystemTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mountPoint"))
  {
    m_mountPoint = jsonValue.GetString("mountPoint");

    m_mountPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mountOptions"))
  {
    m_mountOptions = jsonValue.GetString("mountOptions");

    m_mountOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectFileSystemLocation::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FileSystemTypeMapper::GetNameForFileSystemType(m_type));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_mountPointHasBeenSet)
  {
   payload.WithString("mountPoint", m_mountPoint);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_mountOptionsHasBeenSet)
  {
   payload.WithString("mountOptions", m_mountOptions);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
