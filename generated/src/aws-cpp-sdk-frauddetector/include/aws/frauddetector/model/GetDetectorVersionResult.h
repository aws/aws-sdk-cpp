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
    AWS_FRAUDDETECTOR_API GetDetectorVersionResult() = default;
    AWS_FRAUDDETECTOR_API GetDetectorVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetDetectorVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The detector ID.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    GetDetectorVersionResult& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector version ID.</p>
     */
    inline const Aws::String& GetDetectorVersionId() const { return m_detectorVersionId; }
    template<typename DetectorVersionIdT = Aws::String>
    void SetDetectorVersionId(DetectorVersionIdT&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::forward<DetectorVersionIdT>(value); }
    template<typename DetectorVersionIdT = Aws::String>
    GetDetectorVersionResult& WithDetectorVersionId(DetectorVersionIdT&& value) { SetDetectorVersionId(std::forward<DetectorVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector version description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetDetectorVersionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SageMaker model endpoints included in the detector version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExternalModelEndpoints() const { return m_externalModelEndpoints; }
    template<typename ExternalModelEndpointsT = Aws::Vector<Aws::String>>
    void SetExternalModelEndpoints(ExternalModelEndpointsT&& value) { m_externalModelEndpointsHasBeenSet = true; m_externalModelEndpoints = std::forward<ExternalModelEndpointsT>(value); }
    template<typename ExternalModelEndpointsT = Aws::Vector<Aws::String>>
    GetDetectorVersionResult& WithExternalModelEndpoints(ExternalModelEndpointsT&& value) { SetExternalModelEndpoints(std::forward<ExternalModelEndpointsT>(value)); return *this;}
    template<typename ExternalModelEndpointsT = Aws::String>
    GetDetectorVersionResult& AddExternalModelEndpoints(ExternalModelEndpointsT&& value) { m_externalModelEndpointsHasBeenSet = true; m_externalModelEndpoints.emplace_back(std::forward<ExternalModelEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The model versions included in the detector version. </p>
     */
    inline const Aws::Vector<ModelVersion>& GetModelVersions() const { return m_modelVersions; }
    template<typename ModelVersionsT = Aws::Vector<ModelVersion>>
    void SetModelVersions(ModelVersionsT&& value) { m_modelVersionsHasBeenSet = true; m_modelVersions = std::forward<ModelVersionsT>(value); }
    template<typename ModelVersionsT = Aws::Vector<ModelVersion>>
    GetDetectorVersionResult& WithModelVersions(ModelVersionsT&& value) { SetModelVersions(std::forward<ModelVersionsT>(value)); return *this;}
    template<typename ModelVersionsT = ModelVersion>
    GetDetectorVersionResult& AddModelVersions(ModelVersionsT&& value) { m_modelVersionsHasBeenSet = true; m_modelVersions.emplace_back(std::forward<ModelVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The rules included in the detector version.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const { return m_rules; }
    template<typename RulesT = Aws::Vector<Rule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<Rule>>
    GetDetectorVersionResult& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Rule>
    GetDetectorVersionResult& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the detector version.</p>
     */
    inline DetectorVersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(DetectorVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDetectorVersionResult& WithStatus(DetectorVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the detector version was last updated. </p>
     */
    inline const Aws::String& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::String>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::String>
    GetDetectorVersionResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the detector version was created. </p>
     */
    inline const Aws::String& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::String>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::String>
    GetDetectorVersionResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution mode of the rule in the dectector</p> <p>
     * <code>FIRST_MATCHED</code> indicates that Amazon Fraud Detector evaluates rules
     * sequentially, first to last, stopping at the first matched rule. Amazon Fraud
     * dectector then provides the outcomes for that single rule.</p> <p>
     * <code>ALL_MATCHED</code> indicates that Amazon Fraud Detector evaluates all
     * rules and returns the outcomes for all matched rules. You can define and edit
     * the rule mode at the detector version level, when it is in draft status.</p>
     */
    inline RuleExecutionMode GetRuleExecutionMode() const { return m_ruleExecutionMode; }
    inline void SetRuleExecutionMode(RuleExecutionMode value) { m_ruleExecutionModeHasBeenSet = true; m_ruleExecutionMode = value; }
    inline GetDetectorVersionResult& WithRuleExecutionMode(RuleExecutionMode value) { SetRuleExecutionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector version ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetDetectorVersionResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDetectorVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_externalModelEndpoints;
    bool m_externalModelEndpointsHasBeenSet = false;

    Aws::Vector<ModelVersion> m_modelVersions;
    bool m_modelVersionsHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    DetectorVersionStatus m_status{DetectorVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    RuleExecutionMode m_ruleExecutionMode{RuleExecutionMode::NOT_SET};
    bool m_ruleExecutionModeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
