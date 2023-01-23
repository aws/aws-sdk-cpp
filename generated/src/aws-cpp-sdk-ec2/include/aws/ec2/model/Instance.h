/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/Monitoring.h>
#include <aws/ec2/model/Placement.h>
#include <aws/ec2/model/PlatformValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceState.h>
#include <aws/ec2/model/ArchitectureValues.h>
#include <aws/ec2/model/HypervisorType.h>
#include <aws/ec2/model/IamInstanceProfile.h>
#include <aws/ec2/model/InstanceLifecycleType.h>
#include <aws/ec2/model/DeviceType.h>
#include <aws/ec2/model/StateReason.h>
#include <aws/ec2/model/VirtualizationType.h>
#include <aws/ec2/model/CpuOptions.h>
#include <aws/ec2/model/CapacityReservationSpecificationResponse.h>
#include <aws/ec2/model/HibernationOptions.h>
#include <aws/ec2/model/InstanceMetadataOptionsResponse.h>
#include <aws/ec2/model/EnclaveOptions.h>
#include <aws/ec2/model/BootModeValues.h>
#include <aws/ec2/model/PrivateDnsNameOptionsResponse.h>
#include <aws/ec2/model/InstanceMaintenanceOptions.h>
#include <aws/ec2/model/ProductCode.h>
#include <aws/ec2/model/InstanceBlockDeviceMapping.h>
#include <aws/ec2/model/ElasticGpuAssociation.h>
#include <aws/ec2/model/ElasticInferenceAcceleratorAssociation.h>
#include <aws/ec2/model/InstanceNetworkInterface.h>
#include <aws/ec2/model/GroupIdentifier.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/LicenseConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Instance">AWS API
   * Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_EC2_API Instance();
    AWS_EC2_API Instance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Instance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The AMI launch index, which can be used to find this instance in the launch
     * group.</p>
     */
    inline int GetAmiLaunchIndex() const{ return m_amiLaunchIndex; }

    /**
     * <p>The AMI launch index, which can be used to find this instance in the launch
     * group.</p>
     */
    inline bool AmiLaunchIndexHasBeenSet() const { return m_amiLaunchIndexHasBeenSet; }

    /**
     * <p>The AMI launch index, which can be used to find this instance in the launch
     * group.</p>
     */
    inline void SetAmiLaunchIndex(int value) { m_amiLaunchIndexHasBeenSet = true; m_amiLaunchIndex = value; }

    /**
     * <p>The AMI launch index, which can be used to find this instance in the launch
     * group.</p>
     */
    inline Instance& WithAmiLaunchIndex(int value) { SetAmiLaunchIndex(value); return *this;}


    /**
     * <p>The ID of the AMI used to launch the instance.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI used to launch the instance.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the AMI used to launch the instance.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI used to launch the instance.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the AMI used to launch the instance.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI used to launch the instance.</p>
     */
    inline Instance& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI used to launch the instance.</p>
     */
    inline Instance& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI used to launch the instance.</p>
     */
    inline Instance& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline Instance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline Instance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline Instance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The instance type.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type.</p>
     */
    inline Instance& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline Instance& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The kernel associated with this instance, if applicable.</p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The kernel associated with this instance, if applicable.</p>
     */
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }

    /**
     * <p>The kernel associated with this instance, if applicable.</p>
     */
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The kernel associated with this instance, if applicable.</p>
     */
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }

    /**
     * <p>The kernel associated with this instance, if applicable.</p>
     */
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }

    /**
     * <p>The kernel associated with this instance, if applicable.</p>
     */
    inline Instance& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The kernel associated with this instance, if applicable.</p>
     */
    inline Instance& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}

    /**
     * <p>The kernel associated with this instance, if applicable.</p>
     */
    inline Instance& WithKernelId(const char* value) { SetKernelId(value); return *this;}


    /**
     * <p>The name of the key pair, if this instance was launched with an associated
     * key pair.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key pair, if this instance was launched with an associated
     * key pair.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>The name of the key pair, if this instance was launched with an associated
     * key pair.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The name of the key pair, if this instance was launched with an associated
     * key pair.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>The name of the key pair, if this instance was launched with an associated
     * key pair.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The name of the key pair, if this instance was launched with an associated
     * key pair.</p>
     */
    inline Instance& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair, if this instance was launched with an associated
     * key pair.</p>
     */
    inline Instance& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair, if this instance was launched with an associated
     * key pair.</p>
     */
    inline Instance& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>The time the instance was launched.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const{ return m_launchTime; }

    /**
     * <p>The time the instance was launched.</p>
     */
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }

    /**
     * <p>The time the instance was launched.</p>
     */
    inline void SetLaunchTime(const Aws::Utils::DateTime& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }

    /**
     * <p>The time the instance was launched.</p>
     */
    inline void SetLaunchTime(Aws::Utils::DateTime&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::move(value); }

    /**
     * <p>The time the instance was launched.</p>
     */
    inline Instance& WithLaunchTime(const Aws::Utils::DateTime& value) { SetLaunchTime(value); return *this;}

    /**
     * <p>The time the instance was launched.</p>
     */
    inline Instance& WithLaunchTime(Aws::Utils::DateTime&& value) { SetLaunchTime(std::move(value)); return *this;}


    /**
     * <p>The monitoring for the instance.</p>
     */
    inline const Monitoring& GetMonitoring() const{ return m_monitoring; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline void SetMonitoring(const Monitoring& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline void SetMonitoring(Monitoring&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline Instance& WithMonitoring(const Monitoring& value) { SetMonitoring(value); return *this;}

    /**
     * <p>The monitoring for the instance.</p>
     */
    inline Instance& WithMonitoring(Monitoring&& value) { SetMonitoring(std::move(value)); return *this;}


    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline const Placement& GetPlacement() const{ return m_placement; }

    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }

    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline void SetPlacement(const Placement& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline void SetPlacement(Placement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }

    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline Instance& WithPlacement(const Placement& value) { SetPlacement(value); return *this;}

    /**
     * <p>The location where the instance launched, if applicable.</p>
     */
    inline Instance& WithPlacement(Placement&& value) { SetPlacement(std::move(value)); return *this;}


    /**
     * <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
     */
    inline const PlatformValues& GetPlatform() const{ return m_platform; }

    /**
     * <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
     */
    inline void SetPlatform(const PlatformValues& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
     */
    inline void SetPlatform(PlatformValues&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
     */
    inline Instance& WithPlatform(const PlatformValues& value) { SetPlatform(value); return *this;}

    /**
     * <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
     */
    inline Instance& WithPlatform(PlatformValues&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>(IPv4 only) The private DNS hostname name assigned to the instance. This DNS
     * hostname can only be used inside the Amazon EC2 network. This name is not
     * available until the instance enters the <code>running</code> state. </p>
     * <p>[EC2-VPC] The Amazon-provided DNS server resolves Amazon-provided private DNS
     * hostnames if you've enabled DNS resolution and DNS hostnames in your VPC. If you
     * are not using the Amazon-provided DNS server in your VPC, your custom domain
     * name servers must resolve the hostname as appropriate.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>(IPv4 only) The private DNS hostname name assigned to the instance. This DNS
     * hostname can only be used inside the Amazon EC2 network. This name is not
     * available until the instance enters the <code>running</code> state. </p>
     * <p>[EC2-VPC] The Amazon-provided DNS server resolves Amazon-provided private DNS
     * hostnames if you've enabled DNS resolution and DNS hostnames in your VPC. If you
     * are not using the Amazon-provided DNS server in your VPC, your custom domain
     * name servers must resolve the hostname as appropriate.</p>
     */
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }

    /**
     * <p>(IPv4 only) The private DNS hostname name assigned to the instance. This DNS
     * hostname can only be used inside the Amazon EC2 network. This name is not
     * available until the instance enters the <code>running</code> state. </p>
     * <p>[EC2-VPC] The Amazon-provided DNS server resolves Amazon-provided private DNS
     * hostnames if you've enabled DNS resolution and DNS hostnames in your VPC. If you
     * are not using the Amazon-provided DNS server in your VPC, your custom domain
     * name servers must resolve the hostname as appropriate.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>(IPv4 only) The private DNS hostname name assigned to the instance. This DNS
     * hostname can only be used inside the Amazon EC2 network. This name is not
     * available until the instance enters the <code>running</code> state. </p>
     * <p>[EC2-VPC] The Amazon-provided DNS server resolves Amazon-provided private DNS
     * hostnames if you've enabled DNS resolution and DNS hostnames in your VPC. If you
     * are not using the Amazon-provided DNS server in your VPC, your custom domain
     * name servers must resolve the hostname as appropriate.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * <p>(IPv4 only) The private DNS hostname name assigned to the instance. This DNS
     * hostname can only be used inside the Amazon EC2 network. This name is not
     * available until the instance enters the <code>running</code> state. </p>
     * <p>[EC2-VPC] The Amazon-provided DNS server resolves Amazon-provided private DNS
     * hostnames if you've enabled DNS resolution and DNS hostnames in your VPC. If you
     * are not using the Amazon-provided DNS server in your VPC, your custom domain
     * name servers must resolve the hostname as appropriate.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>(IPv4 only) The private DNS hostname name assigned to the instance. This DNS
     * hostname can only be used inside the Amazon EC2 network. This name is not
     * available until the instance enters the <code>running</code> state. </p>
     * <p>[EC2-VPC] The Amazon-provided DNS server resolves Amazon-provided private DNS
     * hostnames if you've enabled DNS resolution and DNS hostnames in your VPC. If you
     * are not using the Amazon-provided DNS server in your VPC, your custom domain
     * name servers must resolve the hostname as appropriate.</p>
     */
    inline Instance& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>(IPv4 only) The private DNS hostname name assigned to the instance. This DNS
     * hostname can only be used inside the Amazon EC2 network. This name is not
     * available until the instance enters the <code>running</code> state. </p>
     * <p>[EC2-VPC] The Amazon-provided DNS server resolves Amazon-provided private DNS
     * hostnames if you've enabled DNS resolution and DNS hostnames in your VPC. If you
     * are not using the Amazon-provided DNS server in your VPC, your custom domain
     * name servers must resolve the hostname as appropriate.</p>
     */
    inline Instance& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>(IPv4 only) The private DNS hostname name assigned to the instance. This DNS
     * hostname can only be used inside the Amazon EC2 network. This name is not
     * available until the instance enters the <code>running</code> state. </p>
     * <p>[EC2-VPC] The Amazon-provided DNS server resolves Amazon-provided private DNS
     * hostnames if you've enabled DNS resolution and DNS hostnames in your VPC. If you
     * are not using the Amazon-provided DNS server in your VPC, your custom domain
     * name servers must resolve the hostname as appropriate.</p>
     */
    inline Instance& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


    /**
     * <p>The private IPv4 address assigned to the instance.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IPv4 address assigned to the instance.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The private IPv4 address assigned to the instance.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IPv4 address assigned to the instance.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The private IPv4 address assigned to the instance.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IPv4 address assigned to the instance.</p>
     */
    inline Instance& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IPv4 address assigned to the instance.</p>
     */
    inline Instance& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 address assigned to the instance.</p>
     */
    inline Instance& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>The product codes attached to this instance, if applicable.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }

    /**
     * <p>The product codes attached to this instance, if applicable.</p>
     */
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }

    /**
     * <p>The product codes attached to this instance, if applicable.</p>
     */
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }

    /**
     * <p>The product codes attached to this instance, if applicable.</p>
     */
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }

    /**
     * <p>The product codes attached to this instance, if applicable.</p>
     */
    inline Instance& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}

    /**
     * <p>The product codes attached to this instance, if applicable.</p>
     */
    inline Instance& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}

    /**
     * <p>The product codes attached to this instance, if applicable.</p>
     */
    inline Instance& AddProductCodes(const ProductCode& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }

    /**
     * <p>The product codes attached to this instance, if applicable.</p>
     */
    inline Instance& AddProductCodes(ProductCode&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>(IPv4 only) The public DNS name assigned to the instance. This name is not
     * available until the instance enters the <code>running</code> state. For EC2-VPC,
     * this name is only available if you've enabled DNS hostnames for your VPC.</p>
     */
    inline const Aws::String& GetPublicDnsName() const{ return m_publicDnsName; }

    /**
     * <p>(IPv4 only) The public DNS name assigned to the instance. This name is not
     * available until the instance enters the <code>running</code> state. For EC2-VPC,
     * this name is only available if you've enabled DNS hostnames for your VPC.</p>
     */
    inline bool PublicDnsNameHasBeenSet() const { return m_publicDnsNameHasBeenSet; }

    /**
     * <p>(IPv4 only) The public DNS name assigned to the instance. This name is not
     * available until the instance enters the <code>running</code> state. For EC2-VPC,
     * this name is only available if you've enabled DNS hostnames for your VPC.</p>
     */
    inline void SetPublicDnsName(const Aws::String& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = value; }

    /**
     * <p>(IPv4 only) The public DNS name assigned to the instance. This name is not
     * available until the instance enters the <code>running</code> state. For EC2-VPC,
     * this name is only available if you've enabled DNS hostnames for your VPC.</p>
     */
    inline void SetPublicDnsName(Aws::String&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::move(value); }

    /**
     * <p>(IPv4 only) The public DNS name assigned to the instance. This name is not
     * available until the instance enters the <code>running</code> state. For EC2-VPC,
     * this name is only available if you've enabled DNS hostnames for your VPC.</p>
     */
    inline void SetPublicDnsName(const char* value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName.assign(value); }

    /**
     * <p>(IPv4 only) The public DNS name assigned to the instance. This name is not
     * available until the instance enters the <code>running</code> state. For EC2-VPC,
     * this name is only available if you've enabled DNS hostnames for your VPC.</p>
     */
    inline Instance& WithPublicDnsName(const Aws::String& value) { SetPublicDnsName(value); return *this;}

    /**
     * <p>(IPv4 only) The public DNS name assigned to the instance. This name is not
     * available until the instance enters the <code>running</code> state. For EC2-VPC,
     * this name is only available if you've enabled DNS hostnames for your VPC.</p>
     */
    inline Instance& WithPublicDnsName(Aws::String&& value) { SetPublicDnsName(std::move(value)); return *this;}

    /**
     * <p>(IPv4 only) The public DNS name assigned to the instance. This name is not
     * available until the instance enters the <code>running</code> state. For EC2-VPC,
     * this name is only available if you've enabled DNS hostnames for your VPC.</p>
     */
    inline Instance& WithPublicDnsName(const char* value) { SetPublicDnsName(value); return *this;}


    /**
     * <p>The public IPv4 address, or the Carrier IP address assigned to the instance,
     * if applicable.</p> <p>A Carrier IP address only applies to an instance launched
     * in a subnet associated with a Wavelength Zone.</p>
     */
    inline const Aws::String& GetPublicIpAddress() const{ return m_publicIpAddress; }

    /**
     * <p>The public IPv4 address, or the Carrier IP address assigned to the instance,
     * if applicable.</p> <p>A Carrier IP address only applies to an instance launched
     * in a subnet associated with a Wavelength Zone.</p>
     */
    inline bool PublicIpAddressHasBeenSet() const { return m_publicIpAddressHasBeenSet; }

    /**
     * <p>The public IPv4 address, or the Carrier IP address assigned to the instance,
     * if applicable.</p> <p>A Carrier IP address only applies to an instance launched
     * in a subnet associated with a Wavelength Zone.</p>
     */
    inline void SetPublicIpAddress(const Aws::String& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = value; }

    /**
     * <p>The public IPv4 address, or the Carrier IP address assigned to the instance,
     * if applicable.</p> <p>A Carrier IP address only applies to an instance launched
     * in a subnet associated with a Wavelength Zone.</p>
     */
    inline void SetPublicIpAddress(Aws::String&& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = std::move(value); }

    /**
     * <p>The public IPv4 address, or the Carrier IP address assigned to the instance,
     * if applicable.</p> <p>A Carrier IP address only applies to an instance launched
     * in a subnet associated with a Wavelength Zone.</p>
     */
    inline void SetPublicIpAddress(const char* value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress.assign(value); }

    /**
     * <p>The public IPv4 address, or the Carrier IP address assigned to the instance,
     * if applicable.</p> <p>A Carrier IP address only applies to an instance launched
     * in a subnet associated with a Wavelength Zone.</p>
     */
    inline Instance& WithPublicIpAddress(const Aws::String& value) { SetPublicIpAddress(value); return *this;}

    /**
     * <p>The public IPv4 address, or the Carrier IP address assigned to the instance,
     * if applicable.</p> <p>A Carrier IP address only applies to an instance launched
     * in a subnet associated with a Wavelength Zone.</p>
     */
    inline Instance& WithPublicIpAddress(Aws::String&& value) { SetPublicIpAddress(std::move(value)); return *this;}

    /**
     * <p>The public IPv4 address, or the Carrier IP address assigned to the instance,
     * if applicable.</p> <p>A Carrier IP address only applies to an instance launched
     * in a subnet associated with a Wavelength Zone.</p>
     */
    inline Instance& WithPublicIpAddress(const char* value) { SetPublicIpAddress(value); return *this;}


    /**
     * <p>The RAM disk associated with this instance, if applicable.</p>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }

    /**
     * <p>The RAM disk associated with this instance, if applicable.</p>
     */
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }

    /**
     * <p>The RAM disk associated with this instance, if applicable.</p>
     */
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }

    /**
     * <p>The RAM disk associated with this instance, if applicable.</p>
     */
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }

    /**
     * <p>The RAM disk associated with this instance, if applicable.</p>
     */
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }

    /**
     * <p>The RAM disk associated with this instance, if applicable.</p>
     */
    inline Instance& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The RAM disk associated with this instance, if applicable.</p>
     */
    inline Instance& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}

    /**
     * <p>The RAM disk associated with this instance, if applicable.</p>
     */
    inline Instance& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}


    /**
     * <p>The current state of the instance.</p>
     */
    inline const InstanceState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline void SetState(const InstanceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline void SetState(InstanceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the instance.</p>
     */
    inline Instance& WithState(const InstanceState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the instance.</p>
     */
    inline Instance& WithState(InstanceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason for the most recent state transition. This might be an empty
     * string.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const{ return m_stateTransitionReason; }

    /**
     * <p>The reason for the most recent state transition. This might be an empty
     * string.</p>
     */
    inline bool StateTransitionReasonHasBeenSet() const { return m_stateTransitionReasonHasBeenSet; }

    /**
     * <p>The reason for the most recent state transition. This might be an empty
     * string.</p>
     */
    inline void SetStateTransitionReason(const Aws::String& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = value; }

    /**
     * <p>The reason for the most recent state transition. This might be an empty
     * string.</p>
     */
    inline void SetStateTransitionReason(Aws::String&& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = std::move(value); }

    /**
     * <p>The reason for the most recent state transition. This might be an empty
     * string.</p>
     */
    inline void SetStateTransitionReason(const char* value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason.assign(value); }

    /**
     * <p>The reason for the most recent state transition. This might be an empty
     * string.</p>
     */
    inline Instance& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}

    /**
     * <p>The reason for the most recent state transition. This might be an empty
     * string.</p>
     */
    inline Instance& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the most recent state transition. This might be an empty
     * string.</p>
     */
    inline Instance& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}


    /**
     * <p>[EC2-VPC] The ID of the subnet in which the instance is running.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>[EC2-VPC] The ID of the subnet in which the instance is running.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>[EC2-VPC] The ID of the subnet in which the instance is running.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>[EC2-VPC] The ID of the subnet in which the instance is running.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>[EC2-VPC] The ID of the subnet in which the instance is running.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>[EC2-VPC] The ID of the subnet in which the instance is running.</p>
     */
    inline Instance& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the subnet in which the instance is running.</p>
     */
    inline Instance& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the subnet in which the instance is running.</p>
     */
    inline Instance& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>[EC2-VPC] The ID of the VPC in which the instance is running.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>[EC2-VPC] The ID of the VPC in which the instance is running.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>[EC2-VPC] The ID of the VPC in which the instance is running.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>[EC2-VPC] The ID of the VPC in which the instance is running.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>[EC2-VPC] The ID of the VPC in which the instance is running.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>[EC2-VPC] The ID of the VPC in which the instance is running.</p>
     */
    inline Instance& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the VPC in which the instance is running.</p>
     */
    inline Instance& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the VPC in which the instance is running.</p>
     */
    inline Instance& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The architecture of the image.</p>
     */
    inline const ArchitectureValues& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architecture of the image.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The architecture of the image.</p>
     */
    inline void SetArchitecture(const ArchitectureValues& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architecture of the image.</p>
     */
    inline void SetArchitecture(ArchitectureValues&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The architecture of the image.</p>
     */
    inline Instance& WithArchitecture(const ArchitectureValues& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architecture of the image.</p>
     */
    inline Instance& WithArchitecture(ArchitectureValues&& value) { SetArchitecture(std::move(value)); return *this;}


    /**
     * <p>Any block device mapping entries for the instance.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>Any block device mapping entries for the instance.</p>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>Any block device mapping entries for the instance.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>Any block device mapping entries for the instance.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>Any block device mapping entries for the instance.</p>
     */
    inline Instance& WithBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>Any block device mapping entries for the instance.</p>
     */
    inline Instance& WithBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>Any block device mapping entries for the instance.</p>
     */
    inline Instance& AddBlockDeviceMappings(const InstanceBlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>Any block device mapping entries for the instance.</p>
     */
    inline Instance& AddBlockDeviceMappings(InstanceBlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>The idempotency token you provided when you launched the instance, if
     * applicable.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token you provided when you launched the instance, if
     * applicable.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token you provided when you launched the instance, if
     * applicable.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token you provided when you launched the instance, if
     * applicable.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token you provided when you launched the instance, if
     * applicable.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token you provided when you launched the instance, if
     * applicable.</p>
     */
    inline Instance& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token you provided when you launched the instance, if
     * applicable.</p>
     */
    inline Instance& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token you provided when you launched the instance, if
     * applicable.</p>
     */
    inline Instance& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal I/O performance. This optimization isn't
     * available with all instance types. Additional usage charges apply when using an
     * EBS Optimized instance.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal I/O performance. This optimization isn't
     * available with all instance types. Additional usage charges apply when using an
     * EBS Optimized instance.</p>
     */
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal I/O performance. This optimization isn't
     * available with all instance types. Additional usage charges apply when using an
     * EBS Optimized instance.</p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the instance is optimized for Amazon EBS I/O. This
     * optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal I/O performance. This optimization isn't
     * available with all instance types. Additional usage charges apply when using an
     * EBS Optimized instance.</p>
     */
    inline Instance& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>Specifies whether enhanced networking with ENA is enabled.</p>
     */
    inline bool GetEnaSupport() const{ return m_enaSupport; }

    /**
     * <p>Specifies whether enhanced networking with ENA is enabled.</p>
     */
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }

    /**
     * <p>Specifies whether enhanced networking with ENA is enabled.</p>
     */
    inline void SetEnaSupport(bool value) { m_enaSupportHasBeenSet = true; m_enaSupport = value; }

    /**
     * <p>Specifies whether enhanced networking with ENA is enabled.</p>
     */
    inline Instance& WithEnaSupport(bool value) { SetEnaSupport(value); return *this;}


    /**
     * <p>The hypervisor type of the instance. The value <code>xen</code> is used for
     * both Xen and Nitro hypervisors.</p>
     */
    inline const HypervisorType& GetHypervisor() const{ return m_hypervisor; }

    /**
     * <p>The hypervisor type of the instance. The value <code>xen</code> is used for
     * both Xen and Nitro hypervisors.</p>
     */
    inline bool HypervisorHasBeenSet() const { return m_hypervisorHasBeenSet; }

    /**
     * <p>The hypervisor type of the instance. The value <code>xen</code> is used for
     * both Xen and Nitro hypervisors.</p>
     */
    inline void SetHypervisor(const HypervisorType& value) { m_hypervisorHasBeenSet = true; m_hypervisor = value; }

    /**
     * <p>The hypervisor type of the instance. The value <code>xen</code> is used for
     * both Xen and Nitro hypervisors.</p>
     */
    inline void SetHypervisor(HypervisorType&& value) { m_hypervisorHasBeenSet = true; m_hypervisor = std::move(value); }

    /**
     * <p>The hypervisor type of the instance. The value <code>xen</code> is used for
     * both Xen and Nitro hypervisors.</p>
     */
    inline Instance& WithHypervisor(const HypervisorType& value) { SetHypervisor(value); return *this;}

    /**
     * <p>The hypervisor type of the instance. The value <code>xen</code> is used for
     * both Xen and Nitro hypervisors.</p>
     */
    inline Instance& WithHypervisor(HypervisorType&& value) { SetHypervisor(std::move(value)); return *this;}


    /**
     * <p>The IAM instance profile associated with the instance, if applicable.</p>
     */
    inline const IamInstanceProfile& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p>The IAM instance profile associated with the instance, if applicable.</p>
     */
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }

    /**
     * <p>The IAM instance profile associated with the instance, if applicable.</p>
     */
    inline void SetIamInstanceProfile(const IamInstanceProfile& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The IAM instance profile associated with the instance, if applicable.</p>
     */
    inline void SetIamInstanceProfile(IamInstanceProfile&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }

    /**
     * <p>The IAM instance profile associated with the instance, if applicable.</p>
     */
    inline Instance& WithIamInstanceProfile(const IamInstanceProfile& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The IAM instance profile associated with the instance, if applicable.</p>
     */
    inline Instance& WithIamInstanceProfile(IamInstanceProfile&& value) { SetIamInstanceProfile(std::move(value)); return *this;}


    /**
     * <p>Indicates whether this is a Spot Instance or a Scheduled Instance.</p>
     */
    inline const InstanceLifecycleType& GetInstanceLifecycle() const{ return m_instanceLifecycle; }

    /**
     * <p>Indicates whether this is a Spot Instance or a Scheduled Instance.</p>
     */
    inline bool InstanceLifecycleHasBeenSet() const { return m_instanceLifecycleHasBeenSet; }

    /**
     * <p>Indicates whether this is a Spot Instance or a Scheduled Instance.</p>
     */
    inline void SetInstanceLifecycle(const InstanceLifecycleType& value) { m_instanceLifecycleHasBeenSet = true; m_instanceLifecycle = value; }

    /**
     * <p>Indicates whether this is a Spot Instance or a Scheduled Instance.</p>
     */
    inline void SetInstanceLifecycle(InstanceLifecycleType&& value) { m_instanceLifecycleHasBeenSet = true; m_instanceLifecycle = std::move(value); }

    /**
     * <p>Indicates whether this is a Spot Instance or a Scheduled Instance.</p>
     */
    inline Instance& WithInstanceLifecycle(const InstanceLifecycleType& value) { SetInstanceLifecycle(value); return *this;}

    /**
     * <p>Indicates whether this is a Spot Instance or a Scheduled Instance.</p>
     */
    inline Instance& WithInstanceLifecycle(InstanceLifecycleType&& value) { SetInstanceLifecycle(std::move(value)); return *this;}


    /**
     * <p>The Elastic GPU associated with the instance.</p>
     */
    inline const Aws::Vector<ElasticGpuAssociation>& GetElasticGpuAssociations() const{ return m_elasticGpuAssociations; }

    /**
     * <p>The Elastic GPU associated with the instance.</p>
     */
    inline bool ElasticGpuAssociationsHasBeenSet() const { return m_elasticGpuAssociationsHasBeenSet; }

    /**
     * <p>The Elastic GPU associated with the instance.</p>
     */
    inline void SetElasticGpuAssociations(const Aws::Vector<ElasticGpuAssociation>& value) { m_elasticGpuAssociationsHasBeenSet = true; m_elasticGpuAssociations = value; }

    /**
     * <p>The Elastic GPU associated with the instance.</p>
     */
    inline void SetElasticGpuAssociations(Aws::Vector<ElasticGpuAssociation>&& value) { m_elasticGpuAssociationsHasBeenSet = true; m_elasticGpuAssociations = std::move(value); }

    /**
     * <p>The Elastic GPU associated with the instance.</p>
     */
    inline Instance& WithElasticGpuAssociations(const Aws::Vector<ElasticGpuAssociation>& value) { SetElasticGpuAssociations(value); return *this;}

    /**
     * <p>The Elastic GPU associated with the instance.</p>
     */
    inline Instance& WithElasticGpuAssociations(Aws::Vector<ElasticGpuAssociation>&& value) { SetElasticGpuAssociations(std::move(value)); return *this;}

    /**
     * <p>The Elastic GPU associated with the instance.</p>
     */
    inline Instance& AddElasticGpuAssociations(const ElasticGpuAssociation& value) { m_elasticGpuAssociationsHasBeenSet = true; m_elasticGpuAssociations.push_back(value); return *this; }

    /**
     * <p>The Elastic GPU associated with the instance.</p>
     */
    inline Instance& AddElasticGpuAssociations(ElasticGpuAssociation&& value) { m_elasticGpuAssociationsHasBeenSet = true; m_elasticGpuAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p> The elastic inference accelerator associated with the instance.</p>
     */
    inline const Aws::Vector<ElasticInferenceAcceleratorAssociation>& GetElasticInferenceAcceleratorAssociations() const{ return m_elasticInferenceAcceleratorAssociations; }

    /**
     * <p> The elastic inference accelerator associated with the instance.</p>
     */
    inline bool ElasticInferenceAcceleratorAssociationsHasBeenSet() const { return m_elasticInferenceAcceleratorAssociationsHasBeenSet; }

    /**
     * <p> The elastic inference accelerator associated with the instance.</p>
     */
    inline void SetElasticInferenceAcceleratorAssociations(const Aws::Vector<ElasticInferenceAcceleratorAssociation>& value) { m_elasticInferenceAcceleratorAssociationsHasBeenSet = true; m_elasticInferenceAcceleratorAssociations = value; }

    /**
     * <p> The elastic inference accelerator associated with the instance.</p>
     */
    inline void SetElasticInferenceAcceleratorAssociations(Aws::Vector<ElasticInferenceAcceleratorAssociation>&& value) { m_elasticInferenceAcceleratorAssociationsHasBeenSet = true; m_elasticInferenceAcceleratorAssociations = std::move(value); }

    /**
     * <p> The elastic inference accelerator associated with the instance.</p>
     */
    inline Instance& WithElasticInferenceAcceleratorAssociations(const Aws::Vector<ElasticInferenceAcceleratorAssociation>& value) { SetElasticInferenceAcceleratorAssociations(value); return *this;}

    /**
     * <p> The elastic inference accelerator associated with the instance.</p>
     */
    inline Instance& WithElasticInferenceAcceleratorAssociations(Aws::Vector<ElasticInferenceAcceleratorAssociation>&& value) { SetElasticInferenceAcceleratorAssociations(std::move(value)); return *this;}

    /**
     * <p> The elastic inference accelerator associated with the instance.</p>
     */
    inline Instance& AddElasticInferenceAcceleratorAssociations(const ElasticInferenceAcceleratorAssociation& value) { m_elasticInferenceAcceleratorAssociationsHasBeenSet = true; m_elasticInferenceAcceleratorAssociations.push_back(value); return *this; }

    /**
     * <p> The elastic inference accelerator associated with the instance.</p>
     */
    inline Instance& AddElasticInferenceAcceleratorAssociations(ElasticInferenceAcceleratorAssociation&& value) { m_elasticInferenceAcceleratorAssociationsHasBeenSet = true; m_elasticInferenceAcceleratorAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>[EC2-VPC] The network interfaces for the instance.</p>
     */
    inline const Aws::Vector<InstanceNetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>[EC2-VPC] The network interfaces for the instance.</p>
     */
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }

    /**
     * <p>[EC2-VPC] The network interfaces for the instance.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<InstanceNetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>[EC2-VPC] The network interfaces for the instance.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<InstanceNetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>[EC2-VPC] The network interfaces for the instance.</p>
     */
    inline Instance& WithNetworkInterfaces(const Aws::Vector<InstanceNetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>[EC2-VPC] The network interfaces for the instance.</p>
     */
    inline Instance& WithNetworkInterfaces(Aws::Vector<InstanceNetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The network interfaces for the instance.</p>
     */
    inline Instance& AddNetworkInterfaces(const InstanceNetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>[EC2-VPC] The network interfaces for the instance.</p>
     */
    inline Instance& AddNetworkInterfaces(InstanceNetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline Instance& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline Instance& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline Instance& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline const Aws::String& GetRootDeviceName() const{ return m_rootDeviceName; }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline bool RootDeviceNameHasBeenSet() const { return m_rootDeviceNameHasBeenSet; }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline void SetRootDeviceName(const Aws::String& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = value; }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline void SetRootDeviceName(Aws::String&& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = std::move(value); }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline void SetRootDeviceName(const char* value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName.assign(value); }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline Instance& WithRootDeviceName(const Aws::String& value) { SetRootDeviceName(value); return *this;}

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline Instance& WithRootDeviceName(Aws::String&& value) { SetRootDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline Instance& WithRootDeviceName(const char* value) { SetRootDeviceName(value); return *this;}


    /**
     * <p>The root device type used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
     */
    inline const DeviceType& GetRootDeviceType() const{ return m_rootDeviceType; }

    /**
     * <p>The root device type used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
     */
    inline bool RootDeviceTypeHasBeenSet() const { return m_rootDeviceTypeHasBeenSet; }

    /**
     * <p>The root device type used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
     */
    inline void SetRootDeviceType(const DeviceType& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = value; }

    /**
     * <p>The root device type used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
     */
    inline void SetRootDeviceType(DeviceType&& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = std::move(value); }

    /**
     * <p>The root device type used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
     */
    inline Instance& WithRootDeviceType(const DeviceType& value) { SetRootDeviceType(value); return *this;}

    /**
     * <p>The root device type used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
     */
    inline Instance& WithRootDeviceType(DeviceType&& value) { SetRootDeviceType(std::move(value)); return *this;}


    /**
     * <p>The security groups for the instance.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The security groups for the instance.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The security groups for the instance.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<GroupIdentifier>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The security groups for the instance.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<GroupIdentifier>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The security groups for the instance.</p>
     */
    inline Instance& WithSecurityGroups(const Aws::Vector<GroupIdentifier>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The security groups for the instance.</p>
     */
    inline Instance& WithSecurityGroups(Aws::Vector<GroupIdentifier>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The security groups for the instance.</p>
     */
    inline Instance& AddSecurityGroups(const GroupIdentifier& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The security groups for the instance.</p>
     */
    inline Instance& AddSecurityGroups(GroupIdentifier&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline bool GetSourceDestCheck() const{ return m_sourceDestCheck; }

    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }

    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline void SetSourceDestCheck(bool value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }

    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline Instance& WithSourceDestCheck(bool value) { SetSourceDestCheck(value); return *this;}


    /**
     * <p>If the request is a Spot Instance request, the ID of the request.</p>
     */
    inline const Aws::String& GetSpotInstanceRequestId() const{ return m_spotInstanceRequestId; }

    /**
     * <p>If the request is a Spot Instance request, the ID of the request.</p>
     */
    inline bool SpotInstanceRequestIdHasBeenSet() const { return m_spotInstanceRequestIdHasBeenSet; }

    /**
     * <p>If the request is a Spot Instance request, the ID of the request.</p>
     */
    inline void SetSpotInstanceRequestId(const Aws::String& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = value; }

    /**
     * <p>If the request is a Spot Instance request, the ID of the request.</p>
     */
    inline void SetSpotInstanceRequestId(Aws::String&& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = std::move(value); }

    /**
     * <p>If the request is a Spot Instance request, the ID of the request.</p>
     */
    inline void SetSpotInstanceRequestId(const char* value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId.assign(value); }

    /**
     * <p>If the request is a Spot Instance request, the ID of the request.</p>
     */
    inline Instance& WithSpotInstanceRequestId(const Aws::String& value) { SetSpotInstanceRequestId(value); return *this;}

    /**
     * <p>If the request is a Spot Instance request, the ID of the request.</p>
     */
    inline Instance& WithSpotInstanceRequestId(Aws::String&& value) { SetSpotInstanceRequestId(std::move(value)); return *this;}

    /**
     * <p>If the request is a Spot Instance request, the ID of the request.</p>
     */
    inline Instance& WithSpotInstanceRequestId(const char* value) { SetSpotInstanceRequestId(value); return *this;}


    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline const Aws::String& GetSriovNetSupport() const{ return m_sriovNetSupport; }

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline bool SriovNetSupportHasBeenSet() const { return m_sriovNetSupportHasBeenSet; }

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline void SetSriovNetSupport(const Aws::String& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = value; }

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline void SetSriovNetSupport(Aws::String&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = std::move(value); }

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline void SetSriovNetSupport(const char* value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport.assign(value); }

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline Instance& WithSriovNetSupport(const Aws::String& value) { SetSriovNetSupport(value); return *this;}

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline Instance& WithSriovNetSupport(Aws::String&& value) { SetSriovNetSupport(std::move(value)); return *this;}

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline Instance& WithSriovNetSupport(const char* value) { SetSriovNetSupport(value); return *this;}


    /**
     * <p>The reason for the most recent state transition.</p>
     */
    inline const StateReason& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason for the most recent state transition.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>The reason for the most recent state transition.</p>
     */
    inline void SetStateReason(const StateReason& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>The reason for the most recent state transition.</p>
     */
    inline void SetStateReason(StateReason&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>The reason for the most recent state transition.</p>
     */
    inline Instance& WithStateReason(const StateReason& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason for the most recent state transition.</p>
     */
    inline Instance& WithStateReason(StateReason&& value) { SetStateReason(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the instance.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the instance.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the instance.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the instance.</p>
     */
    inline Instance& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the instance.</p>
     */
    inline Instance& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the instance.</p>
     */
    inline Instance& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the instance.</p>
     */
    inline Instance& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The virtualization type of the instance.</p>
     */
    inline const VirtualizationType& GetVirtualizationType() const{ return m_virtualizationType; }

    /**
     * <p>The virtualization type of the instance.</p>
     */
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }

    /**
     * <p>The virtualization type of the instance.</p>
     */
    inline void SetVirtualizationType(const VirtualizationType& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }

    /**
     * <p>The virtualization type of the instance.</p>
     */
    inline void SetVirtualizationType(VirtualizationType&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::move(value); }

    /**
     * <p>The virtualization type of the instance.</p>
     */
    inline Instance& WithVirtualizationType(const VirtualizationType& value) { SetVirtualizationType(value); return *this;}

    /**
     * <p>The virtualization type of the instance.</p>
     */
    inline Instance& WithVirtualizationType(VirtualizationType&& value) { SetVirtualizationType(std::move(value)); return *this;}


    /**
     * <p>The CPU options for the instance.</p>
     */
    inline const CpuOptions& GetCpuOptions() const{ return m_cpuOptions; }

    /**
     * <p>The CPU options for the instance.</p>
     */
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }

    /**
     * <p>The CPU options for the instance.</p>
     */
    inline void SetCpuOptions(const CpuOptions& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = value; }

    /**
     * <p>The CPU options for the instance.</p>
     */
    inline void SetCpuOptions(CpuOptions&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::move(value); }

    /**
     * <p>The CPU options for the instance.</p>
     */
    inline Instance& WithCpuOptions(const CpuOptions& value) { SetCpuOptions(value); return *this;}

    /**
     * <p>The CPU options for the instance.</p>
     */
    inline Instance& WithCpuOptions(CpuOptions&& value) { SetCpuOptions(std::move(value)); return *this;}


    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline Instance& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline Instance& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline Instance& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}


    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline const CapacityReservationSpecificationResponse& GetCapacityReservationSpecification() const{ return m_capacityReservationSpecification; }

    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }

    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline void SetCapacityReservationSpecification(const CapacityReservationSpecificationResponse& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = value; }

    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline void SetCapacityReservationSpecification(CapacityReservationSpecificationResponse&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::move(value); }

    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline Instance& WithCapacityReservationSpecification(const CapacityReservationSpecificationResponse& value) { SetCapacityReservationSpecification(value); return *this;}

    /**
     * <p>Information about the Capacity Reservation targeting option.</p>
     */
    inline Instance& WithCapacityReservationSpecification(CapacityReservationSpecificationResponse&& value) { SetCapacityReservationSpecification(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the instance is enabled for hibernation.</p>
     */
    inline const HibernationOptions& GetHibernationOptions() const{ return m_hibernationOptions; }

    /**
     * <p>Indicates whether the instance is enabled for hibernation.</p>
     */
    inline bool HibernationOptionsHasBeenSet() const { return m_hibernationOptionsHasBeenSet; }

    /**
     * <p>Indicates whether the instance is enabled for hibernation.</p>
     */
    inline void SetHibernationOptions(const HibernationOptions& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = value; }

    /**
     * <p>Indicates whether the instance is enabled for hibernation.</p>
     */
    inline void SetHibernationOptions(HibernationOptions&& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = std::move(value); }

    /**
     * <p>Indicates whether the instance is enabled for hibernation.</p>
     */
    inline Instance& WithHibernationOptions(const HibernationOptions& value) { SetHibernationOptions(value); return *this;}

    /**
     * <p>Indicates whether the instance is enabled for hibernation.</p>
     */
    inline Instance& WithHibernationOptions(HibernationOptions&& value) { SetHibernationOptions(std::move(value)); return *this;}


    /**
     * <p>The license configurations for the instance.</p>
     */
    inline const Aws::Vector<LicenseConfiguration>& GetLicenses() const{ return m_licenses; }

    /**
     * <p>The license configurations for the instance.</p>
     */
    inline bool LicensesHasBeenSet() const { return m_licensesHasBeenSet; }

    /**
     * <p>The license configurations for the instance.</p>
     */
    inline void SetLicenses(const Aws::Vector<LicenseConfiguration>& value) { m_licensesHasBeenSet = true; m_licenses = value; }

    /**
     * <p>The license configurations for the instance.</p>
     */
    inline void SetLicenses(Aws::Vector<LicenseConfiguration>&& value) { m_licensesHasBeenSet = true; m_licenses = std::move(value); }

    /**
     * <p>The license configurations for the instance.</p>
     */
    inline Instance& WithLicenses(const Aws::Vector<LicenseConfiguration>& value) { SetLicenses(value); return *this;}

    /**
     * <p>The license configurations for the instance.</p>
     */
    inline Instance& WithLicenses(Aws::Vector<LicenseConfiguration>&& value) { SetLicenses(std::move(value)); return *this;}

    /**
     * <p>The license configurations for the instance.</p>
     */
    inline Instance& AddLicenses(const LicenseConfiguration& value) { m_licensesHasBeenSet = true; m_licenses.push_back(value); return *this; }

    /**
     * <p>The license configurations for the instance.</p>
     */
    inline Instance& AddLicenses(LicenseConfiguration&& value) { m_licensesHasBeenSet = true; m_licenses.push_back(std::move(value)); return *this; }


    /**
     * <p>The metadata options for the instance.</p>
     */
    inline const InstanceMetadataOptionsResponse& GetMetadataOptions() const{ return m_metadataOptions; }

    /**
     * <p>The metadata options for the instance.</p>
     */
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }

    /**
     * <p>The metadata options for the instance.</p>
     */
    inline void SetMetadataOptions(const InstanceMetadataOptionsResponse& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = value; }

    /**
     * <p>The metadata options for the instance.</p>
     */
    inline void SetMetadataOptions(InstanceMetadataOptionsResponse&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::move(value); }

    /**
     * <p>The metadata options for the instance.</p>
     */
    inline Instance& WithMetadataOptions(const InstanceMetadataOptionsResponse& value) { SetMetadataOptions(value); return *this;}

    /**
     * <p>The metadata options for the instance.</p>
     */
    inline Instance& WithMetadataOptions(InstanceMetadataOptionsResponse&& value) { SetMetadataOptions(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves.</p>
     */
    inline const EnclaveOptions& GetEnclaveOptions() const{ return m_enclaveOptions; }

    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves.</p>
     */
    inline bool EnclaveOptionsHasBeenSet() const { return m_enclaveOptionsHasBeenSet; }

    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves.</p>
     */
    inline void SetEnclaveOptions(const EnclaveOptions& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = value; }

    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves.</p>
     */
    inline void SetEnclaveOptions(EnclaveOptions&& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = std::move(value); }

    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves.</p>
     */
    inline Instance& WithEnclaveOptions(const EnclaveOptions& value) { SetEnclaveOptions(value); return *this;}

    /**
     * <p>Indicates whether the instance is enabled for Amazon Web Services Nitro
     * Enclaves.</p>
     */
    inline Instance& WithEnclaveOptions(EnclaveOptions&& value) { SetEnclaveOptions(std::move(value)); return *this;}


    /**
     * <p>The boot mode of the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const BootModeValues& GetBootMode() const{ return m_bootMode; }

    /**
     * <p>The boot mode of the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }

    /**
     * <p>The boot mode of the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetBootMode(const BootModeValues& value) { m_bootModeHasBeenSet = true; m_bootMode = value; }

    /**
     * <p>The boot mode of the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetBootMode(BootModeValues&& value) { m_bootModeHasBeenSet = true; m_bootMode = std::move(value); }

    /**
     * <p>The boot mode of the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Instance& WithBootMode(const BootModeValues& value) { SetBootMode(value); return *this;}

    /**
     * <p>The boot mode of the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Instance& WithBootMode(BootModeValues&& value) { SetBootMode(std::move(value)); return *this;}


    /**
     * <p>The platform details value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformDetails() const{ return m_platformDetails; }

    /**
     * <p>The platform details value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool PlatformDetailsHasBeenSet() const { return m_platformDetailsHasBeenSet; }

    /**
     * <p>The platform details value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetPlatformDetails(const Aws::String& value) { m_platformDetailsHasBeenSet = true; m_platformDetails = value; }

    /**
     * <p>The platform details value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetPlatformDetails(Aws::String&& value) { m_platformDetailsHasBeenSet = true; m_platformDetails = std::move(value); }

    /**
     * <p>The platform details value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetPlatformDetails(const char* value) { m_platformDetailsHasBeenSet = true; m_platformDetails.assign(value); }

    /**
     * <p>The platform details value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Instance& WithPlatformDetails(const Aws::String& value) { SetPlatformDetails(value); return *this;}

    /**
     * <p>The platform details value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Instance& WithPlatformDetails(Aws::String&& value) { SetPlatformDetails(std::move(value)); return *this;}

    /**
     * <p>The platform details value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Instance& WithPlatformDetails(const char* value) { SetPlatformDetails(value); return *this;}


    /**
     * <p>The usage operation value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetUsageOperation() const{ return m_usageOperation; }

    /**
     * <p>The usage operation value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }

    /**
     * <p>The usage operation value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetUsageOperation(const Aws::String& value) { m_usageOperationHasBeenSet = true; m_usageOperation = value; }

    /**
     * <p>The usage operation value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetUsageOperation(Aws::String&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::move(value); }

    /**
     * <p>The usage operation value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetUsageOperation(const char* value) { m_usageOperationHasBeenSet = true; m_usageOperation.assign(value); }

    /**
     * <p>The usage operation value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Instance& WithUsageOperation(const Aws::String& value) { SetUsageOperation(value); return *this;}

    /**
     * <p>The usage operation value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Instance& WithUsageOperation(Aws::String&& value) { SetUsageOperation(std::move(value)); return *this;}

    /**
     * <p>The usage operation value for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/billing-info-fields.html">AMI
     * billing information fields</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Instance& WithUsageOperation(const char* value) { SetUsageOperation(value); return *this;}


    /**
     * <p>The time that the usage operation was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUsageOperationUpdateTime() const{ return m_usageOperationUpdateTime; }

    /**
     * <p>The time that the usage operation was last updated.</p>
     */
    inline bool UsageOperationUpdateTimeHasBeenSet() const { return m_usageOperationUpdateTimeHasBeenSet; }

    /**
     * <p>The time that the usage operation was last updated.</p>
     */
    inline void SetUsageOperationUpdateTime(const Aws::Utils::DateTime& value) { m_usageOperationUpdateTimeHasBeenSet = true; m_usageOperationUpdateTime = value; }

    /**
     * <p>The time that the usage operation was last updated.</p>
     */
    inline void SetUsageOperationUpdateTime(Aws::Utils::DateTime&& value) { m_usageOperationUpdateTimeHasBeenSet = true; m_usageOperationUpdateTime = std::move(value); }

    /**
     * <p>The time that the usage operation was last updated.</p>
     */
    inline Instance& WithUsageOperationUpdateTime(const Aws::Utils::DateTime& value) { SetUsageOperationUpdateTime(value); return *this;}

    /**
     * <p>The time that the usage operation was last updated.</p>
     */
    inline Instance& WithUsageOperationUpdateTime(Aws::Utils::DateTime&& value) { SetUsageOperationUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The options for the instance hostname.</p>
     */
    inline const PrivateDnsNameOptionsResponse& GetPrivateDnsNameOptions() const{ return m_privateDnsNameOptions; }

    /**
     * <p>The options for the instance hostname.</p>
     */
    inline bool PrivateDnsNameOptionsHasBeenSet() const { return m_privateDnsNameOptionsHasBeenSet; }

    /**
     * <p>The options for the instance hostname.</p>
     */
    inline void SetPrivateDnsNameOptions(const PrivateDnsNameOptionsResponse& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = value; }

    /**
     * <p>The options for the instance hostname.</p>
     */
    inline void SetPrivateDnsNameOptions(PrivateDnsNameOptionsResponse&& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = std::move(value); }

    /**
     * <p>The options for the instance hostname.</p>
     */
    inline Instance& WithPrivateDnsNameOptions(const PrivateDnsNameOptionsResponse& value) { SetPrivateDnsNameOptions(value); return *this;}

    /**
     * <p>The options for the instance hostname.</p>
     */
    inline Instance& WithPrivateDnsNameOptions(PrivateDnsNameOptionsResponse&& value) { SetPrivateDnsNameOptions(std::move(value)); return *this;}


    /**
     * <p>The IPv6 address assigned to the instance.</p>
     */
    inline const Aws::String& GetIpv6Address() const{ return m_ipv6Address; }

    /**
     * <p>The IPv6 address assigned to the instance.</p>
     */
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }

    /**
     * <p>The IPv6 address assigned to the instance.</p>
     */
    inline void SetIpv6Address(const Aws::String& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = value; }

    /**
     * <p>The IPv6 address assigned to the instance.</p>
     */
    inline void SetIpv6Address(Aws::String&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::move(value); }

    /**
     * <p>The IPv6 address assigned to the instance.</p>
     */
    inline void SetIpv6Address(const char* value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address.assign(value); }

    /**
     * <p>The IPv6 address assigned to the instance.</p>
     */
    inline Instance& WithIpv6Address(const Aws::String& value) { SetIpv6Address(value); return *this;}

    /**
     * <p>The IPv6 address assigned to the instance.</p>
     */
    inline Instance& WithIpv6Address(Aws::String&& value) { SetIpv6Address(std::move(value)); return *this;}

    /**
     * <p>The IPv6 address assigned to the instance.</p>
     */
    inline Instance& WithIpv6Address(const char* value) { SetIpv6Address(value); return *this;}


    /**
     * <p>If the instance is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetTpmSupport() const{ return m_tpmSupport; }

    /**
     * <p>If the instance is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool TpmSupportHasBeenSet() const { return m_tpmSupportHasBeenSet; }

    /**
     * <p>If the instance is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetTpmSupport(const Aws::String& value) { m_tpmSupportHasBeenSet = true; m_tpmSupport = value; }

    /**
     * <p>If the instance is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetTpmSupport(Aws::String&& value) { m_tpmSupportHasBeenSet = true; m_tpmSupport = std::move(value); }

    /**
     * <p>If the instance is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetTpmSupport(const char* value) { m_tpmSupportHasBeenSet = true; m_tpmSupport.assign(value); }

    /**
     * <p>If the instance is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Instance& WithTpmSupport(const Aws::String& value) { SetTpmSupport(value); return *this;}

    /**
     * <p>If the instance is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Instance& WithTpmSupport(Aws::String&& value) { SetTpmSupport(std::move(value)); return *this;}

    /**
     * <p>If the instance is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Instance& WithTpmSupport(const char* value) { SetTpmSupport(value); return *this;}


    /**
     * <p>Provides information on the recovery and maintenance options of your
     * instance.</p>
     */
    inline const InstanceMaintenanceOptions& GetMaintenanceOptions() const{ return m_maintenanceOptions; }

    /**
     * <p>Provides information on the recovery and maintenance options of your
     * instance.</p>
     */
    inline bool MaintenanceOptionsHasBeenSet() const { return m_maintenanceOptionsHasBeenSet; }

    /**
     * <p>Provides information on the recovery and maintenance options of your
     * instance.</p>
     */
    inline void SetMaintenanceOptions(const InstanceMaintenanceOptions& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = value; }

    /**
     * <p>Provides information on the recovery and maintenance options of your
     * instance.</p>
     */
    inline void SetMaintenanceOptions(InstanceMaintenanceOptions&& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = std::move(value); }

    /**
     * <p>Provides information on the recovery and maintenance options of your
     * instance.</p>
     */
    inline Instance& WithMaintenanceOptions(const InstanceMaintenanceOptions& value) { SetMaintenanceOptions(value); return *this;}

    /**
     * <p>Provides information on the recovery and maintenance options of your
     * instance.</p>
     */
    inline Instance& WithMaintenanceOptions(InstanceMaintenanceOptions&& value) { SetMaintenanceOptions(std::move(value)); return *this;}

  private:

    int m_amiLaunchIndex;
    bool m_amiLaunchIndexHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime;
    bool m_launchTimeHasBeenSet = false;

    Monitoring m_monitoring;
    bool m_monitoringHasBeenSet = false;

    Placement m_placement;
    bool m_placementHasBeenSet = false;

    PlatformValues m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    Aws::String m_publicDnsName;
    bool m_publicDnsNameHasBeenSet = false;

    Aws::String m_publicIpAddress;
    bool m_publicIpAddressHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    InstanceState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateTransitionReason;
    bool m_stateTransitionReasonHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    ArchitectureValues m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::Vector<InstanceBlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    bool m_enaSupport;
    bool m_enaSupportHasBeenSet = false;

    HypervisorType m_hypervisor;
    bool m_hypervisorHasBeenSet = false;

    IamInstanceProfile m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    InstanceLifecycleType m_instanceLifecycle;
    bool m_instanceLifecycleHasBeenSet = false;

    Aws::Vector<ElasticGpuAssociation> m_elasticGpuAssociations;
    bool m_elasticGpuAssociationsHasBeenSet = false;

    Aws::Vector<ElasticInferenceAcceleratorAssociation> m_elasticInferenceAcceleratorAssociations;
    bool m_elasticInferenceAcceleratorAssociationsHasBeenSet = false;

    Aws::Vector<InstanceNetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_rootDeviceName;
    bool m_rootDeviceNameHasBeenSet = false;

    DeviceType m_rootDeviceType;
    bool m_rootDeviceTypeHasBeenSet = false;

    Aws::Vector<GroupIdentifier> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    bool m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet = false;

    Aws::String m_spotInstanceRequestId;
    bool m_spotInstanceRequestIdHasBeenSet = false;

    Aws::String m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet = false;

    StateReason m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    VirtualizationType m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet = false;

    CpuOptions m_cpuOptions;
    bool m_cpuOptionsHasBeenSet = false;

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    CapacityReservationSpecificationResponse m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet = false;

    HibernationOptions m_hibernationOptions;
    bool m_hibernationOptionsHasBeenSet = false;

    Aws::Vector<LicenseConfiguration> m_licenses;
    bool m_licensesHasBeenSet = false;

    InstanceMetadataOptionsResponse m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;

    EnclaveOptions m_enclaveOptions;
    bool m_enclaveOptionsHasBeenSet = false;

    BootModeValues m_bootMode;
    bool m_bootModeHasBeenSet = false;

    Aws::String m_platformDetails;
    bool m_platformDetailsHasBeenSet = false;

    Aws::String m_usageOperation;
    bool m_usageOperationHasBeenSet = false;

    Aws::Utils::DateTime m_usageOperationUpdateTime;
    bool m_usageOperationUpdateTimeHasBeenSet = false;

    PrivateDnsNameOptionsResponse m_privateDnsNameOptions;
    bool m_privateDnsNameOptionsHasBeenSet = false;

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet = false;

    Aws::String m_tpmSupport;
    bool m_tpmSupportHasBeenSet = false;

    InstanceMaintenanceOptions m_maintenanceOptions;
    bool m_maintenanceOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
