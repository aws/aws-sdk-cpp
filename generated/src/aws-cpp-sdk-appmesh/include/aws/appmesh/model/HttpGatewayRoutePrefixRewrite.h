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
    AWS_APPMESH_API HttpGatewayRoutePrefixRewrite() = default;
    AWS_APPMESH_API HttpGatewayRoutePrefixRewrite(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpGatewayRoutePrefixRewrite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default prefix used to replace the incoming route prefix when
     * rewritten.</p>
     */
    inline DefaultGatewayRouteRewrite GetDefaultPrefix() const { return m_defaultPrefix; }
    inline bool DefaultPrefixHasBeenSet() const { return m_defaultPrefixHasBeenSet; }
    inline void SetDefaultPrefix(DefaultGatewayRouteRewrite value) { m_defaultPrefixHasBeenSet = true; m_defaultPrefix = value; }
    inline HttpGatewayRoutePrefixRewrite& WithDefaultPrefix(DefaultGatewayRouteRewrite value) { SetDefaultPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value used to replace the incoming route prefix when rewritten.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    HttpGatewayRoutePrefixRewrite& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    DefaultGatewayRouteRewrite m_defaultPrefix{DefaultGatewayRouteRewrite::NOT_SET};
    bool m_defaultPrefixHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
