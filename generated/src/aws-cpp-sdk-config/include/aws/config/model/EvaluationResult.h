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
    AWS_CONFIGSERVICE_API EvaluationResult() = default;
    AWS_CONFIGSERVICE_API EvaluationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API EvaluationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline const EvaluationResultIdentifier& GetEvaluationResultIdentifier() const { return m_evaluationResultIdentifier; }
    inline bool EvaluationResultIdentifierHasBeenSet() const { return m_evaluationResultIdentifierHasBeenSet; }
    template<typename EvaluationResultIdentifierT = EvaluationResultIdentifier>
    void SetEvaluationResultIdentifier(EvaluationResultIdentifierT&& value) { m_evaluationResultIdentifierHasBeenSet = true; m_evaluationResultIdentifier = std::forward<EvaluationResultIdentifierT>(value); }
    template<typename EvaluationResultIdentifierT = EvaluationResultIdentifier>
    EvaluationResult& WithEvaluationResultIdentifier(EvaluationResultIdentifierT&& value) { SetEvaluationResultIdentifier(std::forward<EvaluationResultIdentifierT>(value)); return *this;}
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
    inline ComplianceType GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(ComplianceType value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline EvaluationResult& WithComplianceType(ComplianceType value) { SetComplianceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when Config recorded the evaluation result.</p>
     */
    inline const Aws::Utils::DateTime& GetResultRecordedTime() const { return m_resultRecordedTime; }
    inline bool ResultRecordedTimeHasBeenSet() const { return m_resultRecordedTimeHasBeenSet; }
    template<typename ResultRecordedTimeT = Aws::Utils::DateTime>
    void SetResultRecordedTime(ResultRecordedTimeT&& value) { m_resultRecordedTimeHasBeenSet = true; m_resultRecordedTime = std::forward<ResultRecordedTimeT>(value); }
    template<typename ResultRecordedTimeT = Aws::Utils::DateTime>
    EvaluationResult& WithResultRecordedTime(ResultRecordedTimeT&& value) { SetResultRecordedTime(std::forward<ResultRecordedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Config rule evaluated the Amazon Web Services resource.</p>
     */
    inline const Aws::Utils::DateTime& GetConfigRuleInvokedTime() const { return m_configRuleInvokedTime; }
    inline bool ConfigRuleInvokedTimeHasBeenSet() const { return m_configRuleInvokedTimeHasBeenSet; }
    template<typename ConfigRuleInvokedTimeT = Aws::Utils::DateTime>
    void SetConfigRuleInvokedTime(ConfigRuleInvokedTimeT&& value) { m_configRuleInvokedTimeHasBeenSet = true; m_configRuleInvokedTime = std::forward<ConfigRuleInvokedTimeT>(value); }
    template<typename ConfigRuleInvokedTimeT = Aws::Utils::DateTime>
    EvaluationResult& WithConfigRuleInvokedTime(ConfigRuleInvokedTimeT&& value) { SetConfigRuleInvokedTime(std::forward<ConfigRuleInvokedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline const Aws::String& GetAnnotation() const { return m_annotation; }
    inline bool AnnotationHasBeenSet() const { return m_annotationHasBeenSet; }
    template<typename AnnotationT = Aws::String>
    void SetAnnotation(AnnotationT&& value) { m_annotationHasBeenSet = true; m_annotation = std::forward<AnnotationT>(value); }
    template<typename AnnotationT = Aws::String>
    EvaluationResult& WithAnnotation(AnnotationT&& value) { SetAnnotation(std::forward<AnnotationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encrypted token that associates an evaluation with an Config rule. The
     * token identifies the rule, the Amazon Web Services resource being evaluated, and
     * the event that triggered the evaluation.</p>
     */
    inline const Aws::String& GetResultToken() const { return m_resultToken; }
    inline bool ResultTokenHasBeenSet() const { return m_resultTokenHasBeenSet; }
    template<typename ResultTokenT = Aws::String>
    void SetResultToken(ResultTokenT&& value) { m_resultTokenHasBeenSet = true; m_resultToken = std::forward<ResultTokenT>(value); }
    template<typename ResultTokenT = Aws::String>
    EvaluationResult& WithResultToken(ResultTokenT&& value) { SetResultToken(std::forward<ResultTokenT>(value)); return *this;}
    ///@}
  private:

    EvaluationResultIdentifier m_evaluationResultIdentifier;
    bool m_evaluationResultIdentifierHasBeenSet = false;

    ComplianceType m_complianceType{ComplianceType::NOT_SET};
    bool m_complianceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_resultRecordedTime{};
    bool m_resultRecordedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_configRuleInvokedTime{};
    bool m_configRuleInvokedTimeHasBeenSet = false;

    Aws::String m_annotation;
    bool m_annotationHasBeenSet = false;

    Aws::String m_resultToken;
    bool m_resultTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
