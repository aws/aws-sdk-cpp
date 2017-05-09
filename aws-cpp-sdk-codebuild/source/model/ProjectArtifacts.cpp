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

#include <aws/codebuild/model/ProjectArtifacts.h>
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

ProjectArtifacts::ProjectArtifacts() : 
    m_type(ArtifactsType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_namespaceType(ArtifactNamespace::NOT_SET),
    m_namespaceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_packaging(ArtifactPackaging::NOT_SET),
    m_packagingHasBeenSet(false)
{
}

ProjectArtifacts::ProjectArtifacts(const JsonValue& jsonValue) : 
    m_type(ArtifactsType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_namespaceType(ArtifactNamespace::NOT_SET),
    m_namespaceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_packaging(ArtifactPackaging::NOT_SET),
    m_packagingHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectArtifacts& ProjectArtifacts::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ArtifactsTypeMapper::GetArtifactsTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaceType"))
  {
    m_namespaceType = ArtifactNamespaceMapper::GetArtifactNamespaceForName(jsonValue.GetString("namespaceType"));

    m_namespaceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packaging"))
  {
    m_packaging = ArtifactPackagingMapper::GetArtifactPackagingForName(jsonValue.GetString("packaging"));

    m_packagingHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectArtifacts::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ArtifactsTypeMapper::GetNameForArtifactsType(m_type));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_namespaceTypeHasBeenSet)
  {
   payload.WithString("namespaceType", ArtifactNamespaceMapper::GetNameForArtifactNamespace(m_namespaceType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_packagingHasBeenSet)
  {
   payload.WithString("packaging", ArtifactPackagingMapper::GetNameForArtifactPackaging(m_packaging));
  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws