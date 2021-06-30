/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_packagingHasBeenSet(false),
    m_overrideArtifactName(false),
    m_overrideArtifactNameHasBeenSet(false),
    m_encryptionDisabled(false),
    m_encryptionDisabledHasBeenSet(false),
    m_artifactIdentifierHasBeenSet(false)
{
}

ProjectArtifacts::ProjectArtifacts(JsonView jsonValue) : 
    m_type(ArtifactsType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_namespaceType(ArtifactNamespace::NOT_SET),
    m_namespaceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_packaging(ArtifactPackaging::NOT_SET),
    m_packagingHasBeenSet(false),
    m_overrideArtifactName(false),
    m_overrideArtifactNameHasBeenSet(false),
    m_encryptionDisabled(false),
    m_encryptionDisabledHasBeenSet(false),
    m_artifactIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectArtifacts& ProjectArtifacts::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("overrideArtifactName"))
  {
    m_overrideArtifactName = jsonValue.GetBool("overrideArtifactName");

    m_overrideArtifactNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionDisabled"))
  {
    m_encryptionDisabled = jsonValue.GetBool("encryptionDisabled");

    m_encryptionDisabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("artifactIdentifier"))
  {
    m_artifactIdentifier = jsonValue.GetString("artifactIdentifier");

    m_artifactIdentifierHasBeenSet = true;
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

  if(m_overrideArtifactNameHasBeenSet)
  {
   payload.WithBool("overrideArtifactName", m_overrideArtifactName);

  }

  if(m_encryptionDisabledHasBeenSet)
  {
   payload.WithBool("encryptionDisabled", m_encryptionDisabled);

  }

  if(m_artifactIdentifierHasBeenSet)
  {
   payload.WithString("artifactIdentifier", m_artifactIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
