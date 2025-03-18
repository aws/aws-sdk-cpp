/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/WeightedTarget.h>
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
   * <p>An object that represents the action to take if a match is
   * determined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TcpRouteAction">AWS
   * API Reference</a></p>
   */
  class TcpRouteAction
  {
  public:
    AWS_APPMESH_API TcpRouteAction() = default;
    AWS_APPMESH_API TcpRouteAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API TcpRouteAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents the targets that traffic is routed to when a
     * request matches the route.</p>
     */
    inline const Aws::Vector<WeightedTarget>& GetWeightedTargets() const { return m_weightedTargets; }
    inline bool WeightedTargetsHasBeenSet() const { return m_weightedTargetsHasBeenSet; }
    template<typename WeightedTargetsT = Aws::Vector<WeightedTarget>>
    void SetWeightedTargets(WeightedTargetsT&& value) { m_weightedTargetsHasBeenSet = true; m_weightedTargets = std::forward<WeightedTargetsT>(value); }
    template<typename WeightedTargetsT = Aws::Vector<WeightedTarget>>
    TcpRouteAction& WithWeightedTargets(WeightedTargetsT&& value) { SetWeightedTargets(std::forward<WeightedTargetsT>(value)); return *this;}
    template<typename WeightedTargetsT = WeightedTarget>
    TcpRouteAction& AddWeightedTargets(WeightedTargetsT&& value) { m_weightedTargetsHasBeenSet = true; m_weightedTargets.emplace_back(std::forward<WeightedTargetsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<WeightedTarget> m_weightedTargets;
    bool m_weightedTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
