/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/HttpMethod.h>
#include <aws/appmesh/model/HttpPathMatch.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/HttpScheme.h>
#include <aws/appmesh/model/HttpRouteHeader.h>
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
   * <p>An object that represents the requirements for a route to match HTTP requests
   * for a virtual router.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpRouteMatch">AWS
   * API Reference</a></p>
   */
  class HttpRouteMatch
  {
  public:
    AWS_APPMESH_API HttpRouteMatch();
    AWS_APPMESH_API HttpRouteMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpRouteMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The client request headers to match on.</p>
     */
    inline const Aws::Vector<HttpRouteHeader>& GetHeaders() const{ return m_headers; }

    /**
     * <p>The client request headers to match on.</p>
     */
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }

    /**
     * <p>The client request headers to match on.</p>
     */
    inline void SetHeaders(const Aws::Vector<HttpRouteHeader>& value) { m_headersHasBeenSet = true; m_headers = value; }

    /**
     * <p>The client request headers to match on.</p>
     */
    inline void SetHeaders(Aws::Vector<HttpRouteHeader>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }

    /**
     * <p>The client request headers to match on.</p>
     */
    inline HttpRouteMatch& WithHeaders(const Aws::Vector<HttpRouteHeader>& value) { SetHeaders(value); return *this;}

    /**
     * <p>The client request headers to match on.</p>
     */
    inline HttpRouteMatch& WithHeaders(Aws::Vector<HttpRouteHeader>&& value) { SetHeaders(std::move(value)); return *this;}

    /**
     * <p>The client request headers to match on.</p>
     */
    inline HttpRouteMatch& AddHeaders(const HttpRouteHeader& value) { m_headersHasBeenSet = true; m_headers.push_back(value); return *this; }

    /**
     * <p>The client request headers to match on.</p>
     */
    inline HttpRouteMatch& AddHeaders(HttpRouteHeader&& value) { m_headersHasBeenSet = true; m_headers.push_back(std::move(value)); return *this; }


    /**
     * <p>The client request method to match on. Specify only one.</p>
     */
    inline const HttpMethod& GetMethod() const{ return m_method; }

    /**
     * <p>The client request method to match on. Specify only one.</p>
     */
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }

    /**
     * <p>The client request method to match on. Specify only one.</p>
     */
    inline void SetMethod(const HttpMethod& value) { m_methodHasBeenSet = true; m_method = value; }

    /**
     * <p>The client request method to match on. Specify only one.</p>
     */
    inline void SetMethod(HttpMethod&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }

    /**
     * <p>The client request method to match on. Specify only one.</p>
     */
    inline HttpRouteMatch& WithMethod(const HttpMethod& value) { SetMethod(value); return *this;}

    /**
     * <p>The client request method to match on. Specify only one.</p>
     */
    inline HttpRouteMatch& WithMethod(HttpMethod&& value) { SetMethod(std::move(value)); return *this;}


    /**
     * <p>The client request path to match on.</p>
     */
    inline const HttpPathMatch& GetPath() const{ return m_path; }

    /**
     * <p>The client request path to match on.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The client request path to match on.</p>
     */
    inline void SetPath(const HttpPathMatch& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The client request path to match on.</p>
     */
    inline void SetPath(HttpPathMatch&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The client request path to match on.</p>
     */
    inline HttpRouteMatch& WithPath(const HttpPathMatch& value) { SetPath(value); return *this;}

    /**
     * <p>The client request path to match on.</p>
     */
    inline HttpRouteMatch& WithPath(HttpPathMatch&& value) { SetPath(std::move(value)); return *this;}


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
    inline HttpRouteMatch& WithPort(int value) { SetPort(value); return *this;}


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
    inline HttpRouteMatch& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>Specifies the path to match requests with. This parameter must always start
     * with <code>/</code>, which by itself matches all requests to the virtual service
     * name. You can also match for path-based routing of requests. For example, if
     * your virtual service name is <code>my-service.local</code> and you want the
     * route to match requests to <code>my-service.local/metrics</code>, your prefix
     * should be <code>/metrics</code>.</p>
     */
    inline HttpRouteMatch& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>Specifies the path to match requests with. This parameter must always start
     * with <code>/</code>, which by itself matches all requests to the virtual service
     * name. You can also match for path-based routing of requests. For example, if
     * your virtual service name is <code>my-service.local</code> and you want the
     * route to match requests to <code>my-service.local/metrics</code>, your prefix
     * should be <code>/metrics</code>.</p>
     */
    inline HttpRouteMatch& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>The client request query parameters to match on.</p>
     */
    inline const Aws::Vector<HttpQueryParameter>& GetQueryParameters() const{ return m_queryParameters; }

    /**
     * <p>The client request query parameters to match on.</p>
     */
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }

    /**
     * <p>The client request query parameters to match on.</p>
     */
    inline void SetQueryParameters(const Aws::Vector<HttpQueryParameter>& value) { m_queryParametersHasBeenSet = true; m_queryParameters = value; }

    /**
     * <p>The client request query parameters to match on.</p>
     */
    inline void SetQueryParameters(Aws::Vector<HttpQueryParameter>&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::move(value); }

    /**
     * <p>The client request query parameters to match on.</p>
     */
    inline HttpRouteMatch& WithQueryParameters(const Aws::Vector<HttpQueryParameter>& value) { SetQueryParameters(value); return *this;}

    /**
     * <p>The client request query parameters to match on.</p>
     */
    inline HttpRouteMatch& WithQueryParameters(Aws::Vector<HttpQueryParameter>&& value) { SetQueryParameters(std::move(value)); return *this;}

    /**
     * <p>The client request query parameters to match on.</p>
     */
    inline HttpRouteMatch& AddQueryParameters(const HttpQueryParameter& value) { m_queryParametersHasBeenSet = true; m_queryParameters.push_back(value); return *this; }

    /**
     * <p>The client request query parameters to match on.</p>
     */
    inline HttpRouteMatch& AddQueryParameters(HttpQueryParameter&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The client request scheme to match on. Specify only one. Applicable only for
     * HTTP2 routes.</p>
     */
    inline const HttpScheme& GetScheme() const{ return m_scheme; }

    /**
     * <p>The client request scheme to match on. Specify only one. Applicable only for
     * HTTP2 routes.</p>
     */
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }

    /**
     * <p>The client request scheme to match on. Specify only one. Applicable only for
     * HTTP2 routes.</p>
     */
    inline void SetScheme(const HttpScheme& value) { m_schemeHasBeenSet = true; m_scheme = value; }

    /**
     * <p>The client request scheme to match on. Specify only one. Applicable only for
     * HTTP2 routes.</p>
     */
    inline void SetScheme(HttpScheme&& value) { m_schemeHasBeenSet = true; m_scheme = std::move(value); }

    /**
     * <p>The client request scheme to match on. Specify only one. Applicable only for
     * HTTP2 routes.</p>
     */
    inline HttpRouteMatch& WithScheme(const HttpScheme& value) { SetScheme(value); return *this;}

    /**
     * <p>The client request scheme to match on. Specify only one. Applicable only for
     * HTTP2 routes.</p>
     */
    inline HttpRouteMatch& WithScheme(HttpScheme&& value) { SetScheme(std::move(value)); return *this;}

  private:

    Aws::Vector<HttpRouteHeader> m_headers;
    bool m_headersHasBeenSet = false;

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

    HttpScheme m_scheme;
    bool m_schemeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
