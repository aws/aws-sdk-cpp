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
   * <p>An object representing the traffic distribution requirements for matched TCP

   * requests.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TcpRouteAction">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API TcpRouteAction
  {
  public:
    TcpRouteAction();
    TcpRouteAction(Aws::Utils::Json::JsonView jsonValue);
    TcpRouteAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The targets that traffic is routed to when a request matches the route. You
     * can specify
         one or more targets and their relative weights to
     * distribute traffic with.</p>
     */
    inline const Aws::Vector<WeightedTarget>& GetWeightedTargets() const{ return m_weightedTargets; }

    /**
     * <p>The targets that traffic is routed to when a request matches the route. You
     * can specify
         one or more targets and their relative weights to
     * distribute traffic with.</p>
     */
    inline bool WeightedTargetsHasBeenSet() const { return m_weightedTargetsHasBeenSet; }

    /**
     * <p>The targets that traffic is routed to when a request matches the route. You
     * can specify
         one or more targets and their relative weights to
     * distribute traffic with.</p>
     */
    inline void SetWeightedTargets(const Aws::Vector<WeightedTarget>& value) { m_weightedTargetsHasBeenSet = true; m_weightedTargets = value; }

    /**
     * <p>The targets that traffic is routed to when a request matches the route. You
     * can specify
         one or more targets and their relative weights to
     * distribute traffic with.</p>
     */
    inline void SetWeightedTargets(Aws::Vector<WeightedTarget>&& value) { m_weightedTargetsHasBeenSet = true; m_weightedTargets = std::move(value); }

    /**
     * <p>The targets that traffic is routed to when a request matches the route. You
     * can specify
         one or more targets and their relative weights to
     * distribute traffic with.</p>
     */
    inline TcpRouteAction& WithWeightedTargets(const Aws::Vector<WeightedTarget>& value) { SetWeightedTargets(value); return *this;}

    /**
     * <p>The targets that traffic is routed to when a request matches the route. You
     * can specify
         one or more targets and their relative weights to
     * distribute traffic with.</p>
     */
    inline TcpRouteAction& WithWeightedTargets(Aws::Vector<WeightedTarget>&& value) { SetWeightedTargets(std::move(value)); return *this;}

    /**
     * <p>The targets that traffic is routed to when a request matches the route. You
     * can specify
         one or more targets and their relative weights to
     * distribute traffic with.</p>
     */
    inline TcpRouteAction& AddWeightedTargets(const WeightedTarget& value) { m_weightedTargetsHasBeenSet = true; m_weightedTargets.push_back(value); return *this; }

    /**
     * <p>The targets that traffic is routed to when a request matches the route. You
     * can specify
         one or more targets and their relative weights to
     * distribute traffic with.</p>
     */
    inline TcpRouteAction& AddWeightedTargets(WeightedTarget&& value) { m_weightedTargetsHasBeenSet = true; m_weightedTargets.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<WeightedTarget> m_weightedTargets;
    bool m_weightedTargetsHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
