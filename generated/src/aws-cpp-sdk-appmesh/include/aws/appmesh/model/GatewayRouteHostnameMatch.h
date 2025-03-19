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
    AWS_APPMESH_API GatewayRouteHostnameMatch() = default;
    AWS_APPMESH_API GatewayRouteHostnameMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GatewayRouteHostnameMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The exact host name to match on.</p>
     */
    inline const Aws::String& GetExact() const { return m_exact; }
    inline bool ExactHasBeenSet() const { return m_exactHasBeenSet; }
    template<typename ExactT = Aws::String>
    void SetExact(ExactT&& value) { m_exactHasBeenSet = true; m_exact = std::forward<ExactT>(value); }
    template<typename ExactT = Aws::String>
    GatewayRouteHostnameMatch& WithExact(ExactT&& value) { SetExact(std::forward<ExactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified ending characters of the host name to match on.</p>
     */
    inline const Aws::String& GetSuffix() const { return m_suffix; }
    inline bool SuffixHasBeenSet() const { return m_suffixHasBeenSet; }
    template<typename SuffixT = Aws::String>
    void SetSuffix(SuffixT&& value) { m_suffixHasBeenSet = true; m_suffix = std::forward<SuffixT>(value); }
    template<typename SuffixT = Aws::String>
    GatewayRouteHostnameMatch& WithSuffix(SuffixT&& value) { SetSuffix(std::forward<SuffixT>(value)); return *this;}
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
