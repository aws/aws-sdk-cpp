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
  class DisassociateThirdPartyFirewallResult
  {
  public:
    AWS_FMS_API DisassociateThirdPartyFirewallResult();
    AWS_FMS_API DisassociateThirdPartyFirewallResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API DisassociateThirdPartyFirewallResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status for the disassociation of a Firewall Manager
     * administrators account with a third-party firewall.</p>
     */
    inline const ThirdPartyFirewallAssociationStatus& GetThirdPartyFirewallStatus() const{ return m_thirdPartyFirewallStatus; }

    /**
     * <p>The current status for the disassociation of a Firewall Manager
     * administrators account with a third-party firewall.</p>
     */
    inline void SetThirdPartyFirewallStatus(const ThirdPartyFirewallAssociationStatus& value) { m_thirdPartyFirewallStatus = value; }

    /**
     * <p>The current status for the disassociation of a Firewall Manager
     * administrators account with a third-party firewall.</p>
     */
    inline void SetThirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus&& value) { m_thirdPartyFirewallStatus = std::move(value); }

    /**
     * <p>The current status for the disassociation of a Firewall Manager
     * administrators account with a third-party firewall.</p>
     */
    inline DisassociateThirdPartyFirewallResult& WithThirdPartyFirewallStatus(const ThirdPartyFirewallAssociationStatus& value) { SetThirdPartyFirewallStatus(value); return *this;}

    /**
     * <p>The current status for the disassociation of a Firewall Manager
     * administrators account with a third-party firewall.</p>
     */
    inline DisassociateThirdPartyFirewallResult& WithThirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus&& value) { SetThirdPartyFirewallStatus(std::move(value)); return *this;}

  private:

    ThirdPartyFirewallAssociationStatus m_thirdPartyFirewallStatus;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
