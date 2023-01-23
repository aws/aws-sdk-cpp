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
   * <p>Information about a path pattern condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/PathPatternConditionConfig">AWS
   * API Reference</a></p>
   */
  class PathPatternConditionConfig
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API PathPatternConditionConfig();
    AWS_ELASTICLOADBALANCINGV2_API PathPatternConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API PathPatternConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The path patterns to compare against the request URL. The maximum size of
     * each string is 128 characters. The comparison is case sensitive. The following
     * wildcard characters are supported: * (matches 0 or more characters) and ?
     * (matches exactly 1 character).</p> <p>If you specify multiple strings, the
     * condition is satisfied if one of them matches the request URL. The path pattern
     * is compared only to the path of the URL, not to its query string. To compare
     * against the query string, use <a>QueryStringConditionConfig</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The path patterns to compare against the request URL. The maximum size of
     * each string is 128 characters. The comparison is case sensitive. The following
     * wildcard characters are supported: * (matches 0 or more characters) and ?
     * (matches exactly 1 character).</p> <p>If you specify multiple strings, the
     * condition is satisfied if one of them matches the request URL. The path pattern
     * is compared only to the path of the URL, not to its query string. To compare
     * against the query string, use <a>QueryStringConditionConfig</a>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The path patterns to compare against the request URL. The maximum size of
     * each string is 128 characters. The comparison is case sensitive. The following
     * wildcard characters are supported: * (matches 0 or more characters) and ?
     * (matches exactly 1 character).</p> <p>If you specify multiple strings, the
     * condition is satisfied if one of them matches the request URL. The path pattern
     * is compared only to the path of the URL, not to its query string. To compare
     * against the query string, use <a>QueryStringConditionConfig</a>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The path patterns to compare against the request URL. The maximum size of
     * each string is 128 characters. The comparison is case sensitive. The following
     * wildcard characters are supported: * (matches 0 or more characters) and ?
     * (matches exactly 1 character).</p> <p>If you specify multiple strings, the
     * condition is satisfied if one of them matches the request URL. The path pattern
     * is compared only to the path of the URL, not to its query string. To compare
     * against the query string, use <a>QueryStringConditionConfig</a>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The path patterns to compare against the request URL. The maximum size of
     * each string is 128 characters. The comparison is case sensitive. The following
     * wildcard characters are supported: * (matches 0 or more characters) and ?
     * (matches exactly 1 character).</p> <p>If you specify multiple strings, the
     * condition is satisfied if one of them matches the request URL. The path pattern
     * is compared only to the path of the URL, not to its query string. To compare
     * against the query string, use <a>QueryStringConditionConfig</a>.</p>
     */
    inline PathPatternConditionConfig& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The path patterns to compare against the request URL. The maximum size of
     * each string is 128 characters. The comparison is case sensitive. The following
     * wildcard characters are supported: * (matches 0 or more characters) and ?
     * (matches exactly 1 character).</p> <p>If you specify multiple strings, the
     * condition is satisfied if one of them matches the request URL. The path pattern
     * is compared only to the path of the URL, not to its query string. To compare
     * against the query string, use <a>QueryStringConditionConfig</a>.</p>
     */
    inline PathPatternConditionConfig& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The path patterns to compare against the request URL. The maximum size of
     * each string is 128 characters. The comparison is case sensitive. The following
     * wildcard characters are supported: * (matches 0 or more characters) and ?
     * (matches exactly 1 character).</p> <p>If you specify multiple strings, the
     * condition is satisfied if one of them matches the request URL. The path pattern
     * is compared only to the path of the URL, not to its query string. To compare
     * against the query string, use <a>QueryStringConditionConfig</a>.</p>
     */
    inline PathPatternConditionConfig& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The path patterns to compare against the request URL. The maximum size of
     * each string is 128 characters. The comparison is case sensitive. The following
     * wildcard characters are supported: * (matches 0 or more characters) and ?
     * (matches exactly 1 character).</p> <p>If you specify multiple strings, the
     * condition is satisfied if one of them matches the request URL. The path pattern
     * is compared only to the path of the URL, not to its query string. To compare
     * against the query string, use <a>QueryStringConditionConfig</a>.</p>
     */
    inline PathPatternConditionConfig& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The path patterns to compare against the request URL. The maximum size of
     * each string is 128 characters. The comparison is case sensitive. The following
     * wildcard characters are supported: * (matches 0 or more characters) and ?
     * (matches exactly 1 character).</p> <p>If you specify multiple strings, the
     * condition is satisfied if one of them matches the request URL. The path pattern
     * is compared only to the path of the URL, not to its query string. To compare
     * against the query string, use <a>QueryStringConditionConfig</a>.</p>
     */
    inline PathPatternConditionConfig& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
