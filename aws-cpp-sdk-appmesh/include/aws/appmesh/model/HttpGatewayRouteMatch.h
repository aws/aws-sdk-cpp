/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_APPMESH_API HttpGatewayRouteMatch
  {
  public:
    HttpGatewayRouteMatch();
    HttpGatewayRouteMatch(Aws::Utils::Json::JsonView jsonValue);
    HttpGatewayRouteMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
