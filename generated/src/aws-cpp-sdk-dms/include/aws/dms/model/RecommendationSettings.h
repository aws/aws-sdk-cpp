/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information about the required target engine settings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RecommendationSettings">AWS
   * API Reference</a></p>
   */
  class RecommendationSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RecommendationSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API RecommendationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RecommendationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The size of your target instance. Fleet Advisor calculates this value based
     * on your data collection type, such as total capacity and resource utilization.
     * Valid values include <code>"total-capacity"</code> and
     * <code>"utilization"</code>.</p>
     */
    inline const Aws::String& GetInstanceSizingType() const { return m_instanceSizingType; }
    inline bool InstanceSizingTypeHasBeenSet() const { return m_instanceSizingTypeHasBeenSet; }
    template<typename InstanceSizingTypeT = Aws::String>
    void SetInstanceSizingType(InstanceSizingTypeT&& value) { m_instanceSizingTypeHasBeenSet = true; m_instanceSizingType = std::forward<InstanceSizingTypeT>(value); }
    template<typename InstanceSizingTypeT = Aws::String>
    RecommendationSettings& WithInstanceSizingType(InstanceSizingTypeT&& value) { SetInstanceSizingType(std::forward<InstanceSizingTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment option for your target engine. For production databases, Fleet
     * Advisor chooses Multi-AZ deployment. For development or test databases, Fleet
     * Advisor chooses Single-AZ deployment. Valid values include
     * <code>"development"</code> and <code>"production"</code>.</p>
     */
    inline const Aws::String& GetWorkloadType() const { return m_workloadType; }
    inline bool WorkloadTypeHasBeenSet() const { return m_workloadTypeHasBeenSet; }
    template<typename WorkloadTypeT = Aws::String>
    void SetWorkloadType(WorkloadTypeT&& value) { m_workloadTypeHasBeenSet = true; m_workloadType = std::forward<WorkloadTypeT>(value); }
    template<typename WorkloadTypeT = Aws::String>
    RecommendationSettings& WithWorkloadType(WorkloadTypeT&& value) { SetWorkloadType(std::forward<WorkloadTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceSizingType;
    bool m_instanceSizingTypeHasBeenSet = false;

    Aws::String m_workloadType;
    bool m_workloadTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
