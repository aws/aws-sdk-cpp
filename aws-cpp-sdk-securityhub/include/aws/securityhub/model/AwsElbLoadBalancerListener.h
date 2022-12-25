/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a load balancer listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerListener">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerListener
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerListener();
    AWS_SECURITYHUB_API AwsElbLoadBalancerListener(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerListener& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AwsElbLoadBalancerListener& WithInstancePort(int value) { SetInstancePort(value); return *this;}


    /**
     * <p>The protocol to use to route traffic to instances.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline const Aws::String& GetInstanceProtocol() const{ return m_instanceProtocol; }

    /**
     * <p>The protocol to use to route traffic to instances.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline bool InstanceProtocolHasBeenSet() const { return m_instanceProtocolHasBeenSet; }

    /**
     * <p>The protocol to use to route traffic to instances.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline void SetInstanceProtocol(const Aws::String& value) { m_instanceProtocolHasBeenSet = true; m_instanceProtocol = value; }

    /**
     * <p>The protocol to use to route traffic to instances.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline void SetInstanceProtocol(Aws::String&& value) { m_instanceProtocolHasBeenSet = true; m_instanceProtocol = std::move(value); }

    /**
     * <p>The protocol to use to route traffic to instances.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline void SetInstanceProtocol(const char* value) { m_instanceProtocolHasBeenSet = true; m_instanceProtocol.assign(value); }

    /**
     * <p>The protocol to use to route traffic to instances.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline AwsElbLoadBalancerListener& WithInstanceProtocol(const Aws::String& value) { SetInstanceProtocol(value); return *this;}

    /**
     * <p>The protocol to use to route traffic to instances.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline AwsElbLoadBalancerListener& WithInstanceProtocol(Aws::String&& value) { SetInstanceProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol to use to route traffic to instances.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline AwsElbLoadBalancerListener& WithInstanceProtocol(const char* value) { SetInstanceProtocol(value); return *this;}


    /**
     * <p>The port on which the load balancer is listening.</p> <p>On EC2-VPC, you can
     * specify any port from the range 1-65535.</p> <p>On EC2-Classic, you can specify
     * any port from the following list: 25, 80, 443, 465, 587, 1024-65535.</p>
     */
    inline int GetLoadBalancerPort() const{ return m_loadBalancerPort; }

    /**
     * <p>The port on which the load balancer is listening.</p> <p>On EC2-VPC, you can
     * specify any port from the range 1-65535.</p> <p>On EC2-Classic, you can specify
     * any port from the following list: 25, 80, 443, 465, 587, 1024-65535.</p>
     */
    inline bool LoadBalancerPortHasBeenSet() const { return m_loadBalancerPortHasBeenSet; }

    /**
     * <p>The port on which the load balancer is listening.</p> <p>On EC2-VPC, you can
     * specify any port from the range 1-65535.</p> <p>On EC2-Classic, you can specify
     * any port from the following list: 25, 80, 443, 465, 587, 1024-65535.</p>
     */
    inline void SetLoadBalancerPort(int value) { m_loadBalancerPortHasBeenSet = true; m_loadBalancerPort = value; }

    /**
     * <p>The port on which the load balancer is listening.</p> <p>On EC2-VPC, you can
     * specify any port from the range 1-65535.</p> <p>On EC2-Classic, you can specify
     * any port from the following list: 25, 80, 443, 465, 587, 1024-65535.</p>
     */
    inline AwsElbLoadBalancerListener& WithLoadBalancerPort(int value) { SetLoadBalancerPort(value); return *this;}


    /**
     * <p>The load balancer transport protocol to use for routing.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The load balancer transport protocol to use for routing.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The load balancer transport protocol to use for routing.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The load balancer transport protocol to use for routing.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The load balancer transport protocol to use for routing.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The load balancer transport protocol to use for routing.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline AwsElbLoadBalancerListener& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The load balancer transport protocol to use for routing.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline AwsElbLoadBalancerListener& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The load balancer transport protocol to use for routing.</p> <p>Valid values:
     * <code>HTTP</code> | <code>HTTPS</code> | <code>TCP</code> | <code>SSL</code>
     * </p>
     */
    inline AwsElbLoadBalancerListener& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline const Aws::String& GetSslCertificateId() const{ return m_sslCertificateId; }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline bool SslCertificateIdHasBeenSet() const { return m_sslCertificateIdHasBeenSet; }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline void SetSslCertificateId(const Aws::String& value) { m_sslCertificateIdHasBeenSet = true; m_sslCertificateId = value; }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline void SetSslCertificateId(Aws::String&& value) { m_sslCertificateIdHasBeenSet = true; m_sslCertificateId = std::move(value); }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline void SetSslCertificateId(const char* value) { m_sslCertificateIdHasBeenSet = true; m_sslCertificateId.assign(value); }

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline AwsElbLoadBalancerListener& WithSslCertificateId(const Aws::String& value) { SetSslCertificateId(value); return *this;}

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline AwsElbLoadBalancerListener& WithSslCertificateId(Aws::String&& value) { SetSslCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the server certificate.</p>
     */
    inline AwsElbLoadBalancerListener& WithSslCertificateId(const char* value) { SetSslCertificateId(value); return *this;}

  private:

    int m_instancePort;
    bool m_instancePortHasBeenSet = false;

    Aws::String m_instanceProtocol;
    bool m_instanceProtocolHasBeenSet = false;

    int m_loadBalancerPort;
    bool m_loadBalancerPortHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_sslCertificateId;
    bool m_sslCertificateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
