/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CandidateProperties.h>
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

CandidateProperties::CandidateProperties() : 
    m_candidateArtifactLocationsHasBeenSet(false)
{
}

CandidateProperties::CandidateProperties(JsonView jsonValue) : 
    m_candidateArtifactLocationsHasBeenSet(false)
{
  *this = jsonValue;
}

CandidateProperties& CandidateProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CandidateArtifactLocations"))
  {
    m_candidateArtifactLocations = jsonValue.GetObject("CandidateArtifactLocations");

    m_candidateArtifactLocationsHasBeenSet = true;
  }

  return *this;
}

JsonValue CandidateProperties::Jsonize() const
{
  JsonValue payload;

  if(m_candidateArtifactLocationsHasBeenSet)
  {
   payload.WithObject("CandidateArtifactLocations", m_candidateArtifactLocations.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
