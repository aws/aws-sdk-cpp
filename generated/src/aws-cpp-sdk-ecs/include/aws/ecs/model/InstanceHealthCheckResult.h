/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/InstanceHealthCheckType.h>
#include <aws/ecs/model/InstanceHealthCheckState.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An object representing the result of a container instance health status
   * check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/InstanceHealthCheckResult">AWS
   * API Reference</a></p>
   */
  class InstanceHealthCheckResult
  {
  public:
    AWS_ECS_API InstanceHealthCheckResult();
    AWS_ECS_API InstanceHealthCheckResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API InstanceHealthCheckResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of container instance health status that was verified.</p>
     */
    inline const InstanceHealthCheckType& GetType() const{ return m_type; }

    /**
     * <p>The type of container instance health status that was verified.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of container instance health status that was verified.</p>
     */
    inline void SetType(const InstanceHealthCheckType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of container instance health status that was verified.</p>
     */
    inline void SetType(InstanceHealthCheckType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of container instance health status that was verified.</p>
     */
    inline InstanceHealthCheckResult& WithType(const InstanceHealthCheckType& value) { SetType(value); return *this;}

    /**
     * <p>The type of container instance health status that was verified.</p>
     */
    inline InstanceHealthCheckResult& WithType(InstanceHealthCheckType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The container instance health status.</p>
     */
    inline const InstanceHealthCheckState& GetStatus() const{ return m_status; }

    /**
     * <p>The container instance health status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The container instance health status.</p>
     */
    inline void SetStatus(const InstanceHealthCheckState& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The container instance health status.</p>
     */
    inline void SetStatus(InstanceHealthCheckState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The container instance health status.</p>
     */
    inline InstanceHealthCheckResult& WithStatus(const InstanceHealthCheckState& value) { SetStatus(value); return *this;}

    /**
     * <p>The container instance health status.</p>
     */
    inline InstanceHealthCheckResult& WithStatus(InstanceHealthCheckState&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for when the container instance health status was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The Unix timestamp for when the container instance health status was last
     * updated.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the container instance health status was last
     * updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The Unix timestamp for when the container instance health status was last
     * updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The Unix timestamp for when the container instance health status was last
     * updated.</p>
     */
    inline InstanceHealthCheckResult& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The Unix timestamp for when the container instance health status was last
     * updated.</p>
     */
    inline InstanceHealthCheckResult& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for when the container instance health status last
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChange() const{ return m_lastStatusChange; }

    /**
     * <p>The Unix timestamp for when the container instance health status last
     * changed.</p>
     */
    inline bool LastStatusChangeHasBeenSet() const { return m_lastStatusChangeHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the container instance health status last
     * changed.</p>
     */
    inline void SetLastStatusChange(const Aws::Utils::DateTime& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = value; }

    /**
     * <p>The Unix timestamp for when the container instance health status last
     * changed.</p>
     */
    inline void SetLastStatusChange(Aws::Utils::DateTime&& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = std::move(value); }

    /**
     * <p>The Unix timestamp for when the container instance health status last
     * changed.</p>
     */
    inline InstanceHealthCheckResult& WithLastStatusChange(const Aws::Utils::DateTime& value) { SetLastStatusChange(value); return *this;}

    /**
     * <p>The Unix timestamp for when the container instance health status last
     * changed.</p>
     */
    inline InstanceHealthCheckResult& WithLastStatusChange(Aws::Utils::DateTime&& value) { SetLastStatusChange(std::move(value)); return *this;}

  private:

    InstanceHealthCheckType m_type;
    bool m_typeHasBeenSet = false;

    InstanceHealthCheckState m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusChange;
    bool m_lastStatusChangeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
