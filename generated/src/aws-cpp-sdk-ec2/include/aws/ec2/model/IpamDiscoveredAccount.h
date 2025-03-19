/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamDiscoveryFailureReason.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An IPAM discovered account. A discovered account is an Amazon Web Services
   * account that is monitored under a resource discovery. If you have integrated
   * IPAM with Amazon Web Services Organizations, all accounts in the organization
   * are discovered accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamDiscoveredAccount">AWS
   * API Reference</a></p>
   */
  class IpamDiscoveredAccount
  {
  public:
    AWS_EC2_API IpamDiscoveredAccount() = default;
    AWS_EC2_API IpamDiscoveredAccount(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamDiscoveredAccount& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    IpamDiscoveredAccount& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that the account information is returned from.
     * An account can be discovered in multiple regions and will have a separate
     * discovered account for each Region.</p>
     */
    inline const Aws::String& GetDiscoveryRegion() const { return m_discoveryRegion; }
    inline bool DiscoveryRegionHasBeenSet() const { return m_discoveryRegionHasBeenSet; }
    template<typename DiscoveryRegionT = Aws::String>
    void SetDiscoveryRegion(DiscoveryRegionT&& value) { m_discoveryRegionHasBeenSet = true; m_discoveryRegion = std::forward<DiscoveryRegionT>(value); }
    template<typename DiscoveryRegionT = Aws::String>
    IpamDiscoveredAccount& WithDiscoveryRegion(DiscoveryRegionT&& value) { SetDiscoveryRegion(std::forward<DiscoveryRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource discovery failure reason.</p>
     */
    inline const IpamDiscoveryFailureReason& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = IpamDiscoveryFailureReason>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = IpamDiscoveryFailureReason>
    IpamDiscoveredAccount& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last attempted resource discovery time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAttemptedDiscoveryTime() const { return m_lastAttemptedDiscoveryTime; }
    inline bool LastAttemptedDiscoveryTimeHasBeenSet() const { return m_lastAttemptedDiscoveryTimeHasBeenSet; }
    template<typename LastAttemptedDiscoveryTimeT = Aws::Utils::DateTime>
    void SetLastAttemptedDiscoveryTime(LastAttemptedDiscoveryTimeT&& value) { m_lastAttemptedDiscoveryTimeHasBeenSet = true; m_lastAttemptedDiscoveryTime = std::forward<LastAttemptedDiscoveryTimeT>(value); }
    template<typename LastAttemptedDiscoveryTimeT = Aws::Utils::DateTime>
    IpamDiscoveredAccount& WithLastAttemptedDiscoveryTime(LastAttemptedDiscoveryTimeT&& value) { SetLastAttemptedDiscoveryTime(std::forward<LastAttemptedDiscoveryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulDiscoveryTime() const { return m_lastSuccessfulDiscoveryTime; }
    inline bool LastSuccessfulDiscoveryTimeHasBeenSet() const { return m_lastSuccessfulDiscoveryTimeHasBeenSet; }
    template<typename LastSuccessfulDiscoveryTimeT = Aws::Utils::DateTime>
    void SetLastSuccessfulDiscoveryTime(LastSuccessfulDiscoveryTimeT&& value) { m_lastSuccessfulDiscoveryTimeHasBeenSet = true; m_lastSuccessfulDiscoveryTime = std::forward<LastSuccessfulDiscoveryTimeT>(value); }
    template<typename LastSuccessfulDiscoveryTimeT = Aws::Utils::DateTime>
    IpamDiscoveredAccount& WithLastSuccessfulDiscoveryTime(LastSuccessfulDiscoveryTimeT&& value) { SetLastSuccessfulDiscoveryTime(std::forward<LastSuccessfulDiscoveryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an Organizational Unit in Amazon Web Services Organizations.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    template<typename OrganizationalUnitIdT = Aws::String>
    void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value); }
    template<typename OrganizationalUnitIdT = Aws::String>
    IpamDiscoveredAccount& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_discoveryRegion;
    bool m_discoveryRegionHasBeenSet = false;

    IpamDiscoveryFailureReason m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastAttemptedDiscoveryTime{};
    bool m_lastAttemptedDiscoveryTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulDiscoveryTime{};
    bool m_lastSuccessfulDiscoveryTimeHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
