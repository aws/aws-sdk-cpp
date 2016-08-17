/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Information to use when checking for a successful response from a target.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API Matcher
  {
  public:
    Matcher();
    Matcher(const Aws::Utils::Xml::XmlNode& xmlNode);
    Matcher& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The HTTP codes. The default value is 200. You can specify multiple values
     * (for example, "200,202") or a range of values (for example, "200-299").</p>
     */
    inline const Aws::String& GetHttpCode() const{ return m_httpCode; }

    /**
     * <p>The HTTP codes. The default value is 200. You can specify multiple values
     * (for example, "200,202") or a range of values (for example, "200-299").</p>
     */
    inline void SetHttpCode(const Aws::String& value) { m_httpCodeHasBeenSet = true; m_httpCode = value; }

    /**
     * <p>The HTTP codes. The default value is 200. You can specify multiple values
     * (for example, "200,202") or a range of values (for example, "200-299").</p>
     */
    inline void SetHttpCode(Aws::String&& value) { m_httpCodeHasBeenSet = true; m_httpCode = value; }

    /**
     * <p>The HTTP codes. The default value is 200. You can specify multiple values
     * (for example, "200,202") or a range of values (for example, "200-299").</p>
     */
    inline void SetHttpCode(const char* value) { m_httpCodeHasBeenSet = true; m_httpCode.assign(value); }

    /**
     * <p>The HTTP codes. The default value is 200. You can specify multiple values
     * (for example, "200,202") or a range of values (for example, "200-299").</p>
     */
    inline Matcher& WithHttpCode(const Aws::String& value) { SetHttpCode(value); return *this;}

    /**
     * <p>The HTTP codes. The default value is 200. You can specify multiple values
     * (for example, "200,202") or a range of values (for example, "200-299").</p>
     */
    inline Matcher& WithHttpCode(Aws::String&& value) { SetHttpCode(value); return *this;}

    /**
     * <p>The HTTP codes. The default value is 200. You can specify multiple values
     * (for example, "200,202") or a range of values (for example, "200-299").</p>
     */
    inline Matcher& WithHttpCode(const char* value) { SetHttpCode(value); return *this;}

  private:
    Aws::String m_httpCode;
    bool m_httpCodeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
