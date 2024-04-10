/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SubmitAutoEvaluationActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

SubmitAutoEvaluationActionDefinition::SubmitAutoEvaluationActionDefinition() : 
    m_evaluationFormIdHasBeenSet(false)
{
}

SubmitAutoEvaluationActionDefinition::SubmitAutoEvaluationActionDefinition(JsonView jsonValue) : 
    m_evaluationFormIdHasBeenSet(false)
{
  *this = jsonValue;
}

SubmitAutoEvaluationActionDefinition& SubmitAutoEvaluationActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationFormId"))
  {
    m_evaluationFormId = jsonValue.GetString("EvaluationFormId");

    m_evaluationFormIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SubmitAutoEvaluationActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationFormIdHasBeenSet)
  {
   payload.WithString("EvaluationFormId", m_evaluationFormId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
