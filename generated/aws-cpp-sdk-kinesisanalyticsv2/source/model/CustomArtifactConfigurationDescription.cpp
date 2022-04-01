/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/CustomArtifactConfigurationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

CustomArtifactConfigurationDescription::CustomArtifactConfigurationDescription() : 
    m_artifactType(ArtifactType::NOT_SET),
    m_artifactTypeHasBeenSet(false),
    m_s3ContentLocationDescriptionHasBeenSet(false),
    m_mavenReferenceDescriptionHasBeenSet(false)
{
}

CustomArtifactConfigurationDescription::CustomArtifactConfigurationDescription(JsonView jsonValue) : 
    m_artifactType(ArtifactType::NOT_SET),
    m_artifactTypeHasBeenSet(false),
    m_s3ContentLocationDescriptionHasBeenSet(false),
    m_mavenReferenceDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

CustomArtifactConfigurationDescription& CustomArtifactConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArtifactType"))
  {
    m_artifactType = ArtifactTypeMapper::GetArtifactTypeForName(jsonValue.GetString("ArtifactType"));

    m_artifactTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3ContentLocationDescription"))
  {
    m_s3ContentLocationDescription = jsonValue.GetObject("S3ContentLocationDescription");

    m_s3ContentLocationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MavenReferenceDescription"))
  {
    m_mavenReferenceDescription = jsonValue.GetObject("MavenReferenceDescription");

    m_mavenReferenceDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomArtifactConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_artifactTypeHasBeenSet)
  {
   payload.WithString("ArtifactType", ArtifactTypeMapper::GetNameForArtifactType(m_artifactType));
  }

  if(m_s3ContentLocationDescriptionHasBeenSet)
  {
   payload.WithObject("S3ContentLocationDescription", m_s3ContentLocationDescription.Jsonize());

  }

  if(m_mavenReferenceDescriptionHasBeenSet)
  {
   payload.WithObject("MavenReferenceDescription", m_mavenReferenceDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
