﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ProtocolEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/MutualAuthenticationAttributes.h>
#include <aws/elasticloadbalancingv2/model/Certificate.h>
#include <aws/elasticloadbalancingv2/model/Action.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class ModifyListenerRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ModifyListenerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyListener"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const { return m_listenerArn; }
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }
    template<typename ListenerArnT = Aws::String>
    void SetListenerArn(ListenerArnT&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::forward<ListenerArnT>(value); }
    template<typename ListenerArnT = Aws::String>
    ModifyListenerRequest& WithListenerArn(ListenerArnT&& value) { SetListenerArn(std::forward<ListenerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port for connections from clients to the load balancer. You can't specify
     * a port for a Gateway Load Balancer.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ModifyListenerRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol for connections from clients to the load balancer. Application
     * Load Balancers support the HTTP and HTTPS protocols. Network Load Balancers
     * support the TCP, TLS, UDP, and TCP_UDP protocols. You can’t change the protocol
     * to UDP or TCP_UDP if dual-stack mode is enabled. You can't specify a protocol
     * for a Gateway Load Balancer.</p>
     */
    inline ProtocolEnum GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(ProtocolEnum value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline ModifyListenerRequest& WithProtocol(ProtocolEnum value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[HTTPS and TLS listeners] The security policy that defines which protocols
     * and ciphers are supported.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Application Load Balancers Guide</i> or <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Network Load Balancers Guide</i>.</p>
     */
    inline const Aws::String& GetSslPolicy() const { return m_sslPolicy; }
    inline bool SslPolicyHasBeenSet() const { return m_sslPolicyHasBeenSet; }
    template<typename SslPolicyT = Aws::String>
    void SetSslPolicy(SslPolicyT&& value) { m_sslPolicyHasBeenSet = true; m_sslPolicy = std::forward<SslPolicyT>(value); }
    template<typename SslPolicyT = Aws::String>
    ModifyListenerRequest& WithSslPolicy(SslPolicyT&& value) { SetSslPolicy(std::forward<SslPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[HTTPS and TLS listeners] The default certificate for the listener. You must
     * provide exactly one certificate. Set <code>CertificateArn</code> to the
     * certificate ARN but do not set <code>IsDefault</code>.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const { return m_certificates; }
    inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }
    template<typename CertificatesT = Aws::Vector<Certificate>>
    void SetCertificates(CertificatesT&& value) { m_certificatesHasBeenSet = true; m_certificates = std::forward<CertificatesT>(value); }
    template<typename CertificatesT = Aws::Vector<Certificate>>
    ModifyListenerRequest& WithCertificates(CertificatesT&& value) { SetCertificates(std::forward<CertificatesT>(value)); return *this;}
    template<typename CertificatesT = Certificate>
    ModifyListenerRequest& AddCertificates(CertificatesT&& value) { m_certificatesHasBeenSet = true; m_certificates.emplace_back(std::forward<CertificatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions for the default rule.</p>
     */
    inline const Aws::Vector<Action>& GetDefaultActions() const { return m_defaultActions; }
    inline bool DefaultActionsHasBeenSet() const { return m_defaultActionsHasBeenSet; }
    template<typename DefaultActionsT = Aws::Vector<Action>>
    void SetDefaultActions(DefaultActionsT&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions = std::forward<DefaultActionsT>(value); }
    template<typename DefaultActionsT = Aws::Vector<Action>>
    ModifyListenerRequest& WithDefaultActions(DefaultActionsT&& value) { SetDefaultActions(std::forward<DefaultActionsT>(value)); return *this;}
    template<typename DefaultActionsT = Action>
    ModifyListenerRequest& AddDefaultActions(DefaultActionsT&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions.emplace_back(std::forward<DefaultActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[TLS listeners] The name of the Application-Layer Protocol Negotiation (ALPN)
     * policy. You can specify one policy name. The following are the possible
     * values:</p> <ul> <li> <p> <code>HTTP1Only</code> </p> </li> <li> <p>
     * <code>HTTP2Only</code> </p> </li> <li> <p> <code>HTTP2Optional</code> </p> </li>
     * <li> <p> <code>HTTP2Preferred</code> </p> </li> <li> <p> <code>None</code> </p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#alpn-policies">ALPN
     * policies</a> in the <i>Network Load Balancers Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlpnPolicy() const { return m_alpnPolicy; }
    inline bool AlpnPolicyHasBeenSet() const { return m_alpnPolicyHasBeenSet; }
    template<typename AlpnPolicyT = Aws::Vector<Aws::String>>
    void SetAlpnPolicy(AlpnPolicyT&& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy = std::forward<AlpnPolicyT>(value); }
    template<typename AlpnPolicyT = Aws::Vector<Aws::String>>
    ModifyListenerRequest& WithAlpnPolicy(AlpnPolicyT&& value) { SetAlpnPolicy(std::forward<AlpnPolicyT>(value)); return *this;}
    template<typename AlpnPolicyT = Aws::String>
    ModifyListenerRequest& AddAlpnPolicy(AlpnPolicyT&& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy.emplace_back(std::forward<AlpnPolicyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mutual authentication configuration information.</p>
     */
    inline const MutualAuthenticationAttributes& GetMutualAuthentication() const { return m_mutualAuthentication; }
    inline bool MutualAuthenticationHasBeenSet() const { return m_mutualAuthenticationHasBeenSet; }
    template<typename MutualAuthenticationT = MutualAuthenticationAttributes>
    void SetMutualAuthentication(MutualAuthenticationT&& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = std::forward<MutualAuthenticationT>(value); }
    template<typename MutualAuthenticationT = MutualAuthenticationAttributes>
    ModifyListenerRequest& WithMutualAuthentication(MutualAuthenticationT&& value) { SetMutualAuthentication(std::forward<MutualAuthenticationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    ProtocolEnum m_protocol{ProtocolEnum::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::String m_sslPolicy;
    bool m_sslPolicyHasBeenSet = false;

    Aws::Vector<Certificate> m_certificates;
    bool m_certificatesHasBeenSet = false;

    Aws::Vector<Action> m_defaultActions;
    bool m_defaultActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_alpnPolicy;
    bool m_alpnPolicyHasBeenSet = false;

    MutualAuthenticationAttributes m_mutualAuthentication;
    bool m_mutualAuthenticationHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
