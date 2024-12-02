/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/IamInstanceProfile.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/ProductCode.h>
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
   * <p>Details about the potentially impacted Amazon EC2 instance
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Ec2Instance">AWS
   * API Reference</a></p>
   */
  class Ec2Instance
  {
  public:
    AWS_GUARDDUTY_API Ec2Instance();
    AWS_GUARDDUTY_API Ec2Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Ec2Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The availability zone of the Amazon EC2 instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-availability-zones">Availability
     * zones</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline Ec2Instance& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline Ec2Instance& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline Ec2Instance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image description of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetImageDescription() const{ return m_imageDescription; }
    inline bool ImageDescriptionHasBeenSet() const { return m_imageDescriptionHasBeenSet; }
    inline void SetImageDescription(const Aws::String& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = value; }
    inline void SetImageDescription(Aws::String&& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = std::move(value); }
    inline void SetImageDescription(const char* value) { m_imageDescriptionHasBeenSet = true; m_imageDescription.assign(value); }
    inline Ec2Instance& WithImageDescription(const Aws::String& value) { SetImageDescription(value); return *this;}
    inline Ec2Instance& WithImageDescription(Aws::String&& value) { SetImageDescription(std::move(value)); return *this;}
    inline Ec2Instance& WithImageDescription(const char* value) { SetImageDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Amazon EC2 instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Amazon
     * EC2 instance state changes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetInstanceState() const{ return m_instanceState; }
    inline bool InstanceStateHasBeenSet() const { return m_instanceStateHasBeenSet; }
    inline void SetInstanceState(const Aws::String& value) { m_instanceStateHasBeenSet = true; m_instanceState = value; }
    inline void SetInstanceState(Aws::String&& value) { m_instanceStateHasBeenSet = true; m_instanceState = std::move(value); }
    inline void SetInstanceState(const char* value) { m_instanceStateHasBeenSet = true; m_instanceState.assign(value); }
    inline Ec2Instance& WithInstanceState(const Aws::String& value) { SetInstanceState(value); return *this;}
    inline Ec2Instance& WithInstanceState(Aws::String&& value) { SetInstanceState(std::move(value)); return *this;}
    inline Ec2Instance& WithInstanceState(const char* value) { SetInstanceState(value); return *this;}
    ///@}

    ///@{
    
    inline const IamInstanceProfile& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    inline void SetIamInstanceProfile(const IamInstanceProfile& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }
    inline void SetIamInstanceProfile(IamInstanceProfile&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }
    inline Ec2Instance& WithIamInstanceProfile(const IamInstanceProfile& value) { SetIamInstanceProfile(value); return *this;}
    inline Ec2Instance& WithIamInstanceProfile(IamInstanceProfile&& value) { SetIamInstanceProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline Ec2Instance& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline Ec2Instance& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline Ec2Instance& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost. This shows
     * applicable Amazon Web Services Outposts instances.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }
    inline Ec2Instance& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline Ec2Instance& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline Ec2Instance& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline Ec2Instance& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline Ec2Instance& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline Ec2Instance& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product code of the Amazon EC2 instance.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }
    inline Ec2Instance& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}
    inline Ec2Instance& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}
    inline Ec2Instance& AddProductCodes(const ProductCode& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }
    inline Ec2Instance& AddProductCodes(ProductCode&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEc2NetworkInterfaceUids() const{ return m_ec2NetworkInterfaceUids; }
    inline bool Ec2NetworkInterfaceUidsHasBeenSet() const { return m_ec2NetworkInterfaceUidsHasBeenSet; }
    inline void SetEc2NetworkInterfaceUids(const Aws::Vector<Aws::String>& value) { m_ec2NetworkInterfaceUidsHasBeenSet = true; m_ec2NetworkInterfaceUids = value; }
    inline void SetEc2NetworkInterfaceUids(Aws::Vector<Aws::String>&& value) { m_ec2NetworkInterfaceUidsHasBeenSet = true; m_ec2NetworkInterfaceUids = std::move(value); }
    inline Ec2Instance& WithEc2NetworkInterfaceUids(const Aws::Vector<Aws::String>& value) { SetEc2NetworkInterfaceUids(value); return *this;}
    inline Ec2Instance& WithEc2NetworkInterfaceUids(Aws::Vector<Aws::String>&& value) { SetEc2NetworkInterfaceUids(std::move(value)); return *this;}
    inline Ec2Instance& AddEc2NetworkInterfaceUids(const Aws::String& value) { m_ec2NetworkInterfaceUidsHasBeenSet = true; m_ec2NetworkInterfaceUids.push_back(value); return *this; }
    inline Ec2Instance& AddEc2NetworkInterfaceUids(Aws::String&& value) { m_ec2NetworkInterfaceUidsHasBeenSet = true; m_ec2NetworkInterfaceUids.push_back(std::move(value)); return *this; }
    inline Ec2Instance& AddEc2NetworkInterfaceUids(const char* value) { m_ec2NetworkInterfaceUidsHasBeenSet = true; m_ec2NetworkInterfaceUids.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_imageDescription;
    bool m_imageDescriptionHasBeenSet = false;

    Aws::String m_instanceState;
    bool m_instanceStateHasBeenSet = false;

    IamInstanceProfile m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_ec2NetworkInterfaceUids;
    bool m_ec2NetworkInterfaceUidsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
