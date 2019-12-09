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
#include <aws/quicksight/model/Parameters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DashboardSourceEntity.h>
#include <aws/quicksight/model/DashboardPublishOptions.h>
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
  class AWS_QUICKSIGHT_API CreateDashboardRequest : public QuickSightRequest
  {
  public:
    CreateDashboardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDashboard"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the AWS account where you want to create the dashboard.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the AWS account where you want to create the dashboard.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the AWS account where you want to create the dashboard.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the AWS account where you want to create the dashboard.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the AWS account where you want to create the dashboard.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the AWS account where you want to create the dashboard.</p>
     */
    inline CreateDashboardRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the AWS account where you want to create the dashboard.</p>
     */
    inline CreateDashboardRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account where you want to create the dashboard.</p>
     */
    inline CreateDashboardRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline CreateDashboardRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline CreateDashboardRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline CreateDashboardRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>The display name of the dashboard.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline CreateDashboardRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline CreateDashboardRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline CreateDashboardRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A structure that contains the parameters of the dashboard. These are
     * parameter overrides for a dashboard. A dashboard can have any type of
     * parameters, and some parameters might accept multiple values. You can use the
     * dashboard permissions structure described following to override two string
     * parameters that accept multiple values. </p>
     */
    inline const Parameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>A structure that contains the parameters of the dashboard. These are
     * parameter overrides for a dashboard. A dashboard can have any type of
     * parameters, and some parameters might accept multiple values. You can use the
     * dashboard permissions structure described following to override two string
     * parameters that accept multiple values. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A structure that contains the parameters of the dashboard. These are
     * parameter overrides for a dashboard. A dashboard can have any type of
     * parameters, and some parameters might accept multiple values. You can use the
     * dashboard permissions structure described following to override two string
     * parameters that accept multiple values. </p>
     */
    inline void SetParameters(const Parameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A structure that contains the parameters of the dashboard. These are
     * parameter overrides for a dashboard. A dashboard can have any type of
     * parameters, and some parameters might accept multiple values. You can use the
     * dashboard permissions structure described following to override two string
     * parameters that accept multiple values. </p>
     */
    inline void SetParameters(Parameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A structure that contains the parameters of the dashboard. These are
     * parameter overrides for a dashboard. A dashboard can have any type of
     * parameters, and some parameters might accept multiple values. You can use the
     * dashboard permissions structure described following to override two string
     * parameters that accept multiple values. </p>
     */
    inline CreateDashboardRequest& WithParameters(const Parameters& value) { SetParameters(value); return *this;}

    /**
     * <p>A structure that contains the parameters of the dashboard. These are
     * parameter overrides for a dashboard. A dashboard can have any type of
     * parameters, and some parameters might accept multiple values. You can use the
     * dashboard permissions structure described following to override two string
     * parameters that accept multiple values. </p>
     */
    inline CreateDashboardRequest& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions with principal and action information.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions with principal and action information.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions with principal and action information.</p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions with principal and action information.</p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions with principal and action information.</p>
     */
    inline CreateDashboardRequest& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions with principal and action information.</p>
     */
    inline CreateDashboardRequest& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions with principal and action information.</p>
     */
    inline CreateDashboardRequest& AddPermissions(const ResourcePermission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions with principal and action information.</p>
     */
    inline CreateDashboardRequest& AddPermissions(ResourcePermission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The source entity from which the dashboard is created. The source entity
     * accepts the Amazon Resource Name (ARN) of the source template or analysis and
     * also references the replacement datasets for the placeholders set when creating
     * the template. The replacement datasets need to follow the same schema as the
     * datasets for which placeholders were created when creating the template. </p>
     * <p>If you are creating a dashboard from a source entity in a different AWS
     * account, use the ARN of the source template.</p>
     */
    inline const DashboardSourceEntity& GetSourceEntity() const{ return m_sourceEntity; }

    /**
     * <p>The source entity from which the dashboard is created. The source entity
     * accepts the Amazon Resource Name (ARN) of the source template or analysis and
     * also references the replacement datasets for the placeholders set when creating
     * the template. The replacement datasets need to follow the same schema as the
     * datasets for which placeholders were created when creating the template. </p>
     * <p>If you are creating a dashboard from a source entity in a different AWS
     * account, use the ARN of the source template.</p>
     */
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }

    /**
     * <p>The source entity from which the dashboard is created. The source entity
     * accepts the Amazon Resource Name (ARN) of the source template or analysis and
     * also references the replacement datasets for the placeholders set when creating
     * the template. The replacement datasets need to follow the same schema as the
     * datasets for which placeholders were created when creating the template. </p>
     * <p>If you are creating a dashboard from a source entity in a different AWS
     * account, use the ARN of the source template.</p>
     */
    inline void SetSourceEntity(const DashboardSourceEntity& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = value; }

    /**
     * <p>The source entity from which the dashboard is created. The source entity
     * accepts the Amazon Resource Name (ARN) of the source template or analysis and
     * also references the replacement datasets for the placeholders set when creating
     * the template. The replacement datasets need to follow the same schema as the
     * datasets for which placeholders were created when creating the template. </p>
     * <p>If you are creating a dashboard from a source entity in a different AWS
     * account, use the ARN of the source template.</p>
     */
    inline void SetSourceEntity(DashboardSourceEntity&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::move(value); }

    /**
     * <p>The source entity from which the dashboard is created. The source entity
     * accepts the Amazon Resource Name (ARN) of the source template or analysis and
     * also references the replacement datasets for the placeholders set when creating
     * the template. The replacement datasets need to follow the same schema as the
     * datasets for which placeholders were created when creating the template. </p>
     * <p>If you are creating a dashboard from a source entity in a different AWS
     * account, use the ARN of the source template.</p>
     */
    inline CreateDashboardRequest& WithSourceEntity(const DashboardSourceEntity& value) { SetSourceEntity(value); return *this;}

    /**
     * <p>The source entity from which the dashboard is created. The source entity
     * accepts the Amazon Resource Name (ARN) of the source template or analysis and
     * also references the replacement datasets for the placeholders set when creating
     * the template. The replacement datasets need to follow the same schema as the
     * datasets for which placeholders were created when creating the template. </p>
     * <p>If you are creating a dashboard from a source entity in a different AWS
     * account, use the ARN of the source template.</p>
     */
    inline CreateDashboardRequest& WithSourceEntity(DashboardSourceEntity&& value) { SetSourceEntity(std::move(value)); return *this;}


    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline CreateDashboardRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline CreateDashboardRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline CreateDashboardRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline CreateDashboardRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline CreateDashboardRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline CreateDashboardRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline CreateDashboardRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}


    /**
     * <p>Options for publishing the dashboard when you create it:</p> <ul> <li> <p>
     * <code>AvailabilityStatus</code> for <code>AdHocFilteringOption</code> - This
     * status can be either <code>ENABLED</code> or <code>DISABLED</code>. When this is
     * set to <code>DISABLED</code>, QuickSight disables the left filter pane on the
     * published dashboard, which can be used for ad hoc (one-time) filtering. This
     * option is <code>ENABLED</code> by default. </p> </li> <li> <p>
     * <code>AvailabilityStatus</code> for <code>ExportToCSVOption</code> - This status
     * can be either <code>ENABLED</code> or <code>DISABLED</code>. The visual option
     * to export data to .csv format isn't enabled when this is set to
     * <code>DISABLED</code>. This option is <code>ENABLED</code> by default. </p>
     * </li> <li> <p> <code>VisibilityState</code> for <code>SheetControlsOption</code>
     * - This visibility state can be either <code>COLLAPSED</code> or
     * <code>EXPANDED</code>. The sheet controls pane is collapsed by default when set
     * to true. This option is <code>COLLAPSED</code> by default. </p> </li> </ul>
     */
    inline const DashboardPublishOptions& GetDashboardPublishOptions() const{ return m_dashboardPublishOptions; }

    /**
     * <p>Options for publishing the dashboard when you create it:</p> <ul> <li> <p>
     * <code>AvailabilityStatus</code> for <code>AdHocFilteringOption</code> - This
     * status can be either <code>ENABLED</code> or <code>DISABLED</code>. When this is
     * set to <code>DISABLED</code>, QuickSight disables the left filter pane on the
     * published dashboard, which can be used for ad hoc (one-time) filtering. This
     * option is <code>ENABLED</code> by default. </p> </li> <li> <p>
     * <code>AvailabilityStatus</code> for <code>ExportToCSVOption</code> - This status
     * can be either <code>ENABLED</code> or <code>DISABLED</code>. The visual option
     * to export data to .csv format isn't enabled when this is set to
     * <code>DISABLED</code>. This option is <code>ENABLED</code> by default. </p>
     * </li> <li> <p> <code>VisibilityState</code> for <code>SheetControlsOption</code>
     * - This visibility state can be either <code>COLLAPSED</code> or
     * <code>EXPANDED</code>. The sheet controls pane is collapsed by default when set
     * to true. This option is <code>COLLAPSED</code> by default. </p> </li> </ul>
     */
    inline bool DashboardPublishOptionsHasBeenSet() const { return m_dashboardPublishOptionsHasBeenSet; }

    /**
     * <p>Options for publishing the dashboard when you create it:</p> <ul> <li> <p>
     * <code>AvailabilityStatus</code> for <code>AdHocFilteringOption</code> - This
     * status can be either <code>ENABLED</code> or <code>DISABLED</code>. When this is
     * set to <code>DISABLED</code>, QuickSight disables the left filter pane on the
     * published dashboard, which can be used for ad hoc (one-time) filtering. This
     * option is <code>ENABLED</code> by default. </p> </li> <li> <p>
     * <code>AvailabilityStatus</code> for <code>ExportToCSVOption</code> - This status
     * can be either <code>ENABLED</code> or <code>DISABLED</code>. The visual option
     * to export data to .csv format isn't enabled when this is set to
     * <code>DISABLED</code>. This option is <code>ENABLED</code> by default. </p>
     * </li> <li> <p> <code>VisibilityState</code> for <code>SheetControlsOption</code>
     * - This visibility state can be either <code>COLLAPSED</code> or
     * <code>EXPANDED</code>. The sheet controls pane is collapsed by default when set
     * to true. This option is <code>COLLAPSED</code> by default. </p> </li> </ul>
     */
    inline void SetDashboardPublishOptions(const DashboardPublishOptions& value) { m_dashboardPublishOptionsHasBeenSet = true; m_dashboardPublishOptions = value; }

    /**
     * <p>Options for publishing the dashboard when you create it:</p> <ul> <li> <p>
     * <code>AvailabilityStatus</code> for <code>AdHocFilteringOption</code> - This
     * status can be either <code>ENABLED</code> or <code>DISABLED</code>. When this is
     * set to <code>DISABLED</code>, QuickSight disables the left filter pane on the
     * published dashboard, which can be used for ad hoc (one-time) filtering. This
     * option is <code>ENABLED</code> by default. </p> </li> <li> <p>
     * <code>AvailabilityStatus</code> for <code>ExportToCSVOption</code> - This status
     * can be either <code>ENABLED</code> or <code>DISABLED</code>. The visual option
     * to export data to .csv format isn't enabled when this is set to
     * <code>DISABLED</code>. This option is <code>ENABLED</code> by default. </p>
     * </li> <li> <p> <code>VisibilityState</code> for <code>SheetControlsOption</code>
     * - This visibility state can be either <code>COLLAPSED</code> or
     * <code>EXPANDED</code>. The sheet controls pane is collapsed by default when set
     * to true. This option is <code>COLLAPSED</code> by default. </p> </li> </ul>
     */
    inline void SetDashboardPublishOptions(DashboardPublishOptions&& value) { m_dashboardPublishOptionsHasBeenSet = true; m_dashboardPublishOptions = std::move(value); }

    /**
     * <p>Options for publishing the dashboard when you create it:</p> <ul> <li> <p>
     * <code>AvailabilityStatus</code> for <code>AdHocFilteringOption</code> - This
     * status can be either <code>ENABLED</code> or <code>DISABLED</code>. When this is
     * set to <code>DISABLED</code>, QuickSight disables the left filter pane on the
     * published dashboard, which can be used for ad hoc (one-time) filtering. This
     * option is <code>ENABLED</code> by default. </p> </li> <li> <p>
     * <code>AvailabilityStatus</code> for <code>ExportToCSVOption</code> - This status
     * can be either <code>ENABLED</code> or <code>DISABLED</code>. The visual option
     * to export data to .csv format isn't enabled when this is set to
     * <code>DISABLED</code>. This option is <code>ENABLED</code> by default. </p>
     * </li> <li> <p> <code>VisibilityState</code> for <code>SheetControlsOption</code>
     * - This visibility state can be either <code>COLLAPSED</code> or
     * <code>EXPANDED</code>. The sheet controls pane is collapsed by default when set
     * to true. This option is <code>COLLAPSED</code> by default. </p> </li> </ul>
     */
    inline CreateDashboardRequest& WithDashboardPublishOptions(const DashboardPublishOptions& value) { SetDashboardPublishOptions(value); return *this;}

    /**
     * <p>Options for publishing the dashboard when you create it:</p> <ul> <li> <p>
     * <code>AvailabilityStatus</code> for <code>AdHocFilteringOption</code> - This
     * status can be either <code>ENABLED</code> or <code>DISABLED</code>. When this is
     * set to <code>DISABLED</code>, QuickSight disables the left filter pane on the
     * published dashboard, which can be used for ad hoc (one-time) filtering. This
     * option is <code>ENABLED</code> by default. </p> </li> <li> <p>
     * <code>AvailabilityStatus</code> for <code>ExportToCSVOption</code> - This status
     * can be either <code>ENABLED</code> or <code>DISABLED</code>. The visual option
     * to export data to .csv format isn't enabled when this is set to
     * <code>DISABLED</code>. This option is <code>ENABLED</code> by default. </p>
     * </li> <li> <p> <code>VisibilityState</code> for <code>SheetControlsOption</code>
     * - This visibility state can be either <code>COLLAPSED</code> or
     * <code>EXPANDED</code>. The sheet controls pane is collapsed by default when set
     * to true. This option is <code>COLLAPSED</code> by default. </p> </li> </ul>
     */
    inline CreateDashboardRequest& WithDashboardPublishOptions(DashboardPublishOptions&& value) { SetDashboardPublishOptions(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Parameters m_parameters;
    bool m_parametersHasBeenSet;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet;

    DashboardSourceEntity m_sourceEntity;
    bool m_sourceEntityHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet;

    DashboardPublishOptions m_dashboardPublishOptions;
    bool m_dashboardPublishOptionsHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
