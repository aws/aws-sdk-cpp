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
    AWS_CODEPIPELINE_API ActionType();
    AWS_CODEPIPELINE_API ActionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents information about an action type.</p>
     */
    inline const ActionTypeId& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const ActionTypeId& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(ActionTypeId&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline ActionType& WithId(const ActionTypeId& value) { SetId(value); return *this;}
    inline ActionType& WithId(ActionTypeId&& value) { SetId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the action type.</p>
     */
    inline const ActionTypeSettings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const ActionTypeSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(ActionTypeSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline ActionType& WithSettings(const ActionTypeSettings& value) { SetSettings(value); return *this;}
    inline ActionType& WithSettings(ActionTypeSettings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration properties for the action type.</p>
     */
    inline const Aws::Vector<ActionConfigurationProperty>& GetActionConfigurationProperties() const{ return m_actionConfigurationProperties; }
    inline bool ActionConfigurationPropertiesHasBeenSet() const { return m_actionConfigurationPropertiesHasBeenSet; }
    inline void SetActionConfigurationProperties(const Aws::Vector<ActionConfigurationProperty>& value) { m_actionConfigurationPropertiesHasBeenSet = true; m_actionConfigurationProperties = value; }
    inline void SetActionConfigurationProperties(Aws::Vector<ActionConfigurationProperty>&& value) { m_actionConfigurationPropertiesHasBeenSet = true; m_actionConfigurationProperties = std::move(value); }
    inline ActionType& WithActionConfigurationProperties(const Aws::Vector<ActionConfigurationProperty>& value) { SetActionConfigurationProperties(value); return *this;}
    inline ActionType& WithActionConfigurationProperties(Aws::Vector<ActionConfigurationProperty>&& value) { SetActionConfigurationProperties(std::move(value)); return *this;}
    inline ActionType& AddActionConfigurationProperties(const ActionConfigurationProperty& value) { m_actionConfigurationPropertiesHasBeenSet = true; m_actionConfigurationProperties.push_back(value); return *this; }
    inline ActionType& AddActionConfigurationProperties(ActionConfigurationProperty&& value) { m_actionConfigurationPropertiesHasBeenSet = true; m_actionConfigurationProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline const ArtifactDetails& GetInputArtifactDetails() const{ return m_inputArtifactDetails; }
    inline bool InputArtifactDetailsHasBeenSet() const { return m_inputArtifactDetailsHasBeenSet; }
    inline void SetInputArtifactDetails(const ArtifactDetails& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = value; }
    inline void SetInputArtifactDetails(ArtifactDetails&& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = std::move(value); }
    inline ActionType& WithInputArtifactDetails(const ArtifactDetails& value) { SetInputArtifactDetails(value); return *this;}
    inline ActionType& WithInputArtifactDetails(ArtifactDetails&& value) { SetInputArtifactDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline const ArtifactDetails& GetOutputArtifactDetails() const{ return m_outputArtifactDetails; }
    inline bool OutputArtifactDetailsHasBeenSet() const { return m_outputArtifactDetailsHasBeenSet; }
    inline void SetOutputArtifactDetails(const ArtifactDetails& value) { m_outputArtifactDetailsHasBeenSet = true; m_outputArtifactDetails = value; }
    inline void SetOutputArtifactDetails(ArtifactDetails&& value) { m_outputArtifactDetailsHasBeenSet = true; m_outputArtifactDetails = std::move(value); }
    inline ActionType& WithOutputArtifactDetails(const ArtifactDetails& value) { SetOutputArtifactDetails(value); return *this;}
    inline ActionType& WithOutputArtifactDetails(ArtifactDetails&& value) { SetOutputArtifactDetails(std::move(value)); return *this;}
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
