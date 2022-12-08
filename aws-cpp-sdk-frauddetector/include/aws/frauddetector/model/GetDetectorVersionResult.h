/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/DetectorVersionStatus.h>
#include <aws/frauddetector/model/RuleExecutionMode.h>
#include <aws/frauddetector/model/ModelVersion.h>
#include <aws/frauddetector/model/Rule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FraudDetector
{
namespace Model
{
  class GetDetectorVersionResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetDetectorVersionResult();
    AWS_FRAUDDETECTOR_API GetDetectorVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetDetectorVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detector ID.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorId = value; }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorId = std::move(value); }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorId.assign(value); }

    /**
     * <p>The detector ID.</p>
     */
    inline GetDetectorVersionResult& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID.</p>
     */
    inline GetDetectorVersionResult& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID.</p>
     */
    inline GetDetectorVersionResult& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The detector version ID.</p>
     */
    inline const Aws::String& GetDetectorVersionId() const{ return m_detectorVersionId; }

    /**
     * <p>The detector version ID.</p>
     */
    inline void SetDetectorVersionId(const Aws::String& value) { m_detectorVersionId = value; }

    /**
     * <p>The detector version ID.</p>
     */
    inline void SetDetectorVersionId(Aws::String&& value) { m_detectorVersionId = std::move(value); }

    /**
     * <p>The detector version ID.</p>
     */
    inline void SetDetectorVersionId(const char* value) { m_detectorVersionId.assign(value); }

    /**
     * <p>The detector version ID.</p>
     */
    inline GetDetectorVersionResult& WithDetectorVersionId(const Aws::String& value) { SetDetectorVersionId(value); return *this;}

    /**
     * <p>The detector version ID.</p>
     */
    inline GetDetectorVersionResult& WithDetectorVersionId(Aws::String&& value) { SetDetectorVersionId(std::move(value)); return *this;}

    /**
     * <p>The detector version ID.</p>
     */
    inline GetDetectorVersionResult& WithDetectorVersionId(const char* value) { SetDetectorVersionId(value); return *this;}


    /**
     * <p>The detector version description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The detector version description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The detector version description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The detector version description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The detector version description.</p>
     */
    inline GetDetectorVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The detector version description.</p>
     */
    inline GetDetectorVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The detector version description.</p>
     */
    inline GetDetectorVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon SageMaker model endpoints included in the detector version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExternalModelEndpoints() const{ return m_externalModelEndpoints; }

    /**
     * <p>The Amazon SageMaker model endpoints included in the detector version.</p>
     */
    inline void SetExternalModelEndpoints(const Aws::Vector<Aws::String>& value) { m_externalModelEndpoints = value; }

    /**
     * <p>The Amazon SageMaker model endpoints included in the detector version.</p>
     */
    inline void SetExternalModelEndpoints(Aws::Vector<Aws::String>&& value) { m_externalModelEndpoints = std::move(value); }

    /**
     * <p>The Amazon SageMaker model endpoints included in the detector version.</p>
     */
    inline GetDetectorVersionResult& WithExternalModelEndpoints(const Aws::Vector<Aws::String>& value) { SetExternalModelEndpoints(value); return *this;}

    /**
     * <p>The Amazon SageMaker model endpoints included in the detector version.</p>
     */
    inline GetDetectorVersionResult& WithExternalModelEndpoints(Aws::Vector<Aws::String>&& value) { SetExternalModelEndpoints(std::move(value)); return *this;}

    /**
     * <p>The Amazon SageMaker model endpoints included in the detector version.</p>
     */
    inline GetDetectorVersionResult& AddExternalModelEndpoints(const Aws::String& value) { m_externalModelEndpoints.push_back(value); return *this; }

    /**
     * <p>The Amazon SageMaker model endpoints included in the detector version.</p>
     */
    inline GetDetectorVersionResult& AddExternalModelEndpoints(Aws::String&& value) { m_externalModelEndpoints.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon SageMaker model endpoints included in the detector version.</p>
     */
    inline GetDetectorVersionResult& AddExternalModelEndpoints(const char* value) { m_externalModelEndpoints.push_back(value); return *this; }


    /**
     * <p>The model versions included in the detector version. </p>
     */
    inline const Aws::Vector<ModelVersion>& GetModelVersions() const{ return m_modelVersions; }

    /**
     * <p>The model versions included in the detector version. </p>
     */
    inline void SetModelVersions(const Aws::Vector<ModelVersion>& value) { m_modelVersions = value; }

    /**
     * <p>The model versions included in the detector version. </p>
     */
    inline void SetModelVersions(Aws::Vector<ModelVersion>&& value) { m_modelVersions = std::move(value); }

    /**
     * <p>The model versions included in the detector version. </p>
     */
    inline GetDetectorVersionResult& WithModelVersions(const Aws::Vector<ModelVersion>& value) { SetModelVersions(value); return *this;}

    /**
     * <p>The model versions included in the detector version. </p>
     */
    inline GetDetectorVersionResult& WithModelVersions(Aws::Vector<ModelVersion>&& value) { SetModelVersions(std::move(value)); return *this;}

    /**
     * <p>The model versions included in the detector version. </p>
     */
    inline GetDetectorVersionResult& AddModelVersions(const ModelVersion& value) { m_modelVersions.push_back(value); return *this; }

    /**
     * <p>The model versions included in the detector version. </p>
     */
    inline GetDetectorVersionResult& AddModelVersions(ModelVersion&& value) { m_modelVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>The rules included in the detector version.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>The rules included in the detector version.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rules = value; }

    /**
     * <p>The rules included in the detector version.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rules = std::move(value); }

    /**
     * <p>The rules included in the detector version.</p>
     */
    inline GetDetectorVersionResult& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>The rules included in the detector version.</p>
     */
    inline GetDetectorVersionResult& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The rules included in the detector version.</p>
     */
    inline GetDetectorVersionResult& AddRules(const Rule& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>The rules included in the detector version.</p>
     */
    inline GetDetectorVersionResult& AddRules(Rule&& value) { m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the detector version.</p>
     */
    inline const DetectorVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the detector version.</p>
     */
    inline void SetStatus(const DetectorVersionStatus& value) { m_status = value; }

    /**
     * <p>The status of the detector version.</p>
     */
    inline void SetStatus(DetectorVersionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the detector version.</p>
     */
    inline GetDetectorVersionResult& WithStatus(const DetectorVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the detector version.</p>
     */
    inline GetDetectorVersionResult& WithStatus(DetectorVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the detector version was last updated. </p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The timestamp when the detector version was last updated. </p>
     */
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTime = value; }

    /**
     * <p>The timestamp when the detector version was last updated. </p>
     */
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The timestamp when the detector version was last updated. </p>
     */
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTime.assign(value); }

    /**
     * <p>The timestamp when the detector version was last updated. </p>
     */
    inline GetDetectorVersionResult& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The timestamp when the detector version was last updated. </p>
     */
    inline GetDetectorVersionResult& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the detector version was last updated. </p>
     */
    inline GetDetectorVersionResult& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}


    /**
     * <p>The timestamp when the detector version was created. </p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The timestamp when the detector version was created. </p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTime = value; }

    /**
     * <p>The timestamp when the detector version was created. </p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The timestamp when the detector version was created. </p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTime.assign(value); }

    /**
     * <p>The timestamp when the detector version was created. </p>
     */
    inline GetDetectorVersionResult& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp when the detector version was created. </p>
     */
    inline GetDetectorVersionResult& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the detector version was created. </p>
     */
    inline GetDetectorVersionResult& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}


    /**
     * <p>The execution mode of the rule in the dectector</p> <p>
     * <code>FIRST_MATCHED</code> indicates that Amazon Fraud Detector evaluates rules
     * sequentially, first to last, stopping at the first matched rule. Amazon Fraud
     * dectector then provides the outcomes for that single rule.</p> <p>
     * <code>ALL_MATCHED</code> indicates that Amazon Fraud Detector evaluates all
     * rules and returns the outcomes for all matched rules. You can define and edit
     * the rule mode at the detector version level, when it is in draft status.</p>
     */
    inline const RuleExecutionMode& GetRuleExecutionMode() const{ return m_ruleExecutionMode; }

    /**
     * <p>The execution mode of the rule in the dectector</p> <p>
     * <code>FIRST_MATCHED</code> indicates that Amazon Fraud Detector evaluates rules
     * sequentially, first to last, stopping at the first matched rule. Amazon Fraud
     * dectector then provides the outcomes for that single rule.</p> <p>
     * <code>ALL_MATCHED</code> indicates that Amazon Fraud Detector evaluates all
     * rules and returns the outcomes for all matched rules. You can define and edit
     * the rule mode at the detector version level, when it is in draft status.</p>
     */
    inline void SetRuleExecutionMode(const RuleExecutionMode& value) { m_ruleExecutionMode = value; }

    /**
     * <p>The execution mode of the rule in the dectector</p> <p>
     * <code>FIRST_MATCHED</code> indicates that Amazon Fraud Detector evaluates rules
     * sequentially, first to last, stopping at the first matched rule. Amazon Fraud
     * dectector then provides the outcomes for that single rule.</p> <p>
     * <code>ALL_MATCHED</code> indicates that Amazon Fraud Detector evaluates all
     * rules and returns the outcomes for all matched rules. You can define and edit
     * the rule mode at the detector version level, when it is in draft status.</p>
     */
    inline void SetRuleExecutionMode(RuleExecutionMode&& value) { m_ruleExecutionMode = std::move(value); }

    /**
     * <p>The execution mode of the rule in the dectector</p> <p>
     * <code>FIRST_MATCHED</code> indicates that Amazon Fraud Detector evaluates rules
     * sequentially, first to last, stopping at the first matched rule. Amazon Fraud
     * dectector then provides the outcomes for that single rule.</p> <p>
     * <code>ALL_MATCHED</code> indicates that Amazon Fraud Detector evaluates all
     * rules and returns the outcomes for all matched rules. You can define and edit
     * the rule mode at the detector version level, when it is in draft status.</p>
     */
    inline GetDetectorVersionResult& WithRuleExecutionMode(const RuleExecutionMode& value) { SetRuleExecutionMode(value); return *this;}

    /**
     * <p>The execution mode of the rule in the dectector</p> <p>
     * <code>FIRST_MATCHED</code> indicates that Amazon Fraud Detector evaluates rules
     * sequentially, first to last, stopping at the first matched rule. Amazon Fraud
     * dectector then provides the outcomes for that single rule.</p> <p>
     * <code>ALL_MATCHED</code> indicates that Amazon Fraud Detector evaluates all
     * rules and returns the outcomes for all matched rules. You can define and edit
     * the rule mode at the detector version level, when it is in draft status.</p>
     */
    inline GetDetectorVersionResult& WithRuleExecutionMode(RuleExecutionMode&& value) { SetRuleExecutionMode(std::move(value)); return *this;}


    /**
     * <p>The detector version ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The detector version ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The detector version ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The detector version ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The detector version ARN.</p>
     */
    inline GetDetectorVersionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The detector version ARN.</p>
     */
    inline GetDetectorVersionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The detector version ARN.</p>
     */
    inline GetDetectorVersionResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_detectorId;

    Aws::String m_detectorVersionId;

    Aws::String m_description;

    Aws::Vector<Aws::String> m_externalModelEndpoints;

    Aws::Vector<ModelVersion> m_modelVersions;

    Aws::Vector<Rule> m_rules;

    DetectorVersionStatus m_status;

    Aws::String m_lastUpdatedTime;

    Aws::String m_createdTime;

    RuleExecutionMode m_ruleExecutionMode;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
