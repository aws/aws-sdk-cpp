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
    AWS_ECS_API InstanceHealthCheckResult() = default;
    AWS_ECS_API InstanceHealthCheckResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API InstanceHealthCheckResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of container instance health status that was verified.</p>
     */
    inline InstanceHealthCheckType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InstanceHealthCheckType value) { m_typeHasBeenSet = true; m_type = value; }
    inline InstanceHealthCheckResult& WithType(InstanceHealthCheckType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container instance health status.</p>
     */
    inline InstanceHealthCheckState GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InstanceHealthCheckState value) { m_statusHasBeenSet = true; m_status = value; }
    inline InstanceHealthCheckResult& WithStatus(InstanceHealthCheckState value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for when the container instance health status was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    InstanceHealthCheckResult& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for when the container instance health status last
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChange() const { return m_lastStatusChange; }
    inline bool LastStatusChangeHasBeenSet() const { return m_lastStatusChangeHasBeenSet; }
    template<typename LastStatusChangeT = Aws::Utils::DateTime>
    void SetLastStatusChange(LastStatusChangeT&& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = std::forward<LastStatusChangeT>(value); }
    template<typename LastStatusChangeT = Aws::Utils::DateTime>
    InstanceHealthCheckResult& WithLastStatusChange(LastStatusChangeT&& value) { SetLastStatusChange(std::forward<LastStatusChangeT>(value)); return *this;}
    ///@}
  private:

    InstanceHealthCheckType m_type{InstanceHealthCheckType::NOT_SET};
    bool m_typeHasBeenSet = false;

    InstanceHealthCheckState m_status{InstanceHealthCheckState::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusChange{};
    bool m_lastStatusChangeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
