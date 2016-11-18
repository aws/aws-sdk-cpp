﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ProtocolEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/Certificate.h>
#include <aws/elasticloadbalancingv2/model/Action.h>

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
   * <p>Information about a listener.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API Listener
  {
  public:
    Listener();
    Listener(const Aws::Utils::Xml::XmlNode& xmlNode);
    Listener& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

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
    inline Listener& WithListenerArn(Aws::String&& value) { SetListenerArn(value); return *this;}

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
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }

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
    inline Listener& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(value); return *this;}

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
    inline void SetProtocol(const ProtocolEnum& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol for connections from clients to the load balancer.</p>
     */
    inline void SetProtocol(ProtocolEnum&& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol for connections from clients to the load balancer.</p>
     */
    inline Listener& WithProtocol(const ProtocolEnum& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol for connections from clients to the load balancer.</p>
     */
    inline Listener& WithProtocol(ProtocolEnum&& value) { SetProtocol(value); return *this;}

    /**
     * <p>The SSL server certificate. You must provide a certificate if the protocol is
     * HTTPS.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const{ return m_certificates; }

    /**
     * <p>The SSL server certificate. You must provide a certificate if the protocol is
     * HTTPS.</p>
     */
    inline void SetCertificates(const Aws::Vector<Certificate>& value) { m_certificatesHasBeenSet = true; m_certificates = value; }

    /**
     * <p>The SSL server certificate. You must provide a certificate if the protocol is
     * HTTPS.</p>
     */
    inline void SetCertificates(Aws::Vector<Certificate>&& value) { m_certificatesHasBeenSet = true; m_certificates = value; }

    /**
     * <p>The SSL server certificate. You must provide a certificate if the protocol is
     * HTTPS.</p>
     */
    inline Listener& WithCertificates(const Aws::Vector<Certificate>& value) { SetCertificates(value); return *this;}

    /**
     * <p>The SSL server certificate. You must provide a certificate if the protocol is
     * HTTPS.</p>
     */
    inline Listener& WithCertificates(Aws::Vector<Certificate>&& value) { SetCertificates(value); return *this;}

    /**
     * <p>The SSL server certificate. You must provide a certificate if the protocol is
     * HTTPS.</p>
     */
    inline Listener& AddCertificates(const Certificate& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(value); return *this; }

    /**
     * <p>The SSL server certificate. You must provide a certificate if the protocol is
     * HTTPS.</p>
     */
    inline Listener& AddCertificates(Certificate&& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(value); return *this; }

    /**
     * <p>The security policy that defines which ciphers and protocols are supported.
     * The default is the current predefined security policy.</p>
     */
    inline const Aws::String& GetSslPolicy() const{ return m_sslPolicy; }

    /**
     * <p>The security policy that defines which ciphers and protocols are supported.
     * The default is the current predefined security policy.</p>
     */
    inline void SetSslPolicy(const Aws::String& value) { m_sslPolicyHasBeenSet = true; m_sslPolicy = value; }

    /**
     * <p>The security policy that defines which ciphers and protocols are supported.
     * The default is the current predefined security policy.</p>
     */
    inline void SetSslPolicy(Aws::String&& value) { m_sslPolicyHasBeenSet = true; m_sslPolicy = value; }

    /**
     * <p>The security policy that defines which ciphers and protocols are supported.
     * The default is the current predefined security policy.</p>
     */
    inline void SetSslPolicy(const char* value) { m_sslPolicyHasBeenSet = true; m_sslPolicy.assign(value); }

    /**
     * <p>The security policy that defines which ciphers and protocols are supported.
     * The default is the current predefined security policy.</p>
     */
    inline Listener& WithSslPolicy(const Aws::String& value) { SetSslPolicy(value); return *this;}

    /**
     * <p>The security policy that defines which ciphers and protocols are supported.
     * The default is the current predefined security policy.</p>
     */
    inline Listener& WithSslPolicy(Aws::String&& value) { SetSslPolicy(value); return *this;}

    /**
     * <p>The security policy that defines which ciphers and protocols are supported.
     * The default is the current predefined security policy.</p>
     */
    inline Listener& WithSslPolicy(const char* value) { SetSslPolicy(value); return *this;}

    /**
     * <p>The default actions for the listener.</p>
     */
    inline const Aws::Vector<Action>& GetDefaultActions() const{ return m_defaultActions; }

    /**
     * <p>The default actions for the listener.</p>
     */
    inline void SetDefaultActions(const Aws::Vector<Action>& value) { m_defaultActionsHasBeenSet = true; m_defaultActions = value; }

    /**
     * <p>The default actions for the listener.</p>
     */
    inline void SetDefaultActions(Aws::Vector<Action>&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions = value; }

    /**
     * <p>The default actions for the listener.</p>
     */
    inline Listener& WithDefaultActions(const Aws::Vector<Action>& value) { SetDefaultActions(value); return *this;}

    /**
     * <p>The default actions for the listener.</p>
     */
    inline Listener& WithDefaultActions(Aws::Vector<Action>&& value) { SetDefaultActions(value); return *this;}

    /**
     * <p>The default actions for the listener.</p>
     */
    inline Listener& AddDefaultActions(const Action& value) { m_defaultActionsHasBeenSet = true; m_defaultActions.push_back(value); return *this; }

    /**
     * <p>The default actions for the listener.</p>
     */
    inline Listener& AddDefaultActions(Action&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions.push_back(value); return *this; }

  private:
    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet;
    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
    ProtocolEnum m_protocol;
    bool m_protocolHasBeenSet;
    Aws::Vector<Certificate> m_certificates;
    bool m_certificatesHasBeenSet;
    Aws::String m_sslPolicy;
    bool m_sslPolicyHasBeenSet;
    Aws::Vector<Action> m_defaultActions;
    bool m_defaultActionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
