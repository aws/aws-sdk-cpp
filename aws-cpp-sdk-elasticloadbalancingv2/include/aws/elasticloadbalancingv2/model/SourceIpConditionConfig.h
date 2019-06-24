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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about a source IP condition.</p> <p>You can use this condition to
   * route based on the IP address of the source that connects to the load balancer.
   * If a client is behind a proxy, this is the IP address of the proxy not the IP
   * address of the client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SourceIpConditionConfig">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API SourceIpConditionConfig
  {
  public:
    SourceIpConditionConfig();
    SourceIpConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    SourceIpConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more source IP addresses, in CIDR format. You can use both IPv4 and
     * IPv6 addresses. Wildcards are not supported.</p> <p>If you specify multiple
     * addresses, the condition is satisfied if the source IP address of the request
     * matches one of the CIDR blocks. This condition is not satisfied by the addresses
     * in the X-Forwarded-For header. To search for addresses in the X-Forwarded-For
     * header, use <a>HttpHeaderConditionConfig</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>One or more source IP addresses, in CIDR format. You can use both IPv4 and
     * IPv6 addresses. Wildcards are not supported.</p> <p>If you specify multiple
     * addresses, the condition is satisfied if the source IP address of the request
     * matches one of the CIDR blocks. This condition is not satisfied by the addresses
     * in the X-Forwarded-For header. To search for addresses in the X-Forwarded-For
     * header, use <a>HttpHeaderConditionConfig</a>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>One or more source IP addresses, in CIDR format. You can use both IPv4 and
     * IPv6 addresses. Wildcards are not supported.</p> <p>If you specify multiple
     * addresses, the condition is satisfied if the source IP address of the request
     * matches one of the CIDR blocks. This condition is not satisfied by the addresses
     * in the X-Forwarded-For header. To search for addresses in the X-Forwarded-For
     * header, use <a>HttpHeaderConditionConfig</a>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>One or more source IP addresses, in CIDR format. You can use both IPv4 and
     * IPv6 addresses. Wildcards are not supported.</p> <p>If you specify multiple
     * addresses, the condition is satisfied if the source IP address of the request
     * matches one of the CIDR blocks. This condition is not satisfied by the addresses
     * in the X-Forwarded-For header. To search for addresses in the X-Forwarded-For
     * header, use <a>HttpHeaderConditionConfig</a>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>One or more source IP addresses, in CIDR format. You can use both IPv4 and
     * IPv6 addresses. Wildcards are not supported.</p> <p>If you specify multiple
     * addresses, the condition is satisfied if the source IP address of the request
     * matches one of the CIDR blocks. This condition is not satisfied by the addresses
     * in the X-Forwarded-For header. To search for addresses in the X-Forwarded-For
     * header, use <a>HttpHeaderConditionConfig</a>.</p>
     */
    inline SourceIpConditionConfig& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>One or more source IP addresses, in CIDR format. You can use both IPv4 and
     * IPv6 addresses. Wildcards are not supported.</p> <p>If you specify multiple
     * addresses, the condition is satisfied if the source IP address of the request
     * matches one of the CIDR blocks. This condition is not satisfied by the addresses
     * in the X-Forwarded-For header. To search for addresses in the X-Forwarded-For
     * header, use <a>HttpHeaderConditionConfig</a>.</p>
     */
    inline SourceIpConditionConfig& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>One or more source IP addresses, in CIDR format. You can use both IPv4 and
     * IPv6 addresses. Wildcards are not supported.</p> <p>If you specify multiple
     * addresses, the condition is satisfied if the source IP address of the request
     * matches one of the CIDR blocks. This condition is not satisfied by the addresses
     * in the X-Forwarded-For header. To search for addresses in the X-Forwarded-For
     * header, use <a>HttpHeaderConditionConfig</a>.</p>
     */
    inline SourceIpConditionConfig& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>One or more source IP addresses, in CIDR format. You can use both IPv4 and
     * IPv6 addresses. Wildcards are not supported.</p> <p>If you specify multiple
     * addresses, the condition is satisfied if the source IP address of the request
     * matches one of the CIDR blocks. This condition is not satisfied by the addresses
     * in the X-Forwarded-For header. To search for addresses in the X-Forwarded-For
     * header, use <a>HttpHeaderConditionConfig</a>.</p>
     */
    inline SourceIpConditionConfig& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more source IP addresses, in CIDR format. You can use both IPv4 and
     * IPv6 addresses. Wildcards are not supported.</p> <p>If you specify multiple
     * addresses, the condition is satisfied if the source IP address of the request
     * matches one of the CIDR blocks. This condition is not satisfied by the addresses
     * in the X-Forwarded-For header. To search for addresses in the X-Forwarded-For
     * header, use <a>HttpHeaderConditionConfig</a>.</p>
     */
    inline SourceIpConditionConfig& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
