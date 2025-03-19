/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RedirectActionConfig
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API RedirectActionConfig() = default;
    AWS_ELASTICLOADBALANCINGV2_API RedirectActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API RedirectActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The protocol. You can specify HTTP, HTTPS, or #{protocol}. You can redirect
     * HTTP to HTTP, HTTP to HTTPS, and HTTPS to HTTPS. You can't redirect HTTPS to
     * HTTP.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    RedirectActionConfig& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port. You can specify a value from 1 to 65535 or #{port}.</p>
     */
    inline const Aws::String& GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    template<typename PortT = Aws::String>
    void SetPort(PortT&& value) { m_portHasBeenSet = true; m_port = std::forward<PortT>(value); }
    template<typename PortT = Aws::String>
    RedirectActionConfig& WithPort(PortT&& value) { SetPort(std::forward<PortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname. This component is not percent-encoded. The hostname can contain
     * #{host}.</p>
     */
    inline const Aws::String& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = Aws::String>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = Aws::String>
    RedirectActionConfig& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The absolute path, starting with the leading "/". This component is not
     * percent-encoded. The path can contain #{host}, #{path}, and #{port}.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    RedirectActionConfig& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query parameters, URL-encoded when necessary, but not percent-encoded. Do
     * not include the leading "?", as it is automatically added. You can specify any
     * of the reserved keywords.</p>
     */
    inline const Aws::String& GetQuery() const { return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    template<typename QueryT = Aws::String>
    void SetQuery(QueryT&& value) { m_queryHasBeenSet = true; m_query = std::forward<QueryT>(value); }
    template<typename QueryT = Aws::String>
    RedirectActionConfig& WithQuery(QueryT&& value) { SetQuery(std::forward<QueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP redirect code. The redirect is either permanent (HTTP 301) or
     * temporary (HTTP 302).</p>
     */
    inline RedirectActionStatusCodeEnum GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(RedirectActionStatusCodeEnum value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline RedirectActionConfig& WithStatusCode(RedirectActionStatusCodeEnum value) { SetStatusCode(value); return *this;}
    ///@}
  private:

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    RedirectActionStatusCodeEnum m_statusCode{RedirectActionStatusCodeEnum::NOT_SET};
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
