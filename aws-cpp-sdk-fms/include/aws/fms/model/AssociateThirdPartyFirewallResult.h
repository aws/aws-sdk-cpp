/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/ThirdPartyFirewallAssociationStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{
  class AssociateThirdPartyFirewallResult
  {
  public:
    AWS_FMS_API AssociateThirdPartyFirewallResult();
    AWS_FMS_API AssociateThirdPartyFirewallResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API AssociateThirdPartyFirewallResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status for setting a Firewall Manager policy administrator's
     * account as an administrator of the third-party firewall tenant.</p> <ul> <li>
     * <p> <code>ONBOARDING</code> - The Firewall Manager policy administrator is being
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>ONBOARD_COMPLETE</code> - The Firewall Manager policy administrator is
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARDING</code> - The Firewall Manager policy administrator is being
     * removed as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARD_COMPLETE</code> - The Firewall Manager policy administrator has
     * been removed as a tenant administrator.</p> </li> <li> <p>
     * <code>NOT_EXIST</code> - The Firewall Manager policy administrator doesn't exist
     * as a tenant administrator.</p> </li> </ul>
     */
    inline const ThirdPartyFirewallAssociationStatus& GetThirdPartyFirewallStatus() const{ return m_thirdPartyFirewallStatus; }

    /**
     * <p>The current status for setting a Firewall Manager policy administrator's
     * account as an administrator of the third-party firewall tenant.</p> <ul> <li>
     * <p> <code>ONBOARDING</code> - The Firewall Manager policy administrator is being
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>ONBOARD_COMPLETE</code> - The Firewall Manager policy administrator is
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARDING</code> - The Firewall Manager policy administrator is being
     * removed as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARD_COMPLETE</code> - The Firewall Manager policy administrator has
     * been removed as a tenant administrator.</p> </li> <li> <p>
     * <code>NOT_EXIST</code> - The Firewall Manager policy administrator doesn't exist
     * as a tenant administrator.</p> </li> </ul>
     */
    inline void SetThirdPartyFirewallStatus(const ThirdPartyFirewallAssociationStatus& value) { m_thirdPartyFirewallStatus = value; }

    /**
     * <p>The current status for setting a Firewall Manager policy administrator's
     * account as an administrator of the third-party firewall tenant.</p> <ul> <li>
     * <p> <code>ONBOARDING</code> - The Firewall Manager policy administrator is being
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>ONBOARD_COMPLETE</code> - The Firewall Manager policy administrator is
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARDING</code> - The Firewall Manager policy administrator is being
     * removed as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARD_COMPLETE</code> - The Firewall Manager policy administrator has
     * been removed as a tenant administrator.</p> </li> <li> <p>
     * <code>NOT_EXIST</code> - The Firewall Manager policy administrator doesn't exist
     * as a tenant administrator.</p> </li> </ul>
     */
    inline void SetThirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus&& value) { m_thirdPartyFirewallStatus = std::move(value); }

    /**
     * <p>The current status for setting a Firewall Manager policy administrator's
     * account as an administrator of the third-party firewall tenant.</p> <ul> <li>
     * <p> <code>ONBOARDING</code> - The Firewall Manager policy administrator is being
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>ONBOARD_COMPLETE</code> - The Firewall Manager policy administrator is
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARDING</code> - The Firewall Manager policy administrator is being
     * removed as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARD_COMPLETE</code> - The Firewall Manager policy administrator has
     * been removed as a tenant administrator.</p> </li> <li> <p>
     * <code>NOT_EXIST</code> - The Firewall Manager policy administrator doesn't exist
     * as a tenant administrator.</p> </li> </ul>
     */
    inline AssociateThirdPartyFirewallResult& WithThirdPartyFirewallStatus(const ThirdPartyFirewallAssociationStatus& value) { SetThirdPartyFirewallStatus(value); return *this;}

    /**
     * <p>The current status for setting a Firewall Manager policy administrator's
     * account as an administrator of the third-party firewall tenant.</p> <ul> <li>
     * <p> <code>ONBOARDING</code> - The Firewall Manager policy administrator is being
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>ONBOARD_COMPLETE</code> - The Firewall Manager policy administrator is
     * designated as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARDING</code> - The Firewall Manager policy administrator is being
     * removed as a tenant administrator.</p> </li> <li> <p>
     * <code>OFFBOARD_COMPLETE</code> - The Firewall Manager policy administrator has
     * been removed as a tenant administrator.</p> </li> <li> <p>
     * <code>NOT_EXIST</code> - The Firewall Manager policy administrator doesn't exist
     * as a tenant administrator.</p> </li> </ul>
     */
    inline AssociateThirdPartyFirewallResult& WithThirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus&& value) { SetThirdPartyFirewallStatus(std::move(value)); return *this;}

  private:

    ThirdPartyFirewallAssociationStatus m_thirdPartyFirewallStatus;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
