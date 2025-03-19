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
    AWS_CODEPIPELINE_API RuleType() = default;
    AWS_CODEPIPELINE_API RuleType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents information about a rule type.</p>
     */
    inline const RuleTypeId& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = RuleTypeId>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = RuleTypeId>
    RuleType& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns information about the settings for a rule type.</p>
     */
    inline const RuleTypeSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = RuleTypeSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = RuleTypeSettings>
    RuleType& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration properties for the rule type.</p>
     */
    inline const Aws::Vector<RuleConfigurationProperty>& GetRuleConfigurationProperties() const { return m_ruleConfigurationProperties; }
    inline bool RuleConfigurationPropertiesHasBeenSet() const { return m_ruleConfigurationPropertiesHasBeenSet; }
    template<typename RuleConfigurationPropertiesT = Aws::Vector<RuleConfigurationProperty>>
    void SetRuleConfigurationProperties(RuleConfigurationPropertiesT&& value) { m_ruleConfigurationPropertiesHasBeenSet = true; m_ruleConfigurationProperties = std::forward<RuleConfigurationPropertiesT>(value); }
    template<typename RuleConfigurationPropertiesT = Aws::Vector<RuleConfigurationProperty>>
    RuleType& WithRuleConfigurationProperties(RuleConfigurationPropertiesT&& value) { SetRuleConfigurationProperties(std::forward<RuleConfigurationPropertiesT>(value)); return *this;}
    template<typename RuleConfigurationPropertiesT = RuleConfigurationProperty>
    RuleType& AddRuleConfigurationProperties(RuleConfigurationPropertiesT&& value) { m_ruleConfigurationPropertiesHasBeenSet = true; m_ruleConfigurationProperties.emplace_back(std::forward<RuleConfigurationPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ArtifactDetails& GetInputArtifactDetails() const { return m_inputArtifactDetails; }
    inline bool InputArtifactDetailsHasBeenSet() const { return m_inputArtifactDetailsHasBeenSet; }
    template<typename InputArtifactDetailsT = ArtifactDetails>
    void SetInputArtifactDetails(InputArtifactDetailsT&& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = std::forward<InputArtifactDetailsT>(value); }
    template<typename InputArtifactDetailsT = ArtifactDetails>
    RuleType& WithInputArtifactDetails(InputArtifactDetailsT&& value) { SetInputArtifactDetails(std::forward<InputArtifactDetailsT>(value)); return *this;}
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
