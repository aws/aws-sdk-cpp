/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/CustomArtifactConfiguration.h>
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

CustomArtifactConfiguration::CustomArtifactConfiguration() : 
    m_artifactType(ArtifactType::NOT_SET),
    m_artifactTypeHasBeenSet(false),
    m_s3ContentLocationHasBeenSet(false),
    m_mavenReferenceHasBeenSet(false)
{
}

CustomArtifactConfiguration::CustomArtifactConfiguration(JsonView jsonValue) : 
    m_artifactType(ArtifactType::NOT_SET),
    m_artifactTypeHasBeenSet(false),
    m_s3ContentLocationHasBeenSet(false),
    m_mavenReferenceHasBeenSet(false)
{
  *this = jsonValue;
}

CustomArtifactConfiguration& CustomArtifactConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArtifactType"))
  {
    m_artifactType = ArtifactTypeMapper::GetArtifactTypeForName(jsonValue.GetString("ArtifactType"));

    m_artifactTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3ContentLocation"))
  {
    m_s3ContentLocation = jsonValue.GetObject("S3ContentLocation");

    m_s3ContentLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MavenReference"))
  {
    m_mavenReference = jsonValue.GetObject("MavenReference");

    m_mavenReferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomArtifactConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_artifactTypeHasBeenSet)
  {
   payload.WithString("ArtifactType", ArtifactTypeMapper::GetNameForArtifactType(m_artifactType));
  }

  if(m_s3ContentLocationHasBeenSet)
  {
   payload.WithObject("S3ContentLocation", m_s3ContentLocation.Jsonize());

  }

  if(m_mavenReferenceHasBeenSet)
  {
   payload.WithObject("MavenReference", m_mavenReference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
