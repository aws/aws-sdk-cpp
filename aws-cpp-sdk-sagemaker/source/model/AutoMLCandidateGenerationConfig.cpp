/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLCandidateGenerationConfig.h>
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

AutoMLCandidateGenerationConfig::AutoMLCandidateGenerationConfig() : 
    m_featureSpecificationS3UriHasBeenSet(false)
{
}

AutoMLCandidateGenerationConfig::AutoMLCandidateGenerationConfig(JsonView jsonValue) : 
    m_featureSpecificationS3UriHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLCandidateGenerationConfig& AutoMLCandidateGenerationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeatureSpecificationS3Uri"))
  {
    m_featureSpecificationS3Uri = jsonValue.GetString("FeatureSpecificationS3Uri");

    m_featureSpecificationS3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLCandidateGenerationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_featureSpecificationS3UriHasBeenSet)
  {
   payload.WithString("FeatureSpecificationS3Uri", m_featureSpecificationS3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
