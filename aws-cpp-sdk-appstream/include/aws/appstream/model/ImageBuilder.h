﻿/*
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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/appstream/model/PlatformType.h>
#include <aws/appstream/model/ImageBuilderState.h>
#include <aws/appstream/model/ImageBuilderStateChangeReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appstream/model/DomainJoinInfo.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/ResourceError.h>
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
   * <p>Describes a streaming instance used for editing an image. New images are
   * created from a snapshot through an image builder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ImageBuilder">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API ImageBuilder
  {
  public:
    ImageBuilder();
    ImageBuilder(Aws::Utils::Json::JsonView jsonValue);
    ImageBuilder& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the image builder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the image builder.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the image builder.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the image builder.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the image builder.</p>
     */
    inline ImageBuilder& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image builder.</p>
     */
    inline ImageBuilder& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image builder.</p>
     */
    inline ImageBuilder& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN for the image builder.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the image builder.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN for the image builder.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN for the image builder.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN for the image builder.</p>
     */
    inline ImageBuilder& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the image builder.</p>
     */
    inline ImageBuilder& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the image builder.</p>
     */
    inline ImageBuilder& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ARN of the image from which this builder was created.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }

    /**
     * <p>The ARN of the image from which this builder was created.</p>
     */
    inline void SetImageArn(const Aws::String& value) { m_imageArnHasBeenSet = true; m_imageArn = value; }

    /**
     * <p>The ARN of the image from which this builder was created.</p>
     */
    inline void SetImageArn(Aws::String&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::move(value); }

    /**
     * <p>The ARN of the image from which this builder was created.</p>
     */
    inline void SetImageArn(const char* value) { m_imageArnHasBeenSet = true; m_imageArn.assign(value); }

    /**
     * <p>The ARN of the image from which this builder was created.</p>
     */
    inline ImageBuilder& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}

    /**
     * <p>The ARN of the image from which this builder was created.</p>
     */
    inline ImageBuilder& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the image from which this builder was created.</p>
     */
    inline ImageBuilder& WithImageArn(const char* value) { SetImageArn(value); return *this;}


    /**
     * <p>The description for display.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for display.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for display.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for display.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for display.</p>
     */
    inline ImageBuilder& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for display.</p>
     */
    inline ImageBuilder& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for display.</p>
     */
    inline ImageBuilder& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The image builder name for display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The image builder name for display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The image builder name for display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The image builder name for display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The image builder name for display.</p>
     */
    inline ImageBuilder& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The image builder name for display.</p>
     */
    inline ImageBuilder& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The image builder name for display.</p>
     */
    inline ImageBuilder& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The VPC configuration of the image builder.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The VPC configuration of the image builder.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>The VPC configuration of the image builder.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>The VPC configuration of the image builder.</p>
     */
    inline ImageBuilder& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The VPC configuration of the image builder.</p>
     */
    inline ImageBuilder& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>The instance type for the image builder.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type for the image builder.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type for the image builder.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type for the image builder.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type for the image builder.</p>
     */
    inline ImageBuilder& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type for the image builder.</p>
     */
    inline ImageBuilder& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type for the image builder.</p>
     */
    inline ImageBuilder& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The operating system platform of the image builder.</p>
     */
    inline const PlatformType& GetPlatform() const{ return m_platform; }

    /**
     * <p>The operating system platform of the image builder.</p>
     */
    inline void SetPlatform(const PlatformType& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The operating system platform of the image builder.</p>
     */
    inline void SetPlatform(PlatformType&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The operating system platform of the image builder.</p>
     */
    inline ImageBuilder& WithPlatform(const PlatformType& value) { SetPlatform(value); return *this;}

    /**
     * <p>The operating system platform of the image builder.</p>
     */
    inline ImageBuilder& WithPlatform(PlatformType&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The state of the image builder.</p>
     */
    inline const ImageBuilderState& GetState() const{ return m_state; }

    /**
     * <p>The state of the image builder.</p>
     */
    inline void SetState(const ImageBuilderState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the image builder.</p>
     */
    inline void SetState(ImageBuilderState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the image builder.</p>
     */
    inline ImageBuilder& WithState(const ImageBuilderState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the image builder.</p>
     */
    inline ImageBuilder& WithState(ImageBuilderState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline const ImageBuilderStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline void SetStateChangeReason(const ImageBuilderStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline void SetStateChangeReason(ImageBuilderStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }

    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline ImageBuilder& WithStateChangeReason(const ImageBuilderStateChangeReason& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline ImageBuilder& WithStateChangeReason(ImageBuilderStateChangeReason&& value) { SetStateChangeReason(std::move(value)); return *this;}


    /**
     * <p>The time stamp when the image builder was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time stamp when the image builder was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time stamp when the image builder was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time stamp when the image builder was created.</p>
     */
    inline ImageBuilder& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time stamp when the image builder was created.</p>
     */
    inline ImageBuilder& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>Enables or disables default internet access for the image builder.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const{ return m_enableDefaultInternetAccess; }

    /**
     * <p>Enables or disables default internet access for the image builder.</p>
     */
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }

    /**
     * <p>Enables or disables default internet access for the image builder.</p>
     */
    inline ImageBuilder& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}


    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline const DomainJoinInfo& GetDomainJoinInfo() const{ return m_domainJoinInfo; }

    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline void SetDomainJoinInfo(const DomainJoinInfo& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = value; }

    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline void SetDomainJoinInfo(DomainJoinInfo&& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = std::move(value); }

    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline ImageBuilder& WithDomainJoinInfo(const DomainJoinInfo& value) { SetDomainJoinInfo(value); return *this;}

    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline ImageBuilder& WithDomainJoinInfo(DomainJoinInfo&& value) { SetDomainJoinInfo(std::move(value)); return *this;}


    /**
     * <p>The image builder errors.</p>
     */
    inline const Aws::Vector<ResourceError>& GetImageBuilderErrors() const{ return m_imageBuilderErrors; }

    /**
     * <p>The image builder errors.</p>
     */
    inline void SetImageBuilderErrors(const Aws::Vector<ResourceError>& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors = value; }

    /**
     * <p>The image builder errors.</p>
     */
    inline void SetImageBuilderErrors(Aws::Vector<ResourceError>&& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors = std::move(value); }

    /**
     * <p>The image builder errors.</p>
     */
    inline ImageBuilder& WithImageBuilderErrors(const Aws::Vector<ResourceError>& value) { SetImageBuilderErrors(value); return *this;}

    /**
     * <p>The image builder errors.</p>
     */
    inline ImageBuilder& WithImageBuilderErrors(Aws::Vector<ResourceError>&& value) { SetImageBuilderErrors(std::move(value)); return *this;}

    /**
     * <p>The image builder errors.</p>
     */
    inline ImageBuilder& AddImageBuilderErrors(const ResourceError& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors.push_back(value); return *this; }

    /**
     * <p>The image builder errors.</p>
     */
    inline ImageBuilder& AddImageBuilderErrors(ResourceError&& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors.push_back(std::move(value)); return *this; }


    /**
     * <p>The version of the AppStream 2.0 agent that is currently being used by this
     * image builder. </p>
     */
    inline const Aws::String& GetAppstreamAgentVersion() const{ return m_appstreamAgentVersion; }

    /**
     * <p>The version of the AppStream 2.0 agent that is currently being used by this
     * image builder. </p>
     */
    inline void SetAppstreamAgentVersion(const Aws::String& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = value; }

    /**
     * <p>The version of the AppStream 2.0 agent that is currently being used by this
     * image builder. </p>
     */
    inline void SetAppstreamAgentVersion(Aws::String&& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = std::move(value); }

    /**
     * <p>The version of the AppStream 2.0 agent that is currently being used by this
     * image builder. </p>
     */
    inline void SetAppstreamAgentVersion(const char* value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion.assign(value); }

    /**
     * <p>The version of the AppStream 2.0 agent that is currently being used by this
     * image builder. </p>
     */
    inline ImageBuilder& WithAppstreamAgentVersion(const Aws::String& value) { SetAppstreamAgentVersion(value); return *this;}

    /**
     * <p>The version of the AppStream 2.0 agent that is currently being used by this
     * image builder. </p>
     */
    inline ImageBuilder& WithAppstreamAgentVersion(Aws::String&& value) { SetAppstreamAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the AppStream 2.0 agent that is currently being used by this
     * image builder. </p>
     */
    inline ImageBuilder& WithAppstreamAgentVersion(const char* value) { SetAppstreamAgentVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_imageArn;
    bool m_imageArnHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    PlatformType m_platform;
    bool m_platformHasBeenSet;

    ImageBuilderState m_state;
    bool m_stateHasBeenSet;

    ImageBuilderStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    bool m_enableDefaultInternetAccess;
    bool m_enableDefaultInternetAccessHasBeenSet;

    DomainJoinInfo m_domainJoinInfo;
    bool m_domainJoinInfoHasBeenSet;

    Aws::Vector<ResourceError> m_imageBuilderErrors;
    bool m_imageBuilderErrorsHasBeenSet;

    Aws::String m_appstreamAgentVersion;
    bool m_appstreamAgentVersionHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
