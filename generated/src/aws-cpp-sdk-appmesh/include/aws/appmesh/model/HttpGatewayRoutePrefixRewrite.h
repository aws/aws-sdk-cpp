/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/DefaultGatewayRouteRewrite.h>
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
   * <p>An object representing the beginning characters of the route to
   * rewrite.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpGatewayRoutePrefixRewrite">AWS
   * API Reference</a></p>
   */
  class HttpGatewayRoutePrefixRewrite
  {
  public:
    AWS_APPMESH_API HttpGatewayRoutePrefixRewrite();
    AWS_APPMESH_API HttpGatewayRoutePrefixRewrite(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpGatewayRoutePrefixRewrite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default prefix used to replace the incoming route prefix when
     * rewritten.</p>
     */
    inline const DefaultGatewayRouteRewrite& GetDefaultPrefix() const{ return m_defaultPrefix; }

    /**
     * <p>The default prefix used to replace the incoming route prefix when
     * rewritten.</p>
     */
    inline bool DefaultPrefixHasBeenSet() const { return m_defaultPrefixHasBeenSet; }

    /**
     * <p>The default prefix used to replace the incoming route prefix when
     * rewritten.</p>
     */
    inline void SetDefaultPrefix(const DefaultGatewayRouteRewrite& value) { m_defaultPrefixHasBeenSet = true; m_defaultPrefix = value; }

    /**
     * <p>The default prefix used to replace the incoming route prefix when
     * rewritten.</p>
     */
    inline void SetDefaultPrefix(DefaultGatewayRouteRewrite&& value) { m_defaultPrefixHasBeenSet = true; m_defaultPrefix = std::move(value); }

    /**
     * <p>The default prefix used to replace the incoming route prefix when
     * rewritten.</p>
     */
    inline HttpGatewayRoutePrefixRewrite& WithDefaultPrefix(const DefaultGatewayRouteRewrite& value) { SetDefaultPrefix(value); return *this;}

    /**
     * <p>The default prefix used to replace the incoming route prefix when
     * rewritten.</p>
     */
    inline HttpGatewayRoutePrefixRewrite& WithDefaultPrefix(DefaultGatewayRouteRewrite&& value) { SetDefaultPrefix(std::move(value)); return *this;}


    /**
     * <p>The value used to replace the incoming route prefix when rewritten.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value used to replace the incoming route prefix when rewritten.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value used to replace the incoming route prefix when rewritten.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value used to replace the incoming route prefix when rewritten.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value used to replace the incoming route prefix when rewritten.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value used to replace the incoming route prefix when rewritten.</p>
     */
    inline HttpGatewayRoutePrefixRewrite& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value used to replace the incoming route prefix when rewritten.</p>
     */
    inline HttpGatewayRoutePrefixRewrite& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value used to replace the incoming route prefix when rewritten.</p>
     */
    inline HttpGatewayRoutePrefixRewrite& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    DefaultGatewayRouteRewrite m_defaultPrefix;
    bool m_defaultPrefixHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
