/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/MavenReference.h>
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

MavenReference::MavenReference() : 
    m_groupIdHasBeenSet(false),
    m_artifactIdHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

MavenReference::MavenReference(JsonView jsonValue) : 
    m_groupIdHasBeenSet(false),
    m_artifactIdHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

MavenReference& MavenReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArtifactId"))
  {
    m_artifactId = jsonValue.GetString("ArtifactId");

    m_artifactIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue MavenReference::Jsonize() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_artifactIdHasBeenSet)
  {
   payload.WithString("ArtifactId", m_artifactId);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
