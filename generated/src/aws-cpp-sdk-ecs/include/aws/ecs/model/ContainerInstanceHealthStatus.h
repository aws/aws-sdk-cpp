/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/InstanceHealthCheckState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/InstanceHealthCheckResult.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>An object representing the health status of the container
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ContainerInstanceHealthStatus">AWS
   * API Reference</a></p>
   */
  class ContainerInstanceHealthStatus
  {
  public:
    AWS_ECS_API ContainerInstanceHealthStatus() = default;
    AWS_ECS_API ContainerInstanceHealthStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ContainerInstanceHealthStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The overall health status of the container instance. This is an aggregate
     * status of all container instance health checks.</p>
     */
    inline InstanceHealthCheckState GetOverallStatus() const { return m_overallStatus; }
    inline bool OverallStatusHasBeenSet() const { return m_overallStatusHasBeenSet; }
    inline void SetOverallStatus(InstanceHealthCheckState value) { m_overallStatusHasBeenSet = true; m_overallStatus = value; }
    inline ContainerInstanceHealthStatus& WithOverallStatus(InstanceHealthCheckState value) { SetOverallStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects representing the details of the container instance health
     * status.</p>
     */
    inline const Aws::Vector<InstanceHealthCheckResult>& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::Vector<InstanceHealthCheckResult>>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::Vector<InstanceHealthCheckResult>>
    ContainerInstanceHealthStatus& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    template<typename DetailsT = InstanceHealthCheckResult>
    ContainerInstanceHealthStatus& AddDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details.emplace_back(std::forward<DetailsT>(value)); return *this; }
    ///@}
  private:

    InstanceHealthCheckState m_overallStatus{InstanceHealthCheckState::NOT_SET};
    bool m_overallStatusHasBeenSet = false;

    Aws::Vector<InstanceHealthCheckResult> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
