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
   * <p>The details of an Config evaluation for an account ID and region in an
   * aggregator. Provides the Amazon Web Services resource that was evaluated, the
   * compliance of the resource, related time stamps, and supplementary information.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregateEvaluationResult">AWS
   * API Reference</a></p>
   */
  class AggregateEvaluationResult
  {
  public:
    AWS_CONFIGSERVICE_API AggregateEvaluationResult();
    AWS_CONFIGSERVICE_API AggregateEvaluationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregateEvaluationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Uniquely identifies the evaluation result.</p>
     */
    inline const EvaluationResultIdentifier& GetEvaluationResultIdentifier() const{ return m_evaluationResultIdentifier; }
    inline bool EvaluationResultIdentifierHasBeenSet() const { return m_evaluationResultIdentifierHasBeenSet; }
    inline void SetEvaluationResultIdentifier(const EvaluationResultIdentifier& value) { m_evaluationResultIdentifierHasBeenSet = true; m_evaluationResultIdentifier = value; }
    inline void SetEvaluationResultIdentifier(EvaluationResultIdentifier&& value) { m_evaluationResultIdentifierHasBeenSet = true; m_evaluationResultIdentifier = std::move(value); }
    inline AggregateEvaluationResult& WithEvaluationResultIdentifier(const EvaluationResultIdentifier& value) { SetEvaluationResultIdentifier(value); return *this;}
    inline AggregateEvaluationResult& WithEvaluationResultIdentifier(EvaluationResultIdentifier&& value) { SetEvaluationResultIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource compliance status.</p> <p>For the
     * <code>AggregationEvaluationResult</code> data type, Config supports only the
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>. Config does not support
     * the <code>NOT_APPLICABLE</code> and <code>INSUFFICIENT_DATA</code> value.</p>
     */
    inline const ComplianceType& GetComplianceType() const{ return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(const ComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline void SetComplianceType(ComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }
    inline AggregateEvaluationResult& WithComplianceType(const ComplianceType& value) { SetComplianceType(value); return *this;}
    inline AggregateEvaluationResult& WithComplianceType(ComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when Config recorded the aggregate evaluation result.</p>
     */
    inline const Aws::Utils::DateTime& GetResultRecordedTime() const{ return m_resultRecordedTime; }
    inline bool ResultRecordedTimeHasBeenSet() const { return m_resultRecordedTimeHasBeenSet; }
    inline void SetResultRecordedTime(const Aws::Utils::DateTime& value) { m_resultRecordedTimeHasBeenSet = true; m_resultRecordedTime = value; }
    inline void SetResultRecordedTime(Aws::Utils::DateTime&& value) { m_resultRecordedTimeHasBeenSet = true; m_resultRecordedTime = std::move(value); }
    inline AggregateEvaluationResult& WithResultRecordedTime(const Aws::Utils::DateTime& value) { SetResultRecordedTime(value); return *this;}
    inline AggregateEvaluationResult& WithResultRecordedTime(Aws::Utils::DateTime&& value) { SetResultRecordedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Config rule evaluated the Amazon Web Services resource.</p>
     */
    inline const Aws::Utils::DateTime& GetConfigRuleInvokedTime() const{ return m_configRuleInvokedTime; }
    inline bool ConfigRuleInvokedTimeHasBeenSet() const { return m_configRuleInvokedTimeHasBeenSet; }
    inline void SetConfigRuleInvokedTime(const Aws::Utils::DateTime& value) { m_configRuleInvokedTimeHasBeenSet = true; m_configRuleInvokedTime = value; }
    inline void SetConfigRuleInvokedTime(Aws::Utils::DateTime&& value) { m_configRuleInvokedTimeHasBeenSet = true; m_configRuleInvokedTime = std::move(value); }
    inline AggregateEvaluationResult& WithConfigRuleInvokedTime(const Aws::Utils::DateTime& value) { SetConfigRuleInvokedTime(value); return *this;}
    inline AggregateEvaluationResult& WithConfigRuleInvokedTime(Aws::Utils::DateTime&& value) { SetConfigRuleInvokedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supplementary information about how the agrregate evaluation determined the
     * compliance.</p>
     */
    inline const Aws::String& GetAnnotation() const{ return m_annotation; }
    inline bool AnnotationHasBeenSet() const { return m_annotationHasBeenSet; }
    inline void SetAnnotation(const Aws::String& value) { m_annotationHasBeenSet = true; m_annotation = value; }
    inline void SetAnnotation(Aws::String&& value) { m_annotationHasBeenSet = true; m_annotation = std::move(value); }
    inline void SetAnnotation(const char* value) { m_annotationHasBeenSet = true; m_annotation.assign(value); }
    inline AggregateEvaluationResult& WithAnnotation(const Aws::String& value) { SetAnnotation(value); return *this;}
    inline AggregateEvaluationResult& WithAnnotation(Aws::String&& value) { SetAnnotation(std::move(value)); return *this;}
    inline AggregateEvaluationResult& WithAnnotation(const char* value) { SetAnnotation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AggregateEvaluationResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AggregateEvaluationResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AggregateEvaluationResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source region from where the data is aggregated.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline AggregateEvaluationResult& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline AggregateEvaluationResult& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline AggregateEvaluationResult& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
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

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
