/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCodeBuildProjectArtifactsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCodeBuildProjectArtifactsDetails::AwsCodeBuildProjectArtifactsDetails() : 
    m_artifactIdentifierHasBeenSet(false),
    m_encryptionDisabled(false),
    m_encryptionDisabledHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceTypeHasBeenSet(false),
    m_overrideArtifactName(false),
    m_overrideArtifactNameHasBeenSet(false),
    m_packagingHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsCodeBuildProjectArtifactsDetails::AwsCodeBuildProjectArtifactsDetails(JsonView jsonValue) : 
    m_artifactIdentifierHasBeenSet(false),
    m_encryptionDisabled(false),
    m_encryptionDisabledHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceTypeHasBeenSet(false),
    m_overrideArtifactName(false),
    m_overrideArtifactNameHasBeenSet(false),
    m_packagingHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCodeBuildProjectArtifactsDetails& AwsCodeBuildProjectArtifactsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArtifactIdentifier"))
  {
    m_artifactIdentifier = jsonValue.GetString("ArtifactIdentifier");

    m_artifactIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionDisabled"))
  {
    m_encryptionDisabled = jsonValue.GetBool("EncryptionDisabled");

    m_encryptionDisabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NamespaceType"))
  {
    m_namespaceType = jsonValue.GetString("NamespaceType");

    m_namespaceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverrideArtifactName"))
  {
    m_overrideArtifactName = jsonValue.GetBool("OverrideArtifactName");

    m_overrideArtifactNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Packaging"))
  {
    m_packaging = jsonValue.GetString("Packaging");

    m_packagingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCodeBuildProjectArtifactsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_artifactIdentifierHasBeenSet)
  {
   payload.WithString("ArtifactIdentifier", m_artifactIdentifier);

  }

  if(m_encryptionDisabledHasBeenSet)
  {
   payload.WithBool("EncryptionDisabled", m_encryptionDisabled);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_namespaceTypeHasBeenSet)
  {
   payload.WithString("NamespaceType", m_namespaceType);

  }

  if(m_overrideArtifactNameHasBeenSet)
  {
   payload.WithBool("OverrideArtifactName", m_overrideArtifactName);

  }

  if(m_packagingHasBeenSet)
  {
   payload.WithString("Packaging", m_packaging);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
