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
    AWS_GUARDDUTY_API Ec2Instance() = default;
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
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    Ec2Instance& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image description of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetImageDescription() const { return m_imageDescription; }
    inline bool ImageDescriptionHasBeenSet() const { return m_imageDescriptionHasBeenSet; }
    template<typename ImageDescriptionT = Aws::String>
    void SetImageDescription(ImageDescriptionT&& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = std::forward<ImageDescriptionT>(value); }
    template<typename ImageDescriptionT = Aws::String>
    Ec2Instance& WithImageDescription(ImageDescriptionT&& value) { SetImageDescription(std::forward<ImageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Amazon EC2 instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Amazon
     * EC2 instance state changes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetInstanceState() const { return m_instanceState; }
    inline bool InstanceStateHasBeenSet() const { return m_instanceStateHasBeenSet; }
    template<typename InstanceStateT = Aws::String>
    void SetInstanceState(InstanceStateT&& value) { m_instanceStateHasBeenSet = true; m_instanceState = std::forward<InstanceStateT>(value); }
    template<typename InstanceStateT = Aws::String>
    Ec2Instance& WithInstanceState(InstanceStateT&& value) { SetInstanceState(std::forward<InstanceStateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IamInstanceProfile& GetIamInstanceProfile() const { return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    template<typename IamInstanceProfileT = IamInstanceProfile>
    void SetIamInstanceProfile(IamInstanceProfileT&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::forward<IamInstanceProfileT>(value); }
    template<typename IamInstanceProfileT = IamInstanceProfile>
    Ec2Instance& WithIamInstanceProfile(IamInstanceProfileT&& value) { SetIamInstanceProfile(std::forward<IamInstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    Ec2Instance& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost. This shows
     * applicable Amazon Web Services Outposts instances.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    Ec2Instance& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    Ec2Instance& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product code of the Amazon EC2 instance.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const { return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    void SetProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::forward<ProductCodesT>(value); }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    Ec2Instance& WithProductCodes(ProductCodesT&& value) { SetProductCodes(std::forward<ProductCodesT>(value)); return *this;}
    template<typename ProductCodesT = ProductCode>
    Ec2Instance& AddProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes.emplace_back(std::forward<ProductCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEc2NetworkInterfaceUids() const { return m_ec2NetworkInterfaceUids; }
    inline bool Ec2NetworkInterfaceUidsHasBeenSet() const { return m_ec2NetworkInterfaceUidsHasBeenSet; }
    template<typename Ec2NetworkInterfaceUidsT = Aws::Vector<Aws::String>>
    void SetEc2NetworkInterfaceUids(Ec2NetworkInterfaceUidsT&& value) { m_ec2NetworkInterfaceUidsHasBeenSet = true; m_ec2NetworkInterfaceUids = std::forward<Ec2NetworkInterfaceUidsT>(value); }
    template<typename Ec2NetworkInterfaceUidsT = Aws::Vector<Aws::String>>
    Ec2Instance& WithEc2NetworkInterfaceUids(Ec2NetworkInterfaceUidsT&& value) { SetEc2NetworkInterfaceUids(std::forward<Ec2NetworkInterfaceUidsT>(value)); return *this;}
    template<typename Ec2NetworkInterfaceUidsT = Aws::String>
    Ec2Instance& AddEc2NetworkInterfaceUids(Ec2NetworkInterfaceUidsT&& value) { m_ec2NetworkInterfaceUidsHasBeenSet = true; m_ec2NetworkInterfaceUids.emplace_back(std::forward<Ec2NetworkInterfaceUidsT>(value)); return *this; }
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
