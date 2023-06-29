/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/PlatformType.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/AccessEndpoint.h>
#include <aws/appstream/model/AppBlockBuilderAttribute.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class UpdateAppBlockBuilderRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API UpdateAppBlockBuilderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAppBlockBuilder"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique name for the app block builder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name for the app block builder.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name for the app block builder.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name for the app block builder.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name for the app block builder.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name for the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name for the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name for the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the app block builder.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the app block builder.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the app block builder.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the app block builder.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the app block builder.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The display name of the app block builder.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the app block builder.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the app block builder.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the app block builder.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the app block builder.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The platform of the app block builder.</p> <p>
     * <code>WINDOWS_SERVER_2019</code> is the only valid value.</p>
     */
    inline const PlatformType& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the app block builder.</p> <p>
     * <code>WINDOWS_SERVER_2019</code> is the only valid value.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the app block builder.</p> <p>
     * <code>WINDOWS_SERVER_2019</code> is the only valid value.</p>
     */
    inline void SetPlatform(const PlatformType& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the app block builder.</p> <p>
     * <code>WINDOWS_SERVER_2019</code> is the only valid value.</p>
     */
    inline void SetPlatform(PlatformType&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the app block builder.</p> <p>
     * <code>WINDOWS_SERVER_2019</code> is the only valid value.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithPlatform(const PlatformType& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the app block builder.</p> <p>
     * <code>WINDOWS_SERVER_2019</code> is the only valid value.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithPlatform(PlatformType&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The instance type to use when launching the app block builder. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.small</p> </li>
     * <li> <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li>
     * <li> <p>stream.standard.xlarge</p> </li> <li> <p>stream.standard.2xlarge</p>
     * </li> </ul>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type to use when launching the app block builder. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.small</p> </li>
     * <li> <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li>
     * <li> <p>stream.standard.xlarge</p> </li> <li> <p>stream.standard.2xlarge</p>
     * </li> </ul>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type to use when launching the app block builder. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.small</p> </li>
     * <li> <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li>
     * <li> <p>stream.standard.xlarge</p> </li> <li> <p>stream.standard.2xlarge</p>
     * </li> </ul>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type to use when launching the app block builder. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.small</p> </li>
     * <li> <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li>
     * <li> <p>stream.standard.xlarge</p> </li> <li> <p>stream.standard.2xlarge</p>
     * </li> </ul>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type to use when launching the app block builder. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.small</p> </li>
     * <li> <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li>
     * <li> <p>stream.standard.xlarge</p> </li> <li> <p>stream.standard.2xlarge</p>
     * </li> </ul>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type to use when launching the app block builder. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.small</p> </li>
     * <li> <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li>
     * <li> <p>stream.standard.xlarge</p> </li> <li> <p>stream.standard.2xlarge</p>
     * </li> </ul>
     */
    inline UpdateAppBlockBuilderRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type to use when launching the app block builder. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.small</p> </li>
     * <li> <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li>
     * <li> <p>stream.standard.xlarge</p> </li> <li> <p>stream.standard.2xlarge</p>
     * </li> </ul>
     */
    inline UpdateAppBlockBuilderRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type to use when launching the app block builder. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.small</p> </li>
     * <li> <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li>
     * <li> <p>stream.standard.xlarge</p> </li> <li> <p>stream.standard.2xlarge</p>
     * </li> </ul>
     */
    inline UpdateAppBlockBuilderRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The VPC configuration for the app block builder.</p> <p>App block builders
     * require that you specify at least two subnets in different availability
     * zones.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The VPC configuration for the app block builder.</p> <p>App block builders
     * require that you specify at least two subnets in different availability
     * zones.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>The VPC configuration for the app block builder.</p> <p>App block builders
     * require that you specify at least two subnets in different availability
     * zones.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>The VPC configuration for the app block builder.</p> <p>App block builders
     * require that you specify at least two subnets in different availability
     * zones.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>The VPC configuration for the app block builder.</p> <p>App block builders
     * require that you specify at least two subnets in different availability
     * zones.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The VPC configuration for the app block builder.</p> <p>App block builders
     * require that you specify at least two subnets in different availability
     * zones.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Enables or disables default internet access for the app block builder.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const{ return m_enableDefaultInternetAccess; }

    /**
     * <p>Enables or disables default internet access for the app block builder.</p>
     */
    inline bool EnableDefaultInternetAccessHasBeenSet() const { return m_enableDefaultInternetAccessHasBeenSet; }

    /**
     * <p>Enables or disables default internet access for the app block builder.</p>
     */
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }

    /**
     * <p>Enables or disables default internet access for the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to apply to the app block
     * builder. To assume a role, the app block builder calls the AWS Security Token
     * Service (STS) <code>AssumeRole</code> API operation and passes the ARN of the
     * role to use. The operation creates a new session with temporary credentials.
     * AppStream 2.0 retrieves the temporary credentials and creates the
     * <b>appstream_machine_role</b> credential profile on the instance.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/using-iam-roles-to-grant-permissions-to-applications-scripts-streaming-instances.html">Using
     * an IAM Role to Grant Permissions to Applications and Scripts Running on
     * AppStream 2.0 Streaming Instances</a> in the <i>Amazon AppStream 2.0
     * Administration Guide</i>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to apply to the app block
     * builder. To assume a role, the app block builder calls the AWS Security Token
     * Service (STS) <code>AssumeRole</code> API operation and passes the ARN of the
     * role to use. The operation creates a new session with temporary credentials.
     * AppStream 2.0 retrieves the temporary credentials and creates the
     * <b>appstream_machine_role</b> credential profile on the instance.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/using-iam-roles-to-grant-permissions-to-applications-scripts-streaming-instances.html">Using
     * an IAM Role to Grant Permissions to Applications and Scripts Running on
     * AppStream 2.0 Streaming Instances</a> in the <i>Amazon AppStream 2.0
     * Administration Guide</i>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to apply to the app block
     * builder. To assume a role, the app block builder calls the AWS Security Token
     * Service (STS) <code>AssumeRole</code> API operation and passes the ARN of the
     * role to use. The operation creates a new session with temporary credentials.
     * AppStream 2.0 retrieves the temporary credentials and creates the
     * <b>appstream_machine_role</b> credential profile on the instance.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/using-iam-roles-to-grant-permissions-to-applications-scripts-streaming-instances.html">Using
     * an IAM Role to Grant Permissions to Applications and Scripts Running on
     * AppStream 2.0 Streaming Instances</a> in the <i>Amazon AppStream 2.0
     * Administration Guide</i>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to apply to the app block
     * builder. To assume a role, the app block builder calls the AWS Security Token
     * Service (STS) <code>AssumeRole</code> API operation and passes the ARN of the
     * role to use. The operation creates a new session with temporary credentials.
     * AppStream 2.0 retrieves the temporary credentials and creates the
     * <b>appstream_machine_role</b> credential profile on the instance.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/using-iam-roles-to-grant-permissions-to-applications-scripts-streaming-instances.html">Using
     * an IAM Role to Grant Permissions to Applications and Scripts Running on
     * AppStream 2.0 Streaming Instances</a> in the <i>Amazon AppStream 2.0
     * Administration Guide</i>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to apply to the app block
     * builder. To assume a role, the app block builder calls the AWS Security Token
     * Service (STS) <code>AssumeRole</code> API operation and passes the ARN of the
     * role to use. The operation creates a new session with temporary credentials.
     * AppStream 2.0 retrieves the temporary credentials and creates the
     * <b>appstream_machine_role</b> credential profile on the instance.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/using-iam-roles-to-grant-permissions-to-applications-scripts-streaming-instances.html">Using
     * an IAM Role to Grant Permissions to Applications and Scripts Running on
     * AppStream 2.0 Streaming Instances</a> in the <i>Amazon AppStream 2.0
     * Administration Guide</i>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to apply to the app block
     * builder. To assume a role, the app block builder calls the AWS Security Token
     * Service (STS) <code>AssumeRole</code> API operation and passes the ARN of the
     * role to use. The operation creates a new session with temporary credentials.
     * AppStream 2.0 retrieves the temporary credentials and creates the
     * <b>appstream_machine_role</b> credential profile on the instance.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/using-iam-roles-to-grant-permissions-to-applications-scripts-streaming-instances.html">Using
     * an IAM Role to Grant Permissions to Applications and Scripts Running on
     * AppStream 2.0 Streaming Instances</a> in the <i>Amazon AppStream 2.0
     * Administration Guide</i>.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to apply to the app block
     * builder. To assume a role, the app block builder calls the AWS Security Token
     * Service (STS) <code>AssumeRole</code> API operation and passes the ARN of the
     * role to use. The operation creates a new session with temporary credentials.
     * AppStream 2.0 retrieves the temporary credentials and creates the
     * <b>appstream_machine_role</b> credential profile on the instance.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/using-iam-roles-to-grant-permissions-to-applications-scripts-streaming-instances.html">Using
     * an IAM Role to Grant Permissions to Applications and Scripts Running on
     * AppStream 2.0 Streaming Instances</a> in the <i>Amazon AppStream 2.0
     * Administration Guide</i>.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to apply to the app block
     * builder. To assume a role, the app block builder calls the AWS Security Token
     * Service (STS) <code>AssumeRole</code> API operation and passes the ARN of the
     * role to use. The operation creates a new session with temporary credentials.
     * AppStream 2.0 retrieves the temporary credentials and creates the
     * <b>appstream_machine_role</b> credential profile on the instance.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/using-iam-roles-to-grant-permissions-to-applications-scripts-streaming-instances.html">Using
     * an IAM Role to Grant Permissions to Applications and Scripts Running on
     * AppStream 2.0 Streaming Instances</a> in the <i>Amazon AppStream 2.0
     * Administration Guide</i>.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects.
     * Administrators can connect to the app block builder only through the specified
     * endpoints.</p>
     */
    inline const Aws::Vector<AccessEndpoint>& GetAccessEndpoints() const{ return m_accessEndpoints; }

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects.
     * Administrators can connect to the app block builder only through the specified
     * endpoints.</p>
     */
    inline bool AccessEndpointsHasBeenSet() const { return m_accessEndpointsHasBeenSet; }

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects.
     * Administrators can connect to the app block builder only through the specified
     * endpoints.</p>
     */
    inline void SetAccessEndpoints(const Aws::Vector<AccessEndpoint>& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = value; }

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects.
     * Administrators can connect to the app block builder only through the specified
     * endpoints.</p>
     */
    inline void SetAccessEndpoints(Aws::Vector<AccessEndpoint>&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = std::move(value); }

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects.
     * Administrators can connect to the app block builder only through the specified
     * endpoints.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithAccessEndpoints(const Aws::Vector<AccessEndpoint>& value) { SetAccessEndpoints(value); return *this;}

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects.
     * Administrators can connect to the app block builder only through the specified
     * endpoints.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithAccessEndpoints(Aws::Vector<AccessEndpoint>&& value) { SetAccessEndpoints(std::move(value)); return *this;}

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects.
     * Administrators can connect to the app block builder only through the specified
     * endpoints.</p>
     */
    inline UpdateAppBlockBuilderRequest& AddAccessEndpoints(const AccessEndpoint& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.push_back(value); return *this; }

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects.
     * Administrators can connect to the app block builder only through the specified
     * endpoints.</p>
     */
    inline UpdateAppBlockBuilderRequest& AddAccessEndpoints(AccessEndpoint&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>The attributes to delete from the app block builder.</p>
     */
    inline const Aws::Vector<AppBlockBuilderAttribute>& GetAttributesToDelete() const{ return m_attributesToDelete; }

    /**
     * <p>The attributes to delete from the app block builder.</p>
     */
    inline bool AttributesToDeleteHasBeenSet() const { return m_attributesToDeleteHasBeenSet; }

    /**
     * <p>The attributes to delete from the app block builder.</p>
     */
    inline void SetAttributesToDelete(const Aws::Vector<AppBlockBuilderAttribute>& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete = value; }

    /**
     * <p>The attributes to delete from the app block builder.</p>
     */
    inline void SetAttributesToDelete(Aws::Vector<AppBlockBuilderAttribute>&& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete = std::move(value); }

    /**
     * <p>The attributes to delete from the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithAttributesToDelete(const Aws::Vector<AppBlockBuilderAttribute>& value) { SetAttributesToDelete(value); return *this;}

    /**
     * <p>The attributes to delete from the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& WithAttributesToDelete(Aws::Vector<AppBlockBuilderAttribute>&& value) { SetAttributesToDelete(std::move(value)); return *this;}

    /**
     * <p>The attributes to delete from the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& AddAttributesToDelete(const AppBlockBuilderAttribute& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete.push_back(value); return *this; }

    /**
     * <p>The attributes to delete from the app block builder.</p>
     */
    inline UpdateAppBlockBuilderRequest& AddAttributesToDelete(AppBlockBuilderAttribute&& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    PlatformType m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    bool m_enableDefaultInternetAccess;
    bool m_enableDefaultInternetAccessHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Vector<AccessEndpoint> m_accessEndpoints;
    bool m_accessEndpointsHasBeenSet = false;

    Aws::Vector<AppBlockBuilderAttribute> m_attributesToDelete;
    bool m_attributesToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
