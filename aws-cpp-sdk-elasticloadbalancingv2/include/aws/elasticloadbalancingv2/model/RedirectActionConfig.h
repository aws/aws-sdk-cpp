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
#include <aws/elasticloadbalancingv2/model/RedirectActionStatusCodeEnum.h>
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
   * <p>Information about a redirect action.</p> <p>A URI consists of the following
   * components: protocol://hostname:port/path?query. You must modify at least one of
   * the following components to avoid a redirect loop: protocol, hostname, port, or
   * path. Any components that you do not modify retain their original values.</p>
   * <p>You can reuse URI components using the following reserved keywords:</p> <ul>
   * <li> <p>#{protocol}</p> </li> <li> <p>#{host}</p> </li> <li> <p>#{port}</p>
   * </li> <li> <p>#{path} (the leading "/" is removed)</p> </li> <li>
   * <p>#{query}</p> </li> </ul> <p>For example, you can change the path to
   * "/new/#{path}", the hostname to "example.#{host}", or the query to
   * "#{query}&amp;value=xyz".</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RedirectActionConfig">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API RedirectActionConfig
  {
  public:
    RedirectActionConfig();
    RedirectActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    RedirectActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The protocol. You can specify HTTP, HTTPS, or #{protocol}. You can redirect
     * HTTP to HTTP, HTTP to HTTPS, and HTTPS to HTTPS. You cannot redirect HTTPS to
     * HTTP.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol. You can specify HTTP, HTTPS, or #{protocol}. You can redirect
     * HTTP to HTTP, HTTP to HTTPS, and HTTPS to HTTPS. You cannot redirect HTTPS to
     * HTTP.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol. You can specify HTTP, HTTPS, or #{protocol}. You can redirect
     * HTTP to HTTP, HTTP to HTTPS, and HTTPS to HTTPS. You cannot redirect HTTPS to
     * HTTP.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol. You can specify HTTP, HTTPS, or #{protocol}. You can redirect
     * HTTP to HTTP, HTTP to HTTPS, and HTTPS to HTTPS. You cannot redirect HTTPS to
     * HTTP.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol. You can specify HTTP, HTTPS, or #{protocol}. You can redirect
     * HTTP to HTTP, HTTP to HTTPS, and HTTPS to HTTPS. You cannot redirect HTTPS to
     * HTTP.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol. You can specify HTTP, HTTPS, or #{protocol}. You can redirect
     * HTTP to HTTP, HTTP to HTTPS, and HTTPS to HTTPS. You cannot redirect HTTPS to
     * HTTP.</p>
     */
    inline RedirectActionConfig& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol. You can specify HTTP, HTTPS, or #{protocol}. You can redirect
     * HTTP to HTTP, HTTP to HTTPS, and HTTPS to HTTPS. You cannot redirect HTTPS to
     * HTTP.</p>
     */
    inline RedirectActionConfig& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol. You can specify HTTP, HTTPS, or #{protocol}. You can redirect
     * HTTP to HTTP, HTTP to HTTPS, and HTTPS to HTTPS. You cannot redirect HTTPS to
     * HTTP.</p>
     */
    inline RedirectActionConfig& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>The port. You can specify a value from 1 to 65535 or #{port}.</p>
     */
    inline const Aws::String& GetPort() const{ return m_port; }

    /**
     * <p>The port. You can specify a value from 1 to 65535 or #{port}.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port. You can specify a value from 1 to 65535 or #{port}.</p>
     */
    inline void SetPort(const Aws::String& value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port. You can specify a value from 1 to 65535 or #{port}.</p>
     */
    inline void SetPort(Aws::String&& value) { m_portHasBeenSet = true; m_port = std::move(value); }

    /**
     * <p>The port. You can specify a value from 1 to 65535 or #{port}.</p>
     */
    inline void SetPort(const char* value) { m_portHasBeenSet = true; m_port.assign(value); }

    /**
     * <p>The port. You can specify a value from 1 to 65535 or #{port}.</p>
     */
    inline RedirectActionConfig& WithPort(const Aws::String& value) { SetPort(value); return *this;}

    /**
     * <p>The port. You can specify a value from 1 to 65535 or #{port}.</p>
     */
    inline RedirectActionConfig& WithPort(Aws::String&& value) { SetPort(std::move(value)); return *this;}

    /**
     * <p>The port. You can specify a value from 1 to 65535 or #{port}.</p>
     */
    inline RedirectActionConfig& WithPort(const char* value) { SetPort(value); return *this;}


    /**
     * <p>The hostname. This component is not percent-encoded. The hostname can contain
     * #{host}.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>The hostname. This component is not percent-encoded. The hostname can contain
     * #{host}.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>The hostname. This component is not percent-encoded. The hostname can contain
     * #{host}.</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>The hostname. This component is not percent-encoded. The hostname can contain
     * #{host}.</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>The hostname. This component is not percent-encoded. The hostname can contain
     * #{host}.</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>The hostname. This component is not percent-encoded. The hostname can contain
     * #{host}.</p>
     */
    inline RedirectActionConfig& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>The hostname. This component is not percent-encoded. The hostname can contain
     * #{host}.</p>
     */
    inline RedirectActionConfig& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>The hostname. This component is not percent-encoded. The hostname can contain
     * #{host}.</p>
     */
    inline RedirectActionConfig& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>The absolute path, starting with the leading "/". This component is not
     * percent-encoded. The path can contain #{host}, #{path}, and #{port}.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The absolute path, starting with the leading "/". This component is not
     * percent-encoded. The path can contain #{host}, #{path}, and #{port}.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The absolute path, starting with the leading "/". This component is not
     * percent-encoded. The path can contain #{host}, #{path}, and #{port}.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The absolute path, starting with the leading "/". This component is not
     * percent-encoded. The path can contain #{host}, #{path}, and #{port}.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The absolute path, starting with the leading "/". This component is not
     * percent-encoded. The path can contain #{host}, #{path}, and #{port}.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The absolute path, starting with the leading "/". This component is not
     * percent-encoded. The path can contain #{host}, #{path}, and #{port}.</p>
     */
    inline RedirectActionConfig& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The absolute path, starting with the leading "/". This component is not
     * percent-encoded. The path can contain #{host}, #{path}, and #{port}.</p>
     */
    inline RedirectActionConfig& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The absolute path, starting with the leading "/". This component is not
     * percent-encoded. The path can contain #{host}, #{path}, and #{port}.</p>
     */
    inline RedirectActionConfig& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The query parameters, URL-encoded when necessary, but not percent-encoded. Do
     * not include the leading "?", as it is automatically added. You can specify any
     * of the reserved keywords.</p>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }

    /**
     * <p>The query parameters, URL-encoded when necessary, but not percent-encoded. Do
     * not include the leading "?", as it is automatically added. You can specify any
     * of the reserved keywords.</p>
     */
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }

    /**
     * <p>The query parameters, URL-encoded when necessary, but not percent-encoded. Do
     * not include the leading "?", as it is automatically added. You can specify any
     * of the reserved keywords.</p>
     */
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p>The query parameters, URL-encoded when necessary, but not percent-encoded. Do
     * not include the leading "?", as it is automatically added. You can specify any
     * of the reserved keywords.</p>
     */
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }

    /**
     * <p>The query parameters, URL-encoded when necessary, but not percent-encoded. Do
     * not include the leading "?", as it is automatically added. You can specify any
     * of the reserved keywords.</p>
     */
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }

    /**
     * <p>The query parameters, URL-encoded when necessary, but not percent-encoded. Do
     * not include the leading "?", as it is automatically added. You can specify any
     * of the reserved keywords.</p>
     */
    inline RedirectActionConfig& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}

    /**
     * <p>The query parameters, URL-encoded when necessary, but not percent-encoded. Do
     * not include the leading "?", as it is automatically added. You can specify any
     * of the reserved keywords.</p>
     */
    inline RedirectActionConfig& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}

    /**
     * <p>The query parameters, URL-encoded when necessary, but not percent-encoded. Do
     * not include the leading "?", as it is automatically added. You can specify any
     * of the reserved keywords.</p>
     */
    inline RedirectActionConfig& WithQuery(const char* value) { SetQuery(value); return *this;}


    /**
     * <p>The HTTP redirect code. The redirect is either permanent (HTTP 301) or
     * temporary (HTTP 302).</p>
     */
    inline const RedirectActionStatusCodeEnum& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The HTTP redirect code. The redirect is either permanent (HTTP 301) or
     * temporary (HTTP 302).</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The HTTP redirect code. The redirect is either permanent (HTTP 301) or
     * temporary (HTTP 302).</p>
     */
    inline void SetStatusCode(const RedirectActionStatusCodeEnum& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The HTTP redirect code. The redirect is either permanent (HTTP 301) or
     * temporary (HTTP 302).</p>
     */
    inline void SetStatusCode(RedirectActionStatusCodeEnum&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The HTTP redirect code. The redirect is either permanent (HTTP 301) or
     * temporary (HTTP 302).</p>
     */
    inline RedirectActionConfig& WithStatusCode(const RedirectActionStatusCodeEnum& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The HTTP redirect code. The redirect is either permanent (HTTP 301) or
     * temporary (HTTP 302).</p>
     */
    inline RedirectActionConfig& WithStatusCode(RedirectActionStatusCodeEnum&& value) { SetStatusCode(std::move(value)); return *this;}

  private:

    Aws::String m_protocol;
    bool m_protocolHasBeenSet;

    Aws::String m_port;
    bool m_portHasBeenSet;

    Aws::String m_host;
    bool m_hostHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_query;
    bool m_queryHasBeenSet;

    RedirectActionStatusCodeEnum m_statusCode;
    bool m_statusCodeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
