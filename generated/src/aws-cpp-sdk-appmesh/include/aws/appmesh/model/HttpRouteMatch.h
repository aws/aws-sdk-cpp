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
    AWS_APPMESH_API HttpRouteMatch() = default;
    AWS_APPMESH_API HttpRouteMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpRouteMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The client request headers to match on.</p>
     */
    inline const Aws::Vector<HttpRouteHeader>& GetHeaders() const { return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    template<typename HeadersT = Aws::Vector<HttpRouteHeader>>
    void SetHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers = std::forward<HeadersT>(value); }
    template<typename HeadersT = Aws::Vector<HttpRouteHeader>>
    HttpRouteMatch& WithHeaders(HeadersT&& value) { SetHeaders(std::forward<HeadersT>(value)); return *this;}
    template<typename HeadersT = HttpRouteHeader>
    HttpRouteMatch& AddHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers.emplace_back(std::forward<HeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The client request method to match on. Specify only one.</p>
     */
    inline HttpMethod GetMethod() const { return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    inline void SetMethod(HttpMethod value) { m_methodHasBeenSet = true; m_method = value; }
    inline HttpRouteMatch& WithMethod(HttpMethod value) { SetMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client request path to match on.</p>
     */
    inline const HttpPathMatch& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = HttpPathMatch>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = HttpPathMatch>
    HttpRouteMatch& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number to match on.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline HttpRouteMatch& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the path to match requests with. This parameter must always start
     * with <code>/</code>, which by itself matches all requests to the virtual service
     * name. You can also match for path-based routing of requests. For example, if
     * your virtual service name is <code>my-service.local</code> and you want the
     * route to match requests to <code>my-service.local/metrics</code>, your prefix
     * should be <code>/metrics</code>.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    HttpRouteMatch& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client request query parameters to match on.</p>
     */
    inline const Aws::Vector<HttpQueryParameter>& GetQueryParameters() const { return m_queryParameters; }
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }
    template<typename QueryParametersT = Aws::Vector<HttpQueryParameter>>
    void SetQueryParameters(QueryParametersT&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::forward<QueryParametersT>(value); }
    template<typename QueryParametersT = Aws::Vector<HttpQueryParameter>>
    HttpRouteMatch& WithQueryParameters(QueryParametersT&& value) { SetQueryParameters(std::forward<QueryParametersT>(value)); return *this;}
    template<typename QueryParametersT = HttpQueryParameter>
    HttpRouteMatch& AddQueryParameters(QueryParametersT&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace_back(std::forward<QueryParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The client request scheme to match on. Specify only one. Applicable only for
     * HTTP2 routes.</p>
     */
    inline HttpScheme GetScheme() const { return m_scheme; }
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
    inline void SetScheme(HttpScheme value) { m_schemeHasBeenSet = true; m_scheme = value; }
    inline HttpRouteMatch& WithScheme(HttpScheme value) { SetScheme(value); return *this;}
    ///@}
  private:

    Aws::Vector<HttpRouteHeader> m_headers;
    bool m_headersHasBeenSet = false;

    HttpMethod m_method{HttpMethod::NOT_SET};
    bool m_methodHasBeenSet = false;

    HttpPathMatch m_path;
    bool m_pathHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::Vector<HttpQueryParameter> m_queryParameters;
    bool m_queryParametersHasBeenSet = false;

    HttpScheme m_scheme{HttpScheme::NOT_SET};
    bool m_schemeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
