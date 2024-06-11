/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConformancePackComplianceType.h>
#include <aws/config/model/EvaluationResultIdentifier.h>
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
   * <p>The details of a conformance pack evaluation. Provides Config rule and Amazon
   * Web Services resource type that was evaluated, the compliance of the conformance
   * pack, related time stamps, and supplementary information. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackEvaluationResult">AWS
   * API Reference</a></p>
   */
  class ConformancePackEvaluationResult
  {
  public:
    AWS_CONFIGSERVICE_API ConformancePackEvaluationResult();
    AWS_CONFIGSERVICE_API ConformancePackEvaluationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackEvaluationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compliance type. The allowed values are <code>COMPLIANT</code> and
     * <code>NON_COMPLIANT</code>. <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline const ConformancePackComplianceType& GetComplianceType() const{ return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(const ConformancePackComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline void SetComplianceType(ConformancePackComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }
    inline ConformancePackEvaluationResult& WithComplianceType(const ConformancePackComplianceType& value) { SetComplianceType(value); return *this;}
    inline ConformancePackEvaluationResult& WithComplianceType(ConformancePackComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const EvaluationResultIdentifier& GetEvaluationResultIdentifier() const{ return m_evaluationResultIdentifier; }
    inline bool EvaluationResultIdentifierHasBeenSet() const { return m_evaluationResultIdentifierHasBeenSet; }
    inline void SetEvaluationResultIdentifier(const EvaluationResultIdentifier& value) { m_evaluationResultIdentifierHasBeenSet = true; m_evaluationResultIdentifier = value; }
    inline void SetEvaluationResultIdentifier(EvaluationResultIdentifier&& value) { m_evaluationResultIdentifierHasBeenSet = true; m_evaluationResultIdentifier = std::move(value); }
    inline ConformancePackEvaluationResult& WithEvaluationResultIdentifier(const EvaluationResultIdentifier& value) { SetEvaluationResultIdentifier(value); return *this;}
    inline ConformancePackEvaluationResult& WithEvaluationResultIdentifier(EvaluationResultIdentifier&& value) { SetEvaluationResultIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when Config rule evaluated Amazon Web Services resource.</p>
     */
    inline const Aws::Utils::DateTime& GetConfigRuleInvokedTime() const{ return m_configRuleInvokedTime; }
    inline bool ConfigRuleInvokedTimeHasBeenSet() const { return m_configRuleInvokedTimeHasBeenSet; }
    inline void SetConfigRuleInvokedTime(const Aws::Utils::DateTime& value) { m_configRuleInvokedTimeHasBeenSet = true; m_configRuleInvokedTime = value; }
    inline void SetConfigRuleInvokedTime(Aws::Utils::DateTime&& value) { m_configRuleInvokedTimeHasBeenSet = true; m_configRuleInvokedTime = std::move(value); }
    inline ConformancePackEvaluationResult& WithConfigRuleInvokedTime(const Aws::Utils::DateTime& value) { SetConfigRuleInvokedTime(value); return *this;}
    inline ConformancePackEvaluationResult& WithConfigRuleInvokedTime(Aws::Utils::DateTime&& value) { SetConfigRuleInvokedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when Config recorded the evaluation result. </p>
     */
    inline const Aws::Utils::DateTime& GetResultRecordedTime() const{ return m_resultRecordedTime; }
    inline bool ResultRecordedTimeHasBeenSet() const { return m_resultRecordedTimeHasBeenSet; }
    inline void SetResultRecordedTime(const Aws::Utils::DateTime& value) { m_resultRecordedTimeHasBeenSet = true; m_resultRecordedTime = value; }
    inline void SetResultRecordedTime(Aws::Utils::DateTime&& value) { m_resultRecordedTimeHasBeenSet = true; m_resultRecordedTime = std::move(value); }
    inline ConformancePackEvaluationResult& WithResultRecordedTime(const Aws::Utils::DateTime& value) { SetResultRecordedTime(value); return *this;}
    inline ConformancePackEvaluationResult& WithResultRecordedTime(Aws::Utils::DateTime&& value) { SetResultRecordedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supplementary information about how the evaluation determined the compliance.
     * </p>
     */
    inline const Aws::String& GetAnnotation() const{ return m_annotation; }
    inline bool AnnotationHasBeenSet() const { return m_annotationHasBeenSet; }
    inline void SetAnnotation(const Aws::String& value) { m_annotationHasBeenSet = true; m_annotation = value; }
    inline void SetAnnotation(Aws::String&& value) { m_annotationHasBeenSet = true; m_annotation = std::move(value); }
    inline void SetAnnotation(const char* value) { m_annotationHasBeenSet = true; m_annotation.assign(value); }
    inline ConformancePackEvaluationResult& WithAnnotation(const Aws::String& value) { SetAnnotation(value); return *this;}
    inline ConformancePackEvaluationResult& WithAnnotation(Aws::String&& value) { SetAnnotation(std::move(value)); return *this;}
    inline ConformancePackEvaluationResult& WithAnnotation(const char* value) { SetAnnotation(value); return *this;}
    ///@}
  private:

    ConformancePackComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    EvaluationResultIdentifier m_evaluationResultIdentifier;
    bool m_evaluationResultIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_configRuleInvokedTime;
    bool m_configRuleInvokedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_resultRecordedTime;
    bool m_resultRecordedTimeHasBeenSet = false;

    Aws::String m_annotation;
    bool m_annotationHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
