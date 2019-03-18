/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEDEPLOY_API TargetGroupPairInfo
  {
  public:
    TargetGroupPairInfo();
    TargetGroupPairInfo(Aws::Utils::Json::JsonView jsonValue);
    TargetGroupPairInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> One pair of target groups. One is associated with the original task set. The
     * second is associated with the task set that serves traffic after the deployment
     * is complete. </p>
     */
    inline const Aws::Vector<TargetGroupInfo>& GetTargetGroups() const{ return m_targetGroups; }

    /**
     * <p> One pair of target groups. One is associated with the original task set. The
     * second is associated with the task set that serves traffic after the deployment
     * is complete. </p>
     */
    inline bool TargetGroupsHasBeenSet() const { return m_targetGroupsHasBeenSet; }

    /**
     * <p> One pair of target groups. One is associated with the original task set. The
     * second is associated with the task set that serves traffic after the deployment
     * is complete. </p>
     */
    inline void SetTargetGroups(const Aws::Vector<TargetGroupInfo>& value) { m_targetGroupsHasBeenSet = true; m_targetGroups = value; }

    /**
     * <p> One pair of target groups. One is associated with the original task set. The
     * second is associated with the task set that serves traffic after the deployment
     * is complete. </p>
     */
    inline void SetTargetGroups(Aws::Vector<TargetGroupInfo>&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups = std::move(value); }

    /**
     * <p> One pair of target groups. One is associated with the original task set. The
     * second is associated with the task set that serves traffic after the deployment
     * is complete. </p>
     */
    inline TargetGroupPairInfo& WithTargetGroups(const Aws::Vector<TargetGroupInfo>& value) { SetTargetGroups(value); return *this;}

    /**
     * <p> One pair of target groups. One is associated with the original task set. The
     * second is associated with the task set that serves traffic after the deployment
     * is complete. </p>
     */
    inline TargetGroupPairInfo& WithTargetGroups(Aws::Vector<TargetGroupInfo>&& value) { SetTargetGroups(std::move(value)); return *this;}

    /**
     * <p> One pair of target groups. One is associated with the original task set. The
     * second is associated with the task set that serves traffic after the deployment
     * is complete. </p>
     */
    inline TargetGroupPairInfo& AddTargetGroups(const TargetGroupInfo& value) { m_targetGroupsHasBeenSet = true; m_targetGroups.push_back(value); return *this; }

    /**
     * <p> One pair of target groups. One is associated with the original task set. The
     * second is associated with the task set that serves traffic after the deployment
     * is complete. </p>
     */
    inline TargetGroupPairInfo& AddTargetGroups(TargetGroupInfo&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups.push_back(std::move(value)); return *this; }


    /**
     * <p> The path used by a load balancer to route production traffic when an Amazon
     * ECS deployment is complete. </p>
     */
    inline const TrafficRoute& GetProdTrafficRoute() const{ return m_prodTrafficRoute; }

    /**
     * <p> The path used by a load balancer to route production traffic when an Amazon
     * ECS deployment is complete. </p>
     */
    inline bool ProdTrafficRouteHasBeenSet() const { return m_prodTrafficRouteHasBeenSet; }

    /**
     * <p> The path used by a load balancer to route production traffic when an Amazon
     * ECS deployment is complete. </p>
     */
    inline void SetProdTrafficRoute(const TrafficRoute& value) { m_prodTrafficRouteHasBeenSet = true; m_prodTrafficRoute = value; }

    /**
     * <p> The path used by a load balancer to route production traffic when an Amazon
     * ECS deployment is complete. </p>
     */
    inline void SetProdTrafficRoute(TrafficRoute&& value) { m_prodTrafficRouteHasBeenSet = true; m_prodTrafficRoute = std::move(value); }

    /**
     * <p> The path used by a load balancer to route production traffic when an Amazon
     * ECS deployment is complete. </p>
     */
    inline TargetGroupPairInfo& WithProdTrafficRoute(const TrafficRoute& value) { SetProdTrafficRoute(value); return *this;}

    /**
     * <p> The path used by a load balancer to route production traffic when an Amazon
     * ECS deployment is complete. </p>
     */
    inline TargetGroupPairInfo& WithProdTrafficRoute(TrafficRoute&& value) { SetProdTrafficRoute(std::move(value)); return *this;}


    /**
     * <p> An optional path used by a load balancer to route test traffic after an
     * Amazon ECS deployment. Validation can occur while test traffic is served during
     * a deployment. </p>
     */
    inline const TrafficRoute& GetTestTrafficRoute() const{ return m_testTrafficRoute; }

    /**
     * <p> An optional path used by a load balancer to route test traffic after an
     * Amazon ECS deployment. Validation can occur while test traffic is served during
     * a deployment. </p>
     */
    inline bool TestTrafficRouteHasBeenSet() const { return m_testTrafficRouteHasBeenSet; }

    /**
     * <p> An optional path used by a load balancer to route test traffic after an
     * Amazon ECS deployment. Validation can occur while test traffic is served during
     * a deployment. </p>
     */
    inline void SetTestTrafficRoute(const TrafficRoute& value) { m_testTrafficRouteHasBeenSet = true; m_testTrafficRoute = value; }

    /**
     * <p> An optional path used by a load balancer to route test traffic after an
     * Amazon ECS deployment. Validation can occur while test traffic is served during
     * a deployment. </p>
     */
    inline void SetTestTrafficRoute(TrafficRoute&& value) { m_testTrafficRouteHasBeenSet = true; m_testTrafficRoute = std::move(value); }

    /**
     * <p> An optional path used by a load balancer to route test traffic after an
     * Amazon ECS deployment. Validation can occur while test traffic is served during
     * a deployment. </p>
     */
    inline TargetGroupPairInfo& WithTestTrafficRoute(const TrafficRoute& value) { SetTestTrafficRoute(value); return *this;}

    /**
     * <p> An optional path used by a load balancer to route test traffic after an
     * Amazon ECS deployment. Validation can occur while test traffic is served during
     * a deployment. </p>
     */
    inline TargetGroupPairInfo& WithTestTrafficRoute(TrafficRoute&& value) { SetTestTrafficRoute(std::move(value)); return *this;}

  private:

    Aws::Vector<TargetGroupInfo> m_targetGroups;
    bool m_targetGroupsHasBeenSet;

    TrafficRoute m_prodTrafficRoute;
    bool m_prodTrafficRouteHasBeenSet;

    TrafficRoute m_testTrafficRoute;
    bool m_testTrafficRouteHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
