/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
   * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/Listener">AWS
   * API Reference</a></p>
   */
  class Listener
  {
  public:
    AWS_ELASTICLOADBALANCING_API Listener() = default;
    AWS_ELASTICLOADBALANCING_API Listener(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API Listener& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The load balancer transport protocol to use for routing: HTTP, HTTPS, TCP, or
     * SSL.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    Listener& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port on which the load balancer is listening. On EC2-VPC, you can specify
     * any port from the range 1-65535. On EC2-Classic, you can specify any port from
     * the following list: 25, 80, 443, 465, 587, 1024-65535.</p>
     */
    inline int GetLoadBalancerPort() const { return m_loadBalancerPort; }
    inline bool LoadBalancerPortHasBeenSet() const { return m_loadBalancerPortHasBeenSet; }
    inline void SetLoadBalancerPort(int value) { m_loadBalancerPortHasBeenSet = true; m_loadBalancerPort = value; }
    inline Listener& WithLoadBalancerPort(int value) { SetLoadBalancerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol to use for routing traffic to instances: HTTP, HTTPS, TCP, or
     * SSL.</p> <p>If the front-end protocol is TCP or SSL, the back-end protocol must
     * be TCP or SSL. If the front-end protocol is HTTP or HTTPS, the back-end protocol
     * must be HTTP or HTTPS.</p> <p>If there is another listener with the same
     * <code>InstancePort</code> whose <code>InstanceProtocol</code> is secure, (HTTPS
     * or SSL), the listener's <code>InstanceProtocol</code> must also be secure.</p>
     * <p>If there is another listener with the same <code>InstancePort</code> whose
     * <code>InstanceProtocol</code> is HTTP or TCP, the listener's
     * <code>InstanceProtocol</code> must be HTTP or TCP.</p>
     */
    inline const Aws::String& GetInstanceProtocol() const { return m_instanceProtocol; }
    inline bool InstanceProtocolHasBeenSet() const { return m_instanceProtocolHasBeenSet; }
    template<typename InstanceProtocolT = Aws::String>
    void SetInstanceProtocol(InstanceProtocolT&& value) { m_instanceProtocolHasBeenSet = true; m_instanceProtocol = std::forward<InstanceProtocolT>(value); }
    template<typename InstanceProtocolT = Aws::String>
    Listener& WithInstanceProtocol(InstanceProtocolT&& value) { SetInstanceProtocol(std::forward<InstanceProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port on which the instance is listening.</p>
     */
    inline int GetInstancePort() const { return m_instancePort; }
    inline bool InstancePortHasBeenSet() const { return m_instancePortHasBeenSet; }
    inline void SetInstancePort(int value) { m_instancePortHasBeenSet = true; m_instancePort = value; }
    inline Listener& WithInstancePort(int value) { SetInstancePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the server certificate.</p>
     */
    inline const Aws::String& GetSSLCertificateId() const { return m_sSLCertificateId; }
    inline bool SSLCertificateIdHasBeenSet() const { return m_sSLCertificateIdHasBeenSet; }
    template<typename SSLCertificateIdT = Aws::String>
    void SetSSLCertificateId(SSLCertificateIdT&& value) { m_sSLCertificateIdHasBeenSet = true; m_sSLCertificateId = std::forward<SSLCertificateIdT>(value); }
    template<typename SSLCertificateIdT = Aws::String>
    Listener& WithSSLCertificateId(SSLCertificateIdT&& value) { SetSSLCertificateId(std::forward<SSLCertificateIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_loadBalancerPort{0};
    bool m_loadBalancerPortHasBeenSet = false;

    Aws::String m_instanceProtocol;
    bool m_instanceProtocolHasBeenSet = false;

    int m_instancePort{0};
    bool m_instancePortHasBeenSet = false;

    Aws::String m_sSLCertificateId;
    bool m_sSLCertificateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
