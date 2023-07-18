/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AsyncInferenceClientConfig.h>
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

AsyncInferenceClientConfig::AsyncInferenceClientConfig() : 
    m_maxConcurrentInvocationsPerInstance(0),
    m_maxConcurrentInvocationsPerInstanceHasBeenSet(false)
{
}

AsyncInferenceClientConfig::AsyncInferenceClientConfig(JsonView jsonValue) : 
    m_maxConcurrentInvocationsPerInstance(0),
    m_maxConcurrentInvocationsPerInstanceHasBeenSet(false)
{
  *this = jsonValue;
}

AsyncInferenceClientConfig& AsyncInferenceClientConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxConcurrentInvocationsPerInstance"))
  {
    m_maxConcurrentInvocationsPerInstance = jsonValue.GetInteger("MaxConcurrentInvocationsPerInstance");

    m_maxConcurrentInvocationsPerInstanceHasBeenSet = true;
  }

  return *this;
}

JsonValue AsyncInferenceClientConfig::Jsonize() const
{
  JsonValue payload;

  if(m_maxConcurrentInvocationsPerInstanceHasBeenSet)
  {
   payload.WithInteger("MaxConcurrentInvocationsPerInstance", m_maxConcurrentInvocationsPerInstance);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
