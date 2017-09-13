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
  class AWS_EC2_API CustomerGateway
  {
  public:
    CustomerGateway();
    CustomerGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    CustomerGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The customer gateway's Border Gateway Protocol (BGP) Autonomous System Number
     * (ASN).</p>
     */
    inline const Aws::String& GetBgpAsn() const{ return m_bgpAsn; }

    /**
     * <p>The customer gateway's Border Gateway Protocol (BGP) Autonomous System Number
     * (ASN).</p>
     */
    inline void SetBgpAsn(const Aws::String& value) { m_bgpAsnHasBeenSet = true; m_bgpAsn = value; }

    /**
     * <p>The customer gateway's Border Gateway Protocol (BGP) Autonomous System Number
     * (ASN).</p>
     */
    inline void SetBgpAsn(Aws::String&& value) { m_bgpAsnHasBeenSet = true; m_bgpAsn = std::move(value); }

    /**
     * <p>The customer gateway's Border Gateway Protocol (BGP) Autonomous System Number
     * (ASN).</p>
     */
    inline void SetBgpAsn(const char* value) { m_bgpAsnHasBeenSet = true; m_bgpAsn.assign(value); }

    /**
     * <p>The customer gateway's Border Gateway Protocol (BGP) Autonomous System Number
     * (ASN).</p>
     */
    inline CustomerGateway& WithBgpAsn(const Aws::String& value) { SetBgpAsn(value); return *this;}

    /**
     * <p>The customer gateway's Border Gateway Protocol (BGP) Autonomous System Number
     * (ASN).</p>
     */
    inline CustomerGateway& WithBgpAsn(Aws::String&& value) { SetBgpAsn(std::move(value)); return *this;}

    /**
     * <p>The customer gateway's Border Gateway Protocol (BGP) Autonomous System Number
     * (ASN).</p>
     */
    inline CustomerGateway& WithBgpAsn(const char* value) { SetBgpAsn(value); return *this;}


    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const{ return m_customerGatewayId; }

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline void SetCustomerGatewayId(const Aws::String& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = value; }

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline void SetCustomerGatewayId(Aws::String&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::move(value); }

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline void SetCustomerGatewayId(const char* value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId.assign(value); }

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline CustomerGateway& WithCustomerGatewayId(const Aws::String& value) { SetCustomerGatewayId(value); return *this;}

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline CustomerGateway& WithCustomerGatewayId(Aws::String&& value) { SetCustomerGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline CustomerGateway& WithCustomerGatewayId(const char* value) { SetCustomerGatewayId(value); return *this;}


    /**
     * <p>The Internet-routable IP address of the customer gateway's outside
     * interface.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The Internet-routable IP address of the customer gateway's outside
     * interface.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The Internet-routable IP address of the customer gateway's outside
     * interface.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The Internet-routable IP address of the customer gateway's outside
     * interface.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The Internet-routable IP address of the customer gateway's outside
     * interface.</p>
     */
    inline CustomerGateway& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The Internet-routable IP address of the customer gateway's outside
     * interface.</p>
     */
    inline CustomerGateway& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The Internet-routable IP address of the customer gateway's outside
     * interface.</p>
     */
    inline CustomerGateway& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The current state of the customer gateway (<code>pending | available |
     * deleting | deleted</code>).</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The current state of the customer gateway (<code>pending | available |
     * deleting | deleted</code>).</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the customer gateway (<code>pending | available |
     * deleting | deleted</code>).</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the customer gateway (<code>pending | available |
     * deleting | deleted</code>).</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The current state of the customer gateway (<code>pending | available |
     * deleting | deleted</code>).</p>
     */
    inline CustomerGateway& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the customer gateway (<code>pending | available |
     * deleting | deleted</code>).</p>
     */
    inline CustomerGateway& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The current state of the customer gateway (<code>pending | available |
     * deleting | deleted</code>).</p>
     */
    inline CustomerGateway& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The type of VPN connection the customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of VPN connection the customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of VPN connection the customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of VPN connection the customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of VPN connection the customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline CustomerGateway& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of VPN connection the customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline CustomerGateway& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of VPN connection the customer gateway supports
     * (<code>ipsec.1</code>).</p>
     */
    inline CustomerGateway& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>Any tags assigned to the customer gateway.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the customer gateway.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the customer gateway.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the customer gateway.</p>
     */
    inline CustomerGateway& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the customer gateway.</p>
     */
    inline CustomerGateway& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the customer gateway.</p>
     */
    inline CustomerGateway& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the customer gateway.</p>
     */
    inline CustomerGateway& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_bgpAsn;
    bool m_bgpAsnHasBeenSet;

    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
