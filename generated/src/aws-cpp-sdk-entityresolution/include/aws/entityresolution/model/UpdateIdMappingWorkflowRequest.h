/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/IdMappingTechniques.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/IdMappingWorkflowInputSource.h>
#include <aws/entityresolution/model/IdMappingWorkflowOutputSource.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class UpdateIdMappingWorkflowRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API UpdateIdMappingWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdMappingWorkflow"; }

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
    inline UpdateIdMappingWorkflowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the workflow.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the workflow.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An object which defines the <code>idMappingType</code> and the
     * <code>providerProperties</code>.</p>
     */
    inline const IdMappingTechniques& GetIdMappingTechniques() const{ return m_idMappingTechniques; }

    /**
     * <p>An object which defines the <code>idMappingType</code> and the
     * <code>providerProperties</code>.</p>
     */
    inline bool IdMappingTechniquesHasBeenSet() const { return m_idMappingTechniquesHasBeenSet; }

    /**
     * <p>An object which defines the <code>idMappingType</code> and the
     * <code>providerProperties</code>.</p>
     */
    inline void SetIdMappingTechniques(const IdMappingTechniques& value) { m_idMappingTechniquesHasBeenSet = true; m_idMappingTechniques = value; }

    /**
     * <p>An object which defines the <code>idMappingType</code> and the
     * <code>providerProperties</code>.</p>
     */
    inline void SetIdMappingTechniques(IdMappingTechniques&& value) { m_idMappingTechniquesHasBeenSet = true; m_idMappingTechniques = std::move(value); }

    /**
     * <p>An object which defines the <code>idMappingType</code> and the
     * <code>providerProperties</code>.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithIdMappingTechniques(const IdMappingTechniques& value) { SetIdMappingTechniques(value); return *this;}

    /**
     * <p>An object which defines the <code>idMappingType</code> and the
     * <code>providerProperties</code>.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithIdMappingTechniques(IdMappingTechniques&& value) { SetIdMappingTechniques(std::move(value)); return *this;}


    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline const Aws::Vector<IdMappingWorkflowInputSource>& GetInputSourceConfig() const{ return m_inputSourceConfig; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline bool InputSourceConfigHasBeenSet() const { return m_inputSourceConfigHasBeenSet; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline void SetInputSourceConfig(const Aws::Vector<IdMappingWorkflowInputSource>& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig = value; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline void SetInputSourceConfig(Aws::Vector<IdMappingWorkflowInputSource>&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig = std::move(value); }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithInputSourceConfig(const Aws::Vector<IdMappingWorkflowInputSource>& value) { SetInputSourceConfig(value); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithInputSourceConfig(Aws::Vector<IdMappingWorkflowInputSource>&& value) { SetInputSourceConfig(std::move(value)); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateIdMappingWorkflowRequest& AddInputSourceConfig(const IdMappingWorkflowInputSource& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig.push_back(value); return *this; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateIdMappingWorkflowRequest& AddInputSourceConfig(IdMappingWorkflowInputSource&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code> and <code>KMSArn</code>.</p>
     */
    inline const Aws::Vector<IdMappingWorkflowOutputSource>& GetOutputSourceConfig() const{ return m_outputSourceConfig; }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code> and <code>KMSArn</code>.</p>
     */
    inline bool OutputSourceConfigHasBeenSet() const { return m_outputSourceConfigHasBeenSet; }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code> and <code>KMSArn</code>.</p>
     */
    inline void SetOutputSourceConfig(const Aws::Vector<IdMappingWorkflowOutputSource>& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig = value; }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code> and <code>KMSArn</code>.</p>
     */
    inline void SetOutputSourceConfig(Aws::Vector<IdMappingWorkflowOutputSource>&& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig = std::move(value); }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code> and <code>KMSArn</code>.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithOutputSourceConfig(const Aws::Vector<IdMappingWorkflowOutputSource>& value) { SetOutputSourceConfig(value); return *this;}

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code> and <code>KMSArn</code>.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithOutputSourceConfig(Aws::Vector<IdMappingWorkflowOutputSource>&& value) { SetOutputSourceConfig(std::move(value)); return *this;}

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code> and <code>KMSArn</code>.</p>
     */
    inline UpdateIdMappingWorkflowRequest& AddOutputSourceConfig(const IdMappingWorkflowOutputSource& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig.push_back(value); return *this; }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code> and <code>KMSArn</code>.</p>
     */
    inline UpdateIdMappingWorkflowRequest& AddOutputSourceConfig(IdMappingWorkflowOutputSource&& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access resources on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access resources on your behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access resources on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access resources on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access resources on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access resources on your behalf.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access resources on your behalf.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access resources on your behalf.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetWorkflowName(const Aws::String& value) { m_workflowNameHasBeenSet = true; m_workflowName = value; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetWorkflowName(Aws::String&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::move(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetWorkflowName(const char* value) { m_workflowNameHasBeenSet = true; m_workflowName.assign(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline UpdateIdMappingWorkflowRequest& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IdMappingTechniques m_idMappingTechniques;
    bool m_idMappingTechniquesHasBeenSet = false;

    Aws::Vector<IdMappingWorkflowInputSource> m_inputSourceConfig;
    bool m_inputSourceConfigHasBeenSet = false;

    Aws::Vector<IdMappingWorkflowOutputSource> m_outputSourceConfig;
    bool m_outputSourceConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
