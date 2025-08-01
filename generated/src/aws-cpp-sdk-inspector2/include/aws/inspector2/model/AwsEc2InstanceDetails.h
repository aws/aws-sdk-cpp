/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details of the Amazon EC2 instance involved in a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AwsEc2InstanceDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2InstanceDetails
  {
  public:
    AWS_INSPECTOR2_API AwsEc2InstanceDetails() = default;
    AWS_INSPECTOR2_API AwsEc2InstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AwsEc2InstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsEc2InstanceDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image ID of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    AwsEc2InstanceDetails& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 addresses of the Amazon EC2 instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpV4Addresses() const { return m_ipV4Addresses; }
    inline bool IpV4AddressesHasBeenSet() const { return m_ipV4AddressesHasBeenSet; }
    template<typename IpV4AddressesT = Aws::Vector<Aws::String>>
    void SetIpV4Addresses(IpV4AddressesT&& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses = std::forward<IpV4AddressesT>(value); }
    template<typename IpV4AddressesT = Aws::Vector<Aws::String>>
    AwsEc2InstanceDetails& WithIpV4Addresses(IpV4AddressesT&& value) { SetIpV4Addresses(std::forward<IpV4AddressesT>(value)); return *this;}
    template<typename IpV4AddressesT = Aws::String>
    AwsEc2InstanceDetails& AddIpV4Addresses(IpV4AddressesT&& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses.emplace_back(std::forward<IpV4AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 addresses of the Amazon EC2 instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpV6Addresses() const { return m_ipV6Addresses; }
    inline bool IpV6AddressesHasBeenSet() const { return m_ipV6AddressesHasBeenSet; }
    template<typename IpV6AddressesT = Aws::Vector<Aws::String>>
    void SetIpV6Addresses(IpV6AddressesT&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses = std::forward<IpV6AddressesT>(value); }
    template<typename IpV6AddressesT = Aws::Vector<Aws::String>>
    AwsEc2InstanceDetails& WithIpV6Addresses(IpV6AddressesT&& value) { SetIpV6Addresses(std::forward<IpV6AddressesT>(value)); return *this;}
    template<typename IpV6AddressesT = Aws::String>
    AwsEc2InstanceDetails& AddIpV6Addresses(IpV6AddressesT&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.emplace_back(std::forward<IpV6AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the key pair used to launch the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    AwsEc2InstanceDetails& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM instance profile ARN of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetIamInstanceProfileArn() const { return m_iamInstanceProfileArn; }
    inline bool IamInstanceProfileArnHasBeenSet() const { return m_iamInstanceProfileArnHasBeenSet; }
    template<typename IamInstanceProfileArnT = Aws::String>
    void SetIamInstanceProfileArn(IamInstanceProfileArnT&& value) { m_iamInstanceProfileArnHasBeenSet = true; m_iamInstanceProfileArn = std::forward<IamInstanceProfileArnT>(value); }
    template<typename IamInstanceProfileArnT = Aws::String>
    AwsEc2InstanceDetails& WithIamInstanceProfileArn(IamInstanceProfileArnT&& value) { SetIamInstanceProfileArn(std::forward<IamInstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsEc2InstanceDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ID of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    AwsEc2InstanceDetails& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Amazon EC2 instance was launched at.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchedAt() const { return m_launchedAt; }
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }
    template<typename LaunchedAtT = Aws::Utils::DateTime>
    void SetLaunchedAt(LaunchedAtT&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::forward<LaunchedAtT>(value); }
    template<typename LaunchedAtT = Aws::Utils::DateTime>
    AwsEc2InstanceDetails& WithLaunchedAt(LaunchedAtT&& value) { SetLaunchedAt(std::forward<LaunchedAtT>(value)); return *this;}
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
    AwsEc2InstanceDetails& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipV4Addresses;
    bool m_ipV4AddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipV6Addresses;
    bool m_ipV6AddressesHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_iamInstanceProfileArn;
    bool m_iamInstanceProfileArnHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Utils::DateTime m_launchedAt{};
    bool m_launchedAtHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
