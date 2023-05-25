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
    AWS_ECS_API ContainerInstanceHealthStatus();
    AWS_ECS_API ContainerInstanceHealthStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ContainerInstanceHealthStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The overall health status of the container instance. This is an aggregate
     * status of all container instance health checks.</p>
     */
    inline const InstanceHealthCheckState& GetOverallStatus() const{ return m_overallStatus; }

    /**
     * <p>The overall health status of the container instance. This is an aggregate
     * status of all container instance health checks.</p>
     */
    inline bool OverallStatusHasBeenSet() const { return m_overallStatusHasBeenSet; }

    /**
     * <p>The overall health status of the container instance. This is an aggregate
     * status of all container instance health checks.</p>
     */
    inline void SetOverallStatus(const InstanceHealthCheckState& value) { m_overallStatusHasBeenSet = true; m_overallStatus = value; }

    /**
     * <p>The overall health status of the container instance. This is an aggregate
     * status of all container instance health checks.</p>
     */
    inline void SetOverallStatus(InstanceHealthCheckState&& value) { m_overallStatusHasBeenSet = true; m_overallStatus = std::move(value); }

    /**
     * <p>The overall health status of the container instance. This is an aggregate
     * status of all container instance health checks.</p>
     */
    inline ContainerInstanceHealthStatus& WithOverallStatus(const InstanceHealthCheckState& value) { SetOverallStatus(value); return *this;}

    /**
     * <p>The overall health status of the container instance. This is an aggregate
     * status of all container instance health checks.</p>
     */
    inline ContainerInstanceHealthStatus& WithOverallStatus(InstanceHealthCheckState&& value) { SetOverallStatus(std::move(value)); return *this;}


    /**
     * <p>An array of objects representing the details of the container instance health
     * status.</p>
     */
    inline const Aws::Vector<InstanceHealthCheckResult>& GetDetails() const{ return m_details; }

    /**
     * <p>An array of objects representing the details of the container instance health
     * status.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>An array of objects representing the details of the container instance health
     * status.</p>
     */
    inline void SetDetails(const Aws::Vector<InstanceHealthCheckResult>& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>An array of objects representing the details of the container instance health
     * status.</p>
     */
    inline void SetDetails(Aws::Vector<InstanceHealthCheckResult>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>An array of objects representing the details of the container instance health
     * status.</p>
     */
    inline ContainerInstanceHealthStatus& WithDetails(const Aws::Vector<InstanceHealthCheckResult>& value) { SetDetails(value); return *this;}

    /**
     * <p>An array of objects representing the details of the container instance health
     * status.</p>
     */
    inline ContainerInstanceHealthStatus& WithDetails(Aws::Vector<InstanceHealthCheckResult>&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>An array of objects representing the details of the container instance health
     * status.</p>
     */
    inline ContainerInstanceHealthStatus& AddDetails(const InstanceHealthCheckResult& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }

    /**
     * <p>An array of objects representing the details of the container instance health
     * status.</p>
     */
    inline ContainerInstanceHealthStatus& AddDetails(InstanceHealthCheckResult&& value) { m_detailsHasBeenSet = true; m_details.push_back(std::move(value)); return *this; }

  private:

    InstanceHealthCheckState m_overallStatus;
    bool m_overallStatusHasBeenSet = false;

    Aws::Vector<InstanceHealthCheckResult> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
