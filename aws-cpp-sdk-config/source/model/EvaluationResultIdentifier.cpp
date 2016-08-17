/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_orderingTimestampHasBeenSet(false)
{
}

EvaluationResultIdentifier::EvaluationResultIdentifier(const JsonValue& jsonValue) : 
    m_evaluationResultQualifierHasBeenSet(false),
    m_orderingTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationResultIdentifier& EvaluationResultIdentifier::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws