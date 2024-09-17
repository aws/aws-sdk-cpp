/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/RuleTypeId.h>
#include <aws/codepipeline/model/RuleTypeSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ArtifactDetails.h>
#include <aws/codepipeline/model/RuleConfigurationProperty.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The rule type, which is made up of the combined values for category, owner,
   * provider, and version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleType">AWS
   * API Reference</a></p>
   */
  class RuleType
  {
  public:
    AWS_CODEPIPELINE_API RuleType();
    AWS_CODEPIPELINE_API RuleType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents information about a rule type.</p>
     */
    inline const RuleTypeId& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const RuleTypeId& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(RuleTypeId&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline RuleType& WithId(const RuleTypeId& value) { SetId(value); return *this;}
    inline RuleType& WithId(RuleTypeId&& value) { SetId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns information about the settings for a rule type.</p>
     */
    inline const RuleTypeSettings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const RuleTypeSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(RuleTypeSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline RuleType& WithSettings(const RuleTypeSettings& value) { SetSettings(value); return *this;}
    inline RuleType& WithSettings(RuleTypeSettings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration properties for the rule type.</p>
     */
    inline const Aws::Vector<RuleConfigurationProperty>& GetRuleConfigurationProperties() const{ return m_ruleConfigurationProperties; }
    inline bool RuleConfigurationPropertiesHasBeenSet() const { return m_ruleConfigurationPropertiesHasBeenSet; }
    inline void SetRuleConfigurationProperties(const Aws::Vector<RuleConfigurationProperty>& value) { m_ruleConfigurationPropertiesHasBeenSet = true; m_ruleConfigurationProperties = value; }
    inline void SetRuleConfigurationProperties(Aws::Vector<RuleConfigurationProperty>&& value) { m_ruleConfigurationPropertiesHasBeenSet = true; m_ruleConfigurationProperties = std::move(value); }
    inline RuleType& WithRuleConfigurationProperties(const Aws::Vector<RuleConfigurationProperty>& value) { SetRuleConfigurationProperties(value); return *this;}
    inline RuleType& WithRuleConfigurationProperties(Aws::Vector<RuleConfigurationProperty>&& value) { SetRuleConfigurationProperties(std::move(value)); return *this;}
    inline RuleType& AddRuleConfigurationProperties(const RuleConfigurationProperty& value) { m_ruleConfigurationPropertiesHasBeenSet = true; m_ruleConfigurationProperties.push_back(value); return *this; }
    inline RuleType& AddRuleConfigurationProperties(RuleConfigurationProperty&& value) { m_ruleConfigurationPropertiesHasBeenSet = true; m_ruleConfigurationProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ArtifactDetails& GetInputArtifactDetails() const{ return m_inputArtifactDetails; }
    inline bool InputArtifactDetailsHasBeenSet() const { return m_inputArtifactDetailsHasBeenSet; }
    inline void SetInputArtifactDetails(const ArtifactDetails& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = value; }
    inline void SetInputArtifactDetails(ArtifactDetails&& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = std::move(value); }
    inline RuleType& WithInputArtifactDetails(const ArtifactDetails& value) { SetInputArtifactDetails(value); return *this;}
    inline RuleType& WithInputArtifactDetails(ArtifactDetails&& value) { SetInputArtifactDetails(std::move(value)); return *this;}
    ///@}
  private:

    RuleTypeId m_id;
    bool m_idHasBeenSet = false;

    RuleTypeSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<RuleConfigurationProperty> m_ruleConfigurationProperties;
    bool m_ruleConfigurationPropertiesHasBeenSet = false;

    ArtifactDetails m_inputArtifactDetails;
    bool m_inputArtifactDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
