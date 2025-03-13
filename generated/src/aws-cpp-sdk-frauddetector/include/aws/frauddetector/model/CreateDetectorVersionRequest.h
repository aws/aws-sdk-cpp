/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/RuleExecutionMode.h>
#include <aws/frauddetector/model/Rule.h>
#include <aws/frauddetector/model/ModelVersion.h>
#include <aws/frauddetector/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class CreateDetectorVersionRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API CreateDetectorVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDetectorVersion"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the detector under which you want to create a new version.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    CreateDetectorVersionRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the detector version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateDetectorVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Sagemaker model endpoints to include in the detector version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExternalModelEndpoints() const { return m_externalModelEndpoints; }
    inline bool ExternalModelEndpointsHasBeenSet() const { return m_externalModelEndpointsHasBeenSet; }
    template<typename ExternalModelEndpointsT = Aws::Vector<Aws::String>>
    void SetExternalModelEndpoints(ExternalModelEndpointsT&& value) { m_externalModelEndpointsHasBeenSet = true; m_externalModelEndpoints = std::forward<ExternalModelEndpointsT>(value); }
    template<typename ExternalModelEndpointsT = Aws::Vector<Aws::String>>
    CreateDetectorVersionRequest& WithExternalModelEndpoints(ExternalModelEndpointsT&& value) { SetExternalModelEndpoints(std::forward<ExternalModelEndpointsT>(value)); return *this;}
    template<typename ExternalModelEndpointsT = Aws::String>
    CreateDetectorVersionRequest& AddExternalModelEndpoints(ExternalModelEndpointsT&& value) { m_externalModelEndpointsHasBeenSet = true; m_externalModelEndpoints.emplace_back(std::forward<ExternalModelEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The rules to include in the detector version.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<Rule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<Rule>>
    CreateDetectorVersionRequest& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Rule>
    CreateDetectorVersionRequest& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The model versions to include in the detector version.</p>
     */
    inline const Aws::Vector<ModelVersion>& GetModelVersions() const { return m_modelVersions; }
    inline bool ModelVersionsHasBeenSet() const { return m_modelVersionsHasBeenSet; }
    template<typename ModelVersionsT = Aws::Vector<ModelVersion>>
    void SetModelVersions(ModelVersionsT&& value) { m_modelVersionsHasBeenSet = true; m_modelVersions = std::forward<ModelVersionsT>(value); }
    template<typename ModelVersionsT = Aws::Vector<ModelVersion>>
    CreateDetectorVersionRequest& WithModelVersions(ModelVersionsT&& value) { SetModelVersions(std::forward<ModelVersionsT>(value)); return *this;}
    template<typename ModelVersionsT = ModelVersion>
    CreateDetectorVersionRequest& AddModelVersions(ModelVersionsT&& value) { m_modelVersionsHasBeenSet = true; m_modelVersions.emplace_back(std::forward<ModelVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The rule execution mode for the rules included in the detector version.</p>
     * <p>You can define and edit the rule mode at the detector version level, when it
     * is in draft status.</p> <p>If you specify <code>FIRST_MATCHED</code>, Amazon
     * Fraud Detector evaluates rules sequentially, first to last, stopping at the
     * first matched rule. Amazon Fraud dectector then provides the outcomes for that
     * single rule.</p> <p>If you specifiy <code>ALL_MATCHED</code>, Amazon Fraud
     * Detector evaluates all rules and returns the outcomes for all matched rules.
     * </p> <p>The default behavior is <code>FIRST_MATCHED</code>.</p>
     */
    inline RuleExecutionMode GetRuleExecutionMode() const { return m_ruleExecutionMode; }
    inline bool RuleExecutionModeHasBeenSet() const { return m_ruleExecutionModeHasBeenSet; }
    inline void SetRuleExecutionMode(RuleExecutionMode value) { m_ruleExecutionModeHasBeenSet = true; m_ruleExecutionMode = value; }
    inline CreateDetectorVersionRequest& WithRuleExecutionMode(RuleExecutionMode value) { SetRuleExecutionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDetectorVersionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDetectorVersionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_externalModelEndpoints;
    bool m_externalModelEndpointsHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::Vector<ModelVersion> m_modelVersions;
    bool m_modelVersionsHasBeenSet = false;

    RuleExecutionMode m_ruleExecutionMode{RuleExecutionMode::NOT_SET};
    bool m_ruleExecutionModeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
