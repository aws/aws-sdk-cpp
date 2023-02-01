/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionTypeId.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/OutputArtifact.h>
#include <aws/codepipeline/model/InputArtifact.h>
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
   * <p>Represents information about an action declaration.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionDeclaration">AWS
   * API Reference</a></p>
   */
  class ActionDeclaration
  {
  public:
    AWS_CODEPIPELINE_API ActionDeclaration();
    AWS_CODEPIPELINE_API ActionDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action declaration's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The action declaration's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The action declaration's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The action declaration's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The action declaration's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The action declaration's name.</p>
     */
    inline ActionDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The action declaration's name.</p>
     */
    inline ActionDeclaration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The action declaration's name.</p>
     */
    inline ActionDeclaration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the action type and the provider of the action.</p>
     */
    inline const ActionTypeId& GetActionTypeId() const{ return m_actionTypeId; }

    /**
     * <p>Specifies the action type and the provider of the action.</p>
     */
    inline bool ActionTypeIdHasBeenSet() const { return m_actionTypeIdHasBeenSet; }

    /**
     * <p>Specifies the action type and the provider of the action.</p>
     */
    inline void SetActionTypeId(const ActionTypeId& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = value; }

    /**
     * <p>Specifies the action type and the provider of the action.</p>
     */
    inline void SetActionTypeId(ActionTypeId&& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = std::move(value); }

    /**
     * <p>Specifies the action type and the provider of the action.</p>
     */
    inline ActionDeclaration& WithActionTypeId(const ActionTypeId& value) { SetActionTypeId(value); return *this;}

    /**
     * <p>Specifies the action type and the provider of the action.</p>
     */
    inline ActionDeclaration& WithActionTypeId(ActionTypeId&& value) { SetActionTypeId(std::move(value)); return *this;}


    /**
     * <p>The order in which actions are run.</p>
     */
    inline int GetRunOrder() const{ return m_runOrder; }

    /**
     * <p>The order in which actions are run.</p>
     */
    inline bool RunOrderHasBeenSet() const { return m_runOrderHasBeenSet; }

    /**
     * <p>The order in which actions are run.</p>
     */
    inline void SetRunOrder(int value) { m_runOrderHasBeenSet = true; m_runOrder = value; }

    /**
     * <p>The order in which actions are run.</p>
     */
    inline ActionDeclaration& WithRunOrder(int value) { SetRunOrder(value); return *this;}


    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline void SetConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline void SetConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline ActionDeclaration& WithConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline ActionDeclaration& WithConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline ActionDeclaration& AddConfiguration(const Aws::String& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }

    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline ActionDeclaration& AddConfiguration(Aws::String&& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }

    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline ActionDeclaration& AddConfiguration(const Aws::String& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline ActionDeclaration& AddConfiguration(Aws::String&& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline ActionDeclaration& AddConfiguration(const char* key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline ActionDeclaration& AddConfiguration(Aws::String&& key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }

    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the AWS CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>AWS CloudFormation User Guide</i>. For
     * template snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the <i>AWS
     * CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline ActionDeclaration& AddConfiguration(const char* key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }


    /**
     * <p>The name or ID of the result of the action declaration, such as a test or
     * build artifact.</p>
     */
    inline const Aws::Vector<OutputArtifact>& GetOutputArtifacts() const{ return m_outputArtifacts; }

    /**
     * <p>The name or ID of the result of the action declaration, such as a test or
     * build artifact.</p>
     */
    inline bool OutputArtifactsHasBeenSet() const { return m_outputArtifactsHasBeenSet; }

    /**
     * <p>The name or ID of the result of the action declaration, such as a test or
     * build artifact.</p>
     */
    inline void SetOutputArtifacts(const Aws::Vector<OutputArtifact>& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = value; }

    /**
     * <p>The name or ID of the result of the action declaration, such as a test or
     * build artifact.</p>
     */
    inline void SetOutputArtifacts(Aws::Vector<OutputArtifact>&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = std::move(value); }

    /**
     * <p>The name or ID of the result of the action declaration, such as a test or
     * build artifact.</p>
     */
    inline ActionDeclaration& WithOutputArtifacts(const Aws::Vector<OutputArtifact>& value) { SetOutputArtifacts(value); return *this;}

    /**
     * <p>The name or ID of the result of the action declaration, such as a test or
     * build artifact.</p>
     */
    inline ActionDeclaration& WithOutputArtifacts(Aws::Vector<OutputArtifact>&& value) { SetOutputArtifacts(std::move(value)); return *this;}

    /**
     * <p>The name or ID of the result of the action declaration, such as a test or
     * build artifact.</p>
     */
    inline ActionDeclaration& AddOutputArtifacts(const OutputArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.push_back(value); return *this; }

    /**
     * <p>The name or ID of the result of the action declaration, such as a test or
     * build artifact.</p>
     */
    inline ActionDeclaration& AddOutputArtifacts(OutputArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>The name or ID of the artifact consumed by the action, such as a test or
     * build artifact.</p>
     */
    inline const Aws::Vector<InputArtifact>& GetInputArtifacts() const{ return m_inputArtifacts; }

    /**
     * <p>The name or ID of the artifact consumed by the action, such as a test or
     * build artifact.</p>
     */
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }

    /**
     * <p>The name or ID of the artifact consumed by the action, such as a test or
     * build artifact.</p>
     */
    inline void SetInputArtifacts(const Aws::Vector<InputArtifact>& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = value; }

    /**
     * <p>The name or ID of the artifact consumed by the action, such as a test or
     * build artifact.</p>
     */
    inline void SetInputArtifacts(Aws::Vector<InputArtifact>&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::move(value); }

    /**
     * <p>The name or ID of the artifact consumed by the action, such as a test or
     * build artifact.</p>
     */
    inline ActionDeclaration& WithInputArtifacts(const Aws::Vector<InputArtifact>& value) { SetInputArtifacts(value); return *this;}

    /**
     * <p>The name or ID of the artifact consumed by the action, such as a test or
     * build artifact.</p>
     */
    inline ActionDeclaration& WithInputArtifacts(Aws::Vector<InputArtifact>&& value) { SetInputArtifacts(std::move(value)); return *this;}

    /**
     * <p>The name or ID of the artifact consumed by the action, such as a test or
     * build artifact.</p>
     */
    inline ActionDeclaration& AddInputArtifacts(const InputArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(value); return *this; }

    /**
     * <p>The name or ID of the artifact consumed by the action, such as a test or
     * build artifact.</p>
     */
    inline ActionDeclaration& AddInputArtifacts(InputArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline.</p>
     */
    inline ActionDeclaration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline.</p>
     */
    inline ActionDeclaration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline.</p>
     */
    inline ActionDeclaration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The action declaration's AWS Region, such as us-east-1.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The action declaration's AWS Region, such as us-east-1.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The action declaration's AWS Region, such as us-east-1.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The action declaration's AWS Region, such as us-east-1.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The action declaration's AWS Region, such as us-east-1.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The action declaration's AWS Region, such as us-east-1.</p>
     */
    inline ActionDeclaration& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The action declaration's AWS Region, such as us-east-1.</p>
     */
    inline ActionDeclaration& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The action declaration's AWS Region, such as us-east-1.</p>
     */
    inline ActionDeclaration& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The variable namespace associated with the action. All variables produced as
     * output by this action fall under this namespace.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The variable namespace associated with the action. All variables produced as
     * output by this action fall under this namespace.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The variable namespace associated with the action. All variables produced as
     * output by this action fall under this namespace.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The variable namespace associated with the action. All variables produced as
     * output by this action fall under this namespace.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The variable namespace associated with the action. All variables produced as
     * output by this action fall under this namespace.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The variable namespace associated with the action. All variables produced as
     * output by this action fall under this namespace.</p>
     */
    inline ActionDeclaration& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The variable namespace associated with the action. All variables produced as
     * output by this action fall under this namespace.</p>
     */
    inline ActionDeclaration& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The variable namespace associated with the action. All variables produced as
     * output by this action fall under this namespace.</p>
     */
    inline ActionDeclaration& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ActionTypeId m_actionTypeId;
    bool m_actionTypeIdHasBeenSet = false;

    int m_runOrder;
    bool m_runOrderHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<OutputArtifact> m_outputArtifacts;
    bool m_outputArtifactsHasBeenSet = false;

    Aws::Vector<InputArtifact> m_inputArtifacts;
    bool m_inputArtifactsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
