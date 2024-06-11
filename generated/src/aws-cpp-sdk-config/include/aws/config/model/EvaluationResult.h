/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/EvaluationResultIdentifier.h>
#include <aws/config/model/ComplianceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The details of an Config evaluation. Provides the Amazon Web Services
   * resource that was evaluated, the compliance of the resource, related time
   * stamps, and supplementary information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/EvaluationResult">AWS
   * API Reference</a></p>
   */
  class EvaluationResult
  {
  public:
    AWS_CONFIGSERVICE_API EvaluationResult();
    AWS_CONFIGSERVICE_API EvaluationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API EvaluationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline const EvaluationResultIdentifier& GetEvaluationResultIdentifier() const{ return m_evaluationResultIdentifier; }
    inline bool EvaluationResultIdentifierHasBeenSet() const { return m_evaluationResultIdentifierHasBeenSet; }
    inline void SetEvaluationResultIdentifier(const EvaluationResultIdentifier& value) { m_evaluationResultIdentifierHasBeenSet = true; m_evaluationResultIdentifier = value; }
    inline void SetEvaluationResultIdentifier(EvaluationResultIdentifier&& value) { m_evaluationResultIdentifierHasBeenSet = true; m_evaluationResultIdentifier = std::move(value); }
    inline EvaluationResult& WithEvaluationResultIdentifier(const EvaluationResultIdentifier& value) { SetEvaluationResultIdentifier(value); return *this;}
    inline EvaluationResult& WithEvaluationResultIdentifier(EvaluationResultIdentifier&& value) { SetEvaluationResultIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Amazon Web Services resource complies with the Config
     * rule that evaluated it.</p> <p>For the <code>EvaluationResult</code> data type,
     * Config supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for the <code>EvaluationResult</code> data
     * type.</p>
     */
    inline const ComplianceType& GetComplianceType() const{ return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(const ComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline void SetComplianceType(ComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }
    inline EvaluationResult& WithComplianceType(const ComplianceType& value) { SetComplianceType(value); return *this;}
    inline EvaluationResult& WithComplianceType(ComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when Config recorded the evaluation result.</p>
     */
    inline const Aws::Utils::DateTime& GetResultRecordedTime() const{ return m_resultRecordedTime; }
    inline bool ResultRecordedTimeHasBeenSet() const { return m_resultRecordedTimeHasBeenSet; }
    inline void SetResultRecordedTime(const Aws::Utils::DateTime& value) { m_resultRecordedTimeHasBeenSet = true; m_resultRecordedTime = value; }
    inline void SetResultRecordedTime(Aws::Utils::DateTime&& value) { m_resultRecordedTimeHasBeenSet = true; m_resultRecordedTime = std::move(value); }
    inline EvaluationResult& WithResultRecordedTime(const Aws::Utils::DateTime& value) { SetResultRecordedTime(value); return *this;}
    inline EvaluationResult& WithResultRecordedTime(Aws::Utils::DateTime&& value) { SetResultRecordedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Config rule evaluated the Amazon Web Services resource.</p>
     */
    inline const Aws::Utils::DateTime& GetConfigRuleInvokedTime() const{ return m_configRuleInvokedTime; }
    inline bool ConfigRuleInvokedTimeHasBeenSet() const { return m_configRuleInvokedTimeHasBeenSet; }
    inline void SetConfigRuleInvokedTime(const Aws::Utils::DateTime& value) { m_configRuleInvokedTimeHasBeenSet = true; m_configRuleInvokedTime = value; }
    inline void SetConfigRuleInvokedTime(Aws::Utils::DateTime&& value) { m_configRuleInvokedTimeHasBeenSet = true; m_configRuleInvokedTime = std::move(value); }
    inline EvaluationResult& WithConfigRuleInvokedTime(const Aws::Utils::DateTime& value) { SetConfigRuleInvokedTime(value); return *this;}
    inline EvaluationResult& WithConfigRuleInvokedTime(Aws::Utils::DateTime&& value) { SetConfigRuleInvokedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline const Aws::String& GetAnnotation() const{ return m_annotation; }
    inline bool AnnotationHasBeenSet() const { return m_annotationHasBeenSet; }
    inline void SetAnnotation(const Aws::String& value) { m_annotationHasBeenSet = true; m_annotation = value; }
    inline void SetAnnotation(Aws::String&& value) { m_annotationHasBeenSet = true; m_annotation = std::move(value); }
    inline void SetAnnotation(const char* value) { m_annotationHasBeenSet = true; m_annotation.assign(value); }
    inline EvaluationResult& WithAnnotation(const Aws::String& value) { SetAnnotation(value); return *this;}
    inline EvaluationResult& WithAnnotation(Aws::String&& value) { SetAnnotation(std::move(value)); return *this;}
    inline EvaluationResult& WithAnnotation(const char* value) { SetAnnotation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encrypted token that associates an evaluation with an Config rule. The
     * token identifies the rule, the Amazon Web Services resource being evaluated, and
     * the event that triggered the evaluation.</p>
     */
    inline const Aws::String& GetResultToken() const{ return m_resultToken; }
    inline bool ResultTokenHasBeenSet() const { return m_resultTokenHasBeenSet; }
    inline void SetResultToken(const Aws::String& value) { m_resultTokenHasBeenSet = true; m_resultToken = value; }
    inline void SetResultToken(Aws::String&& value) { m_resultTokenHasBeenSet = true; m_resultToken = std::move(value); }
    inline void SetResultToken(const char* value) { m_resultTokenHasBeenSet = true; m_resultToken.assign(value); }
    inline EvaluationResult& WithResultToken(const Aws::String& value) { SetResultToken(value); return *this;}
    inline EvaluationResult& WithResultToken(Aws::String&& value) { SetResultToken(std::move(value)); return *this;}
    inline EvaluationResult& WithResultToken(const char* value) { SetResultToken(value); return *this;}
    ///@}
  private:

    EvaluationResultIdentifier m_evaluationResultIdentifier;
    bool m_evaluationResultIdentifierHasBeenSet = false;

    ComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_resultRecordedTime;
    bool m_resultRecordedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_configRuleInvokedTime;
    bool m_configRuleInvokedTimeHasBeenSet = false;

    Aws::String m_annotation;
    bool m_annotationHasBeenSet = false;

    Aws::String m_resultToken;
    bool m_resultTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
