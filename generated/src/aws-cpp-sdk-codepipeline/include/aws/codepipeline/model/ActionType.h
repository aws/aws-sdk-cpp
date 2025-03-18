/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ActionTypeId.h>
#include <aws/codepipeline/model/ActionTypeSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ArtifactDetails.h>
#include <aws/codepipeline/model/ActionConfigurationProperty.h>
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
   * <p>Returns information about the details of an action type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionType">AWS
   * API Reference</a></p>
   */
  class ActionType
  {
  public:
    AWS_CODEPIPELINE_API ActionType() = default;
    AWS_CODEPIPELINE_API ActionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents information about an action type.</p>
     */
    inline const ActionTypeId& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = ActionTypeId>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = ActionTypeId>
    ActionType& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the action type.</p>
     */
    inline const ActionTypeSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = ActionTypeSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = ActionTypeSettings>
    ActionType& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration properties for the action type.</p>
     */
    inline const Aws::Vector<ActionConfigurationProperty>& GetActionConfigurationProperties() const { return m_actionConfigurationProperties; }
    inline bool ActionConfigurationPropertiesHasBeenSet() const { return m_actionConfigurationPropertiesHasBeenSet; }
    template<typename ActionConfigurationPropertiesT = Aws::Vector<ActionConfigurationProperty>>
    void SetActionConfigurationProperties(ActionConfigurationPropertiesT&& value) { m_actionConfigurationPropertiesHasBeenSet = true; m_actionConfigurationProperties = std::forward<ActionConfigurationPropertiesT>(value); }
    template<typename ActionConfigurationPropertiesT = Aws::Vector<ActionConfigurationProperty>>
    ActionType& WithActionConfigurationProperties(ActionConfigurationPropertiesT&& value) { SetActionConfigurationProperties(std::forward<ActionConfigurationPropertiesT>(value)); return *this;}
    template<typename ActionConfigurationPropertiesT = ActionConfigurationProperty>
    ActionType& AddActionConfigurationProperties(ActionConfigurationPropertiesT&& value) { m_actionConfigurationPropertiesHasBeenSet = true; m_actionConfigurationProperties.emplace_back(std::forward<ActionConfigurationPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline const ArtifactDetails& GetInputArtifactDetails() const { return m_inputArtifactDetails; }
    inline bool InputArtifactDetailsHasBeenSet() const { return m_inputArtifactDetailsHasBeenSet; }
    template<typename InputArtifactDetailsT = ArtifactDetails>
    void SetInputArtifactDetails(InputArtifactDetailsT&& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = std::forward<InputArtifactDetailsT>(value); }
    template<typename InputArtifactDetailsT = ArtifactDetails>
    ActionType& WithInputArtifactDetails(InputArtifactDetailsT&& value) { SetInputArtifactDetails(std::forward<InputArtifactDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline const ArtifactDetails& GetOutputArtifactDetails() const { return m_outputArtifactDetails; }
    inline bool OutputArtifactDetailsHasBeenSet() const { return m_outputArtifactDetailsHasBeenSet; }
    template<typename OutputArtifactDetailsT = ArtifactDetails>
    void SetOutputArtifactDetails(OutputArtifactDetailsT&& value) { m_outputArtifactDetailsHasBeenSet = true; m_outputArtifactDetails = std::forward<OutputArtifactDetailsT>(value); }
    template<typename OutputArtifactDetailsT = ArtifactDetails>
    ActionType& WithOutputArtifactDetails(OutputArtifactDetailsT&& value) { SetOutputArtifactDetails(std::forward<OutputArtifactDetailsT>(value)); return *this;}
    ///@}
  private:

    ActionTypeId m_id;
    bool m_idHasBeenSet = false;

    ActionTypeSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<ActionConfigurationProperty> m_actionConfigurationProperties;
    bool m_actionConfigurationPropertiesHasBeenSet = false;

    ArtifactDetails m_inputArtifactDetails;
    bool m_inputArtifactDetailsHasBeenSet = false;

    ArtifactDetails m_outputArtifactDetails;
    bool m_outputArtifactDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
