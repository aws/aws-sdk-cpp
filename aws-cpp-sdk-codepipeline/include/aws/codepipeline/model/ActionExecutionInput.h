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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ArtifactDetail.h>
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
   * <p>Input information used for an action execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionExecutionInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ActionExecutionInput
  {
  public:
    ActionExecutionInput();
    ActionExecutionInput(Aws::Utils::Json::JsonView jsonValue);
    ActionExecutionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ActionTypeId& GetActionTypeId() const{ return m_actionTypeId; }

    
    inline bool ActionTypeIdHasBeenSet() const { return m_actionTypeIdHasBeenSet; }

    
    inline void SetActionTypeId(const ActionTypeId& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = value; }

    
    inline void SetActionTypeId(ActionTypeId&& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = std::move(value); }

    
    inline ActionExecutionInput& WithActionTypeId(const ActionTypeId& value) { SetActionTypeId(value); return *this;}

    
    inline ActionExecutionInput& WithActionTypeId(ActionTypeId&& value) { SetActionTypeId(std::move(value)); return *this;}


    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline void SetConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline void SetConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline ActionExecutionInput& WithConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline ActionExecutionInput& WithConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline ActionExecutionInput& AddConfiguration(const Aws::String& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }

    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline ActionExecutionInput& AddConfiguration(Aws::String&& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline ActionExecutionInput& AddConfiguration(const Aws::String& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline ActionExecutionInput& AddConfiguration(Aws::String&& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline ActionExecutionInput& AddConfiguration(const char* key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline ActionExecutionInput& AddConfiguration(Aws::String&& key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configuration data for an action execution.</p>
     */
    inline ActionExecutionInput& AddConfiguration(const char* key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }


    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline. </p>
     */
    inline ActionExecutionInput& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline. </p>
     */
    inline ActionExecutionInput& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline. </p>
     */
    inline ActionExecutionInput& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The AWS Region for the action, such as us-east-1.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region for the action, such as us-east-1.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region for the action, such as us-east-1.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region for the action, such as us-east-1.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region for the action, such as us-east-1.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region for the action, such as us-east-1.</p>
     */
    inline ActionExecutionInput& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region for the action, such as us-east-1.</p>
     */
    inline ActionExecutionInput& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region for the action, such as us-east-1.</p>
     */
    inline ActionExecutionInput& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>Details of input artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline const Aws::Vector<ArtifactDetail>& GetInputArtifacts() const{ return m_inputArtifacts; }

    /**
     * <p>Details of input artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }

    /**
     * <p>Details of input artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline void SetInputArtifacts(const Aws::Vector<ArtifactDetail>& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = value; }

    /**
     * <p>Details of input artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline void SetInputArtifacts(Aws::Vector<ArtifactDetail>&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::move(value); }

    /**
     * <p>Details of input artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline ActionExecutionInput& WithInputArtifacts(const Aws::Vector<ArtifactDetail>& value) { SetInputArtifacts(value); return *this;}

    /**
     * <p>Details of input artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline ActionExecutionInput& WithInputArtifacts(Aws::Vector<ArtifactDetail>&& value) { SetInputArtifacts(std::move(value)); return *this;}

    /**
     * <p>Details of input artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline ActionExecutionInput& AddInputArtifacts(const ArtifactDetail& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(value); return *this; }

    /**
     * <p>Details of input artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline ActionExecutionInput& AddInputArtifacts(ArtifactDetail&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(std::move(value)); return *this; }

  private:

    ActionTypeId m_actionTypeId;
    bool m_actionTypeIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_configuration;
    bool m_configurationHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::Vector<ArtifactDetail> m_inputArtifacts;
    bool m_inputArtifactsHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
