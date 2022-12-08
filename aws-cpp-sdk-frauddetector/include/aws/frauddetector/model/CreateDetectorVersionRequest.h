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
    AWS_FRAUDDETECTOR_API CreateDetectorVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDetectorVersion"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the detector under which you want to create a new version.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The ID of the detector under which you want to create a new version.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The ID of the detector under which you want to create a new version.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The ID of the detector under which you want to create a new version.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The ID of the detector under which you want to create a new version.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The ID of the detector under which you want to create a new version.</p>
     */
    inline CreateDetectorVersionRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The ID of the detector under which you want to create a new version.</p>
     */
    inline CreateDetectorVersionRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the detector under which you want to create a new version.</p>
     */
    inline CreateDetectorVersionRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The description of the detector version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the detector version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the detector version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the detector version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the detector version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the detector version.</p>
     */
    inline CreateDetectorVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the detector version.</p>
     */
    inline CreateDetectorVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the detector version.</p>
     */
    inline CreateDetectorVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Sagemaker model endpoints to include in the detector version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExternalModelEndpoints() const{ return m_externalModelEndpoints; }

    /**
     * <p>The Amazon Sagemaker model endpoints to include in the detector version.</p>
     */
    inline bool ExternalModelEndpointsHasBeenSet() const { return m_externalModelEndpointsHasBeenSet; }

    /**
     * <p>The Amazon Sagemaker model endpoints to include in the detector version.</p>
     */
    inline void SetExternalModelEndpoints(const Aws::Vector<Aws::String>& value) { m_externalModelEndpointsHasBeenSet = true; m_externalModelEndpoints = value; }

    /**
     * <p>The Amazon Sagemaker model endpoints to include in the detector version.</p>
     */
    inline void SetExternalModelEndpoints(Aws::Vector<Aws::String>&& value) { m_externalModelEndpointsHasBeenSet = true; m_externalModelEndpoints = std::move(value); }

    /**
     * <p>The Amazon Sagemaker model endpoints to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& WithExternalModelEndpoints(const Aws::Vector<Aws::String>& value) { SetExternalModelEndpoints(value); return *this;}

    /**
     * <p>The Amazon Sagemaker model endpoints to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& WithExternalModelEndpoints(Aws::Vector<Aws::String>&& value) { SetExternalModelEndpoints(std::move(value)); return *this;}

    /**
     * <p>The Amazon Sagemaker model endpoints to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& AddExternalModelEndpoints(const Aws::String& value) { m_externalModelEndpointsHasBeenSet = true; m_externalModelEndpoints.push_back(value); return *this; }

    /**
     * <p>The Amazon Sagemaker model endpoints to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& AddExternalModelEndpoints(Aws::String&& value) { m_externalModelEndpointsHasBeenSet = true; m_externalModelEndpoints.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Sagemaker model endpoints to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& AddExternalModelEndpoints(const char* value) { m_externalModelEndpointsHasBeenSet = true; m_externalModelEndpoints.push_back(value); return *this; }


    /**
     * <p>The rules to include in the detector version.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>The rules to include in the detector version.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The rules to include in the detector version.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The rules to include in the detector version.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The rules to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>The rules to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The rules to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The rules to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>The model versions to include in the detector version.</p>
     */
    inline const Aws::Vector<ModelVersion>& GetModelVersions() const{ return m_modelVersions; }

    /**
     * <p>The model versions to include in the detector version.</p>
     */
    inline bool ModelVersionsHasBeenSet() const { return m_modelVersionsHasBeenSet; }

    /**
     * <p>The model versions to include in the detector version.</p>
     */
    inline void SetModelVersions(const Aws::Vector<ModelVersion>& value) { m_modelVersionsHasBeenSet = true; m_modelVersions = value; }

    /**
     * <p>The model versions to include in the detector version.</p>
     */
    inline void SetModelVersions(Aws::Vector<ModelVersion>&& value) { m_modelVersionsHasBeenSet = true; m_modelVersions = std::move(value); }

    /**
     * <p>The model versions to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& WithModelVersions(const Aws::Vector<ModelVersion>& value) { SetModelVersions(value); return *this;}

    /**
     * <p>The model versions to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& WithModelVersions(Aws::Vector<ModelVersion>&& value) { SetModelVersions(std::move(value)); return *this;}

    /**
     * <p>The model versions to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& AddModelVersions(const ModelVersion& value) { m_modelVersionsHasBeenSet = true; m_modelVersions.push_back(value); return *this; }

    /**
     * <p>The model versions to include in the detector version.</p>
     */
    inline CreateDetectorVersionRequest& AddModelVersions(ModelVersion&& value) { m_modelVersionsHasBeenSet = true; m_modelVersions.push_back(std::move(value)); return *this; }


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
    inline const RuleExecutionMode& GetRuleExecutionMode() const{ return m_ruleExecutionMode; }

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
    inline bool RuleExecutionModeHasBeenSet() const { return m_ruleExecutionModeHasBeenSet; }

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
    inline void SetRuleExecutionMode(const RuleExecutionMode& value) { m_ruleExecutionModeHasBeenSet = true; m_ruleExecutionMode = value; }

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
    inline void SetRuleExecutionMode(RuleExecutionMode&& value) { m_ruleExecutionModeHasBeenSet = true; m_ruleExecutionMode = std::move(value); }

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
    inline CreateDetectorVersionRequest& WithRuleExecutionMode(const RuleExecutionMode& value) { SetRuleExecutionMode(value); return *this;}

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
    inline CreateDetectorVersionRequest& WithRuleExecutionMode(RuleExecutionMode&& value) { SetRuleExecutionMode(std::move(value)); return *this;}


    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateDetectorVersionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateDetectorVersionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateDetectorVersionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateDetectorVersionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    RuleExecutionMode m_ruleExecutionMode;
    bool m_ruleExecutionModeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
