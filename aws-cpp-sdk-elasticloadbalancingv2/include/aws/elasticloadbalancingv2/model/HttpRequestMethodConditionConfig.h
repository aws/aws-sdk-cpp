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
   * <p>Information about an HTTP method condition.</p> <p>HTTP defines a set of
   * request methods, also referred to as HTTP verbs. For more information, see the
   * <a href="https://www.iana.org/assignments/http-methods/http-methods.xhtml">HTTP
   * Method Registry</a>. You can also define custom HTTP methods.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/HttpRequestMethodConditionConfig">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API HttpRequestMethodConditionConfig
  {
  public:
    HttpRequestMethodConditionConfig();
    HttpRequestMethodConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    HttpRequestMethodConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the request method. The maximum size is 40 characters. The
     * allowed characters are A-Z, hyphen (-), and underscore (_). The comparison is
     * case sensitive. Wildcards are not supported; therefore, the method name must be
     * an exact match.</p> <p>If you specify multiple strings, the condition is
     * satisfied if one of the strings matches the HTTP request method. We recommend
     * that you route GET and HEAD requests in the same way, because the response to a
     * HEAD request may be cached.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The name of the request method. The maximum size is 40 characters. The
     * allowed characters are A-Z, hyphen (-), and underscore (_). The comparison is
     * case sensitive. Wildcards are not supported; therefore, the method name must be
     * an exact match.</p> <p>If you specify multiple strings, the condition is
     * satisfied if one of the strings matches the HTTP request method. We recommend
     * that you route GET and HEAD requests in the same way, because the response to a
     * HEAD request may be cached.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The name of the request method. The maximum size is 40 characters. The
     * allowed characters are A-Z, hyphen (-), and underscore (_). The comparison is
     * case sensitive. Wildcards are not supported; therefore, the method name must be
     * an exact match.</p> <p>If you specify multiple strings, the condition is
     * satisfied if one of the strings matches the HTTP request method. We recommend
     * that you route GET and HEAD requests in the same way, because the response to a
     * HEAD request may be cached.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The name of the request method. The maximum size is 40 characters. The
     * allowed characters are A-Z, hyphen (-), and underscore (_). The comparison is
     * case sensitive. Wildcards are not supported; therefore, the method name must be
     * an exact match.</p> <p>If you specify multiple strings, the condition is
     * satisfied if one of the strings matches the HTTP request method. We recommend
     * that you route GET and HEAD requests in the same way, because the response to a
     * HEAD request may be cached.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The name of the request method. The maximum size is 40 characters. The
     * allowed characters are A-Z, hyphen (-), and underscore (_). The comparison is
     * case sensitive. Wildcards are not supported; therefore, the method name must be
     * an exact match.</p> <p>If you specify multiple strings, the condition is
     * satisfied if one of the strings matches the HTTP request method. We recommend
     * that you route GET and HEAD requests in the same way, because the response to a
     * HEAD request may be cached.</p>
     */
    inline HttpRequestMethodConditionConfig& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The name of the request method. The maximum size is 40 characters. The
     * allowed characters are A-Z, hyphen (-), and underscore (_). The comparison is
     * case sensitive. Wildcards are not supported; therefore, the method name must be
     * an exact match.</p> <p>If you specify multiple strings, the condition is
     * satisfied if one of the strings matches the HTTP request method. We recommend
     * that you route GET and HEAD requests in the same way, because the response to a
     * HEAD request may be cached.</p>
     */
    inline HttpRequestMethodConditionConfig& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The name of the request method. The maximum size is 40 characters. The
     * allowed characters are A-Z, hyphen (-), and underscore (_). The comparison is
     * case sensitive. Wildcards are not supported; therefore, the method name must be
     * an exact match.</p> <p>If you specify multiple strings, the condition is
     * satisfied if one of the strings matches the HTTP request method. We recommend
     * that you route GET and HEAD requests in the same way, because the response to a
     * HEAD request may be cached.</p>
     */
    inline HttpRequestMethodConditionConfig& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The name of the request method. The maximum size is 40 characters. The
     * allowed characters are A-Z, hyphen (-), and underscore (_). The comparison is
     * case sensitive. Wildcards are not supported; therefore, the method name must be
     * an exact match.</p> <p>If you specify multiple strings, the condition is
     * satisfied if one of the strings matches the HTTP request method. We recommend
     * that you route GET and HEAD requests in the same way, because the response to a
     * HEAD request may be cached.</p>
     */
    inline HttpRequestMethodConditionConfig& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the request method. The maximum size is 40 characters. The
     * allowed characters are A-Z, hyphen (-), and underscore (_). The comparison is
     * case sensitive. Wildcards are not supported; therefore, the method name must be
     * an exact match.</p> <p>If you specify multiple strings, the condition is
     * satisfied if one of the strings matches the HTTP request method. We recommend
     * that you route GET and HEAD requests in the same way, because the response to a
     * HEAD request may be cached.</p>
     */
    inline HttpRequestMethodConditionConfig& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
