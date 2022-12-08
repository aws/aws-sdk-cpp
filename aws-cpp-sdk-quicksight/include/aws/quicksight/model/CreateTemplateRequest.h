/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TemplateSourceEntity.h>
#include <aws/quicksight/model/TemplateVersionDefinition.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <aws/quicksight/model/Tag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateTemplateRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTemplate"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID for the Amazon Web Services account that the group is in. You use the
     * ID for the Amazon Web Services account that contains your Amazon QuickSight
     * account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. You use the
     * ID for the Amazon Web Services account that contains your Amazon QuickSight
     * account.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. You use the
     * ID for the Amazon Web Services account that contains your Amazon QuickSight
     * account.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. You use the
     * ID for the Amazon Web Services account that contains your Amazon QuickSight
     * account.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. You use the
     * ID for the Amazon Web Services account that contains your Amazon QuickSight
     * account.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. You use the
     * ID for the Amazon Web Services account that contains your Amazon QuickSight
     * account.</p>
     */
    inline CreateTemplateRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. You use the
     * ID for the Amazon Web Services account that contains your Amazon QuickSight
     * account.</p>
     */
    inline CreateTemplateRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. You use the
     * ID for the Amazon Web Services account that contains your Amazon QuickSight
     * account.</p>
     */
    inline CreateTemplateRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>An ID for the template that you want to create. This template is unique per
     * Amazon Web Services Region; in each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>An ID for the template that you want to create. This template is unique per
     * Amazon Web Services Region; in each Amazon Web Services account.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>An ID for the template that you want to create. This template is unique per
     * Amazon Web Services Region; in each Amazon Web Services account.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>An ID for the template that you want to create. This template is unique per
     * Amazon Web Services Region; in each Amazon Web Services account.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>An ID for the template that you want to create. This template is unique per
     * Amazon Web Services Region; in each Amazon Web Services account.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>An ID for the template that you want to create. This template is unique per
     * Amazon Web Services Region; in each Amazon Web Services account.</p>
     */
    inline CreateTemplateRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>An ID for the template that you want to create. This template is unique per
     * Amazon Web Services Region; in each Amazon Web Services account.</p>
     */
    inline CreateTemplateRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>An ID for the template that you want to create. This template is unique per
     * Amazon Web Services Region; in each Amazon Web Services account.</p>
     */
    inline CreateTemplateRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>A display name for the template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the template.</p>
     */
    inline CreateTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the template.</p>
     */
    inline CreateTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the template.</p>
     */
    inline CreateTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline CreateTemplateRequest& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline CreateTemplateRequest& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline CreateTemplateRequest& AddPermissions(const ResourcePermission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>A list of resource permissions to be set on the template. </p>
     */
    inline CreateTemplateRequest& AddPermissions(ResourcePermission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The entity that you are using as a source when you create the template. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source: <code>SourceTemplate</code> for a template or
     * <code>SourceAnalysis</code> for an analysis. Both of these require an Amazon
     * Resource Name (ARN). For <code>SourceTemplate</code>, specify the ARN of the
     * source template. For <code>SourceAnalysis</code>, specify the ARN of the source
     * analysis. The <code>SourceTemplate</code> ARN can contain any Amazon Web
     * Services account and any Amazon QuickSight-supported Amazon Web Services Region.
     * </p> <p>Use the <code>DataSetReferences</code> entity within
     * <code>SourceTemplate</code> or <code>SourceAnalysis</code> to list the
     * replacement datasets for the placeholders listed in the original. The schema in
     * each dataset must match its placeholder. </p>
     */
    inline const TemplateSourceEntity& GetSourceEntity() const{ return m_sourceEntity; }

    /**
     * <p>The entity that you are using as a source when you create the template. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source: <code>SourceTemplate</code> for a template or
     * <code>SourceAnalysis</code> for an analysis. Both of these require an Amazon
     * Resource Name (ARN). For <code>SourceTemplate</code>, specify the ARN of the
     * source template. For <code>SourceAnalysis</code>, specify the ARN of the source
     * analysis. The <code>SourceTemplate</code> ARN can contain any Amazon Web
     * Services account and any Amazon QuickSight-supported Amazon Web Services Region.
     * </p> <p>Use the <code>DataSetReferences</code> entity within
     * <code>SourceTemplate</code> or <code>SourceAnalysis</code> to list the
     * replacement datasets for the placeholders listed in the original. The schema in
     * each dataset must match its placeholder. </p>
     */
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }

    /**
     * <p>The entity that you are using as a source when you create the template. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source: <code>SourceTemplate</code> for a template or
     * <code>SourceAnalysis</code> for an analysis. Both of these require an Amazon
     * Resource Name (ARN). For <code>SourceTemplate</code>, specify the ARN of the
     * source template. For <code>SourceAnalysis</code>, specify the ARN of the source
     * analysis. The <code>SourceTemplate</code> ARN can contain any Amazon Web
     * Services account and any Amazon QuickSight-supported Amazon Web Services Region.
     * </p> <p>Use the <code>DataSetReferences</code> entity within
     * <code>SourceTemplate</code> or <code>SourceAnalysis</code> to list the
     * replacement datasets for the placeholders listed in the original. The schema in
     * each dataset must match its placeholder. </p>
     */
    inline void SetSourceEntity(const TemplateSourceEntity& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = value; }

    /**
     * <p>The entity that you are using as a source when you create the template. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source: <code>SourceTemplate</code> for a template or
     * <code>SourceAnalysis</code> for an analysis. Both of these require an Amazon
     * Resource Name (ARN). For <code>SourceTemplate</code>, specify the ARN of the
     * source template. For <code>SourceAnalysis</code>, specify the ARN of the source
     * analysis. The <code>SourceTemplate</code> ARN can contain any Amazon Web
     * Services account and any Amazon QuickSight-supported Amazon Web Services Region.
     * </p> <p>Use the <code>DataSetReferences</code> entity within
     * <code>SourceTemplate</code> or <code>SourceAnalysis</code> to list the
     * replacement datasets for the placeholders listed in the original. The schema in
     * each dataset must match its placeholder. </p>
     */
    inline void SetSourceEntity(TemplateSourceEntity&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::move(value); }

    /**
     * <p>The entity that you are using as a source when you create the template. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source: <code>SourceTemplate</code> for a template or
     * <code>SourceAnalysis</code> for an analysis. Both of these require an Amazon
     * Resource Name (ARN). For <code>SourceTemplate</code>, specify the ARN of the
     * source template. For <code>SourceAnalysis</code>, specify the ARN of the source
     * analysis. The <code>SourceTemplate</code> ARN can contain any Amazon Web
     * Services account and any Amazon QuickSight-supported Amazon Web Services Region.
     * </p> <p>Use the <code>DataSetReferences</code> entity within
     * <code>SourceTemplate</code> or <code>SourceAnalysis</code> to list the
     * replacement datasets for the placeholders listed in the original. The schema in
     * each dataset must match its placeholder. </p>
     */
    inline CreateTemplateRequest& WithSourceEntity(const TemplateSourceEntity& value) { SetSourceEntity(value); return *this;}

    /**
     * <p>The entity that you are using as a source when you create the template. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source: <code>SourceTemplate</code> for a template or
     * <code>SourceAnalysis</code> for an analysis. Both of these require an Amazon
     * Resource Name (ARN). For <code>SourceTemplate</code>, specify the ARN of the
     * source template. For <code>SourceAnalysis</code>, specify the ARN of the source
     * analysis. The <code>SourceTemplate</code> ARN can contain any Amazon Web
     * Services account and any Amazon QuickSight-supported Amazon Web Services Region.
     * </p> <p>Use the <code>DataSetReferences</code> entity within
     * <code>SourceTemplate</code> or <code>SourceAnalysis</code> to list the
     * replacement datasets for the placeholders listed in the original. The schema in
     * each dataset must match its placeholder. </p>
     */
    inline CreateTemplateRequest& WithSourceEntity(TemplateSourceEntity&& value) { SetSourceEntity(std::move(value)); return *this;}


    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline CreateTemplateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline CreateTemplateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline CreateTemplateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the resource.</p>
     */
    inline CreateTemplateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A description of the current template version being created. This API
     * operation creates the first version of the template. Every time
     * <code>UpdateTemplate</code> is called, a new version is created. Each version of
     * the template maintains a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }

    /**
     * <p>A description of the current template version being created. This API
     * operation creates the first version of the template. Every time
     * <code>UpdateTemplate</code> is called, a new version is created. Each version of
     * the template maintains a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }

    /**
     * <p>A description of the current template version being created. This API
     * operation creates the first version of the template. Every time
     * <code>UpdateTemplate</code> is called, a new version is created. Each version of
     * the template maintains a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }

    /**
     * <p>A description of the current template version being created. This API
     * operation creates the first version of the template. Every time
     * <code>UpdateTemplate</code> is called, a new version is created. Each version of
     * the template maintains a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }

    /**
     * <p>A description of the current template version being created. This API
     * operation creates the first version of the template. Every time
     * <code>UpdateTemplate</code> is called, a new version is created. Each version of
     * the template maintains a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }

    /**
     * <p>A description of the current template version being created. This API
     * operation creates the first version of the template. Every time
     * <code>UpdateTemplate</code> is called, a new version is created. Each version of
     * the template maintains a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline CreateTemplateRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}

    /**
     * <p>A description of the current template version being created. This API
     * operation creates the first version of the template. Every time
     * <code>UpdateTemplate</code> is called, a new version is created. Each version of
     * the template maintains a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline CreateTemplateRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the current template version being created. This API
     * operation creates the first version of the template. Every time
     * <code>UpdateTemplate</code> is called, a new version is created. Each version of
     * the template maintains a description of the version in the
     * <code>VersionDescription</code> field.</p>
     */
    inline CreateTemplateRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}


    /**
     * <p>The definition of a template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const TemplateVersionDefinition& GetDefinition() const{ return m_definition; }

    /**
     * <p>The definition of a template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The definition of a template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline void SetDefinition(const TemplateVersionDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The definition of a template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline void SetDefinition(TemplateVersionDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The definition of a template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline CreateTemplateRequest& WithDefinition(const TemplateVersionDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition of a template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline CreateTemplateRequest& WithDefinition(TemplateVersionDefinition&& value) { SetDefinition(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    TemplateSourceEntity m_sourceEntity;
    bool m_sourceEntityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    TemplateVersionDefinition m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
