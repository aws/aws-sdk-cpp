/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/EvaluationContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

EvaluationContext::EvaluationContext() : 
    m_evaluationContextIdentifierHasBeenSet(false)
{
}

EvaluationContext::EvaluationContext(JsonView jsonValue) : 
    m_evaluationContextIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationContext& EvaluationContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationContextIdentifier"))
  {
    m_evaluationContextIdentifier = jsonValue.GetString("EvaluationContextIdentifier");

    m_evaluationContextIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationContext::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationContextIdentifierHasBeenSet)
  {
   payload.WithString("EvaluationContextIdentifier", m_evaluationContextIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
