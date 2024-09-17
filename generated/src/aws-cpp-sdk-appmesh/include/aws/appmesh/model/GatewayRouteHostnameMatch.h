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
   * <p>An object representing the gateway route host name to match.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GatewayRouteHostnameMatch">AWS
   * API Reference</a></p>
   */
  class GatewayRouteHostnameMatch
  {
  public:
    AWS_APPMESH_API GatewayRouteHostnameMatch();
    AWS_APPMESH_API GatewayRouteHostnameMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GatewayRouteHostnameMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The exact host name to match on.</p>
     */
    inline const Aws::String& GetExact() const{ return m_exact; }
    inline bool ExactHasBeenSet() const { return m_exactHasBeenSet; }
    inline void SetExact(const Aws::String& value) { m_exactHasBeenSet = true; m_exact = value; }
    inline void SetExact(Aws::String&& value) { m_exactHasBeenSet = true; m_exact = std::move(value); }
    inline void SetExact(const char* value) { m_exactHasBeenSet = true; m_exact.assign(value); }
    inline GatewayRouteHostnameMatch& WithExact(const Aws::String& value) { SetExact(value); return *this;}
    inline GatewayRouteHostnameMatch& WithExact(Aws::String&& value) { SetExact(std::move(value)); return *this;}
    inline GatewayRouteHostnameMatch& WithExact(const char* value) { SetExact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified ending characters of the host name to match on.</p>
     */
    inline const Aws::String& GetSuffix() const{ return m_suffix; }
    inline bool SuffixHasBeenSet() const { return m_suffixHasBeenSet; }
    inline void SetSuffix(const Aws::String& value) { m_suffixHasBeenSet = true; m_suffix = value; }
    inline void SetSuffix(Aws::String&& value) { m_suffixHasBeenSet = true; m_suffix = std::move(value); }
    inline void SetSuffix(const char* value) { m_suffixHasBeenSet = true; m_suffix.assign(value); }
    inline GatewayRouteHostnameMatch& WithSuffix(const Aws::String& value) { SetSuffix(value); return *this;}
    inline GatewayRouteHostnameMatch& WithSuffix(Aws::String&& value) { SetSuffix(std::move(value)); return *this;}
    inline GatewayRouteHostnameMatch& WithSuffix(const char* value) { SetSuffix(value); return *this;}
    ///@}
  private:

    Aws::String m_exact;
    bool m_exactHasBeenSet = false;

    Aws::String m_suffix;
    bool m_suffixHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
