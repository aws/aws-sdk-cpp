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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/GatewayType.h>
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
  class AWS_EC2_API CreateCustomerGatewayRequest : public EC2Request
  {
  public:
    CreateCustomerGatewayRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomerGateway"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>For devices that support BGP, the customer gateway's BGP ASN.</p> <p>Default:
     * 65000</p>
     */
    inline int GetBgpAsn() const{ return m_bgpAsn; }

    /**
     * <p>For devices that support BGP, the customer gateway's BGP ASN.</p> <p>Default:
     * 65000</p>
     */
    inline void SetBgpAsn(int value) { m_bgpAsnHasBeenSet = true; m_bgpAsn = value; }

    /**
     * <p>For devices that support BGP, the customer gateway's BGP ASN.</p> <p>Default:
     * 65000</p>
     */
    inline CreateCustomerGatewayRequest& WithBgpAsn(int value) { SetBgpAsn(value); return *this;}


    /**
     * <p>The Internet-routable IP address for the customer gateway's outside
     * interface. The address must be static.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The Internet-routable IP address for the customer gateway's outside
     * interface. The address must be static.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The Internet-routable IP address for the customer gateway's outside
     * interface. The address must be static.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>The Internet-routable IP address for the customer gateway's outside
     * interface. The address must be static.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The Internet-routable IP address for the customer gateway's outside
     * interface. The address must be static.</p>
     */
    inline CreateCustomerGatewayRequest& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The Internet-routable IP address for the customer gateway's outside
     * interface. The address must be static.</p>
     */
    inline CreateCustomerGatewayRequest& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The Internet-routable IP address for the customer gateway's outside
     * interface. The address must be static.</p>
     */
    inline CreateCustomerGatewayRequest& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}


    /**
     * <p>The type of VPN connection that this customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline const GatewayType& GetType() const{ return m_type; }

    /**
     * <p>The type of VPN connection that this customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline void SetType(const GatewayType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of VPN connection that this customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline void SetType(GatewayType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of VPN connection that this customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline CreateCustomerGatewayRequest& WithType(const GatewayType& value) { SetType(value); return *this;}

    /**
     * <p>The type of VPN connection that this customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline CreateCustomerGatewayRequest& WithType(GatewayType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateCustomerGatewayRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    int m_bgpAsn;
    bool m_bgpAsnHasBeenSet;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet;

    GatewayType m_type;
    bool m_typeHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
