/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The metadata about the email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/Metadata">AWS
   * API Reference</a></p>
   */
  class Metadata
  {
  public:
    AWS_MAILMANAGER_API Metadata();
    AWS_MAILMANAGER_API Metadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the ingress endpoint through which the email was received.</p>
     */
    inline const Aws::String& GetIngressPointId() const{ return m_ingressPointId; }
    inline bool IngressPointIdHasBeenSet() const { return m_ingressPointIdHasBeenSet; }
    inline void SetIngressPointId(const Aws::String& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = value; }
    inline void SetIngressPointId(Aws::String&& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = std::move(value); }
    inline void SetIngressPointId(const char* value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId.assign(value); }
    inline Metadata& WithIngressPointId(const Aws::String& value) { SetIngressPointId(value); return *this;}
    inline Metadata& WithIngressPointId(Aws::String&& value) { SetIngressPointId(std::move(value)); return *this;}
    inline Metadata& WithIngressPointId(const char* value) { SetIngressPointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the rule set that processed the email.</p>
     */
    inline const Aws::String& GetRuleSetId() const{ return m_ruleSetId; }
    inline bool RuleSetIdHasBeenSet() const { return m_ruleSetIdHasBeenSet; }
    inline void SetRuleSetId(const Aws::String& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = value; }
    inline void SetRuleSetId(Aws::String&& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = std::move(value); }
    inline void SetRuleSetId(const char* value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId.assign(value); }
    inline Metadata& WithRuleSetId(const Aws::String& value) { SetRuleSetId(value); return *this;}
    inline Metadata& WithRuleSetId(Aws::String&& value) { SetRuleSetId(std::move(value)); return *this;}
    inline Metadata& WithRuleSetId(const char* value) { SetRuleSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the host from which the email was received.</p>
     */
    inline const Aws::String& GetSenderHostname() const{ return m_senderHostname; }
    inline bool SenderHostnameHasBeenSet() const { return m_senderHostnameHasBeenSet; }
    inline void SetSenderHostname(const Aws::String& value) { m_senderHostnameHasBeenSet = true; m_senderHostname = value; }
    inline void SetSenderHostname(Aws::String&& value) { m_senderHostnameHasBeenSet = true; m_senderHostname = std::move(value); }
    inline void SetSenderHostname(const char* value) { m_senderHostnameHasBeenSet = true; m_senderHostname.assign(value); }
    inline Metadata& WithSenderHostname(const Aws::String& value) { SetSenderHostname(value); return *this;}
    inline Metadata& WithSenderHostname(Aws::String&& value) { SetSenderHostname(std::move(value)); return *this;}
    inline Metadata& WithSenderHostname(const char* value) { SetSenderHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the host from which the email was received.</p>
     */
    inline const Aws::String& GetSenderIpAddress() const{ return m_senderIpAddress; }
    inline bool SenderIpAddressHasBeenSet() const { return m_senderIpAddressHasBeenSet; }
    inline void SetSenderIpAddress(const Aws::String& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = value; }
    inline void SetSenderIpAddress(Aws::String&& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = std::move(value); }
    inline void SetSenderIpAddress(const char* value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress.assign(value); }
    inline Metadata& WithSenderIpAddress(const Aws::String& value) { SetSenderIpAddress(value); return *this;}
    inline Metadata& WithSenderIpAddress(Aws::String&& value) { SetSenderIpAddress(std::move(value)); return *this;}
    inline Metadata& WithSenderIpAddress(const char* value) { SetSenderIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the email was received.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline Metadata& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline Metadata& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TLS cipher suite used to communicate with the host from which the email
     * was received.</p>
     */
    inline const Aws::String& GetTlsCipherSuite() const{ return m_tlsCipherSuite; }
    inline bool TlsCipherSuiteHasBeenSet() const { return m_tlsCipherSuiteHasBeenSet; }
    inline void SetTlsCipherSuite(const Aws::String& value) { m_tlsCipherSuiteHasBeenSet = true; m_tlsCipherSuite = value; }
    inline void SetTlsCipherSuite(Aws::String&& value) { m_tlsCipherSuiteHasBeenSet = true; m_tlsCipherSuite = std::move(value); }
    inline void SetTlsCipherSuite(const char* value) { m_tlsCipherSuiteHasBeenSet = true; m_tlsCipherSuite.assign(value); }
    inline Metadata& WithTlsCipherSuite(const Aws::String& value) { SetTlsCipherSuite(value); return *this;}
    inline Metadata& WithTlsCipherSuite(Aws::String&& value) { SetTlsCipherSuite(std::move(value)); return *this;}
    inline Metadata& WithTlsCipherSuite(const char* value) { SetTlsCipherSuite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TLS protocol used to communicate with the host from which the email was
     * received.</p>
     */
    inline const Aws::String& GetTlsProtocol() const{ return m_tlsProtocol; }
    inline bool TlsProtocolHasBeenSet() const { return m_tlsProtocolHasBeenSet; }
    inline void SetTlsProtocol(const Aws::String& value) { m_tlsProtocolHasBeenSet = true; m_tlsProtocol = value; }
    inline void SetTlsProtocol(Aws::String&& value) { m_tlsProtocolHasBeenSet = true; m_tlsProtocol = std::move(value); }
    inline void SetTlsProtocol(const char* value) { m_tlsProtocolHasBeenSet = true; m_tlsProtocol.assign(value); }
    inline Metadata& WithTlsProtocol(const Aws::String& value) { SetTlsProtocol(value); return *this;}
    inline Metadata& WithTlsProtocol(Aws::String&& value) { SetTlsProtocol(std::move(value)); return *this;}
    inline Metadata& WithTlsProtocol(const char* value) { SetTlsProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the traffic policy that was in effect when the email was
     * received.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const{ return m_trafficPolicyId; }
    inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::move(value); }
    inline void SetTrafficPolicyId(const char* value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId.assign(value); }
    inline Metadata& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}
    inline Metadata& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(std::move(value)); return *this;}
    inline Metadata& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}
    ///@}
  private:

    Aws::String m_ingressPointId;
    bool m_ingressPointIdHasBeenSet = false;

    Aws::String m_ruleSetId;
    bool m_ruleSetIdHasBeenSet = false;

    Aws::String m_senderHostname;
    bool m_senderHostnameHasBeenSet = false;

    Aws::String m_senderIpAddress;
    bool m_senderIpAddressHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_tlsCipherSuite;
    bool m_tlsCipherSuiteHasBeenSet = false;

    Aws::String m_tlsProtocol;
    bool m_tlsProtocolHasBeenSet = false;

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
