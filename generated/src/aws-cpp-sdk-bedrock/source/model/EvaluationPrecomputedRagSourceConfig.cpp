/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationPrecomputedRagSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

EvaluationPrecomputedRagSourceConfig::EvaluationPrecomputedRagSourceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EvaluationPrecomputedRagSourceConfig& EvaluationPrecomputedRagSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("retrieveSourceConfig"))
  {
    m_retrieveSourceConfig = jsonValue.GetObject("retrieveSourceConfig");
    m_retrieveSourceConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retrieveAndGenerateSourceConfig"))
  {
    m_retrieveAndGenerateSourceConfig = jsonValue.GetObject("retrieveAndGenerateSourceConfig");
    m_retrieveAndGenerateSourceConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationPrecomputedRagSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_retrieveSourceConfigHasBeenSet)
  {
   payload.WithObject("retrieveSourceConfig", m_retrieveSourceConfig.Jsonize());

  }

  if(m_retrieveAndGenerateSourceConfigHasBeenSet)
  {
   payload.WithObject("retrieveAndGenerateSourceConfig", m_retrieveAndGenerateSourceConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
