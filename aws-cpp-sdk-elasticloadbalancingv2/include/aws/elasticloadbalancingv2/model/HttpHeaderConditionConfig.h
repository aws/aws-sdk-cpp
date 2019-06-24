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
  class AWS_ELASTICLOADBALANCINGV2_API HttpHeaderConditionConfig
  {
  public:
    HttpHeaderConditionConfig();
    HttpHeaderConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    HttpHeaderConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the HTTP header field. The maximum size is 40 characters. The
     * header name is case insensitive. The allowed characters are specified by RFC
     * 7230. Wildcards are not supported.</p> <p>You can't use an HTTP header condition
     * to specify the host header. Use <a>HostHeaderConditionConfig</a> to specify a
     * host header condition.</p>
     */
    inline const Aws::String& GetHttpHeaderName() const{ return m_httpHeaderName; }

    /**
     * <p>The name of the HTTP header field. The maximum size is 40 characters. The
     * header name is case insensitive. The allowed characters are specified by RFC
     * 7230. Wildcards are not supported.</p> <p>You can't use an HTTP header condition
     * to specify the host header. Use <a>HostHeaderConditionConfig</a> to specify a
     * host header condition.</p>
     */
    inline bool HttpHeaderNameHasBeenSet() const { return m_httpHeaderNameHasBeenSet; }

    /**
     * <p>The name of the HTTP header field. The maximum size is 40 characters. The
     * header name is case insensitive. The allowed characters are specified by RFC
     * 7230. Wildcards are not supported.</p> <p>You can't use an HTTP header condition
     * to specify the host header. Use <a>HostHeaderConditionConfig</a> to specify a
     * host header condition.</p>
     */
    inline void SetHttpHeaderName(const Aws::String& value) { m_httpHeaderNameHasBeenSet = true; m_httpHeaderName = value; }

    /**
     * <p>The name of the HTTP header field. The maximum size is 40 characters. The
     * header name is case insensitive. The allowed characters are specified by RFC
     * 7230. Wildcards are not supported.</p> <p>You can't use an HTTP header condition
     * to specify the host header. Use <a>HostHeaderConditionConfig</a> to specify a
     * host header condition.</p>
     */
    inline void SetHttpHeaderName(Aws::String&& value) { m_httpHeaderNameHasBeenSet = true; m_httpHeaderName = std::move(value); }

    /**
     * <p>The name of the HTTP header field. The maximum size is 40 characters. The
     * header name is case insensitive. The allowed characters are specified by RFC
     * 7230. Wildcards are not supported.</p> <p>You can't use an HTTP header condition
     * to specify the host header. Use <a>HostHeaderConditionConfig</a> to specify a
     * host header condition.</p>
     */
    inline void SetHttpHeaderName(const char* value) { m_httpHeaderNameHasBeenSet = true; m_httpHeaderName.assign(value); }

    /**
     * <p>The name of the HTTP header field. The maximum size is 40 characters. The
     * header name is case insensitive. The allowed characters are specified by RFC
     * 7230. Wildcards are not supported.</p> <p>You can't use an HTTP header condition
     * to specify the host header. Use <a>HostHeaderConditionConfig</a> to specify a
     * host header condition.</p>
     */
    inline HttpHeaderConditionConfig& WithHttpHeaderName(const Aws::String& value) { SetHttpHeaderName(value); return *this;}

    /**
     * <p>The name of the HTTP header field. The maximum size is 40 characters. The
     * header name is case insensitive. The allowed characters are specified by RFC
     * 7230. Wildcards are not supported.</p> <p>You can't use an HTTP header condition
     * to specify the host header. Use <a>HostHeaderConditionConfig</a> to specify a
     * host header condition.</p>
     */
    inline HttpHeaderConditionConfig& WithHttpHeaderName(Aws::String&& value) { SetHttpHeaderName(std::move(value)); return *this;}

    /**
     * <p>The name of the HTTP header field. The maximum size is 40 characters. The
     * header name is case insensitive. The allowed characters are specified by RFC
     * 7230. Wildcards are not supported.</p> <p>You can't use an HTTP header condition
     * to specify the host header. Use <a>HostHeaderConditionConfig</a> to specify a
     * host header condition.</p>
     */
    inline HttpHeaderConditionConfig& WithHttpHeaderName(const char* value) { SetHttpHeaderName(value); return *this;}


    /**
     * <p>One or more strings to compare against the value of the HTTP header. The
     * maximum size of each string is 128 characters. The comparison strings are case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character).</p> <p>If the same header
     * appears multiple times in the request, we search them in order until a match is
     * found.</p> <p>If you specify multiple strings, the condition is satisfied if one
     * of the strings matches the value of the HTTP header. To require that all of the
     * strings are a match, create one condition per string.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>One or more strings to compare against the value of the HTTP header. The
     * maximum size of each string is 128 characters. The comparison strings are case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character).</p> <p>If the same header
     * appears multiple times in the request, we search them in order until a match is
     * found.</p> <p>If you specify multiple strings, the condition is satisfied if one
     * of the strings matches the value of the HTTP header. To require that all of the
     * strings are a match, create one condition per string.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>One or more strings to compare against the value of the HTTP header. The
     * maximum size of each string is 128 characters. The comparison strings are case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character).</p> <p>If the same header
     * appears multiple times in the request, we search them in order until a match is
     * found.</p> <p>If you specify multiple strings, the condition is satisfied if one
     * of the strings matches the value of the HTTP header. To require that all of the
     * strings are a match, create one condition per string.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>One or more strings to compare against the value of the HTTP header. The
     * maximum size of each string is 128 characters. The comparison strings are case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character).</p> <p>If the same header
     * appears multiple times in the request, we search them in order until a match is
     * found.</p> <p>If you specify multiple strings, the condition is satisfied if one
     * of the strings matches the value of the HTTP header. To require that all of the
     * strings are a match, create one condition per string.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>One or more strings to compare against the value of the HTTP header. The
     * maximum size of each string is 128 characters. The comparison strings are case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character).</p> <p>If the same header
     * appears multiple times in the request, we search them in order until a match is
     * found.</p> <p>If you specify multiple strings, the condition is satisfied if one
     * of the strings matches the value of the HTTP header. To require that all of the
     * strings are a match, create one condition per string.</p>
     */
    inline HttpHeaderConditionConfig& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>One or more strings to compare against the value of the HTTP header. The
     * maximum size of each string is 128 characters. The comparison strings are case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character).</p> <p>If the same header
     * appears multiple times in the request, we search them in order until a match is
     * found.</p> <p>If you specify multiple strings, the condition is satisfied if one
     * of the strings matches the value of the HTTP header. To require that all of the
     * strings are a match, create one condition per string.</p>
     */
    inline HttpHeaderConditionConfig& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>One or more strings to compare against the value of the HTTP header. The
     * maximum size of each string is 128 characters. The comparison strings are case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character).</p> <p>If the same header
     * appears multiple times in the request, we search them in order until a match is
     * found.</p> <p>If you specify multiple strings, the condition is satisfied if one
     * of the strings matches the value of the HTTP header. To require that all of the
     * strings are a match, create one condition per string.</p>
     */
    inline HttpHeaderConditionConfig& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>One or more strings to compare against the value of the HTTP header. The
     * maximum size of each string is 128 characters. The comparison strings are case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character).</p> <p>If the same header
     * appears multiple times in the request, we search them in order until a match is
     * found.</p> <p>If you specify multiple strings, the condition is satisfied if one
     * of the strings matches the value of the HTTP header. To require that all of the
     * strings are a match, create one condition per string.</p>
     */
    inline HttpHeaderConditionConfig& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more strings to compare against the value of the HTTP header. The
     * maximum size of each string is 128 characters. The comparison strings are case
     * insensitive. The following wildcard characters are supported: * (matches 0 or
     * more characters) and ? (matches exactly 1 character).</p> <p>If the same header
     * appears multiple times in the request, we search them in order until a match is
     * found.</p> <p>If you specify multiple strings, the condition is satisfied if one
     * of the strings matches the value of the HTTP header. To require that all of the
     * strings are a match, create one condition per string.</p>
     */
    inline HttpHeaderConditionConfig& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_httpHeaderName;
    bool m_httpHeaderNameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
