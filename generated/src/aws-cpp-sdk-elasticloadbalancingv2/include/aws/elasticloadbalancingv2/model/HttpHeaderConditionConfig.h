/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about an HTTP header condition.</p> <p>There is a set of standard
   * HTTP header fields. You can also define custom HTTP header fields.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/HttpHeaderConditionConfig">AWS
   * API Reference</a></p>
   */
  class HttpHeaderConditionConfig
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API HttpHeaderConditionConfig() = default;
    AWS_ELASTICLOADBALANCINGV2_API HttpHeaderConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API HttpHeaderConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the HTTP header field. The maximum size is 40 characters. The
     * header name is case insensitive. The allowed characters are specified by RFC
     * 7230. Wildcards are not supported.</p> <p>You can't use an HTTP header condition
     * to specify the host header. Instead, use a <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html#host-conditions">host
     * condition</a>.</p>
     */
    inline const Aws::String& GetHttpHeaderName() const { return m_httpHeaderName; }
    inline bool HttpHeaderNameHasBeenSet() const { return m_httpHeaderNameHasBeenSet; }
    template<typename HttpHeaderNameT = Aws::String>
    void SetHttpHeaderName(HttpHeaderNameT&& value) { m_httpHeaderNameHasBeenSet = true; m_httpHeaderName = std::forward<HttpHeaderNameT>(value); }
    template<typename HttpHeaderNameT = Aws::String>
    HttpHeaderConditionConfig& WithHttpHeaderName(HttpHeaderNameT&& value) { SetHttpHeaderName(std::forward<HttpHeaderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strings to compare against the value of the HTTP header. The maximum size
     * of each string is 128 characters. The comparison strings are case insensitive.
     * The following wildcard characters are supported: * (matches 0 or more
     * characters) and ? (matches exactly 1 character).</p> <p>If the same header
     * appears multiple times in the request, we search them in order until a match is
     * found.</p> <p>If you specify multiple strings, the condition is satisfied if one
     * of the strings matches the value of the HTTP header. To require that all of the
     * strings are a match, create one condition per string.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    HttpHeaderConditionConfig& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    HttpHeaderConditionConfig& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_httpHeaderName;
    bool m_httpHeaderNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
