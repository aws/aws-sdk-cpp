/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a load balancer attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/LoadBalancerAttribute">AWS
   * API Reference</a></p>
   */
  class LoadBalancerAttribute
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAttribute();
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p> <code>deletion_protection.enabled</code> -
     * Indicates whether deletion protection is enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross-zone
     * load balancing is enabled. The possible values are <code>true</code> and
     * <code>false</code>. The default for Network Load Balancers and Gateway Load
     * Balancers is <code>false</code>. The default for Application Load Balancers is
     * <code>true</code>, and cannot be changed.</p> </li> </ul> <p>The following
     * attributes are supported by both Application Load Balancers and Network Load
     * Balancers:</p> <ul> <li> <p> <code>access_logs.s3.enabled</code> - Indicates
     * whether access logs are enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>access_logs.s3.bucket</code> - The name of the S3 bucket for the access
     * logs. This attribute is required if access logs are enabled. The bucket must
     * exist in the same region as the load balancer and have a bucket policy that
     * grants Elastic Load Balancing permissions to write to the bucket.</p> </li> <li>
     * <p> <code>access_logs.s3.prefix</code> - The prefix for the location in the S3
     * bucket for the access logs.</p> </li> <li> <p>
     * <code>ipv6.deny_all_igw_traffic</code> - Blocks internet gateway (IGW) access to
     * the load balancer. It is set to <code>false</code> for internet-facing load
     * balancers and <code>true</code> for internal load balancers, preventing
     * unintended access to your internal load balancer through an internet
     * gateway.</p> </li> </ul> <p>The following attributes are supported by only
     * Application Load Balancers:</p> <ul> <li> <p>
     * <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in seconds.
     * The valid range is 1-4000 seconds. The default is 60 seconds.</p> </li> <li> <p>
     * <code>routing.http.desync_mitigation_mode</code> - Determines how the load
     * balancer handles requests that might pose a security risk to your application.
     * The possible values are <code>monitor</code>, <code>defensive</code>, and
     * <code>strictest</code>. The default is <code>defensive</code>.</p> </li> <li>
     * <p> <code>routing.http.drop_invalid_header_fields.enabled</code> - Indicates
     * whether HTTP headers with invalid header fields are removed by the load balancer
     * (<code>true</code>) or routed to targets (<code>false</code>). The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.preserve_host_header.enabled</code> - Indicates whether the
     * Application Load Balancer should preserve the <code>Host</code> header in the
     * HTTP request and send it to the target without any change. The possible values
     * are <code>true</code> and <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.x_amzn_tls_version_and_cipher_suite.enabled</code> -
     * Indicates whether the two headers (<code>x-amzn-tls-version</code> and
     * <code>x-amzn-tls-cipher-suite</code>), which contain information about the
     * negotiated TLS version and cipher suite, are added to the client request before
     * sending it to the target. The <code>x-amzn-tls-version</code> header has
     * information about the TLS protocol version negotiated with the client, and the
     * <code>x-amzn-tls-cipher-suite</code> header has information about the cipher
     * suite negotiated with the client. Both headers are in OpenSSL format. The
     * possible values for the attribute are <code>true</code> and <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.xff_client_port.enabled</code> - Indicates whether the
     * <code>X-Forwarded-For</code> header should preserve the source port that the
     * client used to connect to the load balancer. The possible values are
     * <code>true</code> and <code>false</code>. The default is <code>false</code>.</p>
     * </li> <li> <p> <code>routing.http.xff_header_processing.mode</code> - Enables
     * you to modify, preserve, or remove the <code>X-Forwarded-For</code> header in
     * the HTTP request before the Application Load Balancer sends the request to the
     * target. The possible values are <code>append</code>, <code>preserve</code>, and
     * <code>remove</code>. The default is <code>append</code>.</p> <ul> <li> <p>If the
     * value is <code>append</code>, the Application Load Balancer adds the client IP
     * address (of the last hop) to the <code>X-Forwarded-For</code> header in the HTTP
     * request before it sends it to targets.</p> </li> <li> <p>If the value is
     * <code>preserve</code> the Application Load Balancer preserves the
     * <code>X-Forwarded-For</code> header in the HTTP request, and sends it to targets
     * without any change.</p> </li> <li> <p>If the value is <code>remove</code>, the
     * Application Load Balancer removes the <code>X-Forwarded-For</code> header in the
     * HTTP request before it sends it to targets.</p> </li> </ul> </li> <li> <p>
     * <code>routing.http2.enabled</code> - Indicates whether HTTP/2 is enabled. The
     * possible values are <code>true</code> and <code>false</code>. The default is
     * <code>true</code>. Elastic Load Balancing requires that message header names
     * contain only alphanumeric characters and hyphens.</p> </li> <li> <p>
     * <code>waf.fail_open.enabled</code> - Indicates whether to allow a WAF-enabled
     * load balancer to route requests to targets if it is unable to forward the
     * request to Amazon Web Services WAF. The possible values are <code>true</code>
     * and <code>false</code>. The default is <code>false</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p> <code>deletion_protection.enabled</code> -
     * Indicates whether deletion protection is enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross-zone
     * load balancing is enabled. The possible values are <code>true</code> and
     * <code>false</code>. The default for Network Load Balancers and Gateway Load
     * Balancers is <code>false</code>. The default for Application Load Balancers is
     * <code>true</code>, and cannot be changed.</p> </li> </ul> <p>The following
     * attributes are supported by both Application Load Balancers and Network Load
     * Balancers:</p> <ul> <li> <p> <code>access_logs.s3.enabled</code> - Indicates
     * whether access logs are enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>access_logs.s3.bucket</code> - The name of the S3 bucket for the access
     * logs. This attribute is required if access logs are enabled. The bucket must
     * exist in the same region as the load balancer and have a bucket policy that
     * grants Elastic Load Balancing permissions to write to the bucket.</p> </li> <li>
     * <p> <code>access_logs.s3.prefix</code> - The prefix for the location in the S3
     * bucket for the access logs.</p> </li> <li> <p>
     * <code>ipv6.deny_all_igw_traffic</code> - Blocks internet gateway (IGW) access to
     * the load balancer. It is set to <code>false</code> for internet-facing load
     * balancers and <code>true</code> for internal load balancers, preventing
     * unintended access to your internal load balancer through an internet
     * gateway.</p> </li> </ul> <p>The following attributes are supported by only
     * Application Load Balancers:</p> <ul> <li> <p>
     * <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in seconds.
     * The valid range is 1-4000 seconds. The default is 60 seconds.</p> </li> <li> <p>
     * <code>routing.http.desync_mitigation_mode</code> - Determines how the load
     * balancer handles requests that might pose a security risk to your application.
     * The possible values are <code>monitor</code>, <code>defensive</code>, and
     * <code>strictest</code>. The default is <code>defensive</code>.</p> </li> <li>
     * <p> <code>routing.http.drop_invalid_header_fields.enabled</code> - Indicates
     * whether HTTP headers with invalid header fields are removed by the load balancer
     * (<code>true</code>) or routed to targets (<code>false</code>). The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.preserve_host_header.enabled</code> - Indicates whether the
     * Application Load Balancer should preserve the <code>Host</code> header in the
     * HTTP request and send it to the target without any change. The possible values
     * are <code>true</code> and <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.x_amzn_tls_version_and_cipher_suite.enabled</code> -
     * Indicates whether the two headers (<code>x-amzn-tls-version</code> and
     * <code>x-amzn-tls-cipher-suite</code>), which contain information about the
     * negotiated TLS version and cipher suite, are added to the client request before
     * sending it to the target. The <code>x-amzn-tls-version</code> header has
     * information about the TLS protocol version negotiated with the client, and the
     * <code>x-amzn-tls-cipher-suite</code> header has information about the cipher
     * suite negotiated with the client. Both headers are in OpenSSL format. The
     * possible values for the attribute are <code>true</code> and <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.xff_client_port.enabled</code> - Indicates whether the
     * <code>X-Forwarded-For</code> header should preserve the source port that the
     * client used to connect to the load balancer. The possible values are
     * <code>true</code> and <code>false</code>. The default is <code>false</code>.</p>
     * </li> <li> <p> <code>routing.http.xff_header_processing.mode</code> - Enables
     * you to modify, preserve, or remove the <code>X-Forwarded-For</code> header in
     * the HTTP request before the Application Load Balancer sends the request to the
     * target. The possible values are <code>append</code>, <code>preserve</code>, and
     * <code>remove</code>. The default is <code>append</code>.</p> <ul> <li> <p>If the
     * value is <code>append</code>, the Application Load Balancer adds the client IP
     * address (of the last hop) to the <code>X-Forwarded-For</code> header in the HTTP
     * request before it sends it to targets.</p> </li> <li> <p>If the value is
     * <code>preserve</code> the Application Load Balancer preserves the
     * <code>X-Forwarded-For</code> header in the HTTP request, and sends it to targets
     * without any change.</p> </li> <li> <p>If the value is <code>remove</code>, the
     * Application Load Balancer removes the <code>X-Forwarded-For</code> header in the
     * HTTP request before it sends it to targets.</p> </li> </ul> </li> <li> <p>
     * <code>routing.http2.enabled</code> - Indicates whether HTTP/2 is enabled. The
     * possible values are <code>true</code> and <code>false</code>. The default is
     * <code>true</code>. Elastic Load Balancing requires that message header names
     * contain only alphanumeric characters and hyphens.</p> </li> <li> <p>
     * <code>waf.fail_open.enabled</code> - Indicates whether to allow a WAF-enabled
     * load balancer to route requests to targets if it is unable to forward the
     * request to Amazon Web Services WAF. The possible values are <code>true</code>
     * and <code>false</code>. The default is <code>false</code>.</p> </li> </ul>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p> <code>deletion_protection.enabled</code> -
     * Indicates whether deletion protection is enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross-zone
     * load balancing is enabled. The possible values are <code>true</code> and
     * <code>false</code>. The default for Network Load Balancers and Gateway Load
     * Balancers is <code>false</code>. The default for Application Load Balancers is
     * <code>true</code>, and cannot be changed.</p> </li> </ul> <p>The following
     * attributes are supported by both Application Load Balancers and Network Load
     * Balancers:</p> <ul> <li> <p> <code>access_logs.s3.enabled</code> - Indicates
     * whether access logs are enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>access_logs.s3.bucket</code> - The name of the S3 bucket for the access
     * logs. This attribute is required if access logs are enabled. The bucket must
     * exist in the same region as the load balancer and have a bucket policy that
     * grants Elastic Load Balancing permissions to write to the bucket.</p> </li> <li>
     * <p> <code>access_logs.s3.prefix</code> - The prefix for the location in the S3
     * bucket for the access logs.</p> </li> <li> <p>
     * <code>ipv6.deny_all_igw_traffic</code> - Blocks internet gateway (IGW) access to
     * the load balancer. It is set to <code>false</code> for internet-facing load
     * balancers and <code>true</code> for internal load balancers, preventing
     * unintended access to your internal load balancer through an internet
     * gateway.</p> </li> </ul> <p>The following attributes are supported by only
     * Application Load Balancers:</p> <ul> <li> <p>
     * <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in seconds.
     * The valid range is 1-4000 seconds. The default is 60 seconds.</p> </li> <li> <p>
     * <code>routing.http.desync_mitigation_mode</code> - Determines how the load
     * balancer handles requests that might pose a security risk to your application.
     * The possible values are <code>monitor</code>, <code>defensive</code>, and
     * <code>strictest</code>. The default is <code>defensive</code>.</p> </li> <li>
     * <p> <code>routing.http.drop_invalid_header_fields.enabled</code> - Indicates
     * whether HTTP headers with invalid header fields are removed by the load balancer
     * (<code>true</code>) or routed to targets (<code>false</code>). The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.preserve_host_header.enabled</code> - Indicates whether the
     * Application Load Balancer should preserve the <code>Host</code> header in the
     * HTTP request and send it to the target without any change. The possible values
     * are <code>true</code> and <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.x_amzn_tls_version_and_cipher_suite.enabled</code> -
     * Indicates whether the two headers (<code>x-amzn-tls-version</code> and
     * <code>x-amzn-tls-cipher-suite</code>), which contain information about the
     * negotiated TLS version and cipher suite, are added to the client request before
     * sending it to the target. The <code>x-amzn-tls-version</code> header has
     * information about the TLS protocol version negotiated with the client, and the
     * <code>x-amzn-tls-cipher-suite</code> header has information about the cipher
     * suite negotiated with the client. Both headers are in OpenSSL format. The
     * possible values for the attribute are <code>true</code> and <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.xff_client_port.enabled</code> - Indicates whether the
     * <code>X-Forwarded-For</code> header should preserve the source port that the
     * client used to connect to the load balancer. The possible values are
     * <code>true</code> and <code>false</code>. The default is <code>false</code>.</p>
     * </li> <li> <p> <code>routing.http.xff_header_processing.mode</code> - Enables
     * you to modify, preserve, or remove the <code>X-Forwarded-For</code> header in
     * the HTTP request before the Application Load Balancer sends the request to the
     * target. The possible values are <code>append</code>, <code>preserve</code>, and
     * <code>remove</code>. The default is <code>append</code>.</p> <ul> <li> <p>If the
     * value is <code>append</code>, the Application Load Balancer adds the client IP
     * address (of the last hop) to the <code>X-Forwarded-For</code> header in the HTTP
     * request before it sends it to targets.</p> </li> <li> <p>If the value is
     * <code>preserve</code> the Application Load Balancer preserves the
     * <code>X-Forwarded-For</code> header in the HTTP request, and sends it to targets
     * without any change.</p> </li> <li> <p>If the value is <code>remove</code>, the
     * Application Load Balancer removes the <code>X-Forwarded-For</code> header in the
     * HTTP request before it sends it to targets.</p> </li> </ul> </li> <li> <p>
     * <code>routing.http2.enabled</code> - Indicates whether HTTP/2 is enabled. The
     * possible values are <code>true</code> and <code>false</code>. The default is
     * <code>true</code>. Elastic Load Balancing requires that message header names
     * contain only alphanumeric characters and hyphens.</p> </li> <li> <p>
     * <code>waf.fail_open.enabled</code> - Indicates whether to allow a WAF-enabled
     * load balancer to route requests to targets if it is unable to forward the
     * request to Amazon Web Services WAF. The possible values are <code>true</code>
     * and <code>false</code>. The default is <code>false</code>.</p> </li> </ul>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p> <code>deletion_protection.enabled</code> -
     * Indicates whether deletion protection is enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross-zone
     * load balancing is enabled. The possible values are <code>true</code> and
     * <code>false</code>. The default for Network Load Balancers and Gateway Load
     * Balancers is <code>false</code>. The default for Application Load Balancers is
     * <code>true</code>, and cannot be changed.</p> </li> </ul> <p>The following
     * attributes are supported by both Application Load Balancers and Network Load
     * Balancers:</p> <ul> <li> <p> <code>access_logs.s3.enabled</code> - Indicates
     * whether access logs are enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>access_logs.s3.bucket</code> - The name of the S3 bucket for the access
     * logs. This attribute is required if access logs are enabled. The bucket must
     * exist in the same region as the load balancer and have a bucket policy that
     * grants Elastic Load Balancing permissions to write to the bucket.</p> </li> <li>
     * <p> <code>access_logs.s3.prefix</code> - The prefix for the location in the S3
     * bucket for the access logs.</p> </li> <li> <p>
     * <code>ipv6.deny_all_igw_traffic</code> - Blocks internet gateway (IGW) access to
     * the load balancer. It is set to <code>false</code> for internet-facing load
     * balancers and <code>true</code> for internal load balancers, preventing
     * unintended access to your internal load balancer through an internet
     * gateway.</p> </li> </ul> <p>The following attributes are supported by only
     * Application Load Balancers:</p> <ul> <li> <p>
     * <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in seconds.
     * The valid range is 1-4000 seconds. The default is 60 seconds.</p> </li> <li> <p>
     * <code>routing.http.desync_mitigation_mode</code> - Determines how the load
     * balancer handles requests that might pose a security risk to your application.
     * The possible values are <code>monitor</code>, <code>defensive</code>, and
     * <code>strictest</code>. The default is <code>defensive</code>.</p> </li> <li>
     * <p> <code>routing.http.drop_invalid_header_fields.enabled</code> - Indicates
     * whether HTTP headers with invalid header fields are removed by the load balancer
     * (<code>true</code>) or routed to targets (<code>false</code>). The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.preserve_host_header.enabled</code> - Indicates whether the
     * Application Load Balancer should preserve the <code>Host</code> header in the
     * HTTP request and send it to the target without any change. The possible values
     * are <code>true</code> and <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.x_amzn_tls_version_and_cipher_suite.enabled</code> -
     * Indicates whether the two headers (<code>x-amzn-tls-version</code> and
     * <code>x-amzn-tls-cipher-suite</code>), which contain information about the
     * negotiated TLS version and cipher suite, are added to the client request before
     * sending it to the target. The <code>x-amzn-tls-version</code> header has
     * information about the TLS protocol version negotiated with the client, and the
     * <code>x-amzn-tls-cipher-suite</code> header has information about the cipher
     * suite negotiated with the client. Both headers are in OpenSSL format. The
     * possible values for the attribute are <code>true</code> and <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.xff_client_port.enabled</code> - Indicates whether the
     * <code>X-Forwarded-For</code> header should preserve the source port that the
     * client used to connect to the load balancer. The possible values are
     * <code>true</code> and <code>false</code>. The default is <code>false</code>.</p>
     * </li> <li> <p> <code>routing.http.xff_header_processing.mode</code> - Enables
     * you to modify, preserve, or remove the <code>X-Forwarded-For</code> header in
     * the HTTP request before the Application Load Balancer sends the request to the
     * target. The possible values are <code>append</code>, <code>preserve</code>, and
     * <code>remove</code>. The default is <code>append</code>.</p> <ul> <li> <p>If the
     * value is <code>append</code>, the Application Load Balancer adds the client IP
     * address (of the last hop) to the <code>X-Forwarded-For</code> header in the HTTP
     * request before it sends it to targets.</p> </li> <li> <p>If the value is
     * <code>preserve</code> the Application Load Balancer preserves the
     * <code>X-Forwarded-For</code> header in the HTTP request, and sends it to targets
     * without any change.</p> </li> <li> <p>If the value is <code>remove</code>, the
     * Application Load Balancer removes the <code>X-Forwarded-For</code> header in the
     * HTTP request before it sends it to targets.</p> </li> </ul> </li> <li> <p>
     * <code>routing.http2.enabled</code> - Indicates whether HTTP/2 is enabled. The
     * possible values are <code>true</code> and <code>false</code>. The default is
     * <code>true</code>. Elastic Load Balancing requires that message header names
     * contain only alphanumeric characters and hyphens.</p> </li> <li> <p>
     * <code>waf.fail_open.enabled</code> - Indicates whether to allow a WAF-enabled
     * load balancer to route requests to targets if it is unable to forward the
     * request to Amazon Web Services WAF. The possible values are <code>true</code>
     * and <code>false</code>. The default is <code>false</code>.</p> </li> </ul>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p> <code>deletion_protection.enabled</code> -
     * Indicates whether deletion protection is enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross-zone
     * load balancing is enabled. The possible values are <code>true</code> and
     * <code>false</code>. The default for Network Load Balancers and Gateway Load
     * Balancers is <code>false</code>. The default for Application Load Balancers is
     * <code>true</code>, and cannot be changed.</p> </li> </ul> <p>The following
     * attributes are supported by both Application Load Balancers and Network Load
     * Balancers:</p> <ul> <li> <p> <code>access_logs.s3.enabled</code> - Indicates
     * whether access logs are enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>access_logs.s3.bucket</code> - The name of the S3 bucket for the access
     * logs. This attribute is required if access logs are enabled. The bucket must
     * exist in the same region as the load balancer and have a bucket policy that
     * grants Elastic Load Balancing permissions to write to the bucket.</p> </li> <li>
     * <p> <code>access_logs.s3.prefix</code> - The prefix for the location in the S3
     * bucket for the access logs.</p> </li> <li> <p>
     * <code>ipv6.deny_all_igw_traffic</code> - Blocks internet gateway (IGW) access to
     * the load balancer. It is set to <code>false</code> for internet-facing load
     * balancers and <code>true</code> for internal load balancers, preventing
     * unintended access to your internal load balancer through an internet
     * gateway.</p> </li> </ul> <p>The following attributes are supported by only
     * Application Load Balancers:</p> <ul> <li> <p>
     * <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in seconds.
     * The valid range is 1-4000 seconds. The default is 60 seconds.</p> </li> <li> <p>
     * <code>routing.http.desync_mitigation_mode</code> - Determines how the load
     * balancer handles requests that might pose a security risk to your application.
     * The possible values are <code>monitor</code>, <code>defensive</code>, and
     * <code>strictest</code>. The default is <code>defensive</code>.</p> </li> <li>
     * <p> <code>routing.http.drop_invalid_header_fields.enabled</code> - Indicates
     * whether HTTP headers with invalid header fields are removed by the load balancer
     * (<code>true</code>) or routed to targets (<code>false</code>). The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.preserve_host_header.enabled</code> - Indicates whether the
     * Application Load Balancer should preserve the <code>Host</code> header in the
     * HTTP request and send it to the target without any change. The possible values
     * are <code>true</code> and <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.x_amzn_tls_version_and_cipher_suite.enabled</code> -
     * Indicates whether the two headers (<code>x-amzn-tls-version</code> and
     * <code>x-amzn-tls-cipher-suite</code>), which contain information about the
     * negotiated TLS version and cipher suite, are added to the client request before
     * sending it to the target. The <code>x-amzn-tls-version</code> header has
     * information about the TLS protocol version negotiated with the client, and the
     * <code>x-amzn-tls-cipher-suite</code> header has information about the cipher
     * suite negotiated with the client. Both headers are in OpenSSL format. The
     * possible values for the attribute are <code>true</code> and <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.xff_client_port.enabled</code> - Indicates whether the
     * <code>X-Forwarded-For</code> header should preserve the source port that the
     * client used to connect to the load balancer. The possible values are
     * <code>true</code> and <code>false</code>. The default is <code>false</code>.</p>
     * </li> <li> <p> <code>routing.http.xff_header_processing.mode</code> - Enables
     * you to modify, preserve, or remove the <code>X-Forwarded-For</code> header in
     * the HTTP request before the Application Load Balancer sends the request to the
     * target. The possible values are <code>append</code>, <code>preserve</code>, and
     * <code>remove</code>. The default is <code>append</code>.</p> <ul> <li> <p>If the
     * value is <code>append</code>, the Application Load Balancer adds the client IP
     * address (of the last hop) to the <code>X-Forwarded-For</code> header in the HTTP
     * request before it sends it to targets.</p> </li> <li> <p>If the value is
     * <code>preserve</code> the Application Load Balancer preserves the
     * <code>X-Forwarded-For</code> header in the HTTP request, and sends it to targets
     * without any change.</p> </li> <li> <p>If the value is <code>remove</code>, the
     * Application Load Balancer removes the <code>X-Forwarded-For</code> header in the
     * HTTP request before it sends it to targets.</p> </li> </ul> </li> <li> <p>
     * <code>routing.http2.enabled</code> - Indicates whether HTTP/2 is enabled. The
     * possible values are <code>true</code> and <code>false</code>. The default is
     * <code>true</code>. Elastic Load Balancing requires that message header names
     * contain only alphanumeric characters and hyphens.</p> </li> <li> <p>
     * <code>waf.fail_open.enabled</code> - Indicates whether to allow a WAF-enabled
     * load balancer to route requests to targets if it is unable to forward the
     * request to Amazon Web Services WAF. The possible values are <code>true</code>
     * and <code>false</code>. The default is <code>false</code>.</p> </li> </ul>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p> <code>deletion_protection.enabled</code> -
     * Indicates whether deletion protection is enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross-zone
     * load balancing is enabled. The possible values are <code>true</code> and
     * <code>false</code>. The default for Network Load Balancers and Gateway Load
     * Balancers is <code>false</code>. The default for Application Load Balancers is
     * <code>true</code>, and cannot be changed.</p> </li> </ul> <p>The following
     * attributes are supported by both Application Load Balancers and Network Load
     * Balancers:</p> <ul> <li> <p> <code>access_logs.s3.enabled</code> - Indicates
     * whether access logs are enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>access_logs.s3.bucket</code> - The name of the S3 bucket for the access
     * logs. This attribute is required if access logs are enabled. The bucket must
     * exist in the same region as the load balancer and have a bucket policy that
     * grants Elastic Load Balancing permissions to write to the bucket.</p> </li> <li>
     * <p> <code>access_logs.s3.prefix</code> - The prefix for the location in the S3
     * bucket for the access logs.</p> </li> <li> <p>
     * <code>ipv6.deny_all_igw_traffic</code> - Blocks internet gateway (IGW) access to
     * the load balancer. It is set to <code>false</code> for internet-facing load
     * balancers and <code>true</code> for internal load balancers, preventing
     * unintended access to your internal load balancer through an internet
     * gateway.</p> </li> </ul> <p>The following attributes are supported by only
     * Application Load Balancers:</p> <ul> <li> <p>
     * <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in seconds.
     * The valid range is 1-4000 seconds. The default is 60 seconds.</p> </li> <li> <p>
     * <code>routing.http.desync_mitigation_mode</code> - Determines how the load
     * balancer handles requests that might pose a security risk to your application.
     * The possible values are <code>monitor</code>, <code>defensive</code>, and
     * <code>strictest</code>. The default is <code>defensive</code>.</p> </li> <li>
     * <p> <code>routing.http.drop_invalid_header_fields.enabled</code> - Indicates
     * whether HTTP headers with invalid header fields are removed by the load balancer
     * (<code>true</code>) or routed to targets (<code>false</code>). The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.preserve_host_header.enabled</code> - Indicates whether the
     * Application Load Balancer should preserve the <code>Host</code> header in the
     * HTTP request and send it to the target without any change. The possible values
     * are <code>true</code> and <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.x_amzn_tls_version_and_cipher_suite.enabled</code> -
     * Indicates whether the two headers (<code>x-amzn-tls-version</code> and
     * <code>x-amzn-tls-cipher-suite</code>), which contain information about the
     * negotiated TLS version and cipher suite, are added to the client request before
     * sending it to the target. The <code>x-amzn-tls-version</code> header has
     * information about the TLS protocol version negotiated with the client, and the
     * <code>x-amzn-tls-cipher-suite</code> header has information about the cipher
     * suite negotiated with the client. Both headers are in OpenSSL format. The
     * possible values for the attribute are <code>true</code> and <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.xff_client_port.enabled</code> - Indicates whether the
     * <code>X-Forwarded-For</code> header should preserve the source port that the
     * client used to connect to the load balancer. The possible values are
     * <code>true</code> and <code>false</code>. The default is <code>false</code>.</p>
     * </li> <li> <p> <code>routing.http.xff_header_processing.mode</code> - Enables
     * you to modify, preserve, or remove the <code>X-Forwarded-For</code> header in
     * the HTTP request before the Application Load Balancer sends the request to the
     * target. The possible values are <code>append</code>, <code>preserve</code>, and
     * <code>remove</code>. The default is <code>append</code>.</p> <ul> <li> <p>If the
     * value is <code>append</code>, the Application Load Balancer adds the client IP
     * address (of the last hop) to the <code>X-Forwarded-For</code> header in the HTTP
     * request before it sends it to targets.</p> </li> <li> <p>If the value is
     * <code>preserve</code> the Application Load Balancer preserves the
     * <code>X-Forwarded-For</code> header in the HTTP request, and sends it to targets
     * without any change.</p> </li> <li> <p>If the value is <code>remove</code>, the
     * Application Load Balancer removes the <code>X-Forwarded-For</code> header in the
     * HTTP request before it sends it to targets.</p> </li> </ul> </li> <li> <p>
     * <code>routing.http2.enabled</code> - Indicates whether HTTP/2 is enabled. The
     * possible values are <code>true</code> and <code>false</code>. The default is
     * <code>true</code>. Elastic Load Balancing requires that message header names
     * contain only alphanumeric characters and hyphens.</p> </li> <li> <p>
     * <code>waf.fail_open.enabled</code> - Indicates whether to allow a WAF-enabled
     * load balancer to route requests to targets if it is unable to forward the
     * request to Amazon Web Services WAF. The possible values are <code>true</code>
     * and <code>false</code>. The default is <code>false</code>.</p> </li> </ul>
     */
    inline LoadBalancerAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p> <code>deletion_protection.enabled</code> -
     * Indicates whether deletion protection is enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross-zone
     * load balancing is enabled. The possible values are <code>true</code> and
     * <code>false</code>. The default for Network Load Balancers and Gateway Load
     * Balancers is <code>false</code>. The default for Application Load Balancers is
     * <code>true</code>, and cannot be changed.</p> </li> </ul> <p>The following
     * attributes are supported by both Application Load Balancers and Network Load
     * Balancers:</p> <ul> <li> <p> <code>access_logs.s3.enabled</code> - Indicates
     * whether access logs are enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>access_logs.s3.bucket</code> - The name of the S3 bucket for the access
     * logs. This attribute is required if access logs are enabled. The bucket must
     * exist in the same region as the load balancer and have a bucket policy that
     * grants Elastic Load Balancing permissions to write to the bucket.</p> </li> <li>
     * <p> <code>access_logs.s3.prefix</code> - The prefix for the location in the S3
     * bucket for the access logs.</p> </li> <li> <p>
     * <code>ipv6.deny_all_igw_traffic</code> - Blocks internet gateway (IGW) access to
     * the load balancer. It is set to <code>false</code> for internet-facing load
     * balancers and <code>true</code> for internal load balancers, preventing
     * unintended access to your internal load balancer through an internet
     * gateway.</p> </li> </ul> <p>The following attributes are supported by only
     * Application Load Balancers:</p> <ul> <li> <p>
     * <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in seconds.
     * The valid range is 1-4000 seconds. The default is 60 seconds.</p> </li> <li> <p>
     * <code>routing.http.desync_mitigation_mode</code> - Determines how the load
     * balancer handles requests that might pose a security risk to your application.
     * The possible values are <code>monitor</code>, <code>defensive</code>, and
     * <code>strictest</code>. The default is <code>defensive</code>.</p> </li> <li>
     * <p> <code>routing.http.drop_invalid_header_fields.enabled</code> - Indicates
     * whether HTTP headers with invalid header fields are removed by the load balancer
     * (<code>true</code>) or routed to targets (<code>false</code>). The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.preserve_host_header.enabled</code> - Indicates whether the
     * Application Load Balancer should preserve the <code>Host</code> header in the
     * HTTP request and send it to the target without any change. The possible values
     * are <code>true</code> and <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.x_amzn_tls_version_and_cipher_suite.enabled</code> -
     * Indicates whether the two headers (<code>x-amzn-tls-version</code> and
     * <code>x-amzn-tls-cipher-suite</code>), which contain information about the
     * negotiated TLS version and cipher suite, are added to the client request before
     * sending it to the target. The <code>x-amzn-tls-version</code> header has
     * information about the TLS protocol version negotiated with the client, and the
     * <code>x-amzn-tls-cipher-suite</code> header has information about the cipher
     * suite negotiated with the client. Both headers are in OpenSSL format. The
     * possible values for the attribute are <code>true</code> and <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.xff_client_port.enabled</code> - Indicates whether the
     * <code>X-Forwarded-For</code> header should preserve the source port that the
     * client used to connect to the load balancer. The possible values are
     * <code>true</code> and <code>false</code>. The default is <code>false</code>.</p>
     * </li> <li> <p> <code>routing.http.xff_header_processing.mode</code> - Enables
     * you to modify, preserve, or remove the <code>X-Forwarded-For</code> header in
     * the HTTP request before the Application Load Balancer sends the request to the
     * target. The possible values are <code>append</code>, <code>preserve</code>, and
     * <code>remove</code>. The default is <code>append</code>.</p> <ul> <li> <p>If the
     * value is <code>append</code>, the Application Load Balancer adds the client IP
     * address (of the last hop) to the <code>X-Forwarded-For</code> header in the HTTP
     * request before it sends it to targets.</p> </li> <li> <p>If the value is
     * <code>preserve</code> the Application Load Balancer preserves the
     * <code>X-Forwarded-For</code> header in the HTTP request, and sends it to targets
     * without any change.</p> </li> <li> <p>If the value is <code>remove</code>, the
     * Application Load Balancer removes the <code>X-Forwarded-For</code> header in the
     * HTTP request before it sends it to targets.</p> </li> </ul> </li> <li> <p>
     * <code>routing.http2.enabled</code> - Indicates whether HTTP/2 is enabled. The
     * possible values are <code>true</code> and <code>false</code>. The default is
     * <code>true</code>. Elastic Load Balancing requires that message header names
     * contain only alphanumeric characters and hyphens.</p> </li> <li> <p>
     * <code>waf.fail_open.enabled</code> - Indicates whether to allow a WAF-enabled
     * load balancer to route requests to targets if it is unable to forward the
     * request to Amazon Web Services WAF. The possible values are <code>true</code>
     * and <code>false</code>. The default is <code>false</code>.</p> </li> </ul>
     */
    inline LoadBalancerAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p> <code>deletion_protection.enabled</code> -
     * Indicates whether deletion protection is enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross-zone
     * load balancing is enabled. The possible values are <code>true</code> and
     * <code>false</code>. The default for Network Load Balancers and Gateway Load
     * Balancers is <code>false</code>. The default for Application Load Balancers is
     * <code>true</code>, and cannot be changed.</p> </li> </ul> <p>The following
     * attributes are supported by both Application Load Balancers and Network Load
     * Balancers:</p> <ul> <li> <p> <code>access_logs.s3.enabled</code> - Indicates
     * whether access logs are enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>access_logs.s3.bucket</code> - The name of the S3 bucket for the access
     * logs. This attribute is required if access logs are enabled. The bucket must
     * exist in the same region as the load balancer and have a bucket policy that
     * grants Elastic Load Balancing permissions to write to the bucket.</p> </li> <li>
     * <p> <code>access_logs.s3.prefix</code> - The prefix for the location in the S3
     * bucket for the access logs.</p> </li> <li> <p>
     * <code>ipv6.deny_all_igw_traffic</code> - Blocks internet gateway (IGW) access to
     * the load balancer. It is set to <code>false</code> for internet-facing load
     * balancers and <code>true</code> for internal load balancers, preventing
     * unintended access to your internal load balancer through an internet
     * gateway.</p> </li> </ul> <p>The following attributes are supported by only
     * Application Load Balancers:</p> <ul> <li> <p>
     * <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in seconds.
     * The valid range is 1-4000 seconds. The default is 60 seconds.</p> </li> <li> <p>
     * <code>routing.http.desync_mitigation_mode</code> - Determines how the load
     * balancer handles requests that might pose a security risk to your application.
     * The possible values are <code>monitor</code>, <code>defensive</code>, and
     * <code>strictest</code>. The default is <code>defensive</code>.</p> </li> <li>
     * <p> <code>routing.http.drop_invalid_header_fields.enabled</code> - Indicates
     * whether HTTP headers with invalid header fields are removed by the load balancer
     * (<code>true</code>) or routed to targets (<code>false</code>). The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.preserve_host_header.enabled</code> - Indicates whether the
     * Application Load Balancer should preserve the <code>Host</code> header in the
     * HTTP request and send it to the target without any change. The possible values
     * are <code>true</code> and <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.x_amzn_tls_version_and_cipher_suite.enabled</code> -
     * Indicates whether the two headers (<code>x-amzn-tls-version</code> and
     * <code>x-amzn-tls-cipher-suite</code>), which contain information about the
     * negotiated TLS version and cipher suite, are added to the client request before
     * sending it to the target. The <code>x-amzn-tls-version</code> header has
     * information about the TLS protocol version negotiated with the client, and the
     * <code>x-amzn-tls-cipher-suite</code> header has information about the cipher
     * suite negotiated with the client. Both headers are in OpenSSL format. The
     * possible values for the attribute are <code>true</code> and <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>routing.http.xff_client_port.enabled</code> - Indicates whether the
     * <code>X-Forwarded-For</code> header should preserve the source port that the
     * client used to connect to the load balancer. The possible values are
     * <code>true</code> and <code>false</code>. The default is <code>false</code>.</p>
     * </li> <li> <p> <code>routing.http.xff_header_processing.mode</code> - Enables
     * you to modify, preserve, or remove the <code>X-Forwarded-For</code> header in
     * the HTTP request before the Application Load Balancer sends the request to the
     * target. The possible values are <code>append</code>, <code>preserve</code>, and
     * <code>remove</code>. The default is <code>append</code>.</p> <ul> <li> <p>If the
     * value is <code>append</code>, the Application Load Balancer adds the client IP
     * address (of the last hop) to the <code>X-Forwarded-For</code> header in the HTTP
     * request before it sends it to targets.</p> </li> <li> <p>If the value is
     * <code>preserve</code> the Application Load Balancer preserves the
     * <code>X-Forwarded-For</code> header in the HTTP request, and sends it to targets
     * without any change.</p> </li> <li> <p>If the value is <code>remove</code>, the
     * Application Load Balancer removes the <code>X-Forwarded-For</code> header in the
     * HTTP request before it sends it to targets.</p> </li> </ul> </li> <li> <p>
     * <code>routing.http2.enabled</code> - Indicates whether HTTP/2 is enabled. The
     * possible values are <code>true</code> and <code>false</code>. The default is
     * <code>true</code>. Elastic Load Balancing requires that message header names
     * contain only alphanumeric characters and hyphens.</p> </li> <li> <p>
     * <code>waf.fail_open.enabled</code> - Indicates whether to allow a WAF-enabled
     * load balancer to route requests to targets if it is unable to forward the
     * request to Amazon Web Services WAF. The possible values are <code>true</code>
     * and <code>false</code>. The default is <code>false</code>.</p> </li> </ul>
     */
    inline LoadBalancerAttribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of the attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the attribute.</p>
     */
    inline LoadBalancerAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline LoadBalancerAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline LoadBalancerAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
