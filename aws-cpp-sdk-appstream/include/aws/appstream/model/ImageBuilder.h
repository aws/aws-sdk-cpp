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
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  class AWS_APPSTREAM_API ImageBuilder
  {
  public:
    ImageBuilder();
    ImageBuilder(const Aws::Utils::Json::JsonValue& jsonValue);
    ImageBuilder& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline ImageBuilder& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline ImageBuilder& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline ImageBuilder& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    
    inline ImageBuilder& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline ImageBuilder& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline ImageBuilder& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }

    
    inline void SetImageArn(const Aws::String& value) { m_imageArnHasBeenSet = true; m_imageArn = value; }

    
    inline void SetImageArn(Aws::String&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::move(value); }

    
    inline void SetImageArn(const char* value) { m_imageArnHasBeenSet = true; m_imageArn.assign(value); }

    
    inline ImageBuilder& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}

    
    inline ImageBuilder& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}

    
    inline ImageBuilder& WithImageArn(const char* value) { SetImageArn(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline ImageBuilder& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline ImageBuilder& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline ImageBuilder& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    
    inline ImageBuilder& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    
    inline ImageBuilder& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    
    inline ImageBuilder& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    
    inline ImageBuilder& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    
    inline ImageBuilder& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    
    inline ImageBuilder& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    
    inline ImageBuilder& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    
    inline ImageBuilder& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    
    inline const PlatformType& GetPlatform() const{ return m_platform; }

    
    inline void SetPlatform(const PlatformType& value) { m_platformHasBeenSet = true; m_platform = value; }

    
    inline void SetPlatform(PlatformType&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    
    inline ImageBuilder& WithPlatform(const PlatformType& value) { SetPlatform(value); return *this;}

    
    inline ImageBuilder& WithPlatform(PlatformType&& value) { SetPlatform(std::move(value)); return *this;}


    
    inline const ImageBuilderState& GetState() const{ return m_state; }

    
    inline void SetState(const ImageBuilderState& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(ImageBuilderState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline ImageBuilder& WithState(const ImageBuilderState& value) { SetState(value); return *this;}

    
    inline ImageBuilder& WithState(ImageBuilderState&& value) { SetState(std::move(value)); return *this;}


    
    inline const ImageBuilderStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }

    
    inline void SetStateChangeReason(const ImageBuilderStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    
    inline void SetStateChangeReason(ImageBuilderStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }

    
    inline ImageBuilder& WithStateChangeReason(const ImageBuilderStateChangeReason& value) { SetStateChangeReason(value); return *this;}

    
    inline ImageBuilder& WithStateChangeReason(ImageBuilderStateChangeReason&& value) { SetStateChangeReason(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    
    inline ImageBuilder& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    
    inline ImageBuilder& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    
    inline bool GetEnableDefaultInternetAccess() const{ return m_enableDefaultInternetAccess; }

    
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }

    
    inline ImageBuilder& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}


    
    inline const DomainJoinInfo& GetDomainJoinInfo() const{ return m_domainJoinInfo; }

    
    inline void SetDomainJoinInfo(const DomainJoinInfo& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = value; }

    
    inline void SetDomainJoinInfo(DomainJoinInfo&& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = std::move(value); }

    
    inline ImageBuilder& WithDomainJoinInfo(const DomainJoinInfo& value) { SetDomainJoinInfo(value); return *this;}

    
    inline ImageBuilder& WithDomainJoinInfo(DomainJoinInfo&& value) { SetDomainJoinInfo(std::move(value)); return *this;}


    
    inline const Aws::Vector<ResourceError>& GetImageBuilderErrors() const{ return m_imageBuilderErrors; }

    
    inline void SetImageBuilderErrors(const Aws::Vector<ResourceError>& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors = value; }

    
    inline void SetImageBuilderErrors(Aws::Vector<ResourceError>&& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors = std::move(value); }

    
    inline ImageBuilder& WithImageBuilderErrors(const Aws::Vector<ResourceError>& value) { SetImageBuilderErrors(value); return *this;}

    
    inline ImageBuilder& WithImageBuilderErrors(Aws::Vector<ResourceError>&& value) { SetImageBuilderErrors(std::move(value)); return *this;}

    
    inline ImageBuilder& AddImageBuilderErrors(const ResourceError& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors.push_back(value); return *this; }

    
    inline ImageBuilder& AddImageBuilderErrors(ResourceError&& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
