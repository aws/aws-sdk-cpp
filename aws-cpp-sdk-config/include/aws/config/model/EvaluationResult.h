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


    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline const EvaluationResultIdentifier& GetEvaluationResultIdentifier() const{ return m_evaluationResultIdentifier; }

    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline bool EvaluationResultIdentifierHasBeenSet() const { return m_evaluationResultIdentifierHasBeenSet; }

    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline void SetEvaluationResultIdentifier(const EvaluationResultIdentifier& value) { m_evaluationResultIdentifierHasBeenSet = true; m_evaluationResultIdentifier = value; }

    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline void SetEvaluationResultIdentifier(EvaluationResultIdentifier&& value) { m_evaluationResultIdentifierHasBeenSet = true; m_evaluationResultIdentifier = std::move(value); }

    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline EvaluationResult& WithEvaluationResultIdentifier(const EvaluationResultIdentifier& value) { SetEvaluationResultIdentifier(value); return *this;}

    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline EvaluationResult& WithEvaluationResultIdentifier(EvaluationResultIdentifier&& value) { SetEvaluationResultIdentifier(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the Amazon Web Services resource complies with the Config
     * rule that evaluated it.</p> <p>For the <code>EvaluationResult</code> data type,
     * Config supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for the <code>EvaluationResult</code> data
     * type.</p>
     */
    inline const ComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>Indicates whether the Amazon Web Services resource complies with the Config
     * rule that evaluated it.</p> <p>For the <code>EvaluationResult</code> data type,
     * Config supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for the <code>EvaluationResult</code> data
     * type.</p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>Indicates whether the Amazon Web Services resource complies with the Config
     * rule that evaluated it.</p> <p>For the <code>EvaluationResult</code> data type,
     * Config supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for the <code>EvaluationResult</code> data
     * type.</p>
     */
    inline void SetComplianceType(const ComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>Indicates whether the Amazon Web Services resource complies with the Config
     * rule that evaluated it.</p> <p>For the <code>EvaluationResult</code> data type,
     * Config supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for the <code>EvaluationResult</code> data
     * type.</p>
     */
    inline void SetComplianceType(ComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>Indicates whether the Amazon Web Services resource complies with the Config
     * rule that evaluated it.</p> <p>For the <code>EvaluationResult</code> data type,
     * Config supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for the <code>EvaluationResult</code> data
     * type.</p>
     */
    inline EvaluationResult& WithComplianceType(const ComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>Indicates whether the Amazon Web Services resource complies with the Config
     * rule that evaluated it.</p> <p>For the <code>EvaluationResult</code> data type,
     * Config supports only the <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code> values. Config does not support the
     * <code>INSUFFICIENT_DATA</code> value for the <code>EvaluationResult</code> data
     * type.</p>
     */
    inline EvaluationResult& WithComplianceType(ComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}


    /**
     * <p>The time when Config recorded the evaluation result.</p>
     */
    inline const Aws::Utils::DateTime& GetResultRecordedTime() const{ return m_resultRecordedTime; }

    /**
     * <p>The time when Config recorded the evaluation result.</p>
     */
    inline bool ResultRecordedTimeHasBeenSet() const { return m_resultRecordedTimeHasBeenSet; }

    /**
     * <p>The time when Config recorded the evaluation result.</p>
     */
    inline void SetResultRecordedTime(const Aws::Utils::DateTime& value) { m_resultRecordedTimeHasBeenSet = true; m_resultRecordedTime = value; }

    /**
     * <p>The time when Config recorded the evaluation result.</p>
     */
    inline void SetResultRecordedTime(Aws::Utils::DateTime&& value) { m_resultRecordedTimeHasBeenSet = true; m_resultRecordedTime = std::move(value); }

    /**
     * <p>The time when Config recorded the evaluation result.</p>
     */
    inline EvaluationResult& WithResultRecordedTime(const Aws::Utils::DateTime& value) { SetResultRecordedTime(value); return *this;}

    /**
     * <p>The time when Config recorded the evaluation result.</p>
     */
    inline EvaluationResult& WithResultRecordedTime(Aws::Utils::DateTime&& value) { SetResultRecordedTime(std::move(value)); return *this;}


    /**
     * <p>The time when the Config rule evaluated the Amazon Web Services resource.</p>
     */
    inline const Aws::Utils::DateTime& GetConfigRuleInvokedTime() const{ return m_configRuleInvokedTime; }

    /**
     * <p>The time when the Config rule evaluated the Amazon Web Services resource.</p>
     */
    inline bool ConfigRuleInvokedTimeHasBeenSet() const { return m_configRuleInvokedTimeHasBeenSet; }

    /**
     * <p>The time when the Config rule evaluated the Amazon Web Services resource.</p>
     */
    inline void SetConfigRuleInvokedTime(const Aws::Utils::DateTime& value) { m_configRuleInvokedTimeHasBeenSet = true; m_configRuleInvokedTime = value; }

    /**
     * <p>The time when the Config rule evaluated the Amazon Web Services resource.</p>
     */
    inline void SetConfigRuleInvokedTime(Aws::Utils::DateTime&& value) { m_configRuleInvokedTimeHasBeenSet = true; m_configRuleInvokedTime = std::move(value); }

    /**
     * <p>The time when the Config rule evaluated the Amazon Web Services resource.</p>
     */
    inline EvaluationResult& WithConfigRuleInvokedTime(const Aws::Utils::DateTime& value) { SetConfigRuleInvokedTime(value); return *this;}

    /**
     * <p>The time when the Config rule evaluated the Amazon Web Services resource.</p>
     */
    inline EvaluationResult& WithConfigRuleInvokedTime(Aws::Utils::DateTime&& value) { SetConfigRuleInvokedTime(std::move(value)); return *this;}


    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline const Aws::String& GetAnnotation() const{ return m_annotation; }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline bool AnnotationHasBeenSet() const { return m_annotationHasBeenSet; }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline void SetAnnotation(const Aws::String& value) { m_annotationHasBeenSet = true; m_annotation = value; }

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline void SetAnnotation(Aws::String&& value) { m_annotationHasBeenSet = true; m_annotation = std::move(value); }

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
    inline EvaluationResult& WithAnnotation(Aws::String&& value) { SetAnnotation(std::move(value)); return *this;}

    /**
     * <p>Supplementary information about how the evaluation determined the
     * compliance.</p>
     */
    inline EvaluationResult& WithAnnotation(const char* value) { SetAnnotation(value); return *this;}


    /**
     * <p>An encrypted token that associates an evaluation with an Config rule. The
     * token identifies the rule, the Amazon Web Services resource being evaluated, and
     * the event that triggered the evaluation.</p>
     */
    inline const Aws::String& GetResultToken() const{ return m_resultToken; }

    /**
     * <p>An encrypted token that associates an evaluation with an Config rule. The
     * token identifies the rule, the Amazon Web Services resource being evaluated, and
     * the event that triggered the evaluation.</p>
     */
    inline bool ResultTokenHasBeenSet() const { return m_resultTokenHasBeenSet; }

    /**
     * <p>An encrypted token that associates an evaluation with an Config rule. The
     * token identifies the rule, the Amazon Web Services resource being evaluated, and
     * the event that triggered the evaluation.</p>
     */
    inline void SetResultToken(const Aws::String& value) { m_resultTokenHasBeenSet = true; m_resultToken = value; }

    /**
     * <p>An encrypted token that associates an evaluation with an Config rule. The
     * token identifies the rule, the Amazon Web Services resource being evaluated, and
     * the event that triggered the evaluation.</p>
     */
    inline void SetResultToken(Aws::String&& value) { m_resultTokenHasBeenSet = true; m_resultToken = std::move(value); }

    /**
     * <p>An encrypted token that associates an evaluation with an Config rule. The
     * token identifies the rule, the Amazon Web Services resource being evaluated, and
     * the event that triggered the evaluation.</p>
     */
    inline void SetResultToken(const char* value) { m_resultTokenHasBeenSet = true; m_resultToken.assign(value); }

    /**
     * <p>An encrypted token that associates an evaluation with an Config rule. The
     * token identifies the rule, the Amazon Web Services resource being evaluated, and
     * the event that triggered the evaluation.</p>
     */
    inline EvaluationResult& WithResultToken(const Aws::String& value) { SetResultToken(value); return *this;}

    /**
     * <p>An encrypted token that associates an evaluation with an Config rule. The
     * token identifies the rule, the Amazon Web Services resource being evaluated, and
     * the event that triggered the evaluation.</p>
     */
    inline EvaluationResult& WithResultToken(Aws::String&& value) { SetResultToken(std::move(value)); return *this;}

    /**
     * <p>An encrypted token that associates an evaluation with an Config rule. The
     * token identifies the rule, the Amazon Web Services resource being evaluated, and
     * the event that triggered the evaluation.</p>
     */
    inline EvaluationResult& WithResultToken(const char* value) { SetResultToken(value); return *this;}

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
