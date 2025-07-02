/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/GatewayType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateCustomerGateway.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCustomerGatewayRequest">AWS
   * API Reference</a></p>
   */
  class CreateCustomerGatewayRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateCustomerGatewayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomerGateway"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>For customer gateway devices that support BGP, specify the device's ASN. You
     * must specify either <code>BgpAsn</code> or <code>BgpAsnExtended</code> when
     * creating the customer gateway. If the ASN is larger than
     * <code>2,147,483,647</code>, you must use <code>BgpAsnExtended</code>.</p>
     * <p>Default: 65000</p> <p>Valid values: <code>1</code> to
     * <code>2,147,483,647</code> </p>
     */
    inline int GetBgpAsn() const { return m_bgpAsn; }
    inline bool BgpAsnHasBeenSet() const { return m_bgpAsnHasBeenSet; }
    inline void SetBgpAsn(int value) { m_bgpAsnHasBeenSet = true; m_bgpAsn = value; }
    inline CreateCustomerGatewayRequest& WithBgpAsn(int value) { SetBgpAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>This member has been deprecated.</i> The Internet-routable IP address for
     * the customer gateway's outside interface. The address must be static.</p>
     */
    inline const Aws::String& GetPublicIp() const { return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    template<typename PublicIpT = Aws::String>
    void SetPublicIp(PublicIpT&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::forward<PublicIpT>(value); }
    template<typename PublicIpT = Aws::String>
    CreateCustomerGatewayRequest& WithPublicIp(PublicIpT&& value) { SetPublicIp(std::forward<PublicIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the customer gateway certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    CreateCustomerGatewayRequest& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of VPN connection that this customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline GatewayType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GatewayType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateCustomerGatewayRequest& WithType(GatewayType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the customer gateway.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateCustomerGatewayRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateCustomerGatewayRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A name for the customer gateway device.</p> <p>Length Constraints: Up to 255
     * characters.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    CreateCustomerGatewayRequest& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address for the customer gateway device's outside interface. The
     * address must be static. If <code>OutsideIpAddressType</code> in your VPN
     * connection options is set to <code>PrivateIpv4</code>, you can use an RFC6598 or
     * RFC1918 private IPv4 address. If <code>OutsideIpAddressType</code> is set to
     * <code>Ipv6</code>, you can use an IPv6 address. </p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    CreateCustomerGatewayRequest& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For customer gateway devices that support BGP, specify the device's ASN. You
     * must specify either <code>BgpAsn</code> or <code>BgpAsnExtended</code> when
     * creating the customer gateway. If the ASN is larger than
     * <code>2,147,483,647</code>, you must use <code>BgpAsnExtended</code>.</p>
     * <p>Valid values: <code>2,147,483,648</code> to <code>4,294,967,295</code> </p>
     */
    inline long long GetBgpAsnExtended() const { return m_bgpAsnExtended; }
    inline bool BgpAsnExtendedHasBeenSet() const { return m_bgpAsnExtendedHasBeenSet; }
    inline void SetBgpAsnExtended(long long value) { m_bgpAsnExtendedHasBeenSet = true; m_bgpAsnExtended = value; }
    inline CreateCustomerGatewayRequest& WithBgpAsnExtended(long long value) { SetBgpAsnExtended(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateCustomerGatewayRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    int m_bgpAsn{0};
    bool m_bgpAsnHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    GatewayType m_type{GatewayType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    long long m_bgpAsnExtended{0};
    bool m_bgpAsnExtendedHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
