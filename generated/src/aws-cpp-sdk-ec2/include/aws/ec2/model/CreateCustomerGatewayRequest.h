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
    AWS_EC2_API CreateCustomerGatewayRequest();

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
    inline int GetBgpAsn() const{ return m_bgpAsn; }
    inline bool BgpAsnHasBeenSet() const { return m_bgpAsnHasBeenSet; }
    inline void SetBgpAsn(int value) { m_bgpAsnHasBeenSet = true; m_bgpAsn = value; }
    inline CreateCustomerGatewayRequest& WithBgpAsn(int value) { SetBgpAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>This member has been deprecated.</i> The Internet-routable IP address for
     * the customer gateway's outside interface. The address must be static.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }
    inline CreateCustomerGatewayRequest& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}
    inline CreateCustomerGatewayRequest& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}
    inline CreateCustomerGatewayRequest& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the customer gateway certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline CreateCustomerGatewayRequest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline CreateCustomerGatewayRequest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline CreateCustomerGatewayRequest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of VPN connection that this customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline const GatewayType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GatewayType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GatewayType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateCustomerGatewayRequest& WithType(const GatewayType& value) { SetType(value); return *this;}
    inline CreateCustomerGatewayRequest& WithType(GatewayType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the customer gateway.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateCustomerGatewayRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateCustomerGatewayRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateCustomerGatewayRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateCustomerGatewayRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A name for the customer gateway device.</p> <p>Length Constraints: Up to 255
     * characters.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline CreateCustomerGatewayRequest& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline CreateCustomerGatewayRequest& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline CreateCustomerGatewayRequest& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>IPv4 address for the customer gateway device's outside interface. The address
     * must be static. If <code>OutsideIpAddressType</code> in your VPN connection
     * options is set to <code>PrivateIpv4</code>, you can use an RFC6598 or RFC1918
     * private IPv4 address. If <code>OutsideIpAddressType</code> is set to
     * <code>PublicIpv4</code>, you can use a public IPv4 address. </p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline CreateCustomerGatewayRequest& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline CreateCustomerGatewayRequest& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline CreateCustomerGatewayRequest& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For customer gateway devices that support BGP, specify the device's ASN. You
     * must specify either <code>BgpAsn</code> or <code>BgpAsnExtended</code> when
     * creating the customer gateway. If the ASN is larger than
     * <code>2,147,483,647</code>, you must use <code>BgpAsnExtended</code>.</p>
     * <p>Valid values: <code>2,147,483,648</code> to <code>4,294,967,295</code> </p>
     */
    inline long long GetBgpAsnExtended() const{ return m_bgpAsnExtended; }
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
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateCustomerGatewayRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    int m_bgpAsn;
    bool m_bgpAsnHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    GatewayType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    long long m_bgpAsnExtended;
    bool m_bgpAsnExtendedHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
