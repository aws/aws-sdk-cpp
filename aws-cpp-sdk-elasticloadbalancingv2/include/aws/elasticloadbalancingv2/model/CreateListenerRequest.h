﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ProtocolEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_ELASTICLOADBALANCINGV2_API CreateListenerRequest : public ElasticLoadBalancingv2Request
  {
  public:
    CreateListenerRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateListener"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
     * Network Load Balancers, the supported protocol is TCP.</p>
     */
    inline const ProtocolEnum& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol for connections from clients to the load balancer. For
     * Application Load Balancers, the supported protocols are HTTP and HTTPS. For
     * Network Load Balancers, the supported protocol is TCP.</p>
     */
    inline void SetProtocol(const ProtocolEnum& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol for connections from clients to the load balancer. For
     * Application Load Balancers, the supported protocols are HTTP and HTTPS. For
     * Network Load Balancers, the supported protocol is TCP.</p>
     */
    inline void SetProtocol(ProtocolEnum&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol for connections from clients to the load balancer. For
     * Application Load Balancers, the supported protocols are HTTP and HTTPS. For
     * Network Load Balancers, the supported protocol is TCP.</p>
     */
    inline CreateListenerRequest& WithProtocol(const ProtocolEnum& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol for connections from clients to the load balancer. For
     * Application Load Balancers, the supported protocols are HTTP and HTTPS. For
     * Network Load Balancers, the supported protocol is TCP.</p>
     */
    inline CreateListenerRequest& WithProtocol(ProtocolEnum&& value) { SetProtocol(std::move(value)); return *this;}


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
    inline CreateListenerRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>[HTTPS listeners] The security policy that defines which ciphers and
     * protocols are supported. The default is the current predefined security
     * policy.</p>
     */
    inline const Aws::String& GetSslPolicy() const{ return m_sslPolicy; }

    /**
     * <p>[HTTPS listeners] The security policy that defines which ciphers and
     * protocols are supported. The default is the current predefined security
     * policy.</p>
     */
    inline void SetSslPolicy(const Aws::String& value) { m_sslPolicyHasBeenSet = true; m_sslPolicy = value; }

    /**
     * <p>[HTTPS listeners] The security policy that defines which ciphers and
     * protocols are supported. The default is the current predefined security
     * policy.</p>
     */
    inline void SetSslPolicy(Aws::String&& value) { m_sslPolicyHasBeenSet = true; m_sslPolicy = std::move(value); }

    /**
     * <p>[HTTPS listeners] The security policy that defines which ciphers and
     * protocols are supported. The default is the current predefined security
     * policy.</p>
     */
    inline void SetSslPolicy(const char* value) { m_sslPolicyHasBeenSet = true; m_sslPolicy.assign(value); }

    /**
     * <p>[HTTPS listeners] The security policy that defines which ciphers and
     * protocols are supported. The default is the current predefined security
     * policy.</p>
     */
    inline CreateListenerRequest& WithSslPolicy(const Aws::String& value) { SetSslPolicy(value); return *this;}

    /**
     * <p>[HTTPS listeners] The security policy that defines which ciphers and
     * protocols are supported. The default is the current predefined security
     * policy.</p>
     */
    inline CreateListenerRequest& WithSslPolicy(Aws::String&& value) { SetSslPolicy(std::move(value)); return *this;}

    /**
     * <p>[HTTPS listeners] The security policy that defines which ciphers and
     * protocols are supported. The default is the current predefined security
     * policy.</p>
     */
    inline CreateListenerRequest& WithSslPolicy(const char* value) { SetSslPolicy(value); return *this;}


    /**
     * <p>[HTTPS listeners] The default SSL server certificate. You must provide
     * exactly one default certificate. To create a certificate list, use
     * <a>AddListenerCertificates</a>.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const{ return m_certificates; }

    /**
     * <p>[HTTPS listeners] The default SSL server certificate. You must provide
     * exactly one default certificate. To create a certificate list, use
     * <a>AddListenerCertificates</a>.</p>
     */
    inline void SetCertificates(const Aws::Vector<Certificate>& value) { m_certificatesHasBeenSet = true; m_certificates = value; }

    /**
     * <p>[HTTPS listeners] The default SSL server certificate. You must provide
     * exactly one default certificate. To create a certificate list, use
     * <a>AddListenerCertificates</a>.</p>
     */
    inline void SetCertificates(Aws::Vector<Certificate>&& value) { m_certificatesHasBeenSet = true; m_certificates = std::move(value); }

    /**
     * <p>[HTTPS listeners] The default SSL server certificate. You must provide
     * exactly one default certificate. To create a certificate list, use
     * <a>AddListenerCertificates</a>.</p>
     */
    inline CreateListenerRequest& WithCertificates(const Aws::Vector<Certificate>& value) { SetCertificates(value); return *this;}

    /**
     * <p>[HTTPS listeners] The default SSL server certificate. You must provide
     * exactly one default certificate. To create a certificate list, use
     * <a>AddListenerCertificates</a>.</p>
     */
    inline CreateListenerRequest& WithCertificates(Aws::Vector<Certificate>&& value) { SetCertificates(std::move(value)); return *this;}

    /**
     * <p>[HTTPS listeners] The default SSL server certificate. You must provide
     * exactly one default certificate. To create a certificate list, use
     * <a>AddListenerCertificates</a>.</p>
     */
    inline CreateListenerRequest& AddCertificates(const Certificate& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(value); return *this; }

    /**
     * <p>[HTTPS listeners] The default SSL server certificate. You must provide
     * exactly one default certificate. To create a certificate list, use
     * <a>AddListenerCertificates</a>.</p>
     */
    inline CreateListenerRequest& AddCertificates(Certificate&& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(std::move(value)); return *this; }


    /**
     * <p>The actions for the default rule. The rule must include one forward action or
     * one or more fixed-response actions.</p> <p>If the action type is
     * <code>forward</code>, you can specify a single target group. The protocol of the
     * target group must be HTTP or HTTPS for an Application Load Balancer or TCP for a
     * Network Load Balancer.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-oidc</code>, you can use an identity provider that is OpenID
     * Connect (OIDC) compliant to authenticate users as they access your
     * application.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-cognito</code>, you can use Amazon Cognito to authenticate
     * users as they access your application.</p> <p>[Application Load Balancer] If the
     * action type is <code>redirect</code>, you can redirect HTTP and HTTPS
     * requests.</p> <p>[Application Load Balancer] If the action type is
     * <code>fixed-response</code>, you can return a custom HTTP response.</p>
     */
    inline const Aws::Vector<Action>& GetDefaultActions() const{ return m_defaultActions; }

    /**
     * <p>The actions for the default rule. The rule must include one forward action or
     * one or more fixed-response actions.</p> <p>If the action type is
     * <code>forward</code>, you can specify a single target group. The protocol of the
     * target group must be HTTP or HTTPS for an Application Load Balancer or TCP for a
     * Network Load Balancer.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-oidc</code>, you can use an identity provider that is OpenID
     * Connect (OIDC) compliant to authenticate users as they access your
     * application.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-cognito</code>, you can use Amazon Cognito to authenticate
     * users as they access your application.</p> <p>[Application Load Balancer] If the
     * action type is <code>redirect</code>, you can redirect HTTP and HTTPS
     * requests.</p> <p>[Application Load Balancer] If the action type is
     * <code>fixed-response</code>, you can return a custom HTTP response.</p>
     */
    inline void SetDefaultActions(const Aws::Vector<Action>& value) { m_defaultActionsHasBeenSet = true; m_defaultActions = value; }

    /**
     * <p>The actions for the default rule. The rule must include one forward action or
     * one or more fixed-response actions.</p> <p>If the action type is
     * <code>forward</code>, you can specify a single target group. The protocol of the
     * target group must be HTTP or HTTPS for an Application Load Balancer or TCP for a
     * Network Load Balancer.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-oidc</code>, you can use an identity provider that is OpenID
     * Connect (OIDC) compliant to authenticate users as they access your
     * application.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-cognito</code>, you can use Amazon Cognito to authenticate
     * users as they access your application.</p> <p>[Application Load Balancer] If the
     * action type is <code>redirect</code>, you can redirect HTTP and HTTPS
     * requests.</p> <p>[Application Load Balancer] If the action type is
     * <code>fixed-response</code>, you can return a custom HTTP response.</p>
     */
    inline void SetDefaultActions(Aws::Vector<Action>&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions = std::move(value); }

    /**
     * <p>The actions for the default rule. The rule must include one forward action or
     * one or more fixed-response actions.</p> <p>If the action type is
     * <code>forward</code>, you can specify a single target group. The protocol of the
     * target group must be HTTP or HTTPS for an Application Load Balancer or TCP for a
     * Network Load Balancer.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-oidc</code>, you can use an identity provider that is OpenID
     * Connect (OIDC) compliant to authenticate users as they access your
     * application.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-cognito</code>, you can use Amazon Cognito to authenticate
     * users as they access your application.</p> <p>[Application Load Balancer] If the
     * action type is <code>redirect</code>, you can redirect HTTP and HTTPS
     * requests.</p> <p>[Application Load Balancer] If the action type is
     * <code>fixed-response</code>, you can return a custom HTTP response.</p>
     */
    inline CreateListenerRequest& WithDefaultActions(const Aws::Vector<Action>& value) { SetDefaultActions(value); return *this;}

    /**
     * <p>The actions for the default rule. The rule must include one forward action or
     * one or more fixed-response actions.</p> <p>If the action type is
     * <code>forward</code>, you can specify a single target group. The protocol of the
     * target group must be HTTP or HTTPS for an Application Load Balancer or TCP for a
     * Network Load Balancer.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-oidc</code>, you can use an identity provider that is OpenID
     * Connect (OIDC) compliant to authenticate users as they access your
     * application.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-cognito</code>, you can use Amazon Cognito to authenticate
     * users as they access your application.</p> <p>[Application Load Balancer] If the
     * action type is <code>redirect</code>, you can redirect HTTP and HTTPS
     * requests.</p> <p>[Application Load Balancer] If the action type is
     * <code>fixed-response</code>, you can return a custom HTTP response.</p>
     */
    inline CreateListenerRequest& WithDefaultActions(Aws::Vector<Action>&& value) { SetDefaultActions(std::move(value)); return *this;}

    /**
     * <p>The actions for the default rule. The rule must include one forward action or
     * one or more fixed-response actions.</p> <p>If the action type is
     * <code>forward</code>, you can specify a single target group. The protocol of the
     * target group must be HTTP or HTTPS for an Application Load Balancer or TCP for a
     * Network Load Balancer.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-oidc</code>, you can use an identity provider that is OpenID
     * Connect (OIDC) compliant to authenticate users as they access your
     * application.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-cognito</code>, you can use Amazon Cognito to authenticate
     * users as they access your application.</p> <p>[Application Load Balancer] If the
     * action type is <code>redirect</code>, you can redirect HTTP and HTTPS
     * requests.</p> <p>[Application Load Balancer] If the action type is
     * <code>fixed-response</code>, you can return a custom HTTP response.</p>
     */
    inline CreateListenerRequest& AddDefaultActions(const Action& value) { m_defaultActionsHasBeenSet = true; m_defaultActions.push_back(value); return *this; }

    /**
     * <p>The actions for the default rule. The rule must include one forward action or
     * one or more fixed-response actions.</p> <p>If the action type is
     * <code>forward</code>, you can specify a single target group. The protocol of the
     * target group must be HTTP or HTTPS for an Application Load Balancer or TCP for a
     * Network Load Balancer.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-oidc</code>, you can use an identity provider that is OpenID
     * Connect (OIDC) compliant to authenticate users as they access your
     * application.</p> <p>[HTTPS listener] If the action type is
     * <code>authenticate-cognito</code>, you can use Amazon Cognito to authenticate
     * users as they access your application.</p> <p>[Application Load Balancer] If the
     * action type is <code>redirect</code>, you can redirect HTTP and HTTPS
     * requests.</p> <p>[Application Load Balancer] If the action type is
     * <code>fixed-response</code>, you can return a custom HTTP response.</p>
     */
    inline CreateListenerRequest& AddDefaultActions(Action&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet;

    ProtocolEnum m_protocol;
    bool m_protocolHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_sslPolicy;
    bool m_sslPolicyHasBeenSet;

    Aws::Vector<Certificate> m_certificates;
    bool m_certificatesHasBeenSet;

    Aws::Vector<Action> m_defaultActions;
    bool m_defaultActionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
