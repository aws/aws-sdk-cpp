/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/QueryStringKeyValuePair.h>
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
   * <p>Information about a query string condition.</p> <p>The query string component
   * of a URI starts after the first '?' character and is terminated by either a '#'
   * character or the end of the URI. A typical query string contains key/value pairs
   * separated by '&amp;' characters. The allowed characters are specified by RFC
   * 3986. Any character can be percentage encoded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/QueryStringConditionConfig">AWS
   * API Reference</a></p>
   */
  class QueryStringConditionConfig
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API QueryStringConditionConfig();
    AWS_ELASTICLOADBALANCINGV2_API QueryStringConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API QueryStringConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The key/value pairs or values to find in the query string. The maximum size
     * of each string is 128 characters. The comparison is case insensitive. The
     * following wildcard characters are supported: * (matches 0 or more characters)
     * and ? (matches exactly 1 character). To search for a literal '*' or '?'
     * character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline const Aws::Vector<QueryStringKeyValuePair>& GetValues() const{ return m_values; }

    /**
     * <p>The key/value pairs or values to find in the query string. The maximum size
     * of each string is 128 characters. The comparison is case insensitive. The
     * following wildcard characters are supported: * (matches 0 or more characters)
     * and ? (matches exactly 1 character). To search for a literal '*' or '?'
     * character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The key/value pairs or values to find in the query string. The maximum size
     * of each string is 128 characters. The comparison is case insensitive. The
     * following wildcard characters are supported: * (matches 0 or more characters)
     * and ? (matches exactly 1 character). To search for a literal '*' or '?'
     * character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline void SetValues(const Aws::Vector<QueryStringKeyValuePair>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The key/value pairs or values to find in the query string. The maximum size
     * of each string is 128 characters. The comparison is case insensitive. The
     * following wildcard characters are supported: * (matches 0 or more characters)
     * and ? (matches exactly 1 character). To search for a literal '*' or '?'
     * character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline void SetValues(Aws::Vector<QueryStringKeyValuePair>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The key/value pairs or values to find in the query string. The maximum size
     * of each string is 128 characters. The comparison is case insensitive. The
     * following wildcard characters are supported: * (matches 0 or more characters)
     * and ? (matches exactly 1 character). To search for a literal '*' or '?'
     * character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline QueryStringConditionConfig& WithValues(const Aws::Vector<QueryStringKeyValuePair>& value) { SetValues(value); return *this;}

    /**
     * <p>The key/value pairs or values to find in the query string. The maximum size
     * of each string is 128 characters. The comparison is case insensitive. The
     * following wildcard characters are supported: * (matches 0 or more characters)
     * and ? (matches exactly 1 character). To search for a literal '*' or '?'
     * character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline QueryStringConditionConfig& WithValues(Aws::Vector<QueryStringKeyValuePair>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The key/value pairs or values to find in the query string. The maximum size
     * of each string is 128 characters. The comparison is case insensitive. The
     * following wildcard characters are supported: * (matches 0 or more characters)
     * and ? (matches exactly 1 character). To search for a literal '*' or '?'
     * character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline QueryStringConditionConfig& AddValues(const QueryStringKeyValuePair& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The key/value pairs or values to find in the query string. The maximum size
     * of each string is 128 characters. The comparison is case insensitive. The
     * following wildcard characters are supported: * (matches 0 or more characters)
     * and ? (matches exactly 1 character). To search for a literal '*' or '?'
     * character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline QueryStringConditionConfig& AddValues(QueryStringKeyValuePair&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<QueryStringKeyValuePair> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
