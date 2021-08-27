/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ProtocolEnum.h>
#include <aws/elasticloadbalancingv2/model/Matcher.h>
#include <aws/elasticloadbalancingv2/model/TargetTypeEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_ELASTICLOADBALANCINGV2_API CreateTargetGroupRequest : public ElasticLoadBalancingv2Request
  {
  public:
    CreateTargetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTargetGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the target group.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, and must not begin or end with a hyphen.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the target group.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, and must not begin or end with a hyphen.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the target group.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, and must not begin or end with a hyphen.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the target group.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, and must not begin or end with a hyphen.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the target group.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, and must not begin or end with a hyphen.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the target group.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, and must not begin or end with a hyphen.</p>
     */
    inline CreateTargetGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the target group.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, and must not begin or end with a hyphen.</p>
     */
    inline CreateTargetGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the target group.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, and must not begin or end with a hyphen.</p>
     */
    inline CreateTargetGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The protocol to use for routing traffic to the targets. For Application Load
     * Balancers, the supported protocols are HTTP and HTTPS. For Network Load
     * Balancers, the supported protocols are TCP, TLS, UDP, or TCP_UDP. For Gateway
     * Load Balancers, the supported protocol is GENEVE. A TCP_UDP listener must be
     * associated with a TCP_UDP target group. If the target is a Lambda function, this
     * parameter does not apply.</p>
     */
    inline const ProtocolEnum& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol to use for routing traffic to the targets. For Application Load
     * Balancers, the supported protocols are HTTP and HTTPS. For Network Load
     * Balancers, the supported protocols are TCP, TLS, UDP, or TCP_UDP. For Gateway
     * Load Balancers, the supported protocol is GENEVE. A TCP_UDP listener must be
     * associated with a TCP_UDP target group. If the target is a Lambda function, this
     * parameter does not apply.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol to use for routing traffic to the targets. For Application Load
     * Balancers, the supported protocols are HTTP and HTTPS. For Network Load
     * Balancers, the supported protocols are TCP, TLS, UDP, or TCP_UDP. For Gateway
     * Load Balancers, the supported protocol is GENEVE. A TCP_UDP listener must be
     * associated with a TCP_UDP target group. If the target is a Lambda function, this
     * parameter does not apply.</p>
     */
    inline void SetProtocol(const ProtocolEnum& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol to use for routing traffic to the targets. For Application Load
     * Balancers, the supported protocols are HTTP and HTTPS. For Network Load
     * Balancers, the supported protocols are TCP, TLS, UDP, or TCP_UDP. For Gateway
     * Load Balancers, the supported protocol is GENEVE. A TCP_UDP listener must be
     * associated with a TCP_UDP target group. If the target is a Lambda function, this
     * parameter does not apply.</p>
     */
    inline void SetProtocol(ProtocolEnum&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol to use for routing traffic to the targets. For Application Load
     * Balancers, the supported protocols are HTTP and HTTPS. For Network Load
     * Balancers, the supported protocols are TCP, TLS, UDP, or TCP_UDP. For Gateway
     * Load Balancers, the supported protocol is GENEVE. A TCP_UDP listener must be
     * associated with a TCP_UDP target group. If the target is a Lambda function, this
     * parameter does not apply.</p>
     */
    inline CreateTargetGroupRequest& WithProtocol(const ProtocolEnum& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol to use for routing traffic to the targets. For Application Load
     * Balancers, the supported protocols are HTTP and HTTPS. For Network Load
     * Balancers, the supported protocols are TCP, TLS, UDP, or TCP_UDP. For Gateway
     * Load Balancers, the supported protocol is GENEVE. A TCP_UDP listener must be
     * associated with a TCP_UDP target group. If the target is a Lambda function, this
     * parameter does not apply.</p>
     */
    inline CreateTargetGroupRequest& WithProtocol(ProtocolEnum&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. Specify <code>GRPC</code> to send
     * requests to targets using gRPC. Specify <code>HTTP2</code> to send requests to
     * targets using HTTP/2. The default is <code>HTTP1</code>, which sends requests to
     * targets using HTTP/1.1.</p>
     */
    inline const Aws::String& GetProtocolVersion() const{ return m_protocolVersion; }

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. Specify <code>GRPC</code> to send
     * requests to targets using gRPC. Specify <code>HTTP2</code> to send requests to
     * targets using HTTP/2. The default is <code>HTTP1</code>, which sends requests to
     * targets using HTTP/1.1.</p>
     */
    inline bool ProtocolVersionHasBeenSet() const { return m_protocolVersionHasBeenSet; }

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. Specify <code>GRPC</code> to send
     * requests to targets using gRPC. Specify <code>HTTP2</code> to send requests to
     * targets using HTTP/2. The default is <code>HTTP1</code>, which sends requests to
     * targets using HTTP/1.1.</p>
     */
    inline void SetProtocolVersion(const Aws::String& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = value; }

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. Specify <code>GRPC</code> to send
     * requests to targets using gRPC. Specify <code>HTTP2</code> to send requests to
     * targets using HTTP/2. The default is <code>HTTP1</code>, which sends requests to
     * targets using HTTP/1.1.</p>
     */
    inline void SetProtocolVersion(Aws::String&& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = std::move(value); }

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. Specify <code>GRPC</code> to send
     * requests to targets using gRPC. Specify <code>HTTP2</code> to send requests to
     * targets using HTTP/2. The default is <code>HTTP1</code>, which sends requests to
     * targets using HTTP/1.1.</p>
     */
    inline void SetProtocolVersion(const char* value) { m_protocolVersionHasBeenSet = true; m_protocolVersion.assign(value); }

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. Specify <code>GRPC</code> to send
     * requests to targets using gRPC. Specify <code>HTTP2</code> to send requests to
     * targets using HTTP/2. The default is <code>HTTP1</code>, which sends requests to
     * targets using HTTP/1.1.</p>
     */
    inline CreateTargetGroupRequest& WithProtocolVersion(const Aws::String& value) { SetProtocolVersion(value); return *this;}

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. Specify <code>GRPC</code> to send
     * requests to targets using gRPC. Specify <code>HTTP2</code> to send requests to
     * targets using HTTP/2. The default is <code>HTTP1</code>, which sends requests to
     * targets using HTTP/1.1.</p>
     */
    inline CreateTargetGroupRequest& WithProtocolVersion(Aws::String&& value) { SetProtocolVersion(std::move(value)); return *this;}

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. Specify <code>GRPC</code> to send
     * requests to targets using gRPC. Specify <code>HTTP2</code> to send requests to
     * targets using HTTP/2. The default is <code>HTTP1</code>, which sends requests to
     * targets using HTTP/1.1.</p>
     */
    inline CreateTargetGroupRequest& WithProtocolVersion(const char* value) { SetProtocolVersion(value); return *this;}


    /**
     * <p>The port on which the targets receive traffic. This port is used unless you
     * specify a port override when registering the target. If the target is a Lambda
     * function, this parameter does not apply. If the protocol is GENEVE, the
     * supported port is 6081.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port on which the targets receive traffic. This port is used unless you
     * specify a port override when registering the target. If the target is a Lambda
     * function, this parameter does not apply. If the protocol is GENEVE, the
     * supported port is 6081.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port on which the targets receive traffic. This port is used unless you
     * specify a port override when registering the target. If the target is a Lambda
     * function, this parameter does not apply. If the protocol is GENEVE, the
     * supported port is 6081.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on which the targets receive traffic. This port is used unless you
     * specify a port override when registering the target. If the target is a Lambda
     * function, this parameter does not apply. If the protocol is GENEVE, the
     * supported port is 6081.</p>
     */
    inline CreateTargetGroupRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The identifier of the virtual private cloud (VPC). If the target is a Lambda
     * function, this parameter does not apply. Otherwise, this parameter is
     * required.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the virtual private cloud (VPC). If the target is a Lambda
     * function, this parameter does not apply. Otherwise, this parameter is
     * required.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The identifier of the virtual private cloud (VPC). If the target is a Lambda
     * function, this parameter does not apply. Otherwise, this parameter is
     * required.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the virtual private cloud (VPC). If the target is a Lambda
     * function, this parameter does not apply. Otherwise, this parameter is
     * required.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The identifier of the virtual private cloud (VPC). If the target is a Lambda
     * function, this parameter does not apply. Otherwise, this parameter is
     * required.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier of the virtual private cloud (VPC). If the target is a Lambda
     * function, this parameter does not apply. Otherwise, this parameter is
     * required.</p>
     */
    inline CreateTargetGroupRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the virtual private cloud (VPC). If the target is a Lambda
     * function, this parameter does not apply. Otherwise, this parameter is
     * required.</p>
     */
    inline CreateTargetGroupRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the virtual private cloud (VPC). If the target is a Lambda
     * function, this parameter does not apply. Otherwise, this parameter is
     * required.</p>
     */
    inline CreateTargetGroupRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * For Application Load Balancers, the default is HTTP. For Network Load Balancers
     * and Gateway Load Balancers, the default is TCP. The TCP protocol is not
     * supported for health checks if the protocol of the target group is HTTP or
     * HTTPS. The GENEVE, TLS, UDP, and TCP_UDP protocols are not supported for health
     * checks.</p>
     */
    inline const ProtocolEnum& GetHealthCheckProtocol() const{ return m_healthCheckProtocol; }

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * For Application Load Balancers, the default is HTTP. For Network Load Balancers
     * and Gateway Load Balancers, the default is TCP. The TCP protocol is not
     * supported for health checks if the protocol of the target group is HTTP or
     * HTTPS. The GENEVE, TLS, UDP, and TCP_UDP protocols are not supported for health
     * checks.</p>
     */
    inline bool HealthCheckProtocolHasBeenSet() const { return m_healthCheckProtocolHasBeenSet; }

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * For Application Load Balancers, the default is HTTP. For Network Load Balancers
     * and Gateway Load Balancers, the default is TCP. The TCP protocol is not
     * supported for health checks if the protocol of the target group is HTTP or
     * HTTPS. The GENEVE, TLS, UDP, and TCP_UDP protocols are not supported for health
     * checks.</p>
     */
    inline void SetHealthCheckProtocol(const ProtocolEnum& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * For Application Load Balancers, the default is HTTP. For Network Load Balancers
     * and Gateway Load Balancers, the default is TCP. The TCP protocol is not
     * supported for health checks if the protocol of the target group is HTTP or
     * HTTPS. The GENEVE, TLS, UDP, and TCP_UDP protocols are not supported for health
     * checks.</p>
     */
    inline void SetHealthCheckProtocol(ProtocolEnum&& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = std::move(value); }

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * For Application Load Balancers, the default is HTTP. For Network Load Balancers
     * and Gateway Load Balancers, the default is TCP. The TCP protocol is not
     * supported for health checks if the protocol of the target group is HTTP or
     * HTTPS. The GENEVE, TLS, UDP, and TCP_UDP protocols are not supported for health
     * checks.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckProtocol(const ProtocolEnum& value) { SetHealthCheckProtocol(value); return *this;}

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * For Application Load Balancers, the default is HTTP. For Network Load Balancers
     * and Gateway Load Balancers, the default is TCP. The TCP protocol is not
     * supported for health checks if the protocol of the target group is HTTP or
     * HTTPS. The GENEVE, TLS, UDP, and TCP_UDP protocols are not supported for health
     * checks.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckProtocol(ProtocolEnum&& value) { SetHealthCheckProtocol(std::move(value)); return *this;}


    /**
     * <p>The port the load balancer uses when performing health checks on targets. If
     * the protocol is HTTP, HTTPS, TCP, TLS, UDP, or TCP_UDP, the default is
     * <code>traffic-port</code>, which is the port on which each target receives
     * traffic from the load balancer. If the protocol is GENEVE, the default is port
     * 80.</p>
     */
    inline const Aws::String& GetHealthCheckPort() const{ return m_healthCheckPort; }

    /**
     * <p>The port the load balancer uses when performing health checks on targets. If
     * the protocol is HTTP, HTTPS, TCP, TLS, UDP, or TCP_UDP, the default is
     * <code>traffic-port</code>, which is the port on which each target receives
     * traffic from the load balancer. If the protocol is GENEVE, the default is port
     * 80.</p>
     */
    inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }

    /**
     * <p>The port the load balancer uses when performing health checks on targets. If
     * the protocol is HTTP, HTTPS, TCP, TLS, UDP, or TCP_UDP, the default is
     * <code>traffic-port</code>, which is the port on which each target receives
     * traffic from the load balancer. If the protocol is GENEVE, the default is port
     * 80.</p>
     */
    inline void SetHealthCheckPort(const Aws::String& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }

    /**
     * <p>The port the load balancer uses when performing health checks on targets. If
     * the protocol is HTTP, HTTPS, TCP, TLS, UDP, or TCP_UDP, the default is
     * <code>traffic-port</code>, which is the port on which each target receives
     * traffic from the load balancer. If the protocol is GENEVE, the default is port
     * 80.</p>
     */
    inline void SetHealthCheckPort(Aws::String&& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = std::move(value); }

    /**
     * <p>The port the load balancer uses when performing health checks on targets. If
     * the protocol is HTTP, HTTPS, TCP, TLS, UDP, or TCP_UDP, the default is
     * <code>traffic-port</code>, which is the port on which each target receives
     * traffic from the load balancer. If the protocol is GENEVE, the default is port
     * 80.</p>
     */
    inline void SetHealthCheckPort(const char* value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort.assign(value); }

    /**
     * <p>The port the load balancer uses when performing health checks on targets. If
     * the protocol is HTTP, HTTPS, TCP, TLS, UDP, or TCP_UDP, the default is
     * <code>traffic-port</code>, which is the port on which each target receives
     * traffic from the load balancer. If the protocol is GENEVE, the default is port
     * 80.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckPort(const Aws::String& value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The port the load balancer uses when performing health checks on targets. If
     * the protocol is HTTP, HTTPS, TCP, TLS, UDP, or TCP_UDP, the default is
     * <code>traffic-port</code>, which is the port on which each target receives
     * traffic from the load balancer. If the protocol is GENEVE, the default is port
     * 80.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckPort(Aws::String&& value) { SetHealthCheckPort(std::move(value)); return *this;}

    /**
     * <p>The port the load balancer uses when performing health checks on targets. If
     * the protocol is HTTP, HTTPS, TCP, TLS, UDP, or TCP_UDP, the default is
     * <code>traffic-port</code>, which is the port on which each target receives
     * traffic from the load balancer. If the protocol is GENEVE, the default is port
     * 80.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckPort(const char* value) { SetHealthCheckPort(value); return *this;}


    /**
     * <p>Indicates whether health checks are enabled. If the target type is
     * <code>lambda</code>, health checks are disabled by default but can be enabled.
     * If the target type is <code>instance</code> or <code>ip</code>, health checks
     * are always enabled and cannot be disabled.</p>
     */
    inline bool GetHealthCheckEnabled() const{ return m_healthCheckEnabled; }

    /**
     * <p>Indicates whether health checks are enabled. If the target type is
     * <code>lambda</code>, health checks are disabled by default but can be enabled.
     * If the target type is <code>instance</code> or <code>ip</code>, health checks
     * are always enabled and cannot be disabled.</p>
     */
    inline bool HealthCheckEnabledHasBeenSet() const { return m_healthCheckEnabledHasBeenSet; }

    /**
     * <p>Indicates whether health checks are enabled. If the target type is
     * <code>lambda</code>, health checks are disabled by default but can be enabled.
     * If the target type is <code>instance</code> or <code>ip</code>, health checks
     * are always enabled and cannot be disabled.</p>
     */
    inline void SetHealthCheckEnabled(bool value) { m_healthCheckEnabledHasBeenSet = true; m_healthCheckEnabled = value; }

    /**
     * <p>Indicates whether health checks are enabled. If the target type is
     * <code>lambda</code>, health checks are disabled by default but can be enabled.
     * If the target type is <code>instance</code> or <code>ip</code>, health checks
     * are always enabled and cannot be disabled.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckEnabled(bool value) { SetHealthCheckEnabled(value); return *this;}


    /**
     * <p>[HTTP/HTTPS health checks] The destination for health checks on the
     * targets.</p> <p>[HTTP1 or HTTP2 protocol version] The ping path. The default is
     * /.</p> <p>[GRPC protocol version] The path of a custom health check method with
     * the format /package.service/method. The default is /AWS.ALB/healthcheck.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }

    /**
     * <p>[HTTP/HTTPS health checks] The destination for health checks on the
     * targets.</p> <p>[HTTP1 or HTTP2 protocol version] The ping path. The default is
     * /.</p> <p>[GRPC protocol version] The path of a custom health check method with
     * the format /package.service/method. The default is /AWS.ALB/healthcheck.</p>
     */
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }

    /**
     * <p>[HTTP/HTTPS health checks] The destination for health checks on the
     * targets.</p> <p>[HTTP1 or HTTP2 protocol version] The ping path. The default is
     * /.</p> <p>[GRPC protocol version] The path of a custom health check method with
     * the format /package.service/method. The default is /AWS.ALB/healthcheck.</p>
     */
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>[HTTP/HTTPS health checks] The destination for health checks on the
     * targets.</p> <p>[HTTP1 or HTTP2 protocol version] The ping path. The default is
     * /.</p> <p>[GRPC protocol version] The path of a custom health check method with
     * the format /package.service/method. The default is /AWS.ALB/healthcheck.</p>
     */
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::move(value); }

    /**
     * <p>[HTTP/HTTPS health checks] The destination for health checks on the
     * targets.</p> <p>[HTTP1 or HTTP2 protocol version] The ping path. The default is
     * /.</p> <p>[GRPC protocol version] The path of a custom health check method with
     * the format /package.service/method. The default is /AWS.ALB/healthcheck.</p>
     */
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }

    /**
     * <p>[HTTP/HTTPS health checks] The destination for health checks on the
     * targets.</p> <p>[HTTP1 or HTTP2 protocol version] The ping path. The default is
     * /.</p> <p>[GRPC protocol version] The path of a custom health check method with
     * the format /package.service/method. The default is /AWS.ALB/healthcheck.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>[HTTP/HTTPS health checks] The destination for health checks on the
     * targets.</p> <p>[HTTP1 or HTTP2 protocol version] The ping path. The default is
     * /.</p> <p>[GRPC protocol version] The path of a custom health check method with
     * the format /package.service/method. The default is /AWS.ALB/healthcheck.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(std::move(value)); return *this;}

    /**
     * <p>[HTTP/HTTPS health checks] The destination for health checks on the
     * targets.</p> <p>[HTTP1 or HTTP2 protocol version] The ping path. The default is
     * /.</p> <p>[GRPC protocol version] The path of a custom health check method with
     * the format /package.service/method. The default is /AWS.ALB/healthcheck.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}


    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. For TCP health checks, the supported values are 10 and 30
     * seconds. If the target type is <code>instance</code> or <code>ip</code>, the
     * default is 30 seconds. If the target group protocol is GENEVE, the default is 10
     * seconds. If the target type is <code>lambda</code>, the default is 35
     * seconds.</p>
     */
    inline int GetHealthCheckIntervalSeconds() const{ return m_healthCheckIntervalSeconds; }

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. For TCP health checks, the supported values are 10 and 30
     * seconds. If the target type is <code>instance</code> or <code>ip</code>, the
     * default is 30 seconds. If the target group protocol is GENEVE, the default is 10
     * seconds. If the target type is <code>lambda</code>, the default is 35
     * seconds.</p>
     */
    inline bool HealthCheckIntervalSecondsHasBeenSet() const { return m_healthCheckIntervalSecondsHasBeenSet; }

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. For TCP health checks, the supported values are 10 and 30
     * seconds. If the target type is <code>instance</code> or <code>ip</code>, the
     * default is 30 seconds. If the target group protocol is GENEVE, the default is 10
     * seconds. If the target type is <code>lambda</code>, the default is 35
     * seconds.</p>
     */
    inline void SetHealthCheckIntervalSeconds(int value) { m_healthCheckIntervalSecondsHasBeenSet = true; m_healthCheckIntervalSeconds = value; }

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. For TCP health checks, the supported values are 10 and 30
     * seconds. If the target type is <code>instance</code> or <code>ip</code>, the
     * default is 30 seconds. If the target group protocol is GENEVE, the default is 10
     * seconds. If the target type is <code>lambda</code>, the default is 35
     * seconds.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckIntervalSeconds(int value) { SetHealthCheckIntervalSeconds(value); return *this;}


    /**
     * <p>The amount of time, in seconds, during which no response from a target means
     * a failed health check. For target groups with a protocol of HTTP, HTTPS, or
     * GENEVE, the default is 5 seconds. For target groups with a protocol of TCP or
     * TLS, this value must be 6 seconds for HTTP health checks and 10 seconds for TCP
     * and HTTPS health checks. If the target type is <code>lambda</code>, the default
     * is 30 seconds.</p>
     */
    inline int GetHealthCheckTimeoutSeconds() const{ return m_healthCheckTimeoutSeconds; }

    /**
     * <p>The amount of time, in seconds, during which no response from a target means
     * a failed health check. For target groups with a protocol of HTTP, HTTPS, or
     * GENEVE, the default is 5 seconds. For target groups with a protocol of TCP or
     * TLS, this value must be 6 seconds for HTTP health checks and 10 seconds for TCP
     * and HTTPS health checks. If the target type is <code>lambda</code>, the default
     * is 30 seconds.</p>
     */
    inline bool HealthCheckTimeoutSecondsHasBeenSet() const { return m_healthCheckTimeoutSecondsHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, during which no response from a target means
     * a failed health check. For target groups with a protocol of HTTP, HTTPS, or
     * GENEVE, the default is 5 seconds. For target groups with a protocol of TCP or
     * TLS, this value must be 6 seconds for HTTP health checks and 10 seconds for TCP
     * and HTTPS health checks. If the target type is <code>lambda</code>, the default
     * is 30 seconds.</p>
     */
    inline void SetHealthCheckTimeoutSeconds(int value) { m_healthCheckTimeoutSecondsHasBeenSet = true; m_healthCheckTimeoutSeconds = value; }

    /**
     * <p>The amount of time, in seconds, during which no response from a target means
     * a failed health check. For target groups with a protocol of HTTP, HTTPS, or
     * GENEVE, the default is 5 seconds. For target groups with a protocol of TCP or
     * TLS, this value must be 6 seconds for HTTP health checks and 10 seconds for TCP
     * and HTTPS health checks. If the target type is <code>lambda</code>, the default
     * is 30 seconds.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckTimeoutSeconds(int value) { SetHealthCheckTimeoutSeconds(value); return *this;}


    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy. For target groups with a protocol of HTTP or HTTPS,
     * the default is 5. For target groups with a protocol of TCP, TLS, or GENEVE, the
     * default is 3. If the target type is <code>lambda</code>, the default is 5.</p>
     */
    inline int GetHealthyThresholdCount() const{ return m_healthyThresholdCount; }

    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy. For target groups with a protocol of HTTP or HTTPS,
     * the default is 5. For target groups with a protocol of TCP, TLS, or GENEVE, the
     * default is 3. If the target type is <code>lambda</code>, the default is 5.</p>
     */
    inline bool HealthyThresholdCountHasBeenSet() const { return m_healthyThresholdCountHasBeenSet; }

    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy. For target groups with a protocol of HTTP or HTTPS,
     * the default is 5. For target groups with a protocol of TCP, TLS, or GENEVE, the
     * default is 3. If the target type is <code>lambda</code>, the default is 5.</p>
     */
    inline void SetHealthyThresholdCount(int value) { m_healthyThresholdCountHasBeenSet = true; m_healthyThresholdCount = value; }

    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy. For target groups with a protocol of HTTP or HTTPS,
     * the default is 5. For target groups with a protocol of TCP, TLS, or GENEVE, the
     * default is 3. If the target type is <code>lambda</code>, the default is 5.</p>
     */
    inline CreateTargetGroupRequest& WithHealthyThresholdCount(int value) { SetHealthyThresholdCount(value); return *this;}


    /**
     * <p>The number of consecutive health check failures required before considering a
     * target unhealthy. If the target group protocol is HTTP or HTTPS, the default is
     * 2. If the target group protocol is TCP or TLS, this value must be the same as
     * the healthy threshold count. If the target group protocol is GENEVE, the default
     * is 3. If the target type is <code>lambda</code>, the default is 2.</p>
     */
    inline int GetUnhealthyThresholdCount() const{ return m_unhealthyThresholdCount; }

    /**
     * <p>The number of consecutive health check failures required before considering a
     * target unhealthy. If the target group protocol is HTTP or HTTPS, the default is
     * 2. If the target group protocol is TCP or TLS, this value must be the same as
     * the healthy threshold count. If the target group protocol is GENEVE, the default
     * is 3. If the target type is <code>lambda</code>, the default is 2.</p>
     */
    inline bool UnhealthyThresholdCountHasBeenSet() const { return m_unhealthyThresholdCountHasBeenSet; }

    /**
     * <p>The number of consecutive health check failures required before considering a
     * target unhealthy. If the target group protocol is HTTP or HTTPS, the default is
     * 2. If the target group protocol is TCP or TLS, this value must be the same as
     * the healthy threshold count. If the target group protocol is GENEVE, the default
     * is 3. If the target type is <code>lambda</code>, the default is 2.</p>
     */
    inline void SetUnhealthyThresholdCount(int value) { m_unhealthyThresholdCountHasBeenSet = true; m_unhealthyThresholdCount = value; }

    /**
     * <p>The number of consecutive health check failures required before considering a
     * target unhealthy. If the target group protocol is HTTP or HTTPS, the default is
     * 2. If the target group protocol is TCP or TLS, this value must be the same as
     * the healthy threshold count. If the target group protocol is GENEVE, the default
     * is 3. If the target type is <code>lambda</code>, the default is 2.</p>
     */
    inline CreateTargetGroupRequest& WithUnhealthyThresholdCount(int value) { SetUnhealthyThresholdCount(value); return *this;}


    /**
     * <p>[HTTP/HTTPS health checks] The HTTP or gRPC codes to use when checking for a
     * successful response from a target.</p>
     */
    inline const Matcher& GetMatcher() const{ return m_matcher; }

    /**
     * <p>[HTTP/HTTPS health checks] The HTTP or gRPC codes to use when checking for a
     * successful response from a target.</p>
     */
    inline bool MatcherHasBeenSet() const { return m_matcherHasBeenSet; }

    /**
     * <p>[HTTP/HTTPS health checks] The HTTP or gRPC codes to use when checking for a
     * successful response from a target.</p>
     */
    inline void SetMatcher(const Matcher& value) { m_matcherHasBeenSet = true; m_matcher = value; }

    /**
     * <p>[HTTP/HTTPS health checks] The HTTP or gRPC codes to use when checking for a
     * successful response from a target.</p>
     */
    inline void SetMatcher(Matcher&& value) { m_matcherHasBeenSet = true; m_matcher = std::move(value); }

    /**
     * <p>[HTTP/HTTPS health checks] The HTTP or gRPC codes to use when checking for a
     * successful response from a target.</p>
     */
    inline CreateTargetGroupRequest& WithMatcher(const Matcher& value) { SetMatcher(value); return *this;}

    /**
     * <p>[HTTP/HTTPS health checks] The HTTP or gRPC codes to use when checking for a
     * successful response from a target.</p>
     */
    inline CreateTargetGroupRequest& WithMatcher(Matcher&& value) { SetMatcher(std::move(value)); return *this;}


    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. You can't specify targets for a target group using more than one
     * target type.</p> <ul> <li> <p> <code>instance</code> - Register targets by
     * instance ID. This is the default value.</p> </li> <li> <p> <code>ip</code> -
     * Register targets by IP address. You can specify IP addresses from the subnets of
     * the virtual private cloud (VPC) for the target group, the RFC 1918 range
     * (10.0.0.0/8, 172.16.0.0/12, and 192.168.0.0/16), and the RFC 6598 range
     * (100.64.0.0/10). You can't specify publicly routable IP addresses.</p> </li>
     * <li> <p> <code>lambda</code> - Register a single Lambda function as a
     * target.</p> </li> </ul>
     */
    inline const TargetTypeEnum& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. You can't specify targets for a target group using more than one
     * target type.</p> <ul> <li> <p> <code>instance</code> - Register targets by
     * instance ID. This is the default value.</p> </li> <li> <p> <code>ip</code> -
     * Register targets by IP address. You can specify IP addresses from the subnets of
     * the virtual private cloud (VPC) for the target group, the RFC 1918 range
     * (10.0.0.0/8, 172.16.0.0/12, and 192.168.0.0/16), and the RFC 6598 range
     * (100.64.0.0/10). You can't specify publicly routable IP addresses.</p> </li>
     * <li> <p> <code>lambda</code> - Register a single Lambda function as a
     * target.</p> </li> </ul>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. You can't specify targets for a target group using more than one
     * target type.</p> <ul> <li> <p> <code>instance</code> - Register targets by
     * instance ID. This is the default value.</p> </li> <li> <p> <code>ip</code> -
     * Register targets by IP address. You can specify IP addresses from the subnets of
     * the virtual private cloud (VPC) for the target group, the RFC 1918 range
     * (10.0.0.0/8, 172.16.0.0/12, and 192.168.0.0/16), and the RFC 6598 range
     * (100.64.0.0/10). You can't specify publicly routable IP addresses.</p> </li>
     * <li> <p> <code>lambda</code> - Register a single Lambda function as a
     * target.</p> </li> </ul>
     */
    inline void SetTargetType(const TargetTypeEnum& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. You can't specify targets for a target group using more than one
     * target type.</p> <ul> <li> <p> <code>instance</code> - Register targets by
     * instance ID. This is the default value.</p> </li> <li> <p> <code>ip</code> -
     * Register targets by IP address. You can specify IP addresses from the subnets of
     * the virtual private cloud (VPC) for the target group, the RFC 1918 range
     * (10.0.0.0/8, 172.16.0.0/12, and 192.168.0.0/16), and the RFC 6598 range
     * (100.64.0.0/10). You can't specify publicly routable IP addresses.</p> </li>
     * <li> <p> <code>lambda</code> - Register a single Lambda function as a
     * target.</p> </li> </ul>
     */
    inline void SetTargetType(TargetTypeEnum&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. You can't specify targets for a target group using more than one
     * target type.</p> <ul> <li> <p> <code>instance</code> - Register targets by
     * instance ID. This is the default value.</p> </li> <li> <p> <code>ip</code> -
     * Register targets by IP address. You can specify IP addresses from the subnets of
     * the virtual private cloud (VPC) for the target group, the RFC 1918 range
     * (10.0.0.0/8, 172.16.0.0/12, and 192.168.0.0/16), and the RFC 6598 range
     * (100.64.0.0/10). You can't specify publicly routable IP addresses.</p> </li>
     * <li> <p> <code>lambda</code> - Register a single Lambda function as a
     * target.</p> </li> </ul>
     */
    inline CreateTargetGroupRequest& WithTargetType(const TargetTypeEnum& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. You can't specify targets for a target group using more than one
     * target type.</p> <ul> <li> <p> <code>instance</code> - Register targets by
     * instance ID. This is the default value.</p> </li> <li> <p> <code>ip</code> -
     * Register targets by IP address. You can specify IP addresses from the subnets of
     * the virtual private cloud (VPC) for the target group, the RFC 1918 range
     * (10.0.0.0/8, 172.16.0.0/12, and 192.168.0.0/16), and the RFC 6598 range
     * (100.64.0.0/10). You can't specify publicly routable IP addresses.</p> </li>
     * <li> <p> <code>lambda</code> - Register a single Lambda function as a
     * target.</p> </li> </ul>
     */
    inline CreateTargetGroupRequest& WithTargetType(TargetTypeEnum&& value) { SetTargetType(std::move(value)); return *this;}


    /**
     * <p>The tags to assign to the target group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the target group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the target group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the target group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the target group.</p>
     */
    inline CreateTargetGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the target group.</p>
     */
    inline CreateTargetGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the target group.</p>
     */
    inline CreateTargetGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the target group.</p>
     */
    inline CreateTargetGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ProtocolEnum m_protocol;
    bool m_protocolHasBeenSet;

    Aws::String m_protocolVersion;
    bool m_protocolVersionHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    ProtocolEnum m_healthCheckProtocol;
    bool m_healthCheckProtocolHasBeenSet;

    Aws::String m_healthCheckPort;
    bool m_healthCheckPortHasBeenSet;

    bool m_healthCheckEnabled;
    bool m_healthCheckEnabledHasBeenSet;

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet;

    int m_healthCheckIntervalSeconds;
    bool m_healthCheckIntervalSecondsHasBeenSet;

    int m_healthCheckTimeoutSeconds;
    bool m_healthCheckTimeoutSecondsHasBeenSet;

    int m_healthyThresholdCount;
    bool m_healthyThresholdCountHasBeenSet;

    int m_unhealthyThresholdCount;
    bool m_unhealthyThresholdCountHasBeenSet;

    Matcher m_matcher;
    bool m_matcherHasBeenSet;

    TargetTypeEnum m_targetType;
    bool m_targetTypeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
