/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/ThirdPartyFirewallAssociationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_FMS_API DisassociateThirdPartyFirewallResult() = default;
    AWS_FMS_API DisassociateThirdPartyFirewallResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API DisassociateThirdPartyFirewallResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status for the disassociation of a Firewall Manager
     * administrators account with a third-party firewall.</p>
     */
    inline ThirdPartyFirewallAssociationStatus GetThirdPartyFirewallStatus() const { return m_thirdPartyFirewallStatus; }
    inline void SetThirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus value) { m_thirdPartyFirewallStatusHasBeenSet = true; m_thirdPartyFirewallStatus = value; }
    inline DisassociateThirdPartyFirewallResult& WithThirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus value) { SetThirdPartyFirewallStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateThirdPartyFirewallResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ThirdPartyFirewallAssociationStatus m_thirdPartyFirewallStatus{ThirdPartyFirewallAssociationStatus::NOT_SET};
    bool m_thirdPartyFirewallStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
