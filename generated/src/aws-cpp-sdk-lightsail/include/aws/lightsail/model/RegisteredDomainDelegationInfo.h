/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/NameServersUpdateState.h>
#include <aws/lightsail/model/R53HostedZoneDeletionState.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the delegation state of an Amazon Route 53 registered domain to
   * Amazon Lightsail.</p> <p>When you delegate an Amazon Route 53 registered domain
   * to Lightsail, you can manage the DNS of the domain using a Lightsail DNS zone.
   * You no longer use the Route 53 hosted zone to manage the DNS of the domain. To
   * delegate the domain, Lightsail automatically updates the domain's name servers
   * in Route 53 to the name servers of the Lightsail DNS zone. Then, Lightsail
   * automatically deletes the Route 53 hosted zone for the domain.</p> <p>All of the
   * following conditions must be true for automatic domain delegation to be
   * successful:</p> <ul> <li> <p>The registered domain must be in the same Amazon
   * Web Services account as the Lightsail account making the request.</p> </li> <li>
   * <p>The user or entity making the request must have permission to manage domains
   * in Route 53.</p> </li> <li> <p>The Route 53 hosted zone for the domain must be
   * empty. It cannot contain DNS records other than start of authority (SOA) and
   * name server records.</p> </li> </ul> <p>If automatic domain delegation fails, or
   * if you manage the DNS of your domain using a service other than Route 53, then
   * you must manually add the Lightsail DNS zone name servers to your domain in
   * order to delegate management of its DNS to Lightsail. For more information, see
   * <a
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-how-to-create-dns-entry">Creating
   * a DNS zone to manage your domain’s records in Amazon Lightsail</a> in the
   * <i>Amazon Lightsail Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RegisteredDomainDelegationInfo">AWS
   * API Reference</a></p>
   */
  class RegisteredDomainDelegationInfo
  {
  public:
    AWS_LIGHTSAIL_API RegisteredDomainDelegationInfo();
    AWS_LIGHTSAIL_API RegisteredDomainDelegationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RegisteredDomainDelegationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that describes the state of the name server records that are
     * automatically added to the Route 53 domain by Lightsail.</p>
     */
    inline const NameServersUpdateState& GetNameServersUpdateState() const{ return m_nameServersUpdateState; }

    /**
     * <p>An object that describes the state of the name server records that are
     * automatically added to the Route 53 domain by Lightsail.</p>
     */
    inline bool NameServersUpdateStateHasBeenSet() const { return m_nameServersUpdateStateHasBeenSet; }

    /**
     * <p>An object that describes the state of the name server records that are
     * automatically added to the Route 53 domain by Lightsail.</p>
     */
    inline void SetNameServersUpdateState(const NameServersUpdateState& value) { m_nameServersUpdateStateHasBeenSet = true; m_nameServersUpdateState = value; }

    /**
     * <p>An object that describes the state of the name server records that are
     * automatically added to the Route 53 domain by Lightsail.</p>
     */
    inline void SetNameServersUpdateState(NameServersUpdateState&& value) { m_nameServersUpdateStateHasBeenSet = true; m_nameServersUpdateState = std::move(value); }

    /**
     * <p>An object that describes the state of the name server records that are
     * automatically added to the Route 53 domain by Lightsail.</p>
     */
    inline RegisteredDomainDelegationInfo& WithNameServersUpdateState(const NameServersUpdateState& value) { SetNameServersUpdateState(value); return *this;}

    /**
     * <p>An object that describes the state of the name server records that are
     * automatically added to the Route 53 domain by Lightsail.</p>
     */
    inline RegisteredDomainDelegationInfo& WithNameServersUpdateState(NameServersUpdateState&& value) { SetNameServersUpdateState(std::move(value)); return *this;}


    
    inline const R53HostedZoneDeletionState& GetR53HostedZoneDeletionState() const{ return m_r53HostedZoneDeletionState; }

    
    inline bool R53HostedZoneDeletionStateHasBeenSet() const { return m_r53HostedZoneDeletionStateHasBeenSet; }

    
    inline void SetR53HostedZoneDeletionState(const R53HostedZoneDeletionState& value) { m_r53HostedZoneDeletionStateHasBeenSet = true; m_r53HostedZoneDeletionState = value; }

    
    inline void SetR53HostedZoneDeletionState(R53HostedZoneDeletionState&& value) { m_r53HostedZoneDeletionStateHasBeenSet = true; m_r53HostedZoneDeletionState = std::move(value); }

    
    inline RegisteredDomainDelegationInfo& WithR53HostedZoneDeletionState(const R53HostedZoneDeletionState& value) { SetR53HostedZoneDeletionState(value); return *this;}

    
    inline RegisteredDomainDelegationInfo& WithR53HostedZoneDeletionState(R53HostedZoneDeletionState&& value) { SetR53HostedZoneDeletionState(std::move(value)); return *this;}

  private:

    NameServersUpdateState m_nameServersUpdateState;
    bool m_nameServersUpdateStateHasBeenSet = false;

    R53HostedZoneDeletionState m_r53HostedZoneDeletionState;
    bool m_r53HostedZoneDeletionStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
