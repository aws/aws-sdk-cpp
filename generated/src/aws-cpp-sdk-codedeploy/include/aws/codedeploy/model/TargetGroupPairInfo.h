/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/TrafficRoute.h>
#include <aws/codedeploy/model/TargetGroupInfo.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p> Information about two target groups and how traffic is routed during an
   * Amazon ECS deployment. An optional test traffic route can be specified.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TargetGroupPairInfo">AWS
   * API Reference</a></p>
   */
  class TargetGroupPairInfo
  {
  public:
    AWS_CODEDEPLOY_API TargetGroupPairInfo() = default;
    AWS_CODEDEPLOY_API TargetGroupPairInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TargetGroupPairInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> One pair of target groups. One is associated with the original task set. The
     * second is associated with the task set that serves traffic after the deployment
     * is complete. </p>
     */
    inline const Aws::Vector<TargetGroupInfo>& GetTargetGroups() const { return m_targetGroups; }
    inline bool TargetGroupsHasBeenSet() const { return m_targetGroupsHasBeenSet; }
    template<typename TargetGroupsT = Aws::Vector<TargetGroupInfo>>
    void SetTargetGroups(TargetGroupsT&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups = std::forward<TargetGroupsT>(value); }
    template<typename TargetGroupsT = Aws::Vector<TargetGroupInfo>>
    TargetGroupPairInfo& WithTargetGroups(TargetGroupsT&& value) { SetTargetGroups(std::forward<TargetGroupsT>(value)); return *this;}
    template<typename TargetGroupsT = TargetGroupInfo>
    TargetGroupPairInfo& AddTargetGroups(TargetGroupsT&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups.emplace_back(std::forward<TargetGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The path used by a load balancer to route production traffic when an Amazon
     * ECS deployment is complete. </p>
     */
    inline const TrafficRoute& GetProdTrafficRoute() const { return m_prodTrafficRoute; }
    inline bool ProdTrafficRouteHasBeenSet() const { return m_prodTrafficRouteHasBeenSet; }
    template<typename ProdTrafficRouteT = TrafficRoute>
    void SetProdTrafficRoute(ProdTrafficRouteT&& value) { m_prodTrafficRouteHasBeenSet = true; m_prodTrafficRoute = std::forward<ProdTrafficRouteT>(value); }
    template<typename ProdTrafficRouteT = TrafficRoute>
    TargetGroupPairInfo& WithProdTrafficRoute(ProdTrafficRouteT&& value) { SetProdTrafficRoute(std::forward<ProdTrafficRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional path used by a load balancer to route test traffic after an
     * Amazon ECS deployment. Validation can occur while test traffic is served during
     * a deployment. </p>
     */
    inline const TrafficRoute& GetTestTrafficRoute() const { return m_testTrafficRoute; }
    inline bool TestTrafficRouteHasBeenSet() const { return m_testTrafficRouteHasBeenSet; }
    template<typename TestTrafficRouteT = TrafficRoute>
    void SetTestTrafficRoute(TestTrafficRouteT&& value) { m_testTrafficRouteHasBeenSet = true; m_testTrafficRoute = std::forward<TestTrafficRouteT>(value); }
    template<typename TestTrafficRouteT = TrafficRoute>
    TargetGroupPairInfo& WithTestTrafficRoute(TestTrafficRouteT&& value) { SetTestTrafficRoute(std::forward<TestTrafficRouteT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TargetGroupInfo> m_targetGroups;
    bool m_targetGroupsHasBeenSet = false;

    TrafficRoute m_prodTrafficRoute;
    bool m_prodTrafficRouteHasBeenSet = false;

    TrafficRoute m_testTrafficRoute;
    bool m_testTrafficRouteHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
