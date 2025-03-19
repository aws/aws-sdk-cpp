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
    AWS_CONFIGSERVICE_API ConformancePackEvaluationResult() = default;
    AWS_CONFIGSERVICE_API ConformancePackEvaluationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackEvaluationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compliance type. The allowed values are <code>COMPLIANT</code> and
     * <code>NON_COMPLIANT</code>. <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline ConformancePackComplianceType GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(ConformancePackComplianceType value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline ConformancePackEvaluationResult& WithComplianceType(ConformancePackComplianceType value) { SetComplianceType(value); return *this;}
    ///@}

    ///@{
    
    inline const EvaluationResultIdentifier& GetEvaluationResultIdentifier() const { return m_evaluationResultIdentifier; }
    inline bool EvaluationResultIdentifierHasBeenSet() const { return m_evaluationResultIdentifierHasBeenSet; }
    template<typename EvaluationResultIdentifierT = EvaluationResultIdentifier>
    void SetEvaluationResultIdentifier(EvaluationResultIdentifierT&& value) { m_evaluationResultIdentifierHasBeenSet = true; m_evaluationResultIdentifier = std::forward<EvaluationResultIdentifierT>(value); }
    template<typename EvaluationResultIdentifierT = EvaluationResultIdentifier>
    ConformancePackEvaluationResult& WithEvaluationResultIdentifier(EvaluationResultIdentifierT&& value) { SetEvaluationResultIdentifier(std::forward<EvaluationResultIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when Config rule evaluated Amazon Web Services resource.</p>
     */
    inline const Aws::Utils::DateTime& GetConfigRuleInvokedTime() const { return m_configRuleInvokedTime; }
    inline bool ConfigRuleInvokedTimeHasBeenSet() const { return m_configRuleInvokedTimeHasBeenSet; }
    template<typename ConfigRuleInvokedTimeT = Aws::Utils::DateTime>
    void SetConfigRuleInvokedTime(ConfigRuleInvokedTimeT&& value) { m_configRuleInvokedTimeHasBeenSet = true; m_configRuleInvokedTime = std::forward<ConfigRuleInvokedTimeT>(value); }
    template<typename ConfigRuleInvokedTimeT = Aws::Utils::DateTime>
    ConformancePackEvaluationResult& WithConfigRuleInvokedTime(ConfigRuleInvokedTimeT&& value) { SetConfigRuleInvokedTime(std::forward<ConfigRuleInvokedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when Config recorded the evaluation result. </p>
     */
    inline const Aws::Utils::DateTime& GetResultRecordedTime() const { return m_resultRecordedTime; }
    inline bool ResultRecordedTimeHasBeenSet() const { return m_resultRecordedTimeHasBeenSet; }
    template<typename ResultRecordedTimeT = Aws::Utils::DateTime>
    void SetResultRecordedTime(ResultRecordedTimeT&& value) { m_resultRecordedTimeHasBeenSet = true; m_resultRecordedTime = std::forward<ResultRecordedTimeT>(value); }
    template<typename ResultRecordedTimeT = Aws::Utils::DateTime>
    ConformancePackEvaluationResult& WithResultRecordedTime(ResultRecordedTimeT&& value) { SetResultRecordedTime(std::forward<ResultRecordedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supplementary information about how the evaluation determined the compliance.
     * </p>
     */
    inline const Aws::String& GetAnnotation() const { return m_annotation; }
    inline bool AnnotationHasBeenSet() const { return m_annotationHasBeenSet; }
    template<typename AnnotationT = Aws::String>
    void SetAnnotation(AnnotationT&& value) { m_annotationHasBeenSet = true; m_annotation = std::forward<AnnotationT>(value); }
    template<typename AnnotationT = Aws::String>
    ConformancePackEvaluationResult& WithAnnotation(AnnotationT&& value) { SetAnnotation(std::forward<AnnotationT>(value)); return *this;}
    ///@}
  private:

    ConformancePackComplianceType m_complianceType{ConformancePackComplianceType::NOT_SET};
    bool m_complianceTypeHasBeenSet = false;

    EvaluationResultIdentifier m_evaluationResultIdentifier;
    bool m_evaluationResultIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_configRuleInvokedTime{};
    bool m_configRuleInvokedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_resultRecordedTime{};
    bool m_resultRecordedTimeHasBeenSet = false;

    Aws::String m_annotation;
    bool m_annotationHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
