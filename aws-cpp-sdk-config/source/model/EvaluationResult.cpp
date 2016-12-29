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
#include <aws/config/model/EvaluationResult.h>
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

EvaluationResult::EvaluationResult() : 
    m_evaluationResultIdentifierHasBeenSet(false),
    m_complianceType(ComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_resultRecordedTimeHasBeenSet(false),
    m_configRuleInvokedTimeHasBeenSet(false),
    m_annotationHasBeenSet(false),
    m_resultTokenHasBeenSet(false)
{
}

EvaluationResult::EvaluationResult(const JsonValue& jsonValue) : 
    m_evaluationResultIdentifierHasBeenSet(false),
    m_complianceType(ComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_resultRecordedTimeHasBeenSet(false),
    m_configRuleInvokedTimeHasBeenSet(false),
    m_annotationHasBeenSet(false),
    m_resultTokenHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationResult& EvaluationResult::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EvaluationResultIdentifier"))
  {
    m_evaluationResultIdentifier = jsonValue.GetObject("EvaluationResultIdentifier");

    m_evaluationResultIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = ComplianceTypeMapper::GetComplianceTypeForName(jsonValue.GetString("ComplianceType"));

    m_complianceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultRecordedTime"))
  {
    m_resultRecordedTime = jsonValue.GetDouble("ResultRecordedTime");

    m_resultRecordedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigRuleInvokedTime"))
  {
    m_configRuleInvokedTime = jsonValue.GetDouble("ConfigRuleInvokedTime");

    m_configRuleInvokedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Annotation"))
  {
    m_annotation = jsonValue.GetString("Annotation");

    m_annotationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultToken"))
  {
    m_resultToken = jsonValue.GetString("ResultToken");

    m_resultTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationResult::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationResultIdentifierHasBeenSet)
  {
   payload.WithObject("EvaluationResultIdentifier", m_evaluationResultIdentifier.Jsonize());

  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", ComplianceTypeMapper::GetNameForComplianceType(m_complianceType));
  }

  if(m_resultRecordedTimeHasBeenSet)
  {
   payload.WithDouble("ResultRecordedTime", m_resultRecordedTime.SecondsWithMSPrecision());
  }

  if(m_configRuleInvokedTimeHasBeenSet)
  {
   payload.WithDouble("ConfigRuleInvokedTime", m_configRuleInvokedTime.SecondsWithMSPrecision());
  }

  if(m_annotationHasBeenSet)
  {
   payload.WithString("Annotation", m_annotation);

  }

  if(m_resultTokenHasBeenSet)
  {
   payload.WithString("ResultToken", m_resultToken);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws