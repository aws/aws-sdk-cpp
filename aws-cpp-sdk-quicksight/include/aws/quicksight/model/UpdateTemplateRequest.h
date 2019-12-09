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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TemplateSourceEntity.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API UpdateTemplateRequest : public QuickSightRequest
  {
  public:
    UpdateTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTemplate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the AWS account that contains the template that you're
     * updating.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the AWS account that contains the template that you're
     * updating.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the AWS account that contains the template that you're
     * updating.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the AWS account that contains the template that you're
     * updating.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the AWS account that contains the template that you're
     * updating.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the AWS account that contains the template that you're
     * updating.</p>
     */
    inline UpdateTemplateRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the AWS account that contains the template that you're
     * updating.</p>
     */
    inline UpdateTemplateRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that contains the template that you're
     * updating.</p>
     */
    inline UpdateTemplateRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>The ID for the template.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>The ID for the template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>The ID for the template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>The ID for the template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>The ID for the template.</p>
     */
    inline UpdateTemplateRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The ID for the template.</p>
     */
    inline UpdateTemplateRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID for the template.</p>
     */
    inline UpdateTemplateRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The source QuickSight entity from which this template is being updated. You
     * can currently update templates from an Analysis or another template.</p>
     */
    inline const TemplateSourceEntity& GetSourceEntity() const{ return m_sourceEntity; }

    /**
     * <p>The source QuickSight entity from which this template is being updated. You
     * can currently update templates from an Analysis or another template.</p>
     */
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }

    /**
     * <p>The source QuickSight entity from which this template is being updated. You
     * can currently update templates from an Analysis or another template.</p>
     */
    inline void SetSourceEntity(const TemplateSourceEntity& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = value; }

    /**
     * <p>The source QuickSight entity from which this template is being updated. You
     * can currently update templates from an Analysis or another template.</p>
     */
    inline void SetSourceEntity(TemplateSourceEntity&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::move(value); }

    /**
     * <p>The source QuickSight entity from which this template is being updated. You
     * can currently update templates from an Analysis or another template.</p>
     */
    inline UpdateTemplateRequest& WithSourceEntity(const TemplateSourceEntity& value) { SetSourceEntity(value); return *this;}

    /**
     * <p>The source QuickSight entity from which this template is being updated. You
     * can currently update templates from an Analysis or another template.</p>
     */
    inline UpdateTemplateRequest& WithSourceEntity(TemplateSourceEntity&& value) { SetSourceEntity(std::move(value)); return *this;}


    /**
     * <p>A description of the current template version that is being updated. Every
     * time you call <code>UpdateTemplate</code>, you create a new version of the
     * template. Each version of the template maintains a description of the version in
     * the <code>VersionDescription</code> field.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }

    /**
     * <p>A description of the current template version that is being updated. Every
     * time you call <code>UpdateTemplate</code>, you create a new version of the
     * template. Each version of the template maintains a description of the version in
     * the <code>VersionDescription</code> field.</p>
     */
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }

    /**
     * <p>A description of the current template version that is being updated. Every
     * time you call <code>UpdateTemplate</code>, you create a new version of the
     * template. Each version of the template maintains a description of the version in
     * the <code>VersionDescription</code> field.</p>
     */
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }

    /**
     * <p>A description of the current template version that is being updated. Every
     * time you call <code>UpdateTemplate</code>, you create a new version of the
     * template. Each version of the template maintains a description of the version in
     * the <code>VersionDescription</code> field.</p>
     */
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }

    /**
     * <p>A description of the current template version that is being updated. Every
     * time you call <code>UpdateTemplate</code>, you create a new version of the
     * template. Each version of the template maintains a description of the version in
     * the <code>VersionDescription</code> field.</p>
     */
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }

    /**
     * <p>A description of the current template version that is being updated. Every
     * time you call <code>UpdateTemplate</code>, you create a new version of the
     * template. Each version of the template maintains a description of the version in
     * the <code>VersionDescription</code> field.</p>
     */
    inline UpdateTemplateRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}

    /**
     * <p>A description of the current template version that is being updated. Every
     * time you call <code>UpdateTemplate</code>, you create a new version of the
     * template. Each version of the template maintains a description of the version in
     * the <code>VersionDescription</code> field.</p>
     */
    inline UpdateTemplateRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the current template version that is being updated. Every
     * time you call <code>UpdateTemplate</code>, you create a new version of the
     * template. Each version of the template maintains a description of the version in
     * the <code>VersionDescription</code> field.</p>
     */
    inline UpdateTemplateRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}


    /**
     * <p>The name for the template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the template.</p>
     */
    inline UpdateTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the template.</p>
     */
    inline UpdateTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the template.</p>
     */
    inline UpdateTemplateRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet;

    TemplateSourceEntity m_sourceEntity;
    bool m_sourceEntityHasBeenSet;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
