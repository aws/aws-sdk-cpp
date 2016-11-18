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
#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/EvaluationResultIdentifier.h>
#include <aws/config/model/ComplianceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The details of an AWS Config evaluation. Provides the AWS resource that was
   * evaluated, the compliance of the resource, related timestamps, and supplementary
   * information.</p>
   */
  class AWS_CONFIGSERVICE_API EvaluationResult
  {
  public:
    EvaluationResult();
    EvaluationResult(const Aws::Utils::Json::JsonValue& jsonValue);
    EvaluationResult& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline const EvaluationResultIdentifier& GetEvaluationResultIdentifier() const{ return m_evaluationResultIdentifier; }

    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline void SetEvaluationResultIdentifier(const EvaluationResultIdentifier& value) { m_evaluationResultIdentifierHasBeenSet = true; m_evaluationResultIdentifier = value; }

    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline void SetEvaluationResultIdentifier(EvaluationResultIdentifier&& value) { m_evaluationResultIdentifierHasBeenSet = true; m_evaluationResultIdentifier = value; }

    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline EvaluationResult& WithEvaluationResultIdentifier(const EvaluationResultIdentifier& value) { SetEvaluationResultIdentifier(value); return *this;}

    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline EvaluationResult& WithEvaluationResultIdentifier(EvaluationResultIdentifier&& value) { SetEvaluationResultIdentifier(value); return *this;}

    /**
     * <p>Indicates whether the AWS resource complies with the AWS Config rule that
     * evaluated it.</p> <p>For the <code>EvaluationResult</code> data type, AWS Config
     * supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. AWS Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for the <code>EvaluationResult</code> data
     * type.</p>
     */
    inline const ComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>Indicates whether the AWS resource complies with the AWS Config rule that
     * evaluated it.</p> <p>For the <code>EvaluationResult</code> data type, AWS Config
     * supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. AWS Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for the <code>EvaluationResult</code> data
     * type.</p>
     */
    inline void SetComplianceType(const ComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>Indicates whether the AWS resource complies with the AWS Config rule that
     * evaluated it.</p> <p>For the <code>EvaluationResult</code> data type, AWS Config
     * supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. AWS Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for the <code>EvaluationResult</code> data
     * type.</p>
     */
    inline void SetComplianceType(ComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>Indicates whether the AWS resource complies with the AWS Config rule that
     * evaluated it.</p> <p>For the <code>EvaluationResult</code> data type, AWS Config
     * supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. AWS Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for the <code>EvaluationResult</code> data
     * type.</p>
     */
    inline EvaluationResult& WithComplianceType(const ComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>Indicates whether the AWS resource complies with the AWS Config rule that
     * evaluated it.</p> <p>For the <code>EvaluationResult</code> data type, AWS Config
     * supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. AWS Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for the <code>EvaluationResult</code> data
     * type.</p>
     */
    inline EvaluationResult& WithComplianceType(ComplianceType&& value) { SetComplianceType(value); return *this;}

    /**
     * <p>The time when AWS Config recorded the evaluation result.</p>
     */
    inline const Aws::Utils::DateTime& GetResultRecordedTime() const{ return m_resultRecordedTime; }

    /**
     * <p>The time when AWS Config recorded the evaluation result.</p>
     */
    inline void SetResultRecordedTime(const Aws::Utils::DateTime& value) { m_resultRecordedTimeHasBeenSet = true; m_resultRecordedTime = value; }

    /**
     * <p>The time when AWS Config recorded the evaluation result.</p>
     */
    inline void SetResultRecordedTime(Aws::Utils::DateTime&& value) { m_resultRecordedTimeHasBeenSet = true; m_resultRecordedTime = value; }

    /**
     * <p>The time when AWS Config recorded the evaluation result.</p>
     */
    inline EvaluationResult& WithResultRecordedTime(const Aws::Utils::DateTime& value) { SetResultRecordedTime(value); return *this;}

    /**
     * <p>The time when AWS Config recorded the evaluation result.</p>
     */
    inline EvaluationResult& WithResultRecordedTime(Aws::Utils::DateTime&& value) { SetResultRecordedTime(value); return *this;}

    /**
     * <p>The time when the AWS Config rule evaluated the AWS resource.</p>
     */
    inline const Aws::Utils::DateTime& GetConfigRuleInvokedTime() const{ return m_configRuleInvokedTime; }

    /**
     * <p>The time when the AWS Config rule evaluated the AWS resource.</p>
     */
    inline void SetConfigRuleInvokedTime(const Aws::Utils::DateTime& value) { m_configRuleInvokedTimeHasBeenSet = true; m_configRuleInvokedTime = value; }

    /**
     * <p>The time when the AWS Config rule evaluated the AWS resource.</p>
     */
    inline void SetConfigRuleInvokedTime(Aws::Utils::DateTime&& value) { m_configRuleInvokedTimeHasBeenSet = true; m_configRuleInvokedTime = value; }

    /**
     * <p>The time when the AWS Config rule evaluated the AWS resource.</p>
     */
    inline EvaluationResult& WithConfigRuleInvokedTime(const Aws::Utils::DateTime& value) { SetConfigRuleInvokedTime(value); return *this;}

    /**
     * <p>The time when the AWS Config rule evaluated the AWS resource.</p>
     */
    inline EvaluationResult& WithConfigRuleInvokedTime(Aws::Utils::DateTime&& value) { SetConfigRuleInvokedTime(value); return *this;}

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline const Aws::String& GetAnnotation() const{ return m_annotation; }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline void SetAnnotation(const Aws::String& value) { m_annotationHasBeenSet = true; m_annotation = value; }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline void SetAnnotation(Aws::String&& value) { m_annotationHasBeenSet = true; m_annotation = value; }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline void SetAnnotation(const char* value) { m_annotationHasBeenSet = true; m_annotation.assign(value); }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline EvaluationResult& WithAnnotation(const Aws::String& value) { SetAnnotation(value); return *this;}

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline EvaluationResult& WithAnnotation(Aws::String&& value) { SetAnnotation(value); return *this;}

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline EvaluationResult& WithAnnotation(const char* value) { SetAnnotation(value); return *this;}

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule. The
     * token identifies the rule, the AWS resource being evaluated, and the event that
     * triggered the evaluation.</p>
     */
    inline const Aws::String& GetResultToken() const{ return m_resultToken; }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule. The
     * token identifies the rule, the AWS resource being evaluated, and the event that
     * triggered the evaluation.</p>
     */
    inline void SetResultToken(const Aws::String& value) { m_resultTokenHasBeenSet = true; m_resultToken = value; }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule. The
     * token identifies the rule, the AWS resource being evaluated, and the event that
     * triggered the evaluation.</p>
     */
    inline void SetResultToken(Aws::String&& value) { m_resultTokenHasBeenSet = true; m_resultToken = value; }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule. The
     * token identifies the rule, the AWS resource being evaluated, and the event that
     * triggered the evaluation.</p>
     */
    inline void SetResultToken(const char* value) { m_resultTokenHasBeenSet = true; m_resultToken.assign(value); }

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule. The
     * token identifies the rule, the AWS resource being evaluated, and the event that
     * triggered the evaluation.</p>
     */
    inline EvaluationResult& WithResultToken(const Aws::String& value) { SetResultToken(value); return *this;}

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule. The
     * token identifies the rule, the AWS resource being evaluated, and the event that
     * triggered the evaluation.</p>
     */
    inline EvaluationResult& WithResultToken(Aws::String&& value) { SetResultToken(value); return *this;}

    /**
     * <p>An encrypted token that associates an evaluation with an AWS Config rule. The
     * token identifies the rule, the AWS resource being evaluated, and the event that
     * triggered the evaluation.</p>
     */
    inline EvaluationResult& WithResultToken(const char* value) { SetResultToken(value); return *this;}

  private:
    EvaluationResultIdentifier m_evaluationResultIdentifier;
    bool m_evaluationResultIdentifierHasBeenSet;
    ComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet;
    Aws::Utils::DateTime m_resultRecordedTime;
    bool m_resultRecordedTimeHasBeenSet;
    Aws::Utils::DateTime m_configRuleInvokedTime;
    bool m_configRuleInvokedTimeHasBeenSet;
    Aws::String m_annotation;
    bool m_annotationHasBeenSet;
    Aws::String m_resultToken;
    bool m_resultTokenHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
