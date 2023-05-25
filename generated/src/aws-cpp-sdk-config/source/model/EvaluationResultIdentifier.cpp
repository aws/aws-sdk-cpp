/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/EvaluationResultIdentifier.h>
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

EvaluationResultIdentifier::EvaluationResultIdentifier() : 
    m_evaluationResultQualifierHasBeenSet(false),
    m_orderingTimestampHasBeenSet(false),
    m_resourceEvaluationIdHasBeenSet(false)
{
}

EvaluationResultIdentifier::EvaluationResultIdentifier(JsonView jsonValue) : 
    m_evaluationResultQualifierHasBeenSet(false),
    m_orderingTimestampHasBeenSet(false),
    m_resourceEvaluationIdHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationResultIdentifier& EvaluationResultIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationResultQualifier"))
  {
    m_evaluationResultQualifier = jsonValue.GetObject("EvaluationResultQualifier");

    m_evaluationResultQualifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrderingTimestamp"))
  {
    m_orderingTimestamp = jsonValue.GetDouble("OrderingTimestamp");

    m_orderingTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceEvaluationId"))
  {
    m_resourceEvaluationId = jsonValue.GetString("ResourceEvaluationId");

    m_resourceEvaluationIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationResultIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationResultQualifierHasBeenSet)
  {
   payload.WithObject("EvaluationResultQualifier", m_evaluationResultQualifier.Jsonize());

  }

  if(m_orderingTimestampHasBeenSet)
  {
   payload.WithDouble("OrderingTimestamp", m_orderingTimestamp.SecondsWithMSPrecision());
  }

  if(m_resourceEvaluationIdHasBeenSet)
  {
   payload.WithString("ResourceEvaluationId", m_resourceEvaluationId);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
