/*
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
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about a listener.</p> <p>For information about the protocols and
   * the ports supported by Elastic Load Balancing, see <a
   * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
   * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/Listener">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API Listener
  {
  public:
    Listener();
    Listener(const Aws::Utils::Xml::XmlNode& xmlNode);
    Listener& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The load balancer transport protocol to use for routing: HTTP, HTTPS, TCP, or
     * SSL.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The load balancer transport protocol to use for routing: HTTP, HTTPS, TCP, or
     * SSL.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The load balancer transport protocol to use for routing: HTTP, HTTPS, TCP, or
     * SSL.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The load balancer transport protocol to use for routing: HTTP, HTTPS, TCP, or
     * SSL.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The load balancer transport protocol to use for routing: HTTP, HTTPS, TCP, or
     * SSL.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The load balancer transport protocol to use for routing: HTTP, HTTPS, TCP, or
     * SSL.</p>
     */
    inline Listener& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The load balancer transport protocol to use for routing: HTTP, HTTPS, TCP, or
     * SSL.</p>
     */
    inline Listener& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The load balancer transport protocol to use for routing: HTTP, HTTPS, TCP, or
     * SSL.</p>
     */
    inline Listener& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>The port on which the load balancer is listening. On EC2-VPC, you can specify
     * any port from the range 1-65535. On EC2-Classic, you can specify any port from
     * the following list: 25, 80, 443, 465, 587, 1024-65535.</p>
     */
    inline int GetLoadBalancerPort() const{ return m_loadBalancerPort; }

    /**
     * <p>The port on which the load balancer is listening. On EC2-VPC, you can specify
     * any port from the range 1-65535. On EC2-Classic, you can specify any port from
     * the following list: 25, 80, 443, 465, 587, 1024-65535.</p>
     */
    inline bool LoadBalancerPortHasBeenSet() const { return m_loadBalancerPortHasBeenSet; }

    /**
     * <p>The port on which the load balancer is listening. On EC2-VPC, you can specify
     * any port from the range 1-65535. On EC2-Classic, you can specify any port from
     * the following list: 25, 80, 443, 465, 587, 1024-65535.</p>
     */
    inline void SetLoadBalancerPort(int value) { m_loadBalancerPortHasBeenSet = true; m_loadBalancerPort = value; }

    /**
     * <p>The port on which the load balancer is listening. On EC2-VPC, you can specify
     * any port from the range 1-65535. On EC2-Classic, you can specify any port from
     * the following list: 25, 80, 443, 465, 587, 1024-65535.</p>
     */
    inline Listener& WithLoadBalancerPort(int value) { SetLoadBalancerPort(value); return *this;}


    /**
     * <p>The protocol to use for routing traffic to instances: HTTP, HTTPS, TCP, or
     * SSL.</p> <p>If the front-end protocol is HTTP, HTTPS, TCP, or SSL,
     * <code>InstanceProtocol</code> must be at the same protocol.</p> <p>If there is
     * another listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is secure, (HTTPS or SSL), the listener's
     * <code>InstanceProtocol</code> must also be secure.</p> <p>If there is another
     * listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is HTTP or TCP, the listener's
     * <code>InstanceProtocol</code> must be HTTP or TCP.</p>
     */
    inline const Aws::String& GetInstanceProtocol() const{ return m_instanceProtocol; }

    /**
     * <p>The protocol to use for routing traffic to instances: HTTP, HTTPS, TCP, or
     * SSL.</p> <p>If the front-end protocol is HTTP, HTTPS, TCP, or SSL,
     * <code>InstanceProtocol</code> must be at the same protocol.</p> <p>If there is
     * another listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is secure, (HTTPS or SSL), the listener's
     * <code>InstanceProtocol</code> must also be secure.</p> <p>If there is another
     * listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is HTTP or TCP, the listener's
     * <code>InstanceProtocol</code> must be HTTP or TCP.</p>
     */
    inline bool InstanceProtocolHasBeenSet() const { return m_instanceProtocolHasBeenSet; }

    /**
     * <p>The protocol to use for routing traffic to instances: HTTP, HTTPS, TCP, or
     * SSL.</p> <p>If the front-end protocol is HTTP, HTTPS, TCP, or SSL,
     * <code>InstanceProtocol</code> must be at the same protocol.</p> <p>If there is
     * another listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is secure, (HTTPS or SSL), the listener's
     * <code>InstanceProtocol</code> must also be secure.</p> <p>If there is another
     * listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is HTTP or TCP, the listener's
     * <code>InstanceProtocol</code> must be HTTP or TCP.</p>
     */
    inline void SetInstanceProtocol(const Aws::String& value) { m_instanceProtocolHasBeenSet = true; m_instanceProtocol = value; }

    /**
     * <p>The protocol to use for routing traffic to instances: HTTP, HTTPS, TCP, or
     * SSL.</p> <p>If the front-end protocol is HTTP, HTTPS, TCP, or SSL,
     * <code>InstanceProtocol</code> must be at the same protocol.</p> <p>If there is
     * another listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is secure, (HTTPS or SSL), the listener's
     * <code>InstanceProtocol</code> must also be secure.</p> <p>If there is another
     * listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is HTTP or TCP, the listener's
     * <code>InstanceProtocol</code> must be HTTP or TCP.</p>
     */
    inline void SetInstanceProtocol(Aws::String&& value) { m_instanceProtocolHasBeenSet = true; m_instanceProtocol = std::move(value); }

    /**
     * <p>The protocol to use for routing traffic to instances: HTTP, HTTPS, TCP, or
     * SSL.</p> <p>If the front-end protocol is HTTP, HTTPS, TCP, or SSL,
     * <code>InstanceProtocol</code> must be at the same protocol.</p> <p>If there is
     * another listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is secure, (HTTPS or SSL), the listener's
     * <code>InstanceProtocol</code> must also be secure.</p> <p>If there is another
     * listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is HTTP or TCP, the listener's
     * <code>InstanceProtocol</code> must be HTTP or TCP.</p>
     */
    inline void SetInstanceProtocol(const char* value) { m_instanceProtocolHasBeenSet = true; m_instanceProtocol.assign(value); }

    /**
     * <p>The protocol to use for routing traffic to instances: HTTP, HTTPS, TCP, or
     * SSL.</p> <p>If the front-end protocol is HTTP, HTTPS, TCP, or SSL,
     * <code>InstanceProtocol</code> must be at the same protocol.</p> <p>If there is
     * another listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is secure, (HTTPS or SSL), the listener's
     * <code>InstanceProtocol</code> must also be secure.</p> <p>If there is another
     * listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is HTTP or TCP, the listener's
     * <code>InstanceProtocol</code> must be HTTP or TCP.</p>
     */
    inline Listener& WithInstanceProtocol(const Aws::String& value) { SetInstanceProtocol(value); return *this;}

    /**
     * <p>The protocol to use for routing traffic to instances: HTTP, HTTPS, TCP, or
     * SSL.</p> <p>If the front-end protocol is HTTP, HTTPS, TCP, or SSL,
     * <code>InstanceProtocol</code> must be at the same protocol.</p> <p>If there is
     * another listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is secure, (HTTPS or SSL), the listener's
     * <code>InstanceProtocol</code> must also be secure.</p> <p>If there is another
     * listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is HTTP or TCP, the listener's
     * <code>InstanceProtocol</code> must be HTTP or TCP.</p>
     */
    inline Listener& WithInstanceProtocol(Aws::String&& value) { SetInstanceProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol to use for routing traffic to instances: HTTP, HTTPS, TCP, or
     * SSL.</p> <p>If the front-end protocol is HTTP, HTTPS, TCP, or SSL,
     * <code>InstanceProtocol</code> must be at the same protocol.</p> <p>If there is
     * another listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is secure, (HTTPS or SSL), the listener's
     * <code>InstanceProtocol</code> must also be secure.</p> <p>If there is another
     * listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is HTTP or TCP, the listener's
     * <code>InstanceProtocol</code> must be HTTP or TCP.</p>
     */
    inline Listener& WithInstanceProtocol(const char* value) { SetInstanceProtocol(value); return *this;}


    /**
     * <p>The port on which the instance is listening.</p>
     */
    inline int GetInstancePort() const{ return m_instancePort; }

    /**
     * <p>The port on which the instance is listening.</p>
     */
    inline bool InstancePortHasBeenSet() const { return m_instancePortHasBeenSet; }

    /**
     * <p>The port on which the instance is listening.</p>
     */
    inline void SetInstancePort(int value) { m_instancePortHasBeenSet = true; m_instancePort = value; }

    /**
     * <p>The port on which the instance is listening.</p>
     */
    inline Listener& WithInstancePort(int value) { SetInstancePort(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the server certificate.</p>
     */
    inline const Aws::String& GetSSLCertificateId() const{ return m_sSLCertificateId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the server certificate.</p>
     */
    inline bool SSLCertificateIdHasBeenSet() const { return m_sSLCertificateIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the server certificate.</p>
     */
    inline void SetSSLCertificateId(const Aws::String& value) { m_sSLCertificateIdHasBeenSet = true; m_sSLCertificateId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the server certificate.</p>
     */
    inline void SetSSLCertificateId(Aws::String&& value) { m_sSLCertificateIdHasBeenSet = true; m_sSLCertificateId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the server certificate.</p>
     */
    inline void SetSSLCertificateId(const char* value) { m_sSLCertificateIdHasBeenSet = true; m_sSLCertificateId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the server certificate.</p>
     */
    inline Listener& WithSSLCertificateId(const Aws::String& value) { SetSSLCertificateId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the server certificate.</p>
     */
    inline Listener& WithSSLCertificateId(Aws::String&& value) { SetSSLCertificateId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the server certificate.</p>
     */
    inline Listener& WithSSLCertificateId(const char* value) { SetSSLCertificateId(value); return *this;}

  private:

    Aws::String m_protocol;
    bool m_protocolHasBeenSet;

    int m_loadBalancerPort;
    bool m_loadBalancerPortHasBeenSet;

    Aws::String m_instanceProtocol;
    bool m_instanceProtocolHasBeenSet;

    int m_instancePort;
    bool m_instancePortHasBeenSet;

    Aws::String m_sSLCertificateId;
    bool m_sSLCertificateIdHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
