/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationPrecomputedRetrieveAndGenerateSourceConfig.h>
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

EvaluationPrecomputedRetrieveAndGenerateSourceConfig::EvaluationPrecomputedRetrieveAndGenerateSourceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EvaluationPrecomputedRetrieveAndGenerateSourceConfig& EvaluationPrecomputedRetrieveAndGenerateSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ragSourceIdentifier"))
  {
    m_ragSourceIdentifier = jsonValue.GetString("ragSourceIdentifier");
    m_ragSourceIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationPrecomputedRetrieveAndGenerateSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_ragSourceIdentifierHasBeenSet)
  {
   payload.WithString("ragSourceIdentifier", m_ragSourceIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
