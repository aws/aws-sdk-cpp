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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/IamInstanceProfile.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/NetworkInterface.h>
#include <aws/guardduty/model/ProductCode.h>
#include <aws/guardduty/model/Tag.h>
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
namespace GuardDuty
{
namespace Model
{

  class AWS_GUARDDUTY_API InstanceDetails
  {
  public:
    InstanceDetails();
    InstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    InstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The availability zone of the EC2 instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The availability zone of the EC2 instance.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The availability zone of the EC2 instance.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The availability zone of the EC2 instance.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The availability zone of the EC2 instance.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The availability zone of the EC2 instance.</p>
     */
    inline InstanceDetails& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The availability zone of the EC2 instance.</p>
     */
    inline InstanceDetails& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The availability zone of the EC2 instance.</p>
     */
    inline InstanceDetails& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The profile information of the EC2 instance.</p>
     */
    inline const IamInstanceProfile& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p>The profile information of the EC2 instance.</p>
     */
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }

    /**
     * <p>The profile information of the EC2 instance.</p>
     */
    inline void SetIamInstanceProfile(const IamInstanceProfile& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The profile information of the EC2 instance.</p>
     */
    inline void SetIamInstanceProfile(IamInstanceProfile&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }

    /**
     * <p>The profile information of the EC2 instance.</p>
     */
    inline InstanceDetails& WithIamInstanceProfile(const IamInstanceProfile& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The profile information of the EC2 instance.</p>
     */
    inline InstanceDetails& WithIamInstanceProfile(IamInstanceProfile&& value) { SetIamInstanceProfile(std::move(value)); return *this;}


    /**
     * <p>The image description of the EC2 instance.</p>
     */
    inline const Aws::String& GetImageDescription() const{ return m_imageDescription; }

    /**
     * <p>The image description of the EC2 instance.</p>
     */
    inline bool ImageDescriptionHasBeenSet() const { return m_imageDescriptionHasBeenSet; }

    /**
     * <p>The image description of the EC2 instance.</p>
     */
    inline void SetImageDescription(const Aws::String& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = value; }

    /**
     * <p>The image description of the EC2 instance.</p>
     */
    inline void SetImageDescription(Aws::String&& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = std::move(value); }

    /**
     * <p>The image description of the EC2 instance.</p>
     */
    inline void SetImageDescription(const char* value) { m_imageDescriptionHasBeenSet = true; m_imageDescription.assign(value); }

    /**
     * <p>The image description of the EC2 instance.</p>
     */
    inline InstanceDetails& WithImageDescription(const Aws::String& value) { SetImageDescription(value); return *this;}

    /**
     * <p>The image description of the EC2 instance.</p>
     */
    inline InstanceDetails& WithImageDescription(Aws::String&& value) { SetImageDescription(std::move(value)); return *this;}

    /**
     * <p>The image description of the EC2 instance.</p>
     */
    inline InstanceDetails& WithImageDescription(const char* value) { SetImageDescription(value); return *this;}


    /**
     * <p>The image ID of the EC2 instance.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The image ID of the EC2 instance.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The image ID of the EC2 instance.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The image ID of the EC2 instance.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The image ID of the EC2 instance.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The image ID of the EC2 instance.</p>
     */
    inline InstanceDetails& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The image ID of the EC2 instance.</p>
     */
    inline InstanceDetails& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The image ID of the EC2 instance.</p>
     */
    inline InstanceDetails& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline InstanceDetails& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline InstanceDetails& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline InstanceDetails& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The state of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceState() const{ return m_instanceState; }

    /**
     * <p>The state of the EC2 instance.</p>
     */
    inline bool InstanceStateHasBeenSet() const { return m_instanceStateHasBeenSet; }

    /**
     * <p>The state of the EC2 instance.</p>
     */
    inline void SetInstanceState(const Aws::String& value) { m_instanceStateHasBeenSet = true; m_instanceState = value; }

    /**
     * <p>The state of the EC2 instance.</p>
     */
    inline void SetInstanceState(Aws::String&& value) { m_instanceStateHasBeenSet = true; m_instanceState = std::move(value); }

    /**
     * <p>The state of the EC2 instance.</p>
     */
    inline void SetInstanceState(const char* value) { m_instanceStateHasBeenSet = true; m_instanceState.assign(value); }

    /**
     * <p>The state of the EC2 instance.</p>
     */
    inline InstanceDetails& WithInstanceState(const Aws::String& value) { SetInstanceState(value); return *this;}

    /**
     * <p>The state of the EC2 instance.</p>
     */
    inline InstanceDetails& WithInstanceState(Aws::String&& value) { SetInstanceState(std::move(value)); return *this;}

    /**
     * <p>The state of the EC2 instance.</p>
     */
    inline InstanceDetails& WithInstanceState(const char* value) { SetInstanceState(value); return *this;}


    /**
     * <p>The type of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of the EC2 instance.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The type of the EC2 instance.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The type of the EC2 instance.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The type of the EC2 instance.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The type of the EC2 instance.</p>
     */
    inline InstanceDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of the EC2 instance.</p>
     */
    inline InstanceDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The type of the EC2 instance.</p>
     */
    inline InstanceDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The launch time of the EC2 instance.</p>
     */
    inline const Aws::String& GetLaunchTime() const{ return m_launchTime; }

    /**
     * <p>The launch time of the EC2 instance.</p>
     */
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }

    /**
     * <p>The launch time of the EC2 instance.</p>
     */
    inline void SetLaunchTime(const Aws::String& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }

    /**
     * <p>The launch time of the EC2 instance.</p>
     */
    inline void SetLaunchTime(Aws::String&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::move(value); }

    /**
     * <p>The launch time of the EC2 instance.</p>
     */
    inline void SetLaunchTime(const char* value) { m_launchTimeHasBeenSet = true; m_launchTime.assign(value); }

    /**
     * <p>The launch time of the EC2 instance.</p>
     */
    inline InstanceDetails& WithLaunchTime(const Aws::String& value) { SetLaunchTime(value); return *this;}

    /**
     * <p>The launch time of the EC2 instance.</p>
     */
    inline InstanceDetails& WithLaunchTime(Aws::String&& value) { SetLaunchTime(std::move(value)); return *this;}

    /**
     * <p>The launch time of the EC2 instance.</p>
     */
    inline InstanceDetails& WithLaunchTime(const char* value) { SetLaunchTime(value); return *this;}


    /**
     * <p>The network interface information of the EC2 instance.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>The network interface information of the EC2 instance.</p>
     */
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }

    /**
     * <p>The network interface information of the EC2 instance.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>The network interface information of the EC2 instance.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>The network interface information of the EC2 instance.</p>
     */
    inline InstanceDetails& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>The network interface information of the EC2 instance.</p>
     */
    inline InstanceDetails& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>The network interface information of the EC2 instance.</p>
     */
    inline InstanceDetails& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>The network interface information of the EC2 instance.</p>
     */
    inline InstanceDetails& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }


    /**
     * <p>The platform of the EC2 instance.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the EC2 instance.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the EC2 instance.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the EC2 instance.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the EC2 instance.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The platform of the EC2 instance.</p>
     */
    inline InstanceDetails& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the EC2 instance.</p>
     */
    inline InstanceDetails& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The platform of the EC2 instance.</p>
     */
    inline InstanceDetails& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The product code of the EC2 instance.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }

    /**
     * <p>The product code of the EC2 instance.</p>
     */
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }

    /**
     * <p>The product code of the EC2 instance.</p>
     */
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }

    /**
     * <p>The product code of the EC2 instance.</p>
     */
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }

    /**
     * <p>The product code of the EC2 instance.</p>
     */
    inline InstanceDetails& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}

    /**
     * <p>The product code of the EC2 instance.</p>
     */
    inline InstanceDetails& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}

    /**
     * <p>The product code of the EC2 instance.</p>
     */
    inline InstanceDetails& AddProductCodes(const ProductCode& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }

    /**
     * <p>The product code of the EC2 instance.</p>
     */
    inline InstanceDetails& AddProductCodes(ProductCode&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags of the EC2 instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the EC2 instance.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the EC2 instance.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the EC2 instance.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the EC2 instance.</p>
     */
    inline InstanceDetails& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the EC2 instance.</p>
     */
    inline InstanceDetails& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the EC2 instance.</p>
     */
    inline InstanceDetails& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags of the EC2 instance.</p>
     */
    inline InstanceDetails& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    IamInstanceProfile m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet;

    Aws::String m_imageDescription;
    bool m_imageDescriptionHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_instanceState;
    bool m_instanceStateHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_launchTime;
    bool m_launchTimeHasBeenSet;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet;

    Aws::String m_platform;
    bool m_platformHasBeenSet;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
