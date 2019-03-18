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
#include <aws/ec2/model/ClientVpnAuthorizationRuleStatus.h>
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
   * <p>Information about an authorization rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizationRule">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AuthorizationRule
  {
  public:
    AuthorizationRule();
    AuthorizationRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AuthorizationRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline AuthorizationRule& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline AuthorizationRule& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline AuthorizationRule& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline AuthorizationRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline AuthorizationRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline AuthorizationRule& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the Active Directory group to which the authorization rule grants
     * access.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the Active Directory group to which the authorization rule grants
     * access.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The ID of the Active Directory group to which the authorization rule grants
     * access.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the Active Directory group to which the authorization rule grants
     * access.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The ID of the Active Directory group to which the authorization rule grants
     * access.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the Active Directory group to which the authorization rule grants
     * access.</p>
     */
    inline AuthorizationRule& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the Active Directory group to which the authorization rule grants
     * access.</p>
     */
    inline AuthorizationRule& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Active Directory group to which the authorization rule grants
     * access.</p>
     */
    inline AuthorizationRule& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>Indicates whether the authorization rule grants access to all clients.</p>
     */
    inline bool GetAccessAll() const{ return m_accessAll; }

    /**
     * <p>Indicates whether the authorization rule grants access to all clients.</p>
     */
    inline bool AccessAllHasBeenSet() const { return m_accessAllHasBeenSet; }

    /**
     * <p>Indicates whether the authorization rule grants access to all clients.</p>
     */
    inline void SetAccessAll(bool value) { m_accessAllHasBeenSet = true; m_accessAll = value; }

    /**
     * <p>Indicates whether the authorization rule grants access to all clients.</p>
     */
    inline AuthorizationRule& WithAccessAll(bool value) { SetAccessAll(value); return *this;}


    /**
     * <p>The IPv4 address range, in CIDR notation, of the network to which the
     * authorization rule applies.</p>
     */
    inline const Aws::String& GetDestinationCidr() const{ return m_destinationCidr; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network to which the
     * authorization rule applies.</p>
     */
    inline bool DestinationCidrHasBeenSet() const { return m_destinationCidrHasBeenSet; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network to which the
     * authorization rule applies.</p>
     */
    inline void SetDestinationCidr(const Aws::String& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = value; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network to which the
     * authorization rule applies.</p>
     */
    inline void SetDestinationCidr(Aws::String&& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = std::move(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network to which the
     * authorization rule applies.</p>
     */
    inline void SetDestinationCidr(const char* value) { m_destinationCidrHasBeenSet = true; m_destinationCidr.assign(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network to which the
     * authorization rule applies.</p>
     */
    inline AuthorizationRule& WithDestinationCidr(const Aws::String& value) { SetDestinationCidr(value); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network to which the
     * authorization rule applies.</p>
     */
    inline AuthorizationRule& WithDestinationCidr(Aws::String&& value) { SetDestinationCidr(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network to which the
     * authorization rule applies.</p>
     */
    inline AuthorizationRule& WithDestinationCidr(const char* value) { SetDestinationCidr(value); return *this;}


    /**
     * <p>The current state of the authorization rule.</p>
     */
    inline const ClientVpnAuthorizationRuleStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the authorization rule.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the authorization rule.</p>
     */
    inline void SetStatus(const ClientVpnAuthorizationRuleStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the authorization rule.</p>
     */
    inline void SetStatus(ClientVpnAuthorizationRuleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the authorization rule.</p>
     */
    inline AuthorizationRule& WithStatus(const ClientVpnAuthorizationRuleStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the authorization rule.</p>
     */
    inline AuthorizationRule& WithStatus(ClientVpnAuthorizationRuleStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;

    bool m_accessAll;
    bool m_accessAllHasBeenSet;

    Aws::String m_destinationCidr;
    bool m_destinationCidrHasBeenSet;

    ClientVpnAuthorizationRuleStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
