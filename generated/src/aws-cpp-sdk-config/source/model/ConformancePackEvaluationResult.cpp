/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConformancePackEvaluationResult.h>
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

ConformancePackEvaluationResult::ConformancePackEvaluationResult() : 
    m_complianceType(ConformancePackComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_evaluationResultIdentifierHasBeenSet(false),
    m_configRuleInvokedTimeHasBeenSet(false),
    m_resultRecordedTimeHasBeenSet(false),
    m_annotationHasBeenSet(false)
{
}

ConformancePackEvaluationResult::ConformancePackEvaluationResult(JsonView jsonValue) : 
    m_complianceType(ConformancePackComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_evaluationResultIdentifierHasBeenSet(false),
    m_configRuleInvokedTimeHasBeenSet(false),
    m_resultRecordedTimeHasBeenSet(false),
    m_annotationHasBeenSet(false)
{
  *this = jsonValue;
}

ConformancePackEvaluationResult& ConformancePackEvaluationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = ConformancePackComplianceTypeMapper::GetConformancePackComplianceTypeForName(jsonValue.GetString("ComplianceType"));

    m_complianceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationResultIdentifier"))
  {
    m_evaluationResultIdentifier = jsonValue.GetObject("EvaluationResultIdentifier");

    m_evaluationResultIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigRuleInvokedTime"))
  {
    m_configRuleInvokedTime = jsonValue.GetDouble("ConfigRuleInvokedTime");

    m_configRuleInvokedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultRecordedTime"))
  {
    m_resultRecordedTime = jsonValue.GetDouble("ResultRecordedTime");

    m_resultRecordedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Annotation"))
  {
    m_annotation = jsonValue.GetString("Annotation");

    m_annotationHasBeenSet = true;
  }

  return *this;
}

JsonValue ConformancePackEvaluationResult::Jsonize() const
{
  JsonValue payload;

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", ConformancePackComplianceTypeMapper::GetNameForConformancePackComplianceType(m_complianceType));
  }

  if(m_evaluationResultIdentifierHasBeenSet)
  {
   payload.WithObject("EvaluationResultIdentifier", m_evaluationResultIdentifier.Jsonize());

  }

  if(m_configRuleInvokedTimeHasBeenSet)
  {
   payload.WithDouble("ConfigRuleInvokedTime", m_configRuleInvokedTime.SecondsWithMSPrecision());
  }

  if(m_resultRecordedTimeHasBeenSet)
  {
   payload.WithDouble("ResultRecordedTime", m_resultRecordedTime.SecondsWithMSPrecision());
  }

  if(m_annotationHasBeenSet)
  {
   payload.WithString("Annotation", m_annotation);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
