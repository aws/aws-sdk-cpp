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
    AWS_GUARDDUTY_API DnsRequestAction();
    AWS_GUARDDUTY_API DnsRequestAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DnsRequestAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain information for the API request.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain information for the API request.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain information for the API request.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain information for the API request.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain information for the API request.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain information for the API request.</p>
     */
    inline DnsRequestAction& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain information for the API request.</p>
     */
    inline DnsRequestAction& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain information for the API request.</p>
     */
    inline DnsRequestAction& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The network connection protocol observed in the activity that prompted
     * GuardDuty to generate the finding.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The network connection protocol observed in the activity that prompted
     * GuardDuty to generate the finding.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The network connection protocol observed in the activity that prompted
     * GuardDuty to generate the finding.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The network connection protocol observed in the activity that prompted
     * GuardDuty to generate the finding.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The network connection protocol observed in the activity that prompted
     * GuardDuty to generate the finding.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The network connection protocol observed in the activity that prompted
     * GuardDuty to generate the finding.</p>
     */
    inline DnsRequestAction& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The network connection protocol observed in the activity that prompted
     * GuardDuty to generate the finding.</p>
     */
    inline DnsRequestAction& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The network connection protocol observed in the activity that prompted
     * GuardDuty to generate the finding.</p>
     */
    inline DnsRequestAction& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>Indicates whether the targeted port is blocked.</p>
     */
    inline bool GetBlocked() const{ return m_blocked; }

    /**
     * <p>Indicates whether the targeted port is blocked.</p>
     */
    inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }

    /**
     * <p>Indicates whether the targeted port is blocked.</p>
     */
    inline void SetBlocked(bool value) { m_blockedHasBeenSet = true; m_blocked = value; }

    /**
     * <p>Indicates whether the targeted port is blocked.</p>
     */
    inline DnsRequestAction& WithBlocked(bool value) { SetBlocked(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    bool m_blocked;
    bool m_blockedHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
