/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/LocalizedText.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/Attribute.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about an Inspector finding.</p> <p>This data type is
   * used as the response element in the <a>DescribeFinding</a> action.</p>
   */
  class AWS_INSPECTOR_API Finding
  {
  public:
    Finding();
    Finding(const Aws::Utils::Json::JsonValue& jsonValue);
    Finding& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ARN specifying the finding.</p>
     */
    inline const Aws::String& GetFindingArn() const{ return m_findingArn; }

    /**
     * <p>The ARN specifying the finding.</p>
     */
    inline void SetFindingArn(const Aws::String& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }

    /**
     * <p>The ARN specifying the finding.</p>
     */
    inline void SetFindingArn(Aws::String&& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }

    /**
     * <p>The ARN specifying the finding.</p>
     */
    inline void SetFindingArn(const char* value) { m_findingArnHasBeenSet = true; m_findingArn.assign(value); }

    /**
     * <p>The ARN specifying the finding.</p>
     */
    inline Finding& WithFindingArn(const Aws::String& value) { SetFindingArn(value); return *this;}

    /**
     * <p>The ARN specifying the finding.</p>
     */
    inline Finding& WithFindingArn(Aws::String&& value) { SetFindingArn(value); return *this;}

    /**
     * <p>The ARN specifying the finding.</p>
     */
    inline Finding& WithFindingArn(const char* value) { SetFindingArn(value); return *this;}

    /**
     * <p>The ARN of the assessment run that generated the finding.</p>
     */
    inline const Aws::String& GetRunArn() const{ return m_runArn; }

    /**
     * <p>The ARN of the assessment run that generated the finding.</p>
     */
    inline void SetRunArn(const Aws::String& value) { m_runArnHasBeenSet = true; m_runArn = value; }

    /**
     * <p>The ARN of the assessment run that generated the finding.</p>
     */
    inline void SetRunArn(Aws::String&& value) { m_runArnHasBeenSet = true; m_runArn = value; }

    /**
     * <p>The ARN of the assessment run that generated the finding.</p>
     */
    inline void SetRunArn(const char* value) { m_runArnHasBeenSet = true; m_runArn.assign(value); }

    /**
     * <p>The ARN of the assessment run that generated the finding.</p>
     */
    inline Finding& WithRunArn(const Aws::String& value) { SetRunArn(value); return *this;}

    /**
     * <p>The ARN of the assessment run that generated the finding.</p>
     */
    inline Finding& WithRunArn(Aws::String&& value) { SetRunArn(value); return *this;}

    /**
     * <p>The ARN of the assessment run that generated the finding.</p>
     */
    inline Finding& WithRunArn(const char* value) { SetRunArn(value); return *this;}

    /**
     * <p>The ARN of the rules package that is used to generate the finding.</p>
     */
    inline const Aws::String& GetRulesPackageArn() const{ return m_rulesPackageArn; }

    /**
     * <p>The ARN of the rules package that is used to generate the finding.</p>
     */
    inline void SetRulesPackageArn(const Aws::String& value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn = value; }

    /**
     * <p>The ARN of the rules package that is used to generate the finding.</p>
     */
    inline void SetRulesPackageArn(Aws::String&& value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn = value; }

    /**
     * <p>The ARN of the rules package that is used to generate the finding.</p>
     */
    inline void SetRulesPackageArn(const char* value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn.assign(value); }

    /**
     * <p>The ARN of the rules package that is used to generate the finding.</p>
     */
    inline Finding& WithRulesPackageArn(const Aws::String& value) { SetRulesPackageArn(value); return *this;}

    /**
     * <p>The ARN of the rules package that is used to generate the finding.</p>
     */
    inline Finding& WithRulesPackageArn(Aws::String&& value) { SetRulesPackageArn(value); return *this;}

    /**
     * <p>The ARN of the rules package that is used to generate the finding.</p>
     */
    inline Finding& WithRulesPackageArn(const char* value) { SetRulesPackageArn(value); return *this;}

    /**
     * <p>The rule name that is used to generate the finding.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The rule name that is used to generate the finding.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The rule name that is used to generate the finding.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The rule name that is used to generate the finding.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The rule name that is used to generate the finding.</p>
     */
    inline Finding& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The rule name that is used to generate the finding.</p>
     */
    inline Finding& WithRuleName(Aws::String&& value) { SetRuleName(value); return *this;}

    /**
     * <p>The rule name that is used to generate the finding.</p>
     */
    inline Finding& WithRuleName(const char* value) { SetRuleName(value); return *this;}

    /**
     * <p>The EC2 instance ID where the agent is installed that is used during the
     * assessment that generates the finding. </p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The EC2 instance ID where the agent is installed that is used during the
     * assessment that generates the finding. </p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The EC2 instance ID where the agent is installed that is used during the
     * assessment that generates the finding. </p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The EC2 instance ID where the agent is installed that is used during the
     * assessment that generates the finding. </p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The EC2 instance ID where the agent is installed that is used during the
     * assessment that generates the finding. </p>
     */
    inline Finding& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The EC2 instance ID where the agent is installed that is used during the
     * assessment that generates the finding. </p>
     */
    inline Finding& WithAgentId(Aws::String&& value) { SetAgentId(value); return *this;}

    /**
     * <p>The EC2 instance ID where the agent is installed that is used during the
     * assessment that generates the finding. </p>
     */
    inline Finding& WithAgentId(const char* value) { SetAgentId(value); return *this;}

    /**
     * <p>The autoscaling group of the EC2 instance where the agent is installed that
     * is used during the assessment that generates the finding.</p>
     */
    inline const Aws::String& GetAutoScalingGroup() const{ return m_autoScalingGroup; }

    /**
     * <p>The autoscaling group of the EC2 instance where the agent is installed that
     * is used during the assessment that generates the finding.</p>
     */
    inline void SetAutoScalingGroup(const Aws::String& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = value; }

    /**
     * <p>The autoscaling group of the EC2 instance where the agent is installed that
     * is used during the assessment that generates the finding.</p>
     */
    inline void SetAutoScalingGroup(Aws::String&& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = value; }

    /**
     * <p>The autoscaling group of the EC2 instance where the agent is installed that
     * is used during the assessment that generates the finding.</p>
     */
    inline void SetAutoScalingGroup(const char* value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup.assign(value); }

    /**
     * <p>The autoscaling group of the EC2 instance where the agent is installed that
     * is used during the assessment that generates the finding.</p>
     */
    inline Finding& WithAutoScalingGroup(const Aws::String& value) { SetAutoScalingGroup(value); return *this;}

    /**
     * <p>The autoscaling group of the EC2 instance where the agent is installed that
     * is used during the assessment that generates the finding.</p>
     */
    inline Finding& WithAutoScalingGroup(Aws::String&& value) { SetAutoScalingGroup(value); return *this;}

    /**
     * <p>The autoscaling group of the EC2 instance where the agent is installed that
     * is used during the assessment that generates the finding.</p>
     */
    inline Finding& WithAutoScalingGroup(const char* value) { SetAutoScalingGroup(value); return *this;}

    /**
     * <p>The finding severity. Values can be set to <i>High</i>, <i>Medium</i>,
     * <i>Low</i>, and <i>Informational</i>.</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }

    /**
     * <p>The finding severity. Values can be set to <i>High</i>, <i>Medium</i>,
     * <i>Low</i>, and <i>Informational</i>.</p>
     */
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The finding severity. Values can be set to <i>High</i>, <i>Medium</i>,
     * <i>Low</i>, and <i>Informational</i>.</p>
     */
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The finding severity. Values can be set to <i>High</i>, <i>Medium</i>,
     * <i>Low</i>, and <i>Informational</i>.</p>
     */
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }

    /**
     * <p>The finding severity. Values can be set to <i>High</i>, <i>Medium</i>,
     * <i>Low</i>, and <i>Informational</i>.</p>
     */
    inline Finding& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}

    /**
     * <p>The finding severity. Values can be set to <i>High</i>, <i>Medium</i>,
     * <i>Low</i>, and <i>Informational</i>.</p>
     */
    inline Finding& WithSeverity(Aws::String&& value) { SetSeverity(value); return *this;}

    /**
     * <p>The finding severity. Values can be set to <i>High</i>, <i>Medium</i>,
     * <i>Low</i>, and <i>Informational</i>.</p>
     */
    inline Finding& WithSeverity(const char* value) { SetSeverity(value); return *this;}

    /**
     * <p>A short description that identifies the finding.</p>
     */
    inline const LocalizedText& GetFinding() const{ return m_finding; }

    /**
     * <p>A short description that identifies the finding.</p>
     */
    inline void SetFinding(const LocalizedText& value) { m_findingHasBeenSet = true; m_finding = value; }

    /**
     * <p>A short description that identifies the finding.</p>
     */
    inline void SetFinding(LocalizedText&& value) { m_findingHasBeenSet = true; m_finding = value; }

    /**
     * <p>A short description that identifies the finding.</p>
     */
    inline Finding& WithFinding(const LocalizedText& value) { SetFinding(value); return *this;}

    /**
     * <p>A short description that identifies the finding.</p>
     */
    inline Finding& WithFinding(LocalizedText&& value) { SetFinding(value); return *this;}

    /**
     * <p>The description of the finding.</p>
     */
    inline const LocalizedText& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(const LocalizedText& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(LocalizedText&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the finding.</p>
     */
    inline Finding& WithDescription(const LocalizedText& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the finding.</p>
     */
    inline Finding& WithDescription(LocalizedText&& value) { SetDescription(value); return *this;}

    /**
     * <p>The recommendation for the finding. </p>
     */
    inline const LocalizedText& GetRecommendation() const{ return m_recommendation; }

    /**
     * <p>The recommendation for the finding. </p>
     */
    inline void SetRecommendation(const LocalizedText& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }

    /**
     * <p>The recommendation for the finding. </p>
     */
    inline void SetRecommendation(LocalizedText&& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }

    /**
     * <p>The recommendation for the finding. </p>
     */
    inline Finding& WithRecommendation(const LocalizedText& value) { SetRecommendation(value); return *this;}

    /**
     * <p>The recommendation for the finding. </p>
     */
    inline Finding& WithRecommendation(LocalizedText&& value) { SetRecommendation(value); return *this;}

    /**
     * <p>The system-defined attributes for the finding. </p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The system-defined attributes for the finding. </p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The system-defined attributes for the finding. </p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The system-defined attributes for the finding. </p>
     */
    inline Finding& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The system-defined attributes for the finding. </p>
     */
    inline Finding& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>The system-defined attributes for the finding. </p>
     */
    inline Finding& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The system-defined attributes for the finding. </p>
     */
    inline Finding& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline void SetUserAttributes(const Aws::Vector<Attribute>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline void SetUserAttributes(Aws::Vector<Attribute>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline Finding& WithUserAttributes(const Aws::Vector<Attribute>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline Finding& WithUserAttributes(Aws::Vector<Attribute>&& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline Finding& AddUserAttributes(const Attribute& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline Finding& AddUserAttributes(Attribute&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

  private:
    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet;
    Aws::String m_runArn;
    bool m_runArnHasBeenSet;
    Aws::String m_rulesPackageArn;
    bool m_rulesPackageArnHasBeenSet;
    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;
    Aws::String m_agentId;
    bool m_agentIdHasBeenSet;
    Aws::String m_autoScalingGroup;
    bool m_autoScalingGroupHasBeenSet;
    Aws::String m_severity;
    bool m_severityHasBeenSet;
    LocalizedText m_finding;
    bool m_findingHasBeenSet;
    LocalizedText m_description;
    bool m_descriptionHasBeenSet;
    LocalizedText m_recommendation;
    bool m_recommendationHasBeenSet;
    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;
    Aws::Vector<Attribute> m_userAttributes;
    bool m_userAttributesHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
