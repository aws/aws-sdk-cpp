/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/IdNamespaceIdMappingWorkflowProperties.h>
#include <aws/entityresolution/model/IdNamespaceInputSource.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class UpdateIdNamespaceRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API UpdateIdNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdNamespace"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    /**
     * <p>The description of the ID namespace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline UpdateIdNamespaceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline UpdateIdNamespaceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline UpdateIdNamespaceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline const Aws::Vector<IdNamespaceIdMappingWorkflowProperties>& GetIdMappingWorkflowProperties() const{ return m_idMappingWorkflowProperties; }

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline bool IdMappingWorkflowPropertiesHasBeenSet() const { return m_idMappingWorkflowPropertiesHasBeenSet; }

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline void SetIdMappingWorkflowProperties(const Aws::Vector<IdNamespaceIdMappingWorkflowProperties>& value) { m_idMappingWorkflowPropertiesHasBeenSet = true; m_idMappingWorkflowProperties = value; }

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline void SetIdMappingWorkflowProperties(Aws::Vector<IdNamespaceIdMappingWorkflowProperties>&& value) { m_idMappingWorkflowPropertiesHasBeenSet = true; m_idMappingWorkflowProperties = std::move(value); }

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline UpdateIdNamespaceRequest& WithIdMappingWorkflowProperties(const Aws::Vector<IdNamespaceIdMappingWorkflowProperties>& value) { SetIdMappingWorkflowProperties(value); return *this;}

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline UpdateIdNamespaceRequest& WithIdMappingWorkflowProperties(Aws::Vector<IdNamespaceIdMappingWorkflowProperties>&& value) { SetIdMappingWorkflowProperties(std::move(value)); return *this;}

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline UpdateIdNamespaceRequest& AddIdMappingWorkflowProperties(const IdNamespaceIdMappingWorkflowProperties& value) { m_idMappingWorkflowPropertiesHasBeenSet = true; m_idMappingWorkflowProperties.push_back(value); return *this; }

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline UpdateIdNamespaceRequest& AddIdMappingWorkflowProperties(IdNamespaceIdMappingWorkflowProperties&& value) { m_idMappingWorkflowPropertiesHasBeenSet = true; m_idMappingWorkflowProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the ID namespace.</p>
     */
    inline const Aws::String& GetIdNamespaceName() const{ return m_idNamespaceName; }

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline bool IdNamespaceNameHasBeenSet() const { return m_idNamespaceNameHasBeenSet; }

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline void SetIdNamespaceName(const Aws::String& value) { m_idNamespaceNameHasBeenSet = true; m_idNamespaceName = value; }

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline void SetIdNamespaceName(Aws::String&& value) { m_idNamespaceNameHasBeenSet = true; m_idNamespaceName = std::move(value); }

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline void SetIdNamespaceName(const char* value) { m_idNamespaceNameHasBeenSet = true; m_idNamespaceName.assign(value); }

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline UpdateIdNamespaceRequest& WithIdNamespaceName(const Aws::String& value) { SetIdNamespaceName(value); return *this;}

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline UpdateIdNamespaceRequest& WithIdNamespaceName(Aws::String&& value) { SetIdNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline UpdateIdNamespaceRequest& WithIdNamespaceName(const char* value) { SetIdNamespaceName(value); return *this;}


    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline const Aws::Vector<IdNamespaceInputSource>& GetInputSourceConfig() const{ return m_inputSourceConfig; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline bool InputSourceConfigHasBeenSet() const { return m_inputSourceConfigHasBeenSet; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline void SetInputSourceConfig(const Aws::Vector<IdNamespaceInputSource>& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig = value; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline void SetInputSourceConfig(Aws::Vector<IdNamespaceInputSource>&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig = std::move(value); }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateIdNamespaceRequest& WithInputSourceConfig(const Aws::Vector<IdNamespaceInputSource>& value) { SetInputSourceConfig(value); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateIdNamespaceRequest& WithInputSourceConfig(Aws::Vector<IdNamespaceInputSource>&& value) { SetInputSourceConfig(std::move(value)); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateIdNamespaceRequest& AddInputSourceConfig(const IdNamespaceInputSource& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig.push_back(value); return *this; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateIdNamespaceRequest& AddInputSourceConfig(IdNamespaceInputSource&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline UpdateIdNamespaceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline UpdateIdNamespaceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline UpdateIdNamespaceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<IdNamespaceIdMappingWorkflowProperties> m_idMappingWorkflowProperties;
    bool m_idMappingWorkflowPropertiesHasBeenSet = false;

    Aws::String m_idNamespaceName;
    bool m_idNamespaceNameHasBeenSet = false;

    Aws::Vector<IdNamespaceInputSource> m_inputSourceConfig;
    bool m_inputSourceConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
