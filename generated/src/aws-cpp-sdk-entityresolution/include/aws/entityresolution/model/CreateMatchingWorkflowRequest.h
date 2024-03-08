/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/IncrementalRunConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/ResolutionTechniques.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/entityresolution/model/InputSource.h>
#include <aws/entityresolution/model/OutputSource.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class CreateMatchingWorkflowRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API CreateMatchingWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMatchingWorkflow"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    /**
     * <p>A description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the workflow.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the workflow.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the workflow.</p>
     */
    inline CreateMatchingWorkflowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the workflow.</p>
     */
    inline CreateMatchingWorkflowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the workflow.</p>
     */
    inline CreateMatchingWorkflowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline const IncrementalRunConfig& GetIncrementalRunConfig() const{ return m_incrementalRunConfig; }

    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline bool IncrementalRunConfigHasBeenSet() const { return m_incrementalRunConfigHasBeenSet; }

    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline void SetIncrementalRunConfig(const IncrementalRunConfig& value) { m_incrementalRunConfigHasBeenSet = true; m_incrementalRunConfig = value; }

    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline void SetIncrementalRunConfig(IncrementalRunConfig&& value) { m_incrementalRunConfigHasBeenSet = true; m_incrementalRunConfig = std::move(value); }

    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline CreateMatchingWorkflowRequest& WithIncrementalRunConfig(const IncrementalRunConfig& value) { SetIncrementalRunConfig(value); return *this;}

    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline CreateMatchingWorkflowRequest& WithIncrementalRunConfig(IncrementalRunConfig&& value) { SetIncrementalRunConfig(std::move(value)); return *this;}


    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline const Aws::Vector<InputSource>& GetInputSourceConfig() const{ return m_inputSourceConfig; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline bool InputSourceConfigHasBeenSet() const { return m_inputSourceConfigHasBeenSet; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline void SetInputSourceConfig(const Aws::Vector<InputSource>& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig = value; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline void SetInputSourceConfig(Aws::Vector<InputSource>&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig = std::move(value); }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateMatchingWorkflowRequest& WithInputSourceConfig(const Aws::Vector<InputSource>& value) { SetInputSourceConfig(value); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateMatchingWorkflowRequest& WithInputSourceConfig(Aws::Vector<InputSource>&& value) { SetInputSourceConfig(std::move(value)); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateMatchingWorkflowRequest& AddInputSourceConfig(const InputSource& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig.push_back(value); return *this; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateMatchingWorkflowRequest& AddInputSourceConfig(InputSource&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline const Aws::Vector<OutputSource>& GetOutputSourceConfig() const{ return m_outputSourceConfig; }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline bool OutputSourceConfigHasBeenSet() const { return m_outputSourceConfigHasBeenSet; }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline void SetOutputSourceConfig(const Aws::Vector<OutputSource>& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig = value; }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline void SetOutputSourceConfig(Aws::Vector<OutputSource>&& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig = std::move(value); }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline CreateMatchingWorkflowRequest& WithOutputSourceConfig(const Aws::Vector<OutputSource>& value) { SetOutputSourceConfig(value); return *this;}

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline CreateMatchingWorkflowRequest& WithOutputSourceConfig(Aws::Vector<OutputSource>&& value) { SetOutputSourceConfig(std::move(value)); return *this;}

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline CreateMatchingWorkflowRequest& AddOutputSourceConfig(const OutputSource& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig.push_back(value); return *this; }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline CreateMatchingWorkflowRequest& AddOutputSourceConfig(OutputSource&& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code>.</p>
     */
    inline const ResolutionTechniques& GetResolutionTechniques() const{ return m_resolutionTechniques; }

    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code>.</p>
     */
    inline bool ResolutionTechniquesHasBeenSet() const { return m_resolutionTechniquesHasBeenSet; }

    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code>.</p>
     */
    inline void SetResolutionTechniques(const ResolutionTechniques& value) { m_resolutionTechniquesHasBeenSet = true; m_resolutionTechniques = value; }

    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code>.</p>
     */
    inline void SetResolutionTechniques(ResolutionTechniques&& value) { m_resolutionTechniquesHasBeenSet = true; m_resolutionTechniques = std::move(value); }

    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code>.</p>
     */
    inline CreateMatchingWorkflowRequest& WithResolutionTechniques(const ResolutionTechniques& value) { SetResolutionTechniques(value); return *this;}

    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code>.</p>
     */
    inline CreateMatchingWorkflowRequest& WithResolutionTechniques(ResolutionTechniques&& value) { SetResolutionTechniques(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline CreateMatchingWorkflowRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline CreateMatchingWorkflowRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline CreateMatchingWorkflowRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateMatchingWorkflowRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateMatchingWorkflowRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateMatchingWorkflowRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateMatchingWorkflowRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateMatchingWorkflowRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateMatchingWorkflowRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateMatchingWorkflowRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateMatchingWorkflowRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateMatchingWorkflowRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The name of the workflow. There can't be multiple
     * <code>MatchingWorkflows</code> with the same name.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }

    /**
     * <p>The name of the workflow. There can't be multiple
     * <code>MatchingWorkflows</code> with the same name.</p>
     */
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }

    /**
     * <p>The name of the workflow. There can't be multiple
     * <code>MatchingWorkflows</code> with the same name.</p>
     */
    inline void SetWorkflowName(const Aws::String& value) { m_workflowNameHasBeenSet = true; m_workflowName = value; }

    /**
     * <p>The name of the workflow. There can't be multiple
     * <code>MatchingWorkflows</code> with the same name.</p>
     */
    inline void SetWorkflowName(Aws::String&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::move(value); }

    /**
     * <p>The name of the workflow. There can't be multiple
     * <code>MatchingWorkflows</code> with the same name.</p>
     */
    inline void SetWorkflowName(const char* value) { m_workflowNameHasBeenSet = true; m_workflowName.assign(value); }

    /**
     * <p>The name of the workflow. There can't be multiple
     * <code>MatchingWorkflows</code> with the same name.</p>
     */
    inline CreateMatchingWorkflowRequest& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}

    /**
     * <p>The name of the workflow. There can't be multiple
     * <code>MatchingWorkflows</code> with the same name.</p>
     */
    inline CreateMatchingWorkflowRequest& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow. There can't be multiple
     * <code>MatchingWorkflows</code> with the same name.</p>
     */
    inline CreateMatchingWorkflowRequest& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IncrementalRunConfig m_incrementalRunConfig;
    bool m_incrementalRunConfigHasBeenSet = false;

    Aws::Vector<InputSource> m_inputSourceConfig;
    bool m_inputSourceConfigHasBeenSet = false;

    Aws::Vector<OutputSource> m_outputSourceConfig;
    bool m_outputSourceConfigHasBeenSet = false;

    ResolutionTechniques m_resolutionTechniques;
    bool m_resolutionTechniquesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
