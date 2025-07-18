/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_MAILMANAGER_API Metadata() = default;
    AWS_MAILMANAGER_API Metadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the email was received.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    Metadata& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the ingress endpoint through which the email was received.</p>
     */
    inline const Aws::String& GetIngressPointId() const { return m_ingressPointId; }
    inline bool IngressPointIdHasBeenSet() const { return m_ingressPointIdHasBeenSet; }
    template<typename IngressPointIdT = Aws::String>
    void SetIngressPointId(IngressPointIdT&& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = std::forward<IngressPointIdT>(value); }
    template<typename IngressPointIdT = Aws::String>
    Metadata& WithIngressPointId(IngressPointIdT&& value) { SetIngressPointId(std::forward<IngressPointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the traffic policy that was in effect when the email was
     * received.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const { return m_trafficPolicyId; }
    inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }
    template<typename TrafficPolicyIdT = Aws::String>
    void SetTrafficPolicyId(TrafficPolicyIdT&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::forward<TrafficPolicyIdT>(value); }
    template<typename TrafficPolicyIdT = Aws::String>
    Metadata& WithTrafficPolicyId(TrafficPolicyIdT&& value) { SetTrafficPolicyId(std::forward<TrafficPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the rule set that processed the email.</p>
     */
    inline const Aws::String& GetRuleSetId() const { return m_ruleSetId; }
    inline bool RuleSetIdHasBeenSet() const { return m_ruleSetIdHasBeenSet; }
    template<typename RuleSetIdT = Aws::String>
    void SetRuleSetId(RuleSetIdT&& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = std::forward<RuleSetIdT>(value); }
    template<typename RuleSetIdT = Aws::String>
    Metadata& WithRuleSetId(RuleSetIdT&& value) { SetRuleSetId(std::forward<RuleSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the host from which the email was received.</p>
     */
    inline const Aws::String& GetSenderHostname() const { return m_senderHostname; }
    inline bool SenderHostnameHasBeenSet() const { return m_senderHostnameHasBeenSet; }
    template<typename SenderHostnameT = Aws::String>
    void SetSenderHostname(SenderHostnameT&& value) { m_senderHostnameHasBeenSet = true; m_senderHostname = std::forward<SenderHostnameT>(value); }
    template<typename SenderHostnameT = Aws::String>
    Metadata& WithSenderHostname(SenderHostnameT&& value) { SetSenderHostname(std::forward<SenderHostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the host from which the email was received.</p>
     */
    inline const Aws::String& GetSenderIpAddress() const { return m_senderIpAddress; }
    inline bool SenderIpAddressHasBeenSet() const { return m_senderIpAddressHasBeenSet; }
    template<typename SenderIpAddressT = Aws::String>
    void SetSenderIpAddress(SenderIpAddressT&& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = std::forward<SenderIpAddressT>(value); }
    template<typename SenderIpAddressT = Aws::String>
    Metadata& WithSenderIpAddress(SenderIpAddressT&& value) { SetSenderIpAddress(std::forward<SenderIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TLS cipher suite used to communicate with the host from which the email
     * was received.</p>
     */
    inline const Aws::String& GetTlsCipherSuite() const { return m_tlsCipherSuite; }
    inline bool TlsCipherSuiteHasBeenSet() const { return m_tlsCipherSuiteHasBeenSet; }
    template<typename TlsCipherSuiteT = Aws::String>
    void SetTlsCipherSuite(TlsCipherSuiteT&& value) { m_tlsCipherSuiteHasBeenSet = true; m_tlsCipherSuite = std::forward<TlsCipherSuiteT>(value); }
    template<typename TlsCipherSuiteT = Aws::String>
    Metadata& WithTlsCipherSuite(TlsCipherSuiteT&& value) { SetTlsCipherSuite(std::forward<TlsCipherSuiteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TLS protocol used to communicate with the host from which the email was
     * received.</p>
     */
    inline const Aws::String& GetTlsProtocol() const { return m_tlsProtocol; }
    inline bool TlsProtocolHasBeenSet() const { return m_tlsProtocolHasBeenSet; }
    template<typename TlsProtocolT = Aws::String>
    void SetTlsProtocol(TlsProtocolT&& value) { m_tlsProtocolHasBeenSet = true; m_tlsProtocol = std::forward<TlsProtocolT>(value); }
    template<typename TlsProtocolT = Aws::String>
    Metadata& WithTlsProtocol(TlsProtocolT&& value) { SetTlsProtocol(std::forward<TlsProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API call used when sent through a configuration set with
     * archiving enabled.</p>
     */
    inline const Aws::String& GetSendingMethod() const { return m_sendingMethod; }
    inline bool SendingMethodHasBeenSet() const { return m_sendingMethodHasBeenSet; }
    template<typename SendingMethodT = Aws::String>
    void SetSendingMethod(SendingMethodT&& value) { m_sendingMethodHasBeenSet = true; m_sendingMethod = std::forward<SendingMethodT>(value); }
    template<typename SendingMethodT = Aws::String>
    Metadata& WithSendingMethod(SendingMethodT&& value) { SetSendingMethod(std::forward<SendingMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity name used to authorize the sending action when sent through a
     * configuration set with archiving enabled.</p>
     */
    inline const Aws::String& GetSourceIdentity() const { return m_sourceIdentity; }
    inline bool SourceIdentityHasBeenSet() const { return m_sourceIdentityHasBeenSet; }
    template<typename SourceIdentityT = Aws::String>
    void SetSourceIdentity(SourceIdentityT&& value) { m_sourceIdentityHasBeenSet = true; m_sourceIdentity = std::forward<SourceIdentityT>(value); }
    template<typename SourceIdentityT = Aws::String>
    Metadata& WithSourceIdentity(SourceIdentityT&& value) { SetSourceIdentity(std::forward<SourceIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dedicated IP pool used when sent through a configuration set
     * with archiving enabled.</p>
     */
    inline const Aws::String& GetSendingPool() const { return m_sendingPool; }
    inline bool SendingPoolHasBeenSet() const { return m_sendingPoolHasBeenSet; }
    template<typename SendingPoolT = Aws::String>
    void SetSendingPool(SendingPoolT&& value) { m_sendingPoolHasBeenSet = true; m_sendingPool = std::forward<SendingPoolT>(value); }
    template<typename SendingPoolT = Aws::String>
    Metadata& WithSendingPool(SendingPoolT&& value) { SetSendingPool(std::forward<SendingPoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration set used when sent through a configuration set
     * with archiving enabled.</p>
     */
    inline const Aws::String& GetConfigurationSet() const { return m_configurationSet; }
    inline bool ConfigurationSetHasBeenSet() const { return m_configurationSetHasBeenSet; }
    template<typename ConfigurationSetT = Aws::String>
    void SetConfigurationSet(ConfigurationSetT&& value) { m_configurationSetHasBeenSet = true; m_configurationSet = std::forward<ConfigurationSetT>(value); }
    template<typename ConfigurationSetT = Aws::String>
    Metadata& WithConfigurationSet(ConfigurationSetT&& value) { SetConfigurationSet(std::forward<ConfigurationSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the archived email source, identified by either a Rule Set's ARN
     * with an Archive action, or a Configuration Set's Archive ARN.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    Metadata& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Aws::String m_ingressPointId;
    bool m_ingressPointIdHasBeenSet = false;

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;

    Aws::String m_ruleSetId;
    bool m_ruleSetIdHasBeenSet = false;

    Aws::String m_senderHostname;
    bool m_senderHostnameHasBeenSet = false;

    Aws::String m_senderIpAddress;
    bool m_senderIpAddressHasBeenSet = false;

    Aws::String m_tlsCipherSuite;
    bool m_tlsCipherSuiteHasBeenSet = false;

    Aws::String m_tlsProtocol;
    bool m_tlsProtocolHasBeenSet = false;

    Aws::String m_sendingMethod;
    bool m_sendingMethodHasBeenSet = false;

    Aws::String m_sourceIdentity;
    bool m_sourceIdentityHasBeenSet = false;

    Aws::String m_sendingPool;
    bool m_sendingPoolHasBeenSet = false;

    Aws::String m_configurationSet;
    bool m_configurationSetHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
