/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_CODEPIPELINE_API ActionType
  {
  public:
    ActionType();
    ActionType(Aws::Utils::Json::JsonView jsonValue);
    ActionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents information about an action type.</p>
     */
    inline const ActionTypeId& GetId() const{ return m_id; }

    /**
     * <p>Represents information about an action type.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Represents information about an action type.</p>
     */
    inline void SetId(const ActionTypeId& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Represents information about an action type.</p>
     */
    inline void SetId(ActionTypeId&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Represents information about an action type.</p>
     */
    inline ActionType& WithId(const ActionTypeId& value) { SetId(value); return *this;}

    /**
     * <p>Represents information about an action type.</p>
     */
    inline ActionType& WithId(ActionTypeId&& value) { SetId(std::move(value)); return *this;}


    /**
     * <p>The settings for the action type.</p>
     */
    inline const ActionTypeSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>The settings for the action type.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>The settings for the action type.</p>
     */
    inline void SetSettings(const ActionTypeSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>The settings for the action type.</p>
     */
    inline void SetSettings(ActionTypeSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>The settings for the action type.</p>
     */
    inline ActionType& WithSettings(const ActionTypeSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>The settings for the action type.</p>
     */
    inline ActionType& WithSettings(ActionTypeSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>The configuration properties for the action type.</p>
     */
    inline const Aws::Vector<ActionConfigurationProperty>& GetActionConfigurationProperties() const{ return m_actionConfigurationProperties; }

    /**
     * <p>The configuration properties for the action type.</p>
     */
    inline bool ActionConfigurationPropertiesHasBeenSet() const { return m_actionConfigurationPropertiesHasBeenSet; }

    /**
     * <p>The configuration properties for the action type.</p>
     */
    inline void SetActionConfigurationProperties(const Aws::Vector<ActionConfigurationProperty>& value) { m_actionConfigurationPropertiesHasBeenSet = true; m_actionConfigurationProperties = value; }

    /**
     * <p>The configuration properties for the action type.</p>
     */
    inline void SetActionConfigurationProperties(Aws::Vector<ActionConfigurationProperty>&& value) { m_actionConfigurationPropertiesHasBeenSet = true; m_actionConfigurationProperties = std::move(value); }

    /**
     * <p>The configuration properties for the action type.</p>
     */
    inline ActionType& WithActionConfigurationProperties(const Aws::Vector<ActionConfigurationProperty>& value) { SetActionConfigurationProperties(value); return *this;}

    /**
     * <p>The configuration properties for the action type.</p>
     */
    inline ActionType& WithActionConfigurationProperties(Aws::Vector<ActionConfigurationProperty>&& value) { SetActionConfigurationProperties(std::move(value)); return *this;}

    /**
     * <p>The configuration properties for the action type.</p>
     */
    inline ActionType& AddActionConfigurationProperties(const ActionConfigurationProperty& value) { m_actionConfigurationPropertiesHasBeenSet = true; m_actionConfigurationProperties.push_back(value); return *this; }

    /**
     * <p>The configuration properties for the action type.</p>
     */
    inline ActionType& AddActionConfigurationProperties(ActionConfigurationProperty&& value) { m_actionConfigurationPropertiesHasBeenSet = true; m_actionConfigurationProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline const ArtifactDetails& GetInputArtifactDetails() const{ return m_inputArtifactDetails; }

    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline bool InputArtifactDetailsHasBeenSet() const { return m_inputArtifactDetailsHasBeenSet; }

    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline void SetInputArtifactDetails(const ArtifactDetails& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = value; }

    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline void SetInputArtifactDetails(ArtifactDetails&& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = std::move(value); }

    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline ActionType& WithInputArtifactDetails(const ArtifactDetails& value) { SetInputArtifactDetails(value); return *this;}

    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline ActionType& WithInputArtifactDetails(ArtifactDetails&& value) { SetInputArtifactDetails(std::move(value)); return *this;}


    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline const ArtifactDetails& GetOutputArtifactDetails() const{ return m_outputArtifactDetails; }

    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline bool OutputArtifactDetailsHasBeenSet() const { return m_outputArtifactDetailsHasBeenSet; }

    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline void SetOutputArtifactDetails(const ArtifactDetails& value) { m_outputArtifactDetailsHasBeenSet = true; m_outputArtifactDetails = value; }

    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline void SetOutputArtifactDetails(ArtifactDetails&& value) { m_outputArtifactDetailsHasBeenSet = true; m_outputArtifactDetails = std::move(value); }

    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline ActionType& WithOutputArtifactDetails(const ArtifactDetails& value) { SetOutputArtifactDetails(value); return *this;}

    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline ActionType& WithOutputArtifactDetails(ArtifactDetails&& value) { SetOutputArtifactDetails(std::move(value)); return *this;}

  private:

    ActionTypeId m_id;
    bool m_idHasBeenSet;

    ActionTypeSettings m_settings;
    bool m_settingsHasBeenSet;

    Aws::Vector<ActionConfigurationProperty> m_actionConfigurationProperties;
    bool m_actionConfigurationPropertiesHasBeenSet;

    ArtifactDetails m_inputArtifactDetails;
    bool m_inputArtifactDetailsHasBeenSet;

    ArtifactDetails m_outputArtifactDetails;
    bool m_outputArtifactDetailsHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
