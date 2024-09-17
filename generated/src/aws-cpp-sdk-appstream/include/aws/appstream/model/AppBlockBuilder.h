/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/AppBlockBuilderPlatformType.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/appstream/model/AppBlockBuilderState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/AppBlockBuilderStateChangeReason.h>
#include <aws/appstream/model/ResourceError.h>
#include <aws/appstream/model/AccessEndpoint.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes an app block builder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AppBlockBuilder">AWS
   * API Reference</a></p>
   */
  class AppBlockBuilder
  {
  public:
    AWS_APPSTREAM_API AppBlockBuilder();
    AWS_APPSTREAM_API AppBlockBuilder(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API AppBlockBuilder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the app block builder.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AppBlockBuilder& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AppBlockBuilder& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AppBlockBuilder& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app block builder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AppBlockBuilder& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AppBlockBuilder& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AppBlockBuilder& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the app block builder.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline AppBlockBuilder& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline AppBlockBuilder& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline AppBlockBuilder& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the app block builder.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AppBlockBuilder& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AppBlockBuilder& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AppBlockBuilder& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the app block builder.</p> <p>
     * <code>WINDOWS_SERVER_2019</code> is the only valid value.</p>
     */
    inline const AppBlockBuilderPlatformType& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const AppBlockBuilderPlatformType& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(AppBlockBuilderPlatformType&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline AppBlockBuilder& WithPlatform(const AppBlockBuilderPlatformType& value) { SetPlatform(value); return *this;}
    inline AppBlockBuilder& WithPlatform(AppBlockBuilderPlatformType&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the app block builder.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline AppBlockBuilder& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline AppBlockBuilder& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline AppBlockBuilder& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether default internet access is enabled for the app block
     * builder.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const{ return m_enableDefaultInternetAccess; }
    inline bool EnableDefaultInternetAccessHasBeenSet() const { return m_enableDefaultInternetAccessHasBeenSet; }
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }
    inline AppBlockBuilder& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that is applied to the app block builder.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline AppBlockBuilder& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline AppBlockBuilder& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline AppBlockBuilder& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration for the app block builder.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline AppBlockBuilder& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline AppBlockBuilder& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the app block builder.</p>
     */
    inline const AppBlockBuilderState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const AppBlockBuilderState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(AppBlockBuilderState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline AppBlockBuilder& WithState(const AppBlockBuilderState& value) { SetState(value); return *this;}
    inline AppBlockBuilder& WithState(AppBlockBuilderState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the app block builder.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline AppBlockBuilder& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline AppBlockBuilder& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app block builder errors.</p>
     */
    inline const Aws::Vector<ResourceError>& GetAppBlockBuilderErrors() const{ return m_appBlockBuilderErrors; }
    inline bool AppBlockBuilderErrorsHasBeenSet() const { return m_appBlockBuilderErrorsHasBeenSet; }
    inline void SetAppBlockBuilderErrors(const Aws::Vector<ResourceError>& value) { m_appBlockBuilderErrorsHasBeenSet = true; m_appBlockBuilderErrors = value; }
    inline void SetAppBlockBuilderErrors(Aws::Vector<ResourceError>&& value) { m_appBlockBuilderErrorsHasBeenSet = true; m_appBlockBuilderErrors = std::move(value); }
    inline AppBlockBuilder& WithAppBlockBuilderErrors(const Aws::Vector<ResourceError>& value) { SetAppBlockBuilderErrors(value); return *this;}
    inline AppBlockBuilder& WithAppBlockBuilderErrors(Aws::Vector<ResourceError>&& value) { SetAppBlockBuilderErrors(std::move(value)); return *this;}
    inline AppBlockBuilder& AddAppBlockBuilderErrors(const ResourceError& value) { m_appBlockBuilderErrorsHasBeenSet = true; m_appBlockBuilderErrors.push_back(value); return *this; }
    inline AppBlockBuilder& AddAppBlockBuilderErrors(ResourceError&& value) { m_appBlockBuilderErrorsHasBeenSet = true; m_appBlockBuilderErrors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state change reason.</p>
     */
    inline const AppBlockBuilderStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }
    inline void SetStateChangeReason(const AppBlockBuilderStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }
    inline void SetStateChangeReason(AppBlockBuilderStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }
    inline AppBlockBuilder& WithStateChangeReason(const AppBlockBuilderStateChangeReason& value) { SetStateChangeReason(value); return *this;}
    inline AppBlockBuilder& WithStateChangeReason(AppBlockBuilderStateChangeReason&& value) { SetStateChangeReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects.
     * Administrators can connect to the app block builder only through the specified
     * endpoints.</p>
     */
    inline const Aws::Vector<AccessEndpoint>& GetAccessEndpoints() const{ return m_accessEndpoints; }
    inline bool AccessEndpointsHasBeenSet() const { return m_accessEndpointsHasBeenSet; }
    inline void SetAccessEndpoints(const Aws::Vector<AccessEndpoint>& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = value; }
    inline void SetAccessEndpoints(Aws::Vector<AccessEndpoint>&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = std::move(value); }
    inline AppBlockBuilder& WithAccessEndpoints(const Aws::Vector<AccessEndpoint>& value) { SetAccessEndpoints(value); return *this;}
    inline AppBlockBuilder& WithAccessEndpoints(Aws::Vector<AccessEndpoint>&& value) { SetAccessEndpoints(std::move(value)); return *this;}
    inline AppBlockBuilder& AddAccessEndpoints(const AccessEndpoint& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.push_back(value); return *this; }
    inline AppBlockBuilder& AddAccessEndpoints(AccessEndpoint&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AppBlockBuilderPlatformType m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    bool m_enableDefaultInternetAccess;
    bool m_enableDefaultInternetAccessHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    AppBlockBuilderState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Vector<ResourceError> m_appBlockBuilderErrors;
    bool m_appBlockBuilderErrorsHasBeenSet = false;

    AppBlockBuilderStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;

    Aws::Vector<AccessEndpoint> m_accessEndpoints;
    bool m_accessEndpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
