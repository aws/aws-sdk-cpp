/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a listener attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ListenerAttribute">AWS
   * API Reference</a></p>
   */
  class ListenerAttribute
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ListenerAttribute() = default;
    AWS_ELASTICLOADBALANCINGV2_API ListenerAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API ListenerAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported by
     * Network Load Balancers, and Gateway Load Balancers.</p> <ul> <li> <p>
     * <code>tcp.idle_timeout.seconds</code> - The tcp idle timeout value, in seconds.
     * The valid range is 60-6000 seconds. The default is 350 seconds.</p> </li> </ul>
     * <p>The following attributes are only supported by Application Load
     * Balancers.</p> <ul> <li> <p>
     * <code>routing.http.request.x_amzn_mtls_clientcert_serial_number.header_name</code>
     * - Enables you to modify the header name of the
     * <b>X-Amzn-Mtls-Clientcert-Serial-Number</b> HTTP request header.</p> </li> <li>
     * <p> <code>routing.http.request.x_amzn_mtls_clientcert_issuer.header_name</code>
     * - Enables you to modify the header name of the
     * <b>X-Amzn-Mtls-Clientcert-Issuer</b> HTTP request header.</p> </li> <li> <p>
     * <code>routing.http.request.x_amzn_mtls_clientcert_subject.header_name</code> -
     * Enables you to modify the header name of the
     * <b>X-Amzn-Mtls-Clientcert-Subject</b> HTTP request header.</p> </li> <li> <p>
     * <code>routing.http.request.x_amzn_mtls_clientcert_validity.header_name</code> -
     * Enables you to modify the header name of the
     * <b>X-Amzn-Mtls-Clientcert-Validity</b> HTTP request header.</p> </li> <li> <p>
     * <code>routing.http.request.x_amzn_mtls_clientcert_leaf.header_name</code> -
     * Enables you to modify the header name of the <b>X-Amzn-Mtls-Clientcert-Leaf</b>
     * HTTP request header.</p> </li> <li> <p>
     * <code>routing.http.request.x_amzn_mtls_clientcert.header_name</code> - Enables
     * you to modify the header name of the <b>X-Amzn-Mtls-Clientcert</b> HTTP request
     * header.</p> </li> <li> <p>
     * <code>routing.http.request.x_amzn_tls_version.header_name</code> - Enables you
     * to modify the header name of the <b>X-Amzn-Tls-Version</b> HTTP request
     * header.</p> </li> <li> <p>
     * <code>routing.http.request.x_amzn_tls_cipher_suite.header_name</code> - Enables
     * you to modify the header name of the <b>X-Amzn-Tls-Cipher-Suite</b> HTTP request
     * header.</p> </li> <li> <p> <code>routing.http.response.server.enabled</code> -
     * Enables you to allow or remove the HTTP response server header.</p> </li> <li>
     * <p> <code>routing.http.response.strict_transport_security.header_value</code> -
     * Informs browsers that the site should only be accessed using HTTPS, and that any
     * future attempts to access it using HTTP should automatically be converted to
     * HTTPS.</p> </li> <li> <p>
     * <code>routing.http.response.access_control_allow_origin.header_value</code> -
     * Specifies which origins are allowed to access the server.</p> </li> <li> <p>
     * <code>routing.http.response.access_control_allow_methods.header_value</code> -
     * Returns which HTTP methods are allowed when accessing the server from a
     * different origin.</p> </li> <li> <p>
     * <code>routing.http.response.access_control_allow_headers.header_value</code> -
     * Specifies which headers can be used during the request.</p> </li> <li> <p>
     * <code>routing.http.response.access_control_allow_credentials.header_value</code>
     * - Indicates whether the browser should include credentials such as cookies or
     * authentication when making requests.</p> </li> <li> <p>
     * <code>routing.http.response.access_control_expose_headers.header_value</code> -
     * Returns which headers the browser can expose to the requesting client.</p> </li>
     * <li> <p> <code>routing.http.response.access_control_max_age.header_value</code>
     * - Specifies how long the results of a preflight request can be cached, in
     * seconds.</p> </li> <li> <p>
     * <code>routing.http.response.content_security_policy.header_value</code> -
     * Specifies restrictions enforced by the browser to help minimize the risk of
     * certain types of security threats.</p> </li> <li> <p>
     * <code>routing.http.response.x_content_type_options.header_value</code> -
     * Indicates whether the MIME types advertised in the <b>Content-Type</b> headers
     * should be followed and not be changed.</p> </li> <li> <p>
     * <code>routing.http.response.x_frame_options.header_value</code> - Indicates
     * whether the browser is allowed to render a page in a <b>frame</b>,
     * <b>iframe</b>, <b>embed</b> or <b>object</b>.</p> </li> </ul>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    ListenerAttribute& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the attribute.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ListenerAttribute& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
