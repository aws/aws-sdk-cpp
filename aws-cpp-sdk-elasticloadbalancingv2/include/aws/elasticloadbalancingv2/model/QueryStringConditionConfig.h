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
  class AWS_ELASTICLOADBALANCINGV2_API QueryStringConditionConfig
  {
  public:
    QueryStringConditionConfig();
    QueryStringConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    QueryStringConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more key/value pairs or values to find in the query string. The
     * maximum size of each string is 128 characters. The comparison is case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character). To search for a literal
     * '*' or '?' character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline const Aws::Vector<QueryStringKeyValuePair>& GetValues() const{ return m_values; }

    /**
     * <p>One or more key/value pairs or values to find in the query string. The
     * maximum size of each string is 128 characters. The comparison is case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character). To search for a literal
     * '*' or '?' character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>One or more key/value pairs or values to find in the query string. The
     * maximum size of each string is 128 characters. The comparison is case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character). To search for a literal
     * '*' or '?' character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline void SetValues(const Aws::Vector<QueryStringKeyValuePair>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>One or more key/value pairs or values to find in the query string. The
     * maximum size of each string is 128 characters. The comparison is case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character). To search for a literal
     * '*' or '?' character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline void SetValues(Aws::Vector<QueryStringKeyValuePair>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>One or more key/value pairs or values to find in the query string. The
     * maximum size of each string is 128 characters. The comparison is case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character). To search for a literal
     * '*' or '?' character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline QueryStringConditionConfig& WithValues(const Aws::Vector<QueryStringKeyValuePair>& value) { SetValues(value); return *this;}

    /**
     * <p>One or more key/value pairs or values to find in the query string. The
     * maximum size of each string is 128 characters. The comparison is case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character). To search for a literal
     * '*' or '?' character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline QueryStringConditionConfig& WithValues(Aws::Vector<QueryStringKeyValuePair>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>One or more key/value pairs or values to find in the query string. The
     * maximum size of each string is 128 characters. The comparison is case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character). To search for a literal
     * '*' or '?' character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline QueryStringConditionConfig& AddValues(const QueryStringKeyValuePair& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>One or more key/value pairs or values to find in the query string. The
     * maximum size of each string is 128 characters. The comparison is case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character). To search for a literal
     * '*' or '?' character in a query string, you must escape these characters in
     * <code>Values</code> using a '\' character.</p> <p>If you specify multiple
     * key/value pairs or values, the condition is satisfied if one of them is found in
     * the query string.</p>
     */
    inline QueryStringConditionConfig& AddValues(QueryStringKeyValuePair&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<QueryStringKeyValuePair> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
