/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  /**
   * <p>Contains information about the details of an instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InstanceDetails">AWS
   * API Reference</a></p>
   */
  class InstanceDetails
  {
  public:
    AWS_GUARDDUTY_API InstanceDetails();
    AWS_GUARDDUTY_API InstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API InstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Availability Zone of the EC2 instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline InstanceDetails& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline InstanceDetails& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline InstanceDetails& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile information of the EC2 instance.</p>
     */
    inline const IamInstanceProfile& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    inline void SetIamInstanceProfile(const IamInstanceProfile& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }
    inline void SetIamInstanceProfile(IamInstanceProfile&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }
    inline InstanceDetails& WithIamInstanceProfile(const IamInstanceProfile& value) { SetIamInstanceProfile(value); return *this;}
    inline InstanceDetails& WithIamInstanceProfile(IamInstanceProfile&& value) { SetIamInstanceProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image description of the EC2 instance.</p>
     */
    inline const Aws::String& GetImageDescription() const{ return m_imageDescription; }
    inline bool ImageDescriptionHasBeenSet() const { return m_imageDescriptionHasBeenSet; }
    inline void SetImageDescription(const Aws::String& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = value; }
    inline void SetImageDescription(Aws::String&& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = std::move(value); }
    inline void SetImageDescription(const char* value) { m_imageDescriptionHasBeenSet = true; m_imageDescription.assign(value); }
    inline InstanceDetails& WithImageDescription(const Aws::String& value) { SetImageDescription(value); return *this;}
    inline InstanceDetails& WithImageDescription(Aws::String&& value) { SetImageDescription(std::move(value)); return *this;}
    inline InstanceDetails& WithImageDescription(const char* value) { SetImageDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image ID of the EC2 instance.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline InstanceDetails& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline InstanceDetails& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline InstanceDetails& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline InstanceDetails& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline InstanceDetails& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline InstanceDetails& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceState() const{ return m_instanceState; }
    inline bool InstanceStateHasBeenSet() const { return m_instanceStateHasBeenSet; }
    inline void SetInstanceState(const Aws::String& value) { m_instanceStateHasBeenSet = true; m_instanceState = value; }
    inline void SetInstanceState(Aws::String&& value) { m_instanceStateHasBeenSet = true; m_instanceState = std::move(value); }
    inline void SetInstanceState(const char* value) { m_instanceStateHasBeenSet = true; m_instanceState.assign(value); }
    inline InstanceDetails& WithInstanceState(const Aws::String& value) { SetInstanceState(value); return *this;}
    inline InstanceDetails& WithInstanceState(Aws::String&& value) { SetInstanceState(std::move(value)); return *this;}
    inline InstanceDetails& WithInstanceState(const char* value) { SetInstanceState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline InstanceDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline InstanceDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline InstanceDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost. Only
     * applicable to Amazon Web Services Outposts instances.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }
    inline InstanceDetails& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline InstanceDetails& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline InstanceDetails& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch time of the EC2 instance.</p>
     */
    inline const Aws::String& GetLaunchTime() const{ return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    inline void SetLaunchTime(const Aws::String& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }
    inline void SetLaunchTime(Aws::String&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::move(value); }
    inline void SetLaunchTime(const char* value) { m_launchTimeHasBeenSet = true; m_launchTime.assign(value); }
    inline InstanceDetails& WithLaunchTime(const Aws::String& value) { SetLaunchTime(value); return *this;}
    inline InstanceDetails& WithLaunchTime(Aws::String&& value) { SetLaunchTime(std::move(value)); return *this;}
    inline InstanceDetails& WithLaunchTime(const char* value) { SetLaunchTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The elastic network interface information of the EC2 instance.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline InstanceDetails& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}
    inline InstanceDetails& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline InstanceDetails& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline InstanceDetails& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The platform of the EC2 instance.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline InstanceDetails& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline InstanceDetails& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline InstanceDetails& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product code of the EC2 instance.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }
    inline InstanceDetails& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}
    inline InstanceDetails& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}
    inline InstanceDetails& AddProductCodes(const ProductCode& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }
    inline InstanceDetails& AddProductCodes(ProductCode&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags of the EC2 instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline InstanceDetails& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline InstanceDetails& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline InstanceDetails& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline InstanceDetails& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    IamInstanceProfile m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::String m_imageDescription;
    bool m_imageDescriptionHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceState;
    bool m_instanceStateHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_launchTime;
    bool m_launchTimeHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
