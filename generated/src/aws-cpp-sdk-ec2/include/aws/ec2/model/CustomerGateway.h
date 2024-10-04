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
    AWS_EC2_API CustomerGateway();
    AWS_EC2_API CustomerGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CustomerGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the customer gateway certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline CustomerGateway& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline CustomerGateway& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline CustomerGateway& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of customer gateway device.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline CustomerGateway& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline CustomerGateway& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline CustomerGateway& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the customer gateway.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CustomerGateway& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CustomerGateway& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CustomerGateway& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CustomerGateway& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The customer gateway device's Border Gateway Protocol (BGP) Autonomous System
     * Number (ASN).</p> <p>Valid values: <code>2,147,483,648</code> to
     * <code>4,294,967,295</code> </p>
     */
    inline const Aws::String& GetBgpAsnExtended() const{ return m_bgpAsnExtended; }
    inline bool BgpAsnExtendedHasBeenSet() const { return m_bgpAsnExtendedHasBeenSet; }
    inline void SetBgpAsnExtended(const Aws::String& value) { m_bgpAsnExtendedHasBeenSet = true; m_bgpAsnExtended = value; }
    inline void SetBgpAsnExtended(Aws::String&& value) { m_bgpAsnExtendedHasBeenSet = true; m_bgpAsnExtended = std::move(value); }
    inline void SetBgpAsnExtended(const char* value) { m_bgpAsnExtendedHasBeenSet = true; m_bgpAsnExtended.assign(value); }
    inline CustomerGateway& WithBgpAsnExtended(const Aws::String& value) { SetBgpAsnExtended(value); return *this;}
    inline CustomerGateway& WithBgpAsnExtended(Aws::String&& value) { SetBgpAsnExtended(std::move(value)); return *this;}
    inline CustomerGateway& WithBgpAsnExtended(const char* value) { SetBgpAsnExtended(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const{ return m_customerGatewayId; }
    inline bool CustomerGatewayIdHasBeenSet() const { return m_customerGatewayIdHasBeenSet; }
    inline void SetCustomerGatewayId(const Aws::String& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = value; }
    inline void SetCustomerGatewayId(Aws::String&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::move(value); }
    inline void SetCustomerGatewayId(const char* value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId.assign(value); }
    inline CustomerGateway& WithCustomerGatewayId(const Aws::String& value) { SetCustomerGatewayId(value); return *this;}
    inline CustomerGateway& WithCustomerGatewayId(Aws::String&& value) { SetCustomerGatewayId(std::move(value)); return *this;}
    inline CustomerGateway& WithCustomerGatewayId(const char* value) { SetCustomerGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the customer gateway (<code>pending | available |
     * deleting | deleted</code>).</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline CustomerGateway& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline CustomerGateway& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline CustomerGateway& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of VPN connection the customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline CustomerGateway& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline CustomerGateway& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline CustomerGateway& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> IPv4 address for the customer gateway device's outside interface. The
     * address must be static. If <code>OutsideIpAddressType</code> in your VPN
     * connection options is set to <code>PrivateIpv4</code>, you can use an RFC6598 or
     * RFC1918 private IPv4 address. If <code>OutsideIpAddressType</code> is set to
     * <code>PublicIpv4</code>, you can use a public IPv4 address. </p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline CustomerGateway& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline CustomerGateway& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline CustomerGateway& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer gateway device's Border Gateway Protocol (BGP) Autonomous System
     * Number (ASN).</p> <p>Valid values: <code>1</code> to <code>2,147,483,647</code>
     * </p>
     */
    inline const Aws::String& GetBgpAsn() const{ return m_bgpAsn; }
    inline bool BgpAsnHasBeenSet() const { return m_bgpAsnHasBeenSet; }
    inline void SetBgpAsn(const Aws::String& value) { m_bgpAsnHasBeenSet = true; m_bgpAsn = value; }
    inline void SetBgpAsn(Aws::String&& value) { m_bgpAsnHasBeenSet = true; m_bgpAsn = std::move(value); }
    inline void SetBgpAsn(const char* value) { m_bgpAsnHasBeenSet = true; m_bgpAsn.assign(value); }
    inline CustomerGateway& WithBgpAsn(const Aws::String& value) { SetBgpAsn(value); return *this;}
    inline CustomerGateway& WithBgpAsn(Aws::String&& value) { SetBgpAsn(std::move(value)); return *this;}
    inline CustomerGateway& WithBgpAsn(const char* value) { SetBgpAsn(value); return *this;}
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
