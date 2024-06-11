/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AuthorizationRule
  {
  public:
    AWS_EC2_API AuthorizationRule();
    AWS_EC2_API AuthorizationRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AuthorizationRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }
    inline AuthorizationRule& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}
    inline AuthorizationRule& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}
    inline AuthorizationRule& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AuthorizationRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AuthorizationRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AuthorizationRule& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Active Directory group to which the authorization rule grants
     * access.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline AuthorizationRule& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline AuthorizationRule& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline AuthorizationRule& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the authorization rule grants access to all clients.</p>
     */
    inline bool GetAccessAll() const{ return m_accessAll; }
    inline bool AccessAllHasBeenSet() const { return m_accessAllHasBeenSet; }
    inline void SetAccessAll(bool value) { m_accessAllHasBeenSet = true; m_accessAll = value; }
    inline AuthorizationRule& WithAccessAll(bool value) { SetAccessAll(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation, of the network to which the
     * authorization rule applies.</p>
     */
    inline const Aws::String& GetDestinationCidr() const{ return m_destinationCidr; }
    inline bool DestinationCidrHasBeenSet() const { return m_destinationCidrHasBeenSet; }
    inline void SetDestinationCidr(const Aws::String& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = value; }
    inline void SetDestinationCidr(Aws::String&& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = std::move(value); }
    inline void SetDestinationCidr(const char* value) { m_destinationCidrHasBeenSet = true; m_destinationCidr.assign(value); }
    inline AuthorizationRule& WithDestinationCidr(const Aws::String& value) { SetDestinationCidr(value); return *this;}
    inline AuthorizationRule& WithDestinationCidr(Aws::String&& value) { SetDestinationCidr(std::move(value)); return *this;}
    inline AuthorizationRule& WithDestinationCidr(const char* value) { SetDestinationCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the authorization rule.</p>
     */
    inline const ClientVpnAuthorizationRuleStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ClientVpnAuthorizationRuleStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ClientVpnAuthorizationRuleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AuthorizationRule& WithStatus(const ClientVpnAuthorizationRuleStatus& value) { SetStatus(value); return *this;}
    inline AuthorizationRule& WithStatus(ClientVpnAuthorizationRuleStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    bool m_accessAll;
    bool m_accessAllHasBeenSet = false;

    Aws::String m_destinationCidr;
    bool m_destinationCidrHasBeenSet = false;

    ClientVpnAuthorizationRuleStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
