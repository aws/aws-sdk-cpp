/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ProtocolEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/Certificate.h>
#include <aws/elasticloadbalancingv2/model/Action.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/Listener">AWS
   * API Reference</a></p>
   */
  class Listener
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API Listener();
    AWS_ELASTICLOADBALANCINGV2_API Listener(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API Listener& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const char* value) { m_listenerArnHasBeenSet = true; m_listenerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline Listener& WithListenerArn(const Aws::String& value) { SetListenerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline Listener& WithListenerArn(Aws::String&& value) { SetListenerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline Listener& WithListenerArn(const char* value) { SetListenerArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline Listener& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline Listener& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline Listener& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}


    /**
     * <p>The port on which the load balancer is listening.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port on which the load balancer is listening.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port on which the load balancer is listening.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on which the load balancer is listening.</p>
     */
    inline Listener& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The protocol for connections from clients to the load balancer.</p>
     */
    inline const ProtocolEnum& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol for connections from clients to the load balancer.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol for connections from clients to the load balancer.</p>
     */
    inline void SetProtocol(const ProtocolEnum& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol for connections from clients to the load balancer.</p>
     */
    inline void SetProtocol(ProtocolEnum&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol for connections from clients to the load balancer.</p>
     */
    inline Listener& WithProtocol(const ProtocolEnum& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol for connections from clients to the load balancer.</p>
     */
    inline Listener& WithProtocol(ProtocolEnum&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>[HTTPS or TLS listener] The default certificate for the listener.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const{ return m_certificates; }

    /**
     * <p>[HTTPS or TLS listener] The default certificate for the listener.</p>
     */
    inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }

    /**
     * <p>[HTTPS or TLS listener] The default certificate for the listener.</p>
     */
    inline void SetCertificates(const Aws::Vector<Certificate>& value) { m_certificatesHasBeenSet = true; m_certificates = value; }

    /**
     * <p>[HTTPS or TLS listener] The default certificate for the listener.</p>
     */
    inline void SetCertificates(Aws::Vector<Certificate>&& value) { m_certificatesHasBeenSet = true; m_certificates = std::move(value); }

    /**
     * <p>[HTTPS or TLS listener] The default certificate for the listener.</p>
     */
    inline Listener& WithCertificates(const Aws::Vector<Certificate>& value) { SetCertificates(value); return *this;}

    /**
     * <p>[HTTPS or TLS listener] The default certificate for the listener.</p>
     */
    inline Listener& WithCertificates(Aws::Vector<Certificate>&& value) { SetCertificates(std::move(value)); return *this;}

    /**
     * <p>[HTTPS or TLS listener] The default certificate for the listener.</p>
     */
    inline Listener& AddCertificates(const Certificate& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(value); return *this; }

    /**
     * <p>[HTTPS or TLS listener] The default certificate for the listener.</p>
     */
    inline Listener& AddCertificates(Certificate&& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(std::move(value)); return *this; }


    /**
     * <p>[HTTPS or TLS listener] The security policy that defines which protocols and
     * ciphers are supported.</p>
     */
    inline const Aws::String& GetSslPolicy() const{ return m_sslPolicy; }

    /**
     * <p>[HTTPS or TLS listener] The security policy that defines which protocols and
     * ciphers are supported.</p>
     */
    inline bool SslPolicyHasBeenSet() const { return m_sslPolicyHasBeenSet; }

    /**
     * <p>[HTTPS or TLS listener] The security policy that defines which protocols and
     * ciphers are supported.</p>
     */
    inline void SetSslPolicy(const Aws::String& value) { m_sslPolicyHasBeenSet = true; m_sslPolicy = value; }

    /**
     * <p>[HTTPS or TLS listener] The security policy that defines which protocols and
     * ciphers are supported.</p>
     */
    inline void SetSslPolicy(Aws::String&& value) { m_sslPolicyHasBeenSet = true; m_sslPolicy = std::move(value); }

    /**
     * <p>[HTTPS or TLS listener] The security policy that defines which protocols and
     * ciphers are supported.</p>
     */
    inline void SetSslPolicy(const char* value) { m_sslPolicyHasBeenSet = true; m_sslPolicy.assign(value); }

    /**
     * <p>[HTTPS or TLS listener] The security policy that defines which protocols and
     * ciphers are supported.</p>
     */
    inline Listener& WithSslPolicy(const Aws::String& value) { SetSslPolicy(value); return *this;}

    /**
     * <p>[HTTPS or TLS listener] The security policy that defines which protocols and
     * ciphers are supported.</p>
     */
    inline Listener& WithSslPolicy(Aws::String&& value) { SetSslPolicy(std::move(value)); return *this;}

    /**
     * <p>[HTTPS or TLS listener] The security policy that defines which protocols and
     * ciphers are supported.</p>
     */
    inline Listener& WithSslPolicy(const char* value) { SetSslPolicy(value); return *this;}


    /**
     * <p>The default actions for the listener.</p>
     */
    inline const Aws::Vector<Action>& GetDefaultActions() const{ return m_defaultActions; }

    /**
     * <p>The default actions for the listener.</p>
     */
    inline bool DefaultActionsHasBeenSet() const { return m_defaultActionsHasBeenSet; }

    /**
     * <p>The default actions for the listener.</p>
     */
    inline void SetDefaultActions(const Aws::Vector<Action>& value) { m_defaultActionsHasBeenSet = true; m_defaultActions = value; }

    /**
     * <p>The default actions for the listener.</p>
     */
    inline void SetDefaultActions(Aws::Vector<Action>&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions = std::move(value); }

    /**
     * <p>The default actions for the listener.</p>
     */
    inline Listener& WithDefaultActions(const Aws::Vector<Action>& value) { SetDefaultActions(value); return *this;}

    /**
     * <p>The default actions for the listener.</p>
     */
    inline Listener& WithDefaultActions(Aws::Vector<Action>&& value) { SetDefaultActions(std::move(value)); return *this;}

    /**
     * <p>The default actions for the listener.</p>
     */
    inline Listener& AddDefaultActions(const Action& value) { m_defaultActionsHasBeenSet = true; m_defaultActions.push_back(value); return *this; }

    /**
     * <p>The default actions for the listener.</p>
     */
    inline Listener& AddDefaultActions(Action&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions.push_back(std::move(value)); return *this; }


    /**
     * <p>[TLS listener] The name of the Application-Layer Protocol Negotiation (ALPN)
     * policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlpnPolicy() const{ return m_alpnPolicy; }

    /**
     * <p>[TLS listener] The name of the Application-Layer Protocol Negotiation (ALPN)
     * policy.</p>
     */
    inline bool AlpnPolicyHasBeenSet() const { return m_alpnPolicyHasBeenSet; }

    /**
     * <p>[TLS listener] The name of the Application-Layer Protocol Negotiation (ALPN)
     * policy.</p>
     */
    inline void SetAlpnPolicy(const Aws::Vector<Aws::String>& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy = value; }

    /**
     * <p>[TLS listener] The name of the Application-Layer Protocol Negotiation (ALPN)
     * policy.</p>
     */
    inline void SetAlpnPolicy(Aws::Vector<Aws::String>&& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy = std::move(value); }

    /**
     * <p>[TLS listener] The name of the Application-Layer Protocol Negotiation (ALPN)
     * policy.</p>
     */
    inline Listener& WithAlpnPolicy(const Aws::Vector<Aws::String>& value) { SetAlpnPolicy(value); return *this;}

    /**
     * <p>[TLS listener] The name of the Application-Layer Protocol Negotiation (ALPN)
     * policy.</p>
     */
    inline Listener& WithAlpnPolicy(Aws::Vector<Aws::String>&& value) { SetAlpnPolicy(std::move(value)); return *this;}

    /**
     * <p>[TLS listener] The name of the Application-Layer Protocol Negotiation (ALPN)
     * policy.</p>
     */
    inline Listener& AddAlpnPolicy(const Aws::String& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy.push_back(value); return *this; }

    /**
     * <p>[TLS listener] The name of the Application-Layer Protocol Negotiation (ALPN)
     * policy.</p>
     */
    inline Listener& AddAlpnPolicy(Aws::String&& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy.push_back(std::move(value)); return *this; }

    /**
     * <p>[TLS listener] The name of the Application-Layer Protocol Negotiation (ALPN)
     * policy.</p>
     */
    inline Listener& AddAlpnPolicy(const char* value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy.push_back(value); return *this; }

  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet = false;

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    ProtocolEnum m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Vector<Certificate> m_certificates;
    bool m_certificatesHasBeenSet = false;

    Aws::String m_sslPolicy;
    bool m_sslPolicyHasBeenSet = false;

    Aws::Vector<Action> m_defaultActions;
    bool m_defaultActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_alpnPolicy;
    bool m_alpnPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
