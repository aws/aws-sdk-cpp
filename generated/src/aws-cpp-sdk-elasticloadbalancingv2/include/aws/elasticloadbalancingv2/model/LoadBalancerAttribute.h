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
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAttribute() = default;
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p> <code>deletion_protection.enabled</code> -
     * Indicates whether deletion protection is enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross-zone
     * load balancing is enabled. The possible values are <code>true</code> and
     * <code>false</code>. The default for Network Load Balancers and Gateway Load
     * Balancers is <code>false</code>. The default for Application Load Balancers is
     * <code>true</code>, and can't be changed.</p> </li> </ul> <p>The following
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
     * gateway.</p> </li> <li> <p> <code>zonal_shift.config.enabled</code> - Indicates
     * whether zonal shift is enabled. The possible values are <code>true</code> and
     * <code>false</code>. The default is <code>false</code>.</p> </li> </ul> <p>The
     * following attributes are supported by only Application Load Balancers:</p> <ul>
     * <li> <p> <code>idle_timeout.timeout_seconds</code> - The idle timeout value, in
     * seconds. The valid range is 1-4000 seconds. The default is 60 seconds.</p> </li>
     * <li> <p> <code>client_keep_alive.seconds</code> - The client keep alive value,
     * in seconds. The valid range is 60-604800 seconds. The default is 3600
     * seconds.</p> </li> <li> <p> <code>connection_logs.s3.enabled</code> - Indicates
     * whether connection logs are enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>connection_logs.s3.bucket</code> - The name of the S3 bucket for the
     * connection logs. This attribute is required if connection logs are enabled. The
     * bucket must exist in the same region as the load balancer and have a bucket
     * policy that grants Elastic Load Balancing permissions to write to the
     * bucket.</p> </li> <li> <p> <code>connection_logs.s3.prefix</code> - The prefix
     * for the location in the S3 bucket for the connection logs.</p> </li> <li> <p>
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
     * <p>The following attributes are supported by only Network Load Balancers:</p>
     * <ul> <li> <p> <code>dns_record.client_routing_policy</code> - Indicates how
     * traffic is distributed among the load balancer Availability Zones. The possible
     * values are <code>availability_zone_affinity</code> with 100 percent zonal
     * affinity, <code>partial_availability_zone_affinity</code> with 85 percent zonal
     * affinity, and <code>any_availability_zone</code> with 0 percent zonal
     * affinity.</p> </li> <li> <p> <code>secondary_ips.auto_assigned.per_subnet</code>
     * - The number of secondary IP addresses to configure for your load balancer
     * nodes. Use to address port allocation errors if you can't add targets. The valid
     * range is 0 to 7. The default is 0. After you set this value, you can't decrease
     * it.</p> </li> </ul>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    LoadBalancerAttribute& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the attribute.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    LoadBalancerAttribute& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
