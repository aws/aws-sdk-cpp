/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ProtocolEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/Certificate.h>
#include <aws/elasticloadbalancingv2/model/Action.h>
#include <aws/elasticloadbalancingv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class CreateListenerRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API CreateListenerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateListener"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline CreateListenerRequest& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline CreateListenerRequest& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline CreateListenerRequest& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}


    /**
     * <p>The protocol for connections from clients to the load balancer. For
     * Application Load Balancers, the supported protocols are HTTP and HTTPS. For
     * Network Load Balancers, the supported protocols are TCP, TLS, UDP, and TCP_UDP.
     * You can’t specify the UDP or TCP_UDP protocol if dual-stack mode is enabled. You
     * cannot specify a protocol for a Gateway Load Balancer.</p>
     */
    inline const ProtocolEnum& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol for connections from clients to the load balancer. For
     * Application Load Balancers, the supported protocols are HTTP and HTTPS. For
     * Network Load Balancers, the supported protocols are TCP, TLS, UDP, and TCP_UDP.
     * You can’t specify the UDP or TCP_UDP protocol if dual-stack mode is enabled. You
     * cannot specify a protocol for a Gateway Load Balancer.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol for connections from clients to the load balancer. For
     * Application Load Balancers, the supported protocols are HTTP and HTTPS. For
     * Network Load Balancers, the supported protocols are TCP, TLS, UDP, and TCP_UDP.
     * You can’t specify the UDP or TCP_UDP protocol if dual-stack mode is enabled. You
     * cannot specify a protocol for a Gateway Load Balancer.</p>
     */
    inline void SetProtocol(const ProtocolEnum& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol for connections from clients to the load balancer. For
     * Application Load Balancers, the supported protocols are HTTP and HTTPS. For
     * Network Load Balancers, the supported protocols are TCP, TLS, UDP, and TCP_UDP.
     * You can’t specify the UDP or TCP_UDP protocol if dual-stack mode is enabled. You
     * cannot specify a protocol for a Gateway Load Balancer.</p>
     */
    inline void SetProtocol(ProtocolEnum&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol for connections from clients to the load balancer. For
     * Application Load Balancers, the supported protocols are HTTP and HTTPS. For
     * Network Load Balancers, the supported protocols are TCP, TLS, UDP, and TCP_UDP.
     * You can’t specify the UDP or TCP_UDP protocol if dual-stack mode is enabled. You
     * cannot specify a protocol for a Gateway Load Balancer.</p>
     */
    inline CreateListenerRequest& WithProtocol(const ProtocolEnum& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol for connections from clients to the load balancer. For
     * Application Load Balancers, the supported protocols are HTTP and HTTPS. For
     * Network Load Balancers, the supported protocols are TCP, TLS, UDP, and TCP_UDP.
     * You can’t specify the UDP or TCP_UDP protocol if dual-stack mode is enabled. You
     * cannot specify a protocol for a Gateway Load Balancer.</p>
     */
    inline CreateListenerRequest& WithProtocol(ProtocolEnum&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The port on which the load balancer is listening. You cannot specify a port
     * for a Gateway Load Balancer.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port on which the load balancer is listening. You cannot specify a port
     * for a Gateway Load Balancer.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port on which the load balancer is listening. You cannot specify a port
     * for a Gateway Load Balancer.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on which the load balancer is listening. You cannot specify a port
     * for a Gateway Load Balancer.</p>
     */
    inline CreateListenerRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>[HTTPS and TLS listeners] The security policy that defines which protocols
     * and ciphers are supported.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Application Load Balancers Guide</i> and <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Network Load Balancers Guide</i>.</p>
     */
    inline const Aws::String& GetSslPolicy() const{ return m_sslPolicy; }

    /**
     * <p>[HTTPS and TLS listeners] The security policy that defines which protocols
     * and ciphers are supported.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Application Load Balancers Guide</i> and <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Network Load Balancers Guide</i>.</p>
     */
    inline bool SslPolicyHasBeenSet() const { return m_sslPolicyHasBeenSet; }

    /**
     * <p>[HTTPS and TLS listeners] The security policy that defines which protocols
     * and ciphers are supported.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Application Load Balancers Guide</i> and <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Network Load Balancers Guide</i>.</p>
     */
    inline void SetSslPolicy(const Aws::String& value) { m_sslPolicyHasBeenSet = true; m_sslPolicy = value; }

    /**
     * <p>[HTTPS and TLS listeners] The security policy that defines which protocols
     * and ciphers are supported.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Application Load Balancers Guide</i> and <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Network Load Balancers Guide</i>.</p>
     */
    inline void SetSslPolicy(Aws::String&& value) { m_sslPolicyHasBeenSet = true; m_sslPolicy = std::move(value); }

    /**
     * <p>[HTTPS and TLS listeners] The security policy that defines which protocols
     * and ciphers are supported.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Application Load Balancers Guide</i> and <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Network Load Balancers Guide</i>.</p>
     */
    inline void SetSslPolicy(const char* value) { m_sslPolicyHasBeenSet = true; m_sslPolicy.assign(value); }

    /**
     * <p>[HTTPS and TLS listeners] The security policy that defines which protocols
     * and ciphers are supported.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Application Load Balancers Guide</i> and <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Network Load Balancers Guide</i>.</p>
     */
    inline CreateListenerRequest& WithSslPolicy(const Aws::String& value) { SetSslPolicy(value); return *this;}

    /**
     * <p>[HTTPS and TLS listeners] The security policy that defines which protocols
     * and ciphers are supported.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Application Load Balancers Guide</i> and <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Network Load Balancers Guide</i>.</p>
     */
    inline CreateListenerRequest& WithSslPolicy(Aws::String&& value) { SetSslPolicy(std::move(value)); return *this;}

    /**
     * <p>[HTTPS and TLS listeners] The security policy that defines which protocols
     * and ciphers are supported.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Application Load Balancers Guide</i> and <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html#describe-ssl-policies">Security
     * policies</a> in the <i>Network Load Balancers Guide</i>.</p>
     */
    inline CreateListenerRequest& WithSslPolicy(const char* value) { SetSslPolicy(value); return *this;}


    /**
     * <p>[HTTPS and TLS listeners] The default certificate for the listener. You must
     * provide exactly one certificate. Set <code>CertificateArn</code> to the
     * certificate ARN but do not set <code>IsDefault</code>.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const{ return m_certificates; }

    /**
     * <p>[HTTPS and TLS listeners] The default certificate for the listener. You must
     * provide exactly one certificate. Set <code>CertificateArn</code> to the
     * certificate ARN but do not set <code>IsDefault</code>.</p>
     */
    inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }

    /**
     * <p>[HTTPS and TLS listeners] The default certificate for the listener. You must
     * provide exactly one certificate. Set <code>CertificateArn</code> to the
     * certificate ARN but do not set <code>IsDefault</code>.</p>
     */
    inline void SetCertificates(const Aws::Vector<Certificate>& value) { m_certificatesHasBeenSet = true; m_certificates = value; }

    /**
     * <p>[HTTPS and TLS listeners] The default certificate for the listener. You must
     * provide exactly one certificate. Set <code>CertificateArn</code> to the
     * certificate ARN but do not set <code>IsDefault</code>.</p>
     */
    inline void SetCertificates(Aws::Vector<Certificate>&& value) { m_certificatesHasBeenSet = true; m_certificates = std::move(value); }

    /**
     * <p>[HTTPS and TLS listeners] The default certificate for the listener. You must
     * provide exactly one certificate. Set <code>CertificateArn</code> to the
     * certificate ARN but do not set <code>IsDefault</code>.</p>
     */
    inline CreateListenerRequest& WithCertificates(const Aws::Vector<Certificate>& value) { SetCertificates(value); return *this;}

    /**
     * <p>[HTTPS and TLS listeners] The default certificate for the listener. You must
     * provide exactly one certificate. Set <code>CertificateArn</code> to the
     * certificate ARN but do not set <code>IsDefault</code>.</p>
     */
    inline CreateListenerRequest& WithCertificates(Aws::Vector<Certificate>&& value) { SetCertificates(std::move(value)); return *this;}

    /**
     * <p>[HTTPS and TLS listeners] The default certificate for the listener. You must
     * provide exactly one certificate. Set <code>CertificateArn</code> to the
     * certificate ARN but do not set <code>IsDefault</code>.</p>
     */
    inline CreateListenerRequest& AddCertificates(const Certificate& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(value); return *this; }

    /**
     * <p>[HTTPS and TLS listeners] The default certificate for the listener. You must
     * provide exactly one certificate. Set <code>CertificateArn</code> to the
     * certificate ARN but do not set <code>IsDefault</code>.</p>
     */
    inline CreateListenerRequest& AddCertificates(Certificate&& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(std::move(value)); return *this; }


    /**
     * <p>The actions for the default rule.</p>
     */
    inline const Aws::Vector<Action>& GetDefaultActions() const{ return m_defaultActions; }

    /**
     * <p>The actions for the default rule.</p>
     */
    inline bool DefaultActionsHasBeenSet() const { return m_defaultActionsHasBeenSet; }

    /**
     * <p>The actions for the default rule.</p>
     */
    inline void SetDefaultActions(const Aws::Vector<Action>& value) { m_defaultActionsHasBeenSet = true; m_defaultActions = value; }

    /**
     * <p>The actions for the default rule.</p>
     */
    inline void SetDefaultActions(Aws::Vector<Action>&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions = std::move(value); }

    /**
     * <p>The actions for the default rule.</p>
     */
    inline CreateListenerRequest& WithDefaultActions(const Aws::Vector<Action>& value) { SetDefaultActions(value); return *this;}

    /**
     * <p>The actions for the default rule.</p>
     */
    inline CreateListenerRequest& WithDefaultActions(Aws::Vector<Action>&& value) { SetDefaultActions(std::move(value)); return *this;}

    /**
     * <p>The actions for the default rule.</p>
     */
    inline CreateListenerRequest& AddDefaultActions(const Action& value) { m_defaultActionsHasBeenSet = true; m_defaultActions.push_back(value); return *this; }

    /**
     * <p>The actions for the default rule.</p>
     */
    inline CreateListenerRequest& AddDefaultActions(Action&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions.push_back(std::move(value)); return *this; }


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
    inline bool AlpnPolicyHasBeenSet() const { return m_alpnPolicyHasBeenSet; }

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
    inline void SetAlpnPolicy(const Aws::Vector<Aws::String>& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy = value; }

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
    inline void SetAlpnPolicy(Aws::Vector<Aws::String>&& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy = std::move(value); }

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
    inline CreateListenerRequest& WithAlpnPolicy(const Aws::Vector<Aws::String>& value) { SetAlpnPolicy(value); return *this;}

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
    inline CreateListenerRequest& WithAlpnPolicy(Aws::Vector<Aws::String>&& value) { SetAlpnPolicy(std::move(value)); return *this;}

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
    inline CreateListenerRequest& AddAlpnPolicy(const Aws::String& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy.push_back(value); return *this; }

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
    inline CreateListenerRequest& AddAlpnPolicy(Aws::String&& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy.push_back(std::move(value)); return *this; }

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
    inline CreateListenerRequest& AddAlpnPolicy(const char* value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy.push_back(value); return *this; }


    /**
     * <p>The tags to assign to the listener.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the listener.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the listener.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the listener.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the listener.</p>
     */
    inline CreateListenerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the listener.</p>
     */
    inline CreateListenerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the listener.</p>
     */
    inline CreateListenerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the listener.</p>
     */
    inline CreateListenerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    ProtocolEnum m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_sslPolicy;
    bool m_sslPolicyHasBeenSet = false;

    Aws::Vector<Certificate> m_certificates;
    bool m_certificatesHasBeenSet = false;

    Aws::Vector<Action> m_defaultActions;
    bool m_defaultActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_alpnPolicy;
    bool m_alpnPolicyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
