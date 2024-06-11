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
    AWS_ELASTICLOADBALANCINGV2_API ModifyListenerRequest();

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
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::move(value); }
    inline void SetListenerArn(const char* value) { m_listenerArnHasBeenSet = true; m_listenerArn.assign(value); }
    inline ModifyListenerRequest& WithListenerArn(const Aws::String& value) { SetListenerArn(value); return *this;}
    inline ModifyListenerRequest& WithListenerArn(Aws::String&& value) { SetListenerArn(std::move(value)); return *this;}
    inline ModifyListenerRequest& WithListenerArn(const char* value) { SetListenerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port for connections from clients to the load balancer. You cannot
     * specify a port for a Gateway Load Balancer.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ModifyListenerRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol for connections from clients to the load balancer. Application
     * Load Balancers support the HTTP and HTTPS protocols. Network Load Balancers
     * support the TCP, TLS, UDP, and TCP_UDP protocols. You can’t change the protocol
     * to UDP or TCP_UDP if dual-stack mode is enabled. You cannot specify a protocol
     * for a Gateway Load Balancer.</p>
     */
    inline const ProtocolEnum& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const ProtocolEnum& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(ProtocolEnum&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline ModifyListenerRequest& WithProtocol(const ProtocolEnum& value) { SetProtocol(value); return *this;}
    inline ModifyListenerRequest& WithProtocol(ProtocolEnum&& value) { SetProtocol(std::move(value)); return *this;}
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
    inline const Aws::String& GetSslPolicy() const{ return m_sslPolicy; }
    inline bool SslPolicyHasBeenSet() const { return m_sslPolicyHasBeenSet; }
    inline void SetSslPolicy(const Aws::String& value) { m_sslPolicyHasBeenSet = true; m_sslPolicy = value; }
    inline void SetSslPolicy(Aws::String&& value) { m_sslPolicyHasBeenSet = true; m_sslPolicy = std::move(value); }
    inline void SetSslPolicy(const char* value) { m_sslPolicyHasBeenSet = true; m_sslPolicy.assign(value); }
    inline ModifyListenerRequest& WithSslPolicy(const Aws::String& value) { SetSslPolicy(value); return *this;}
    inline ModifyListenerRequest& WithSslPolicy(Aws::String&& value) { SetSslPolicy(std::move(value)); return *this;}
    inline ModifyListenerRequest& WithSslPolicy(const char* value) { SetSslPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[HTTPS and TLS listeners] The default certificate for the listener. You must
     * provide exactly one certificate. Set <code>CertificateArn</code> to the
     * certificate ARN but do not set <code>IsDefault</code>.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const{ return m_certificates; }
    inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }
    inline void SetCertificates(const Aws::Vector<Certificate>& value) { m_certificatesHasBeenSet = true; m_certificates = value; }
    inline void SetCertificates(Aws::Vector<Certificate>&& value) { m_certificatesHasBeenSet = true; m_certificates = std::move(value); }
    inline ModifyListenerRequest& WithCertificates(const Aws::Vector<Certificate>& value) { SetCertificates(value); return *this;}
    inline ModifyListenerRequest& WithCertificates(Aws::Vector<Certificate>&& value) { SetCertificates(std::move(value)); return *this;}
    inline ModifyListenerRequest& AddCertificates(const Certificate& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(value); return *this; }
    inline ModifyListenerRequest& AddCertificates(Certificate&& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions for the default rule.</p>
     */
    inline const Aws::Vector<Action>& GetDefaultActions() const{ return m_defaultActions; }
    inline bool DefaultActionsHasBeenSet() const { return m_defaultActionsHasBeenSet; }
    inline void SetDefaultActions(const Aws::Vector<Action>& value) { m_defaultActionsHasBeenSet = true; m_defaultActions = value; }
    inline void SetDefaultActions(Aws::Vector<Action>&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions = std::move(value); }
    inline ModifyListenerRequest& WithDefaultActions(const Aws::Vector<Action>& value) { SetDefaultActions(value); return *this;}
    inline ModifyListenerRequest& WithDefaultActions(Aws::Vector<Action>&& value) { SetDefaultActions(std::move(value)); return *this;}
    inline ModifyListenerRequest& AddDefaultActions(const Action& value) { m_defaultActionsHasBeenSet = true; m_defaultActions.push_back(value); return *this; }
    inline ModifyListenerRequest& AddDefaultActions(Action&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetAlpnPolicy() const{ return m_alpnPolicy; }
    inline bool AlpnPolicyHasBeenSet() const { return m_alpnPolicyHasBeenSet; }
    inline void SetAlpnPolicy(const Aws::Vector<Aws::String>& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy = value; }
    inline void SetAlpnPolicy(Aws::Vector<Aws::String>&& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy = std::move(value); }
    inline ModifyListenerRequest& WithAlpnPolicy(const Aws::Vector<Aws::String>& value) { SetAlpnPolicy(value); return *this;}
    inline ModifyListenerRequest& WithAlpnPolicy(Aws::Vector<Aws::String>&& value) { SetAlpnPolicy(std::move(value)); return *this;}
    inline ModifyListenerRequest& AddAlpnPolicy(const Aws::String& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy.push_back(value); return *this; }
    inline ModifyListenerRequest& AddAlpnPolicy(Aws::String&& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy.push_back(std::move(value)); return *this; }
    inline ModifyListenerRequest& AddAlpnPolicy(const char* value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mutual authentication configuration information.</p>
     */
    inline const MutualAuthenticationAttributes& GetMutualAuthentication() const{ return m_mutualAuthentication; }
    inline bool MutualAuthenticationHasBeenSet() const { return m_mutualAuthenticationHasBeenSet; }
    inline void SetMutualAuthentication(const MutualAuthenticationAttributes& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = value; }
    inline void SetMutualAuthentication(MutualAuthenticationAttributes&& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = std::move(value); }
    inline ModifyListenerRequest& WithMutualAuthentication(const MutualAuthenticationAttributes& value) { SetMutualAuthentication(value); return *this;}
    inline ModifyListenerRequest& WithMutualAuthentication(MutualAuthenticationAttributes&& value) { SetMutualAuthentication(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    ProtocolEnum m_protocol;
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
