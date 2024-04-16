/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/entityresolution/model/IdNamespaceType.h>
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
  class CreateIdNamespaceRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API CreateIdNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIdNamespace"; }

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
    inline CreateIdNamespaceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline CreateIdNamespaceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline CreateIdNamespaceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Determines the properties of <code>IdMappingWorflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline const Aws::Vector<IdNamespaceIdMappingWorkflowProperties>& GetIdMappingWorkflowProperties() const{ return m_idMappingWorkflowProperties; }

    /**
     * <p>Determines the properties of <code>IdMappingWorflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline bool IdMappingWorkflowPropertiesHasBeenSet() const { return m_idMappingWorkflowPropertiesHasBeenSet; }

    /**
     * <p>Determines the properties of <code>IdMappingWorflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline void SetIdMappingWorkflowProperties(const Aws::Vector<IdNamespaceIdMappingWorkflowProperties>& value) { m_idMappingWorkflowPropertiesHasBeenSet = true; m_idMappingWorkflowProperties = value; }

    /**
     * <p>Determines the properties of <code>IdMappingWorflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline void SetIdMappingWorkflowProperties(Aws::Vector<IdNamespaceIdMappingWorkflowProperties>&& value) { m_idMappingWorkflowPropertiesHasBeenSet = true; m_idMappingWorkflowProperties = std::move(value); }

    /**
     * <p>Determines the properties of <code>IdMappingWorflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline CreateIdNamespaceRequest& WithIdMappingWorkflowProperties(const Aws::Vector<IdNamespaceIdMappingWorkflowProperties>& value) { SetIdMappingWorkflowProperties(value); return *this;}

    /**
     * <p>Determines the properties of <code>IdMappingWorflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline CreateIdNamespaceRequest& WithIdMappingWorkflowProperties(Aws::Vector<IdNamespaceIdMappingWorkflowProperties>&& value) { SetIdMappingWorkflowProperties(std::move(value)); return *this;}

    /**
     * <p>Determines the properties of <code>IdMappingWorflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline CreateIdNamespaceRequest& AddIdMappingWorkflowProperties(const IdNamespaceIdMappingWorkflowProperties& value) { m_idMappingWorkflowPropertiesHasBeenSet = true; m_idMappingWorkflowProperties.push_back(value); return *this; }

    /**
     * <p>Determines the properties of <code>IdMappingWorflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline CreateIdNamespaceRequest& AddIdMappingWorkflowProperties(IdNamespaceIdMappingWorkflowProperties&& value) { m_idMappingWorkflowPropertiesHasBeenSet = true; m_idMappingWorkflowProperties.push_back(std::move(value)); return *this; }


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
    inline CreateIdNamespaceRequest& WithIdNamespaceName(const Aws::String& value) { SetIdNamespaceName(value); return *this;}

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline CreateIdNamespaceRequest& WithIdNamespaceName(Aws::String&& value) { SetIdNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline CreateIdNamespaceRequest& WithIdNamespaceName(const char* value) { SetIdNamespaceName(value); return *this;}


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
    inline CreateIdNamespaceRequest& WithInputSourceConfig(const Aws::Vector<IdNamespaceInputSource>& value) { SetInputSourceConfig(value); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateIdNamespaceRequest& WithInputSourceConfig(Aws::Vector<IdNamespaceInputSource>&& value) { SetInputSourceConfig(std::move(value)); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateIdNamespaceRequest& AddInputSourceConfig(const IdNamespaceInputSource& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig.push_back(value); return *this; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateIdNamespaceRequest& AddInputSourceConfig(IdNamespaceInputSource&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline CreateIdNamespaceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline CreateIdNamespaceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline CreateIdNamespaceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


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
    inline CreateIdNamespaceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>. </p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> to which all <code>sourceIds</code> will resolve to.</p>
     */
    inline const IdNamespaceType& GetType() const{ return m_type; }

    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>. </p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> to which all <code>sourceIds</code> will resolve to.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>. </p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> to which all <code>sourceIds</code> will resolve to.</p>
     */
    inline void SetType(const IdNamespaceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>. </p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> to which all <code>sourceIds</code> will resolve to.</p>
     */
    inline void SetType(IdNamespaceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>. </p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> to which all <code>sourceIds</code> will resolve to.</p>
     */
    inline CreateIdNamespaceRequest& WithType(const IdNamespaceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>. </p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> to which all <code>sourceIds</code> will resolve to.</p>
     */
    inline CreateIdNamespaceRequest& WithType(IdNamespaceType&& value) { SetType(std::move(value)); return *this;}

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    IdNamespaceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
