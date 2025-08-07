/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the DNS_REQUEST action described in this
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DnsRequestAction">AWS
   * API Reference</a></p>
   */
  class DnsRequestAction
  {
  public:
    AWS_GUARDDUTY_API DnsRequestAction() = default;
    AWS_GUARDDUTY_API DnsRequestAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DnsRequestAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain information for the DNS query.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    DnsRequestAction& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network connection protocol observed in the activity that prompted
     * GuardDuty to generate the finding.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    DnsRequestAction& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the targeted port is blocked.</p>
     */
    inline bool GetBlocked() const { return m_blocked; }
    inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }
    inline void SetBlocked(bool value) { m_blockedHasBeenSet = true; m_blocked = value; }
    inline DnsRequestAction& WithBlocked(bool value) { SetBlocked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second and top level domain involved in the activity that potentially
     * prompted GuardDuty to generate this finding. For a list of top-level and
     * second-level domains, see <a href="https://publicsuffix.org/">public suffix
     * list</a>.</p>
     */
    inline const Aws::String& GetDomainWithSuffix() const { return m_domainWithSuffix; }
    inline bool DomainWithSuffixHasBeenSet() const { return m_domainWithSuffixHasBeenSet; }
    template<typename DomainWithSuffixT = Aws::String>
    void SetDomainWithSuffix(DomainWithSuffixT&& value) { m_domainWithSuffixHasBeenSet = true; m_domainWithSuffix = std::forward<DomainWithSuffixT>(value); }
    template<typename DomainWithSuffixT = Aws::String>
    DnsRequestAction& WithDomainWithSuffix(DomainWithSuffixT&& value) { SetDomainWithSuffix(std::forward<DomainWithSuffixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the VPC through which the DNS
     * request was made.</p>
     */
    inline const Aws::String& GetVpcOwnerAccountId() const { return m_vpcOwnerAccountId; }
    inline bool VpcOwnerAccountIdHasBeenSet() const { return m_vpcOwnerAccountIdHasBeenSet; }
    template<typename VpcOwnerAccountIdT = Aws::String>
    void SetVpcOwnerAccountId(VpcOwnerAccountIdT&& value) { m_vpcOwnerAccountIdHasBeenSet = true; m_vpcOwnerAccountId = std::forward<VpcOwnerAccountIdT>(value); }
    template<typename VpcOwnerAccountIdT = Aws::String>
    DnsRequestAction& WithVpcOwnerAccountId(VpcOwnerAccountIdT&& value) { SetVpcOwnerAccountId(std::forward<VpcOwnerAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    bool m_blocked{false};
    bool m_blockedHasBeenSet = false;

    Aws::String m_domainWithSuffix;
    bool m_domainWithSuffixHasBeenSet = false;

    Aws::String m_vpcOwnerAccountId;
    bool m_vpcOwnerAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
