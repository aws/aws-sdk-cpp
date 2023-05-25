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
    AWS_EC2_API IpamDiscoveredAccount();
    AWS_EC2_API IpamDiscoveredAccount(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamDiscoveredAccount& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID.</p>
     */
    inline IpamDiscoveredAccount& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID.</p>
     */
    inline IpamDiscoveredAccount& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID.</p>
     */
    inline IpamDiscoveredAccount& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region that the account information is returned from.
     * An account can be discovered in multiple regions and will have a separate
     * discovered account for each Region.</p>
     */
    inline const Aws::String& GetDiscoveryRegion() const{ return m_discoveryRegion; }

    /**
     * <p>The Amazon Web Services Region that the account information is returned from.
     * An account can be discovered in multiple regions and will have a separate
     * discovered account for each Region.</p>
     */
    inline bool DiscoveryRegionHasBeenSet() const { return m_discoveryRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region that the account information is returned from.
     * An account can be discovered in multiple regions and will have a separate
     * discovered account for each Region.</p>
     */
    inline void SetDiscoveryRegion(const Aws::String& value) { m_discoveryRegionHasBeenSet = true; m_discoveryRegion = value; }

    /**
     * <p>The Amazon Web Services Region that the account information is returned from.
     * An account can be discovered in multiple regions and will have a separate
     * discovered account for each Region.</p>
     */
    inline void SetDiscoveryRegion(Aws::String&& value) { m_discoveryRegionHasBeenSet = true; m_discoveryRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region that the account information is returned from.
     * An account can be discovered in multiple regions and will have a separate
     * discovered account for each Region.</p>
     */
    inline void SetDiscoveryRegion(const char* value) { m_discoveryRegionHasBeenSet = true; m_discoveryRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region that the account information is returned from.
     * An account can be discovered in multiple regions and will have a separate
     * discovered account for each Region.</p>
     */
    inline IpamDiscoveredAccount& WithDiscoveryRegion(const Aws::String& value) { SetDiscoveryRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region that the account information is returned from.
     * An account can be discovered in multiple regions and will have a separate
     * discovered account for each Region.</p>
     */
    inline IpamDiscoveredAccount& WithDiscoveryRegion(Aws::String&& value) { SetDiscoveryRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region that the account information is returned from.
     * An account can be discovered in multiple regions and will have a separate
     * discovered account for each Region.</p>
     */
    inline IpamDiscoveredAccount& WithDiscoveryRegion(const char* value) { SetDiscoveryRegion(value); return *this;}


    /**
     * <p>The resource discovery failure reason.</p>
     */
    inline const IpamDiscoveryFailureReason& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The resource discovery failure reason.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The resource discovery failure reason.</p>
     */
    inline void SetFailureReason(const IpamDiscoveryFailureReason& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The resource discovery failure reason.</p>
     */
    inline void SetFailureReason(IpamDiscoveryFailureReason&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The resource discovery failure reason.</p>
     */
    inline IpamDiscoveredAccount& WithFailureReason(const IpamDiscoveryFailureReason& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The resource discovery failure reason.</p>
     */
    inline IpamDiscoveredAccount& WithFailureReason(IpamDiscoveryFailureReason&& value) { SetFailureReason(std::move(value)); return *this;}


    /**
     * <p>The last attempted resource discovery time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAttemptedDiscoveryTime() const{ return m_lastAttemptedDiscoveryTime; }

    /**
     * <p>The last attempted resource discovery time.</p>
     */
    inline bool LastAttemptedDiscoveryTimeHasBeenSet() const { return m_lastAttemptedDiscoveryTimeHasBeenSet; }

    /**
     * <p>The last attempted resource discovery time.</p>
     */
    inline void SetLastAttemptedDiscoveryTime(const Aws::Utils::DateTime& value) { m_lastAttemptedDiscoveryTimeHasBeenSet = true; m_lastAttemptedDiscoveryTime = value; }

    /**
     * <p>The last attempted resource discovery time.</p>
     */
    inline void SetLastAttemptedDiscoveryTime(Aws::Utils::DateTime&& value) { m_lastAttemptedDiscoveryTimeHasBeenSet = true; m_lastAttemptedDiscoveryTime = std::move(value); }

    /**
     * <p>The last attempted resource discovery time.</p>
     */
    inline IpamDiscoveredAccount& WithLastAttemptedDiscoveryTime(const Aws::Utils::DateTime& value) { SetLastAttemptedDiscoveryTime(value); return *this;}

    /**
     * <p>The last attempted resource discovery time.</p>
     */
    inline IpamDiscoveredAccount& WithLastAttemptedDiscoveryTime(Aws::Utils::DateTime&& value) { SetLastAttemptedDiscoveryTime(std::move(value)); return *this;}


    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulDiscoveryTime() const{ return m_lastSuccessfulDiscoveryTime; }

    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline bool LastSuccessfulDiscoveryTimeHasBeenSet() const { return m_lastSuccessfulDiscoveryTimeHasBeenSet; }

    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline void SetLastSuccessfulDiscoveryTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulDiscoveryTimeHasBeenSet = true; m_lastSuccessfulDiscoveryTime = value; }

    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline void SetLastSuccessfulDiscoveryTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulDiscoveryTimeHasBeenSet = true; m_lastSuccessfulDiscoveryTime = std::move(value); }

    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline IpamDiscoveredAccount& WithLastSuccessfulDiscoveryTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulDiscoveryTime(value); return *this;}

    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline IpamDiscoveredAccount& WithLastSuccessfulDiscoveryTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulDiscoveryTime(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_discoveryRegion;
    bool m_discoveryRegionHasBeenSet = false;

    IpamDiscoveryFailureReason m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastAttemptedDiscoveryTime;
    bool m_lastAttemptedDiscoveryTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulDiscoveryTime;
    bool m_lastSuccessfulDiscoveryTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
