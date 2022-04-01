/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ArtifactSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ArtifactSummary::ArtifactSummary() : 
    m_artifactArnHasBeenSet(false),
    m_artifactNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_artifactTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

ArtifactSummary::ArtifactSummary(JsonView jsonValue) : 
    m_artifactArnHasBeenSet(false),
    m_artifactNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_artifactTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ArtifactSummary& ArtifactSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArtifactArn"))
  {
    m_artifactArn = jsonValue.GetString("ArtifactArn");

    m_artifactArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArtifactName"))
  {
    m_artifactName = jsonValue.GetString("ArtifactName");

    m_artifactNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArtifactType"))
  {
    m_artifactType = jsonValue.GetString("ArtifactType");

    m_artifactTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ArtifactSummary::Jsonize() const
{
  JsonValue payload;

  if(m_artifactArnHasBeenSet)
  {
   payload.WithString("ArtifactArn", m_artifactArn);

  }

  if(m_artifactNameHasBeenSet)
  {
   payload.WithString("ArtifactName", m_artifactName);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_artifactTypeHasBeenSet)
  {
   payload.WithString("ArtifactType", m_artifactType);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
