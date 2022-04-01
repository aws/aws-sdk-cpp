/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationJobOutputConfig.h>
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

RecommendationJobOutputConfig::RecommendationJobOutputConfig() : 
    m_kmsKeyIdHasBeenSet(false),
    m_compiledOutputConfigHasBeenSet(false)
{
}

RecommendationJobOutputConfig::RecommendationJobOutputConfig(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false),
    m_compiledOutputConfigHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationJobOutputConfig& RecommendationJobOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompiledOutputConfig"))
  {
    m_compiledOutputConfig = jsonValue.GetObject("CompiledOutputConfig");

    m_compiledOutputConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationJobOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_compiledOutputConfigHasBeenSet)
  {
   payload.WithObject("CompiledOutputConfig", m_compiledOutputConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
