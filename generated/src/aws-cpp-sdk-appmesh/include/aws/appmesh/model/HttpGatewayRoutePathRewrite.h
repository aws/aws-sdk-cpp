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
   * <p>An object that represents the path to rewrite.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpGatewayRoutePathRewrite">AWS
   * API Reference</a></p>
   */
  class HttpGatewayRoutePathRewrite
  {
  public:
    AWS_APPMESH_API HttpGatewayRoutePathRewrite();
    AWS_APPMESH_API HttpGatewayRoutePathRewrite(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpGatewayRoutePathRewrite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The exact path to rewrite.</p>
     */
    inline const Aws::String& GetExact() const{ return m_exact; }

    /**
     * <p>The exact path to rewrite.</p>
     */
    inline bool ExactHasBeenSet() const { return m_exactHasBeenSet; }

    /**
     * <p>The exact path to rewrite.</p>
     */
    inline void SetExact(const Aws::String& value) { m_exactHasBeenSet = true; m_exact = value; }

    /**
     * <p>The exact path to rewrite.</p>
     */
    inline void SetExact(Aws::String&& value) { m_exactHasBeenSet = true; m_exact = std::move(value); }

    /**
     * <p>The exact path to rewrite.</p>
     */
    inline void SetExact(const char* value) { m_exactHasBeenSet = true; m_exact.assign(value); }

    /**
     * <p>The exact path to rewrite.</p>
     */
    inline HttpGatewayRoutePathRewrite& WithExact(const Aws::String& value) { SetExact(value); return *this;}

    /**
     * <p>The exact path to rewrite.</p>
     */
    inline HttpGatewayRoutePathRewrite& WithExact(Aws::String&& value) { SetExact(std::move(value)); return *this;}

    /**
     * <p>The exact path to rewrite.</p>
     */
    inline HttpGatewayRoutePathRewrite& WithExact(const char* value) { SetExact(value); return *this;}

  private:

    Aws::String m_exact;
    bool m_exactHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
