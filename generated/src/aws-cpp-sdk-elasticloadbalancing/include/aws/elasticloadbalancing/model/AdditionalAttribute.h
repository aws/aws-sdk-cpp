/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about additional load balancer attributes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/AdditionalAttribute">AWS
   * API Reference</a></p>
   */
  class AdditionalAttribute
  {
  public:
    AWS_ELASTICLOADBALANCING_API AdditionalAttribute();
    AWS_ELASTICLOADBALANCING_API AdditionalAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API AdditionalAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported.</p>
     * <ul> <li> <p> <code>elb.http.desyncmitigationmode</code> - Determines how the
     * load balancer handles requests that might pose a security risk to your
     * application. The possible values are <code>monitor</code>,
     * <code>defensive</code>, and <code>strictest</code>. The default is
     * <code>defensive</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported.</p>
     * <ul> <li> <p> <code>elb.http.desyncmitigationmode</code> - Determines how the
     * load balancer handles requests that might pose a security risk to your
     * application. The possible values are <code>monitor</code>,
     * <code>defensive</code>, and <code>strictest</code>. The default is
     * <code>defensive</code>.</p> </li> </ul>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported.</p>
     * <ul> <li> <p> <code>elb.http.desyncmitigationmode</code> - Determines how the
     * load balancer handles requests that might pose a security risk to your
     * application. The possible values are <code>monitor</code>,
     * <code>defensive</code>, and <code>strictest</code>. The default is
     * <code>defensive</code>.</p> </li> </ul>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported.</p>
     * <ul> <li> <p> <code>elb.http.desyncmitigationmode</code> - Determines how the
     * load balancer handles requests that might pose a security risk to your
     * application. The possible values are <code>monitor</code>,
     * <code>defensive</code>, and <code>strictest</code>. The default is
     * <code>defensive</code>.</p> </li> </ul>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported.</p>
     * <ul> <li> <p> <code>elb.http.desyncmitigationmode</code> - Determines how the
     * load balancer handles requests that might pose a security risk to your
     * application. The possible values are <code>monitor</code>,
     * <code>defensive</code>, and <code>strictest</code>. The default is
     * <code>defensive</code>.</p> </li> </ul>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported.</p>
     * <ul> <li> <p> <code>elb.http.desyncmitigationmode</code> - Determines how the
     * load balancer handles requests that might pose a security risk to your
     * application. The possible values are <code>monitor</code>,
     * <code>defensive</code>, and <code>strictest</code>. The default is
     * <code>defensive</code>.</p> </li> </ul>
     */
    inline AdditionalAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported.</p>
     * <ul> <li> <p> <code>elb.http.desyncmitigationmode</code> - Determines how the
     * load balancer handles requests that might pose a security risk to your
     * application. The possible values are <code>monitor</code>,
     * <code>defensive</code>, and <code>strictest</code>. The default is
     * <code>defensive</code>.</p> </li> </ul>
     */
    inline AdditionalAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported.</p>
     * <ul> <li> <p> <code>elb.http.desyncmitigationmode</code> - Determines how the
     * load balancer handles requests that might pose a security risk to your
     * application. The possible values are <code>monitor</code>,
     * <code>defensive</code>, and <code>strictest</code>. The default is
     * <code>defensive</code>.</p> </li> </ul>
     */
    inline AdditionalAttribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>This value of the attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>This value of the attribute.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>This value of the attribute.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>This value of the attribute.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>This value of the attribute.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>This value of the attribute.</p>
     */
    inline AdditionalAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>This value of the attribute.</p>
     */
    inline AdditionalAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>This value of the attribute.</p>
     */
    inline AdditionalAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
