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
    AWS_DATABASEMIGRATIONSERVICE_API RecommendationSettings();
    AWS_DATABASEMIGRATIONSERVICE_API RecommendationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RecommendationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of your target instance. Fleet Advisor calculates this value based
     * on your data collection type, such as total capacity and resource utilization.
     * Valid values include <code>"total-capacity"</code> and
     * <code>"utilization"</code>.</p>
     */
    inline const Aws::String& GetInstanceSizingType() const{ return m_instanceSizingType; }

    /**
     * <p>The size of your target instance. Fleet Advisor calculates this value based
     * on your data collection type, such as total capacity and resource utilization.
     * Valid values include <code>"total-capacity"</code> and
     * <code>"utilization"</code>.</p>
     */
    inline bool InstanceSizingTypeHasBeenSet() const { return m_instanceSizingTypeHasBeenSet; }

    /**
     * <p>The size of your target instance. Fleet Advisor calculates this value based
     * on your data collection type, such as total capacity and resource utilization.
     * Valid values include <code>"total-capacity"</code> and
     * <code>"utilization"</code>.</p>
     */
    inline void SetInstanceSizingType(const Aws::String& value) { m_instanceSizingTypeHasBeenSet = true; m_instanceSizingType = value; }

    /**
     * <p>The size of your target instance. Fleet Advisor calculates this value based
     * on your data collection type, such as total capacity and resource utilization.
     * Valid values include <code>"total-capacity"</code> and
     * <code>"utilization"</code>.</p>
     */
    inline void SetInstanceSizingType(Aws::String&& value) { m_instanceSizingTypeHasBeenSet = true; m_instanceSizingType = std::move(value); }

    /**
     * <p>The size of your target instance. Fleet Advisor calculates this value based
     * on your data collection type, such as total capacity and resource utilization.
     * Valid values include <code>"total-capacity"</code> and
     * <code>"utilization"</code>.</p>
     */
    inline void SetInstanceSizingType(const char* value) { m_instanceSizingTypeHasBeenSet = true; m_instanceSizingType.assign(value); }

    /**
     * <p>The size of your target instance. Fleet Advisor calculates this value based
     * on your data collection type, such as total capacity and resource utilization.
     * Valid values include <code>"total-capacity"</code> and
     * <code>"utilization"</code>.</p>
     */
    inline RecommendationSettings& WithInstanceSizingType(const Aws::String& value) { SetInstanceSizingType(value); return *this;}

    /**
     * <p>The size of your target instance. Fleet Advisor calculates this value based
     * on your data collection type, such as total capacity and resource utilization.
     * Valid values include <code>"total-capacity"</code> and
     * <code>"utilization"</code>.</p>
     */
    inline RecommendationSettings& WithInstanceSizingType(Aws::String&& value) { SetInstanceSizingType(std::move(value)); return *this;}

    /**
     * <p>The size of your target instance. Fleet Advisor calculates this value based
     * on your data collection type, such as total capacity and resource utilization.
     * Valid values include <code>"total-capacity"</code> and
     * <code>"utilization"</code>.</p>
     */
    inline RecommendationSettings& WithInstanceSizingType(const char* value) { SetInstanceSizingType(value); return *this;}


    /**
     * <p>The deployment option for your target engine. For production databases, Fleet
     * Advisor chooses Multi-AZ deployment. For development or test databases, Fleet
     * Advisor chooses Single-AZ deployment. Valid values include
     * <code>"development"</code> and <code>"production"</code>.</p>
     */
    inline const Aws::String& GetWorkloadType() const{ return m_workloadType; }

    /**
     * <p>The deployment option for your target engine. For production databases, Fleet
     * Advisor chooses Multi-AZ deployment. For development or test databases, Fleet
     * Advisor chooses Single-AZ deployment. Valid values include
     * <code>"development"</code> and <code>"production"</code>.</p>
     */
    inline bool WorkloadTypeHasBeenSet() const { return m_workloadTypeHasBeenSet; }

    /**
     * <p>The deployment option for your target engine. For production databases, Fleet
     * Advisor chooses Multi-AZ deployment. For development or test databases, Fleet
     * Advisor chooses Single-AZ deployment. Valid values include
     * <code>"development"</code> and <code>"production"</code>.</p>
     */
    inline void SetWorkloadType(const Aws::String& value) { m_workloadTypeHasBeenSet = true; m_workloadType = value; }

    /**
     * <p>The deployment option for your target engine. For production databases, Fleet
     * Advisor chooses Multi-AZ deployment. For development or test databases, Fleet
     * Advisor chooses Single-AZ deployment. Valid values include
     * <code>"development"</code> and <code>"production"</code>.</p>
     */
    inline void SetWorkloadType(Aws::String&& value) { m_workloadTypeHasBeenSet = true; m_workloadType = std::move(value); }

    /**
     * <p>The deployment option for your target engine. For production databases, Fleet
     * Advisor chooses Multi-AZ deployment. For development or test databases, Fleet
     * Advisor chooses Single-AZ deployment. Valid values include
     * <code>"development"</code> and <code>"production"</code>.</p>
     */
    inline void SetWorkloadType(const char* value) { m_workloadTypeHasBeenSet = true; m_workloadType.assign(value); }

    /**
     * <p>The deployment option for your target engine. For production databases, Fleet
     * Advisor chooses Multi-AZ deployment. For development or test databases, Fleet
     * Advisor chooses Single-AZ deployment. Valid values include
     * <code>"development"</code> and <code>"production"</code>.</p>
     */
    inline RecommendationSettings& WithWorkloadType(const Aws::String& value) { SetWorkloadType(value); return *this;}

    /**
     * <p>The deployment option for your target engine. For production databases, Fleet
     * Advisor chooses Multi-AZ deployment. For development or test databases, Fleet
     * Advisor chooses Single-AZ deployment. Valid values include
     * <code>"development"</code> and <code>"production"</code>.</p>
     */
    inline RecommendationSettings& WithWorkloadType(Aws::String&& value) { SetWorkloadType(std::move(value)); return *this;}

    /**
     * <p>The deployment option for your target engine. For production databases, Fleet
     * Advisor chooses Multi-AZ deployment. For development or test databases, Fleet
     * Advisor chooses Single-AZ deployment. Valid values include
     * <code>"development"</code> and <code>"production"</code>.</p>
     */
    inline RecommendationSettings& WithWorkloadType(const char* value) { SetWorkloadType(value); return *this;}

  private:

    Aws::String m_instanceSizingType;
    bool m_instanceSizingTypeHasBeenSet = false;

    Aws::String m_workloadType;
    bool m_workloadTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
