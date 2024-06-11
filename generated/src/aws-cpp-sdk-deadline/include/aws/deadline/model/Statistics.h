﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/Stats.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/UsageType.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>A list of statistics for a session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/Statistics">AWS
   * API Reference</a></p>
   */
  class Statistics
  {
  public:
    AWS_DEADLINE_API Statistics();
    AWS_DEADLINE_API Statistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Statistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The end time for the aggregation.</p>
     */
    inline const Aws::Utils::DateTime& GetAggregationEndTime() const{ return m_aggregationEndTime; }
    inline bool AggregationEndTimeHasBeenSet() const { return m_aggregationEndTimeHasBeenSet; }
    inline void SetAggregationEndTime(const Aws::Utils::DateTime& value) { m_aggregationEndTimeHasBeenSet = true; m_aggregationEndTime = value; }
    inline void SetAggregationEndTime(Aws::Utils::DateTime&& value) { m_aggregationEndTimeHasBeenSet = true; m_aggregationEndTime = std::move(value); }
    inline Statistics& WithAggregationEndTime(const Aws::Utils::DateTime& value) { SetAggregationEndTime(value); return *this;}
    inline Statistics& WithAggregationEndTime(Aws::Utils::DateTime&& value) { SetAggregationEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time for the aggregation.</p>
     */
    inline const Aws::Utils::DateTime& GetAggregationStartTime() const{ return m_aggregationStartTime; }
    inline bool AggregationStartTimeHasBeenSet() const { return m_aggregationStartTimeHasBeenSet; }
    inline void SetAggregationStartTime(const Aws::Utils::DateTime& value) { m_aggregationStartTimeHasBeenSet = true; m_aggregationStartTime = value; }
    inline void SetAggregationStartTime(Aws::Utils::DateTime&& value) { m_aggregationStartTimeHasBeenSet = true; m_aggregationStartTime = std::move(value); }
    inline Statistics& WithAggregationStartTime(const Aws::Utils::DateTime& value) { SetAggregationStartTime(value); return *this;}
    inline Statistics& WithAggregationStartTime(Aws::Utils::DateTime&& value) { SetAggregationStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the statistics should appear in USD. Options include: minimum, maximum,
     * average or sum.</p>
     */
    inline const Stats& GetCostInUsd() const{ return m_costInUsd; }
    inline bool CostInUsdHasBeenSet() const { return m_costInUsdHasBeenSet; }
    inline void SetCostInUsd(const Stats& value) { m_costInUsdHasBeenSet = true; m_costInUsd = value; }
    inline void SetCostInUsd(Stats&& value) { m_costInUsdHasBeenSet = true; m_costInUsd = std::move(value); }
    inline Statistics& WithCostInUsd(const Stats& value) { SetCostInUsd(value); return *this;}
    inline Statistics& WithCostInUsd(Stats&& value) { SetCostInUsd(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in a list of statistics.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline Statistics& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet ID.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline Statistics& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline Statistics& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline Statistics& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline Statistics& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline Statistics& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline Statistics& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline Statistics& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline Statistics& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline Statistics& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job name.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline Statistics& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline Statistics& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline Statistics& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The licensed product.</p>
     */
    inline const Aws::String& GetLicenseProduct() const{ return m_licenseProduct; }
    inline bool LicenseProductHasBeenSet() const { return m_licenseProductHasBeenSet; }
    inline void SetLicenseProduct(const Aws::String& value) { m_licenseProductHasBeenSet = true; m_licenseProduct = value; }
    inline void SetLicenseProduct(Aws::String&& value) { m_licenseProductHasBeenSet = true; m_licenseProduct = std::move(value); }
    inline void SetLicenseProduct(const char* value) { m_licenseProductHasBeenSet = true; m_licenseProduct.assign(value); }
    inline Statistics& WithLicenseProduct(const Aws::String& value) { SetLicenseProduct(value); return *this;}
    inline Statistics& WithLicenseProduct(Aws::String&& value) { SetLicenseProduct(std::move(value)); return *this;}
    inline Statistics& WithLicenseProduct(const char* value) { SetLicenseProduct(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline Statistics& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline Statistics& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline Statistics& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total aggregated runtime.</p>
     */
    inline const Stats& GetRuntimeInSeconds() const{ return m_runtimeInSeconds; }
    inline bool RuntimeInSecondsHasBeenSet() const { return m_runtimeInSecondsHasBeenSet; }
    inline void SetRuntimeInSeconds(const Stats& value) { m_runtimeInSecondsHasBeenSet = true; m_runtimeInSeconds = value; }
    inline void SetRuntimeInSeconds(Stats&& value) { m_runtimeInSecondsHasBeenSet = true; m_runtimeInSeconds = std::move(value); }
    inline Statistics& WithRuntimeInSeconds(const Stats& value) { SetRuntimeInSeconds(value); return *this;}
    inline Statistics& WithRuntimeInSeconds(Stats&& value) { SetRuntimeInSeconds(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of usage for the statistics.</p>
     */
    inline const UsageType& GetUsageType() const{ return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(const UsageType& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline void SetUsageType(UsageType&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }
    inline Statistics& WithUsageType(const UsageType& value) { SetUsageType(value); return *this;}
    inline Statistics& WithUsageType(UsageType&& value) { SetUsageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline Statistics& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline Statistics& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline Statistics& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_aggregationEndTime;
    bool m_aggregationEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_aggregationStartTime;
    bool m_aggregationStartTimeHasBeenSet = false;

    Stats m_costInUsd;
    bool m_costInUsdHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_licenseProduct;
    bool m_licenseProductHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Stats m_runtimeInSeconds;
    bool m_runtimeInSecondsHasBeenSet = false;

    UsageType m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
