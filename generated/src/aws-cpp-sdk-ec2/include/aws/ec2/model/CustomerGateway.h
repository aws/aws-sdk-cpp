/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a customer gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CustomerGateway">AWS
   * API Reference</a></p>
   */
  class CustomerGateway
  {
  public:
    AWS_EC2_API CustomerGateway() = default;
    AWS_EC2_API CustomerGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CustomerGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the customer gateway certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    CustomerGateway& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of customer gateway device.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    CustomerGateway& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the customer gateway.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CustomerGateway& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CustomerGateway& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The customer gateway device's Border Gateway Protocol (BGP) Autonomous System
     * Number (ASN).</p> <p>Valid values: <code>2,147,483,648</code> to
     * <code>4,294,967,295</code> </p>
     */
    inline const Aws::String& GetBgpAsnExtended() const { return m_bgpAsnExtended; }
    inline bool BgpAsnExtendedHasBeenSet() const { return m_bgpAsnExtendedHasBeenSet; }
    template<typename BgpAsnExtendedT = Aws::String>
    void SetBgpAsnExtended(BgpAsnExtendedT&& value) { m_bgpAsnExtendedHasBeenSet = true; m_bgpAsnExtended = std::forward<BgpAsnExtendedT>(value); }
    template<typename BgpAsnExtendedT = Aws::String>
    CustomerGateway& WithBgpAsnExtended(BgpAsnExtendedT&& value) { SetBgpAsnExtended(std::forward<BgpAsnExtendedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const { return m_customerGatewayId; }
    inline bool CustomerGatewayIdHasBeenSet() const { return m_customerGatewayIdHasBeenSet; }
    template<typename CustomerGatewayIdT = Aws::String>
    void SetCustomerGatewayId(CustomerGatewayIdT&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::forward<CustomerGatewayIdT>(value); }
    template<typename CustomerGatewayIdT = Aws::String>
    CustomerGateway& WithCustomerGatewayId(CustomerGatewayIdT&& value) { SetCustomerGatewayId(std::forward<CustomerGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the customer gateway (<code>pending | available |
     * deleting | deleted</code>).</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    CustomerGateway& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of VPN connection the customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    CustomerGateway& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IP address for the customer gateway device's outside interface. The
     * address must be static. If <code>OutsideIpAddressType</code> in your VPN
     * connection options is set to <code>PrivateIpv4</code>, you can use an RFC6598 or
     * RFC1918 private IPv4 address. If <code>OutsideIpAddressType</code> is set to
     * <code>PublicIpv4</code>, you can use a public IPv4 address. If
     * <code>OutsideIpAddressType</code> is set to <code>Ipv6</code>, you can use a
     * public IPv6 address. </p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    CustomerGateway& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer gateway device's Border Gateway Protocol (BGP) Autonomous System
     * Number (ASN).</p> <p>Valid values: <code>1</code> to <code>2,147,483,647</code>
     * </p>
     */
    inline const Aws::String& GetBgpAsn() const { return m_bgpAsn; }
    inline bool BgpAsnHasBeenSet() const { return m_bgpAsnHasBeenSet; }
    template<typename BgpAsnT = Aws::String>
    void SetBgpAsn(BgpAsnT&& value) { m_bgpAsnHasBeenSet = true; m_bgpAsn = std::forward<BgpAsnT>(value); }
    template<typename BgpAsnT = Aws::String>
    CustomerGateway& WithBgpAsn(BgpAsnT&& value) { SetBgpAsn(std::forward<BgpAsnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_bgpAsnExtended;
    bool m_bgpAsnExtendedHasBeenSet = false;

    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_bgpAsn;
    bool m_bgpAsnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
