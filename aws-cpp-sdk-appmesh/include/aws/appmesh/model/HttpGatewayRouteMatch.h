/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/GatewayRouteHostnameMatch.h>
#include <aws/appmesh/model/HttpMethod.h>
#include <aws/appmesh/model/HttpPathMatch.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/HttpGatewayRouteHeader.h>
#include <aws/appmesh/model/HttpQueryParameter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the criteria for determining a request
   * match.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpGatewayRouteMatch">AWS
   * API Reference</a></p>
   */
  class HttpGatewayRouteMatch
  {
  public:
    AWS_APPMESH_API HttpGatewayRouteMatch();
    AWS_APPMESH_API HttpGatewayRouteMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpGatewayRouteMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The client request headers to match on.</p>
     */
    inline const Aws::Vector<HttpGatewayRouteHeader>& GetHeaders() const{ return m_headers; }

    /**
     * <p>The client request headers to match on.</p>
     */
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }

    /**
     * <p>The client request headers to match on.</p>
     */
    inline void SetHeaders(const Aws::Vector<HttpGatewayRouteHeader>& value) { m_headersHasBeenSet = true; m_headers = value; }

    /**
     * <p>The client request headers to match on.</p>
     */
    inline void SetHeaders(Aws::Vector<HttpGatewayRouteHeader>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }

    /**
     * <p>The client request headers to match on.</p>
     */
    inline HttpGatewayRouteMatch& WithHeaders(const Aws::Vector<HttpGatewayRouteHeader>& value) { SetHeaders(value); return *this;}

    /**
     * <p>The client request headers to match on.</p>
     */
    inline HttpGatewayRouteMatch& WithHeaders(Aws::Vector<HttpGatewayRouteHeader>&& value) { SetHeaders(std::move(value)); return *this;}

    /**
     * <p>The client request headers to match on.</p>
     */
    inline HttpGatewayRouteMatch& AddHeaders(const HttpGatewayRouteHeader& value) { m_headersHasBeenSet = true; m_headers.push_back(value); return *this; }

    /**
     * <p>The client request headers to match on.</p>
     */
    inline HttpGatewayRouteMatch& AddHeaders(HttpGatewayRouteHeader&& value) { m_headersHasBeenSet = true; m_headers.push_back(std::move(value)); return *this; }


    /**
     * <p>The host name to match on.</p>
     */
    inline const GatewayRouteHostnameMatch& GetHostname() const{ return m_hostname; }

    /**
     * <p>The host name to match on.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The host name to match on.</p>
     */
    inline void SetHostname(const GatewayRouteHostnameMatch& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The host name to match on.</p>
     */
    inline void SetHostname(GatewayRouteHostnameMatch&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The host name to match on.</p>
     */
    inline HttpGatewayRouteMatch& WithHostname(const GatewayRouteHostnameMatch& value) { SetHostname(value); return *this;}

    /**
     * <p>The host name to match on.</p>
     */
    inline HttpGatewayRouteMatch& WithHostname(GatewayRouteHostnameMatch&& value) { SetHostname(std::move(value)); return *this;}


    /**
     * <p>The method to match on.</p>
     */
    inline const HttpMethod& GetMethod() const{ return m_method; }

    /**
     * <p>The method to match on.</p>
     */
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }

    /**
     * <p>The method to match on.</p>
     */
    inline void SetMethod(const HttpMethod& value) { m_methodHasBeenSet = true; m_method = value; }

    /**
     * <p>The method to match on.</p>
     */
    inline void SetMethod(HttpMethod&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }

    /**
     * <p>The method to match on.</p>
     */
    inline HttpGatewayRouteMatch& WithMethod(const HttpMethod& value) { SetMethod(value); return *this;}

    /**
     * <p>The method to match on.</p>
     */
    inline HttpGatewayRouteMatch& WithMethod(HttpMethod&& value) { SetMethod(std::move(value)); return *this;}


    /**
     * <p>The path to match on.</p>
     */
    inline const HttpPathMatch& GetPath() const{ return m_path; }

    /**
     * <p>The path to match on.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to match on.</p>
     */
    inline void SetPath(const HttpPathMatch& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to match on.</p>
     */
    inline void SetPath(HttpPathMatch&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to match on.</p>
     */
    inline HttpGatewayRouteMatch& WithPath(const HttpPathMatch& value) { SetPath(value); return *this;}

    /**
     * <p>The path to match on.</p>
     */
    inline HttpGatewayRouteMatch& WithPath(HttpPathMatch&& value) { SetPath(std::move(value)); return *this;}


    /**
     * <p>The port number to match on.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number to match on.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number to match on.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number to match on.</p>
     */
    inline HttpGatewayRouteMatch& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Specifies the path to match requests with. This parameter must always start
     * with <code>/</code>, which by itself matches all requests to the virtual service
     * name. You can also match for path-based routing of requests. For example, if
     * your virtual service name is <code>my-service.local</code> and you want the
     * route to match requests to <code>my-service.local/metrics</code>, your prefix
     * should be <code>/metrics</code>.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>Specifies the path to match requests with. This parameter must always start
     * with <code>/</code>, which by itself matches all requests to the virtual service
     * name. You can also match for path-based routing of requests. For example, if
     * your virtual service name is <code>my-service.local</code> and you want the
     * route to match requests to <code>my-service.local/metrics</code>, your prefix
     * should be <code>/metrics</code>.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>Specifies the path to match requests with. This parameter must always start
     * with <code>/</code>, which by itself matches all requests to the virtual service
     * name. You can also match for path-based routing of requests. For example, if
     * your virtual service name is <code>my-service.local</code> and you want the
     * route to match requests to <code>my-service.local/metrics</code>, your prefix
     * should be <code>/metrics</code>.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>Specifies the path to match requests with. This parameter must always start
     * with <code>/</code>, which by itself matches all requests to the virtual service
     * name. You can also match for path-based routing of requests. For example, if
     * your virtual service name is <code>my-service.local</code> and you want the
     * route to match requests to <code>my-service.local/metrics</code>, your prefix
     * should be <code>/metrics</code>.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>Specifies the path to match requests with. This parameter must always start
     * with <code>/</code>, which by itself matches all requests to the virtual service
     * name. You can also match for path-based routing of requests. For example, if
     * your virtual service name is <code>my-service.local</code> and you want the
     * route to match requests to <code>my-service.local/metrics</code>, your prefix
     * should be <code>/metrics</code>.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>Specifies the path to match requests with. This parameter must always start
     * with <code>/</code>, which by itself matches all requests to the virtual service
     * name. You can also match for path-based routing of requests. For example, if
     * your virtual service name is <code>my-service.local</code> and you want the
     * route to match requests to <code>my-service.local/metrics</code>, your prefix
     * should be <code>/metrics</code>.</p>
     */
    inline HttpGatewayRouteMatch& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>Specifies the path to match requests with. This parameter must always start
     * with <code>/</code>, which by itself matches all requests to the virtual service
     * name. You can also match for path-based routing of requests. For example, if
     * your virtual service name is <code>my-service.local</code> and you want the
     * route to match requests to <code>my-service.local/metrics</code>, your prefix
     * should be <code>/metrics</code>.</p>
     */
    inline HttpGatewayRouteMatch& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>Specifies the path to match requests with. This parameter must always start
     * with <code>/</code>, which by itself matches all requests to the virtual service
     * name. You can also match for path-based routing of requests. For example, if
     * your virtual service name is <code>my-service.local</code> and you want the
     * route to match requests to <code>my-service.local/metrics</code>, your prefix
     * should be <code>/metrics</code>.</p>
     */
    inline HttpGatewayRouteMatch& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>The query parameter to match on.</p>
     */
    inline const Aws::Vector<HttpQueryParameter>& GetQueryParameters() const{ return m_queryParameters; }

    /**
     * <p>The query parameter to match on.</p>
     */
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }

    /**
     * <p>The query parameter to match on.</p>
     */
    inline void SetQueryParameters(const Aws::Vector<HttpQueryParameter>& value) { m_queryParametersHasBeenSet = true; m_queryParameters = value; }

    /**
     * <p>The query parameter to match on.</p>
     */
    inline void SetQueryParameters(Aws::Vector<HttpQueryParameter>&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::move(value); }

    /**
     * <p>The query parameter to match on.</p>
     */
    inline HttpGatewayRouteMatch& WithQueryParameters(const Aws::Vector<HttpQueryParameter>& value) { SetQueryParameters(value); return *this;}

    /**
     * <p>The query parameter to match on.</p>
     */
    inline HttpGatewayRouteMatch& WithQueryParameters(Aws::Vector<HttpQueryParameter>&& value) { SetQueryParameters(std::move(value)); return *this;}

    /**
     * <p>The query parameter to match on.</p>
     */
    inline HttpGatewayRouteMatch& AddQueryParameters(const HttpQueryParameter& value) { m_queryParametersHasBeenSet = true; m_queryParameters.push_back(value); return *this; }

    /**
     * <p>The query parameter to match on.</p>
     */
    inline HttpGatewayRouteMatch& AddQueryParameters(HttpQueryParameter&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<HttpGatewayRouteHeader> m_headers;
    bool m_headersHasBeenSet = false;

    GatewayRouteHostnameMatch m_hostname;
    bool m_hostnameHasBeenSet = false;

    HttpMethod m_method;
    bool m_methodHasBeenSet = false;

    HttpPathMatch m_path;
    bool m_pathHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::Vector<HttpQueryParameter> m_queryParameters;
    bool m_queryParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
