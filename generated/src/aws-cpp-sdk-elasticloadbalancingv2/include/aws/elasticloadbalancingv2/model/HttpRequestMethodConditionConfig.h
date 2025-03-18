/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about an HTTP method condition.</p> <p>HTTP defines a set of
   * request methods, also referred to as HTTP verbs. For more information, see the
   * <a href="https://www.iana.org/assignments/http-methods/http-methods.xhtml">HTTP
   * Method Registry</a>. You can also define custom HTTP methods.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/HttpRequestMethodConditionConfig">AWS
   * API Reference</a></p>
   */
  class HttpRequestMethodConditionConfig
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API HttpRequestMethodConditionConfig() = default;
    AWS_ELASTICLOADBALANCINGV2_API HttpRequestMethodConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API HttpRequestMethodConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the request method. The maximum size is 40 characters. The
     * allowed characters are A-Z, hyphen (-), and underscore (_). The comparison is
     * case sensitive. Wildcards are not supported; therefore, the method name must be
     * an exact match.</p> <p>If you specify multiple strings, the condition is
     * satisfied if one of the strings matches the HTTP request method. We recommend
     * that you route GET and HEAD requests in the same way, because the response to a
     * HEAD request may be cached.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    HttpRequestMethodConditionConfig& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    HttpRequestMethodConditionConfig& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
