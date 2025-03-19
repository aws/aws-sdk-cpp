/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/UsageType.h>
#include <aws/deadline/model/Stats.h>
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
    AWS_DEADLINE_API Statistics() = default;
    AWS_DEADLINE_API Statistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Statistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The queue ID.</p>
     */
    inline const Aws::String& GetQueueId() const { return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    template<typename QueueIdT = Aws::String>
    void SetQueueId(QueueIdT&& value) { m_queueIdHasBeenSet = true; m_queueId = std::forward<QueueIdT>(value); }
    template<typename QueueIdT = Aws::String>
    Statistics& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet ID.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    Statistics& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    Statistics& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job name.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    Statistics& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    Statistics& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of usage for the statistics.</p>
     */
    inline UsageType GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(UsageType value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline Statistics& WithUsageType(UsageType value) { SetUsageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The licensed product.</p>
     */
    inline const Aws::String& GetLicenseProduct() const { return m_licenseProduct; }
    inline bool LicenseProductHasBeenSet() const { return m_licenseProductHasBeenSet; }
    template<typename LicenseProductT = Aws::String>
    void SetLicenseProduct(LicenseProductT&& value) { m_licenseProductHasBeenSet = true; m_licenseProduct = std::forward<LicenseProductT>(value); }
    template<typename LicenseProductT = Aws::String>
    Statistics& WithLicenseProduct(LicenseProductT&& value) { SetLicenseProduct(std::forward<LicenseProductT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    Statistics& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in a list of statistics.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline Statistics& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the statistics should appear in USD. Options include: minimum, maximum,
     * average or sum.</p>
     */
    inline const Stats& GetCostInUsd() const { return m_costInUsd; }
    inline bool CostInUsdHasBeenSet() const { return m_costInUsdHasBeenSet; }
    template<typename CostInUsdT = Stats>
    void SetCostInUsd(CostInUsdT&& value) { m_costInUsdHasBeenSet = true; m_costInUsd = std::forward<CostInUsdT>(value); }
    template<typename CostInUsdT = Stats>
    Statistics& WithCostInUsd(CostInUsdT&& value) { SetCostInUsd(std::forward<CostInUsdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total aggregated runtime.</p>
     */
    inline const Stats& GetRuntimeInSeconds() const { return m_runtimeInSeconds; }
    inline bool RuntimeInSecondsHasBeenSet() const { return m_runtimeInSecondsHasBeenSet; }
    template<typename RuntimeInSecondsT = Stats>
    void SetRuntimeInSeconds(RuntimeInSecondsT&& value) { m_runtimeInSecondsHasBeenSet = true; m_runtimeInSeconds = std::forward<RuntimeInSecondsT>(value); }
    template<typename RuntimeInSecondsT = Stats>
    Statistics& WithRuntimeInSeconds(RuntimeInSecondsT&& value) { SetRuntimeInSeconds(std::forward<RuntimeInSecondsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time for the aggregation.</p>
     */
    inline const Aws::Utils::DateTime& GetAggregationStartTime() const { return m_aggregationStartTime; }
    inline bool AggregationStartTimeHasBeenSet() const { return m_aggregationStartTimeHasBeenSet; }
    template<typename AggregationStartTimeT = Aws::Utils::DateTime>
    void SetAggregationStartTime(AggregationStartTimeT&& value) { m_aggregationStartTimeHasBeenSet = true; m_aggregationStartTime = std::forward<AggregationStartTimeT>(value); }
    template<typename AggregationStartTimeT = Aws::Utils::DateTime>
    Statistics& WithAggregationStartTime(AggregationStartTimeT&& value) { SetAggregationStartTime(std::forward<AggregationStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for the aggregation.</p>
     */
    inline const Aws::Utils::DateTime& GetAggregationEndTime() const { return m_aggregationEndTime; }
    inline bool AggregationEndTimeHasBeenSet() const { return m_aggregationEndTimeHasBeenSet; }
    template<typename AggregationEndTimeT = Aws::Utils::DateTime>
    void SetAggregationEndTime(AggregationEndTimeT&& value) { m_aggregationEndTimeHasBeenSet = true; m_aggregationEndTime = std::forward<AggregationEndTimeT>(value); }
    template<typename AggregationEndTimeT = Aws::Utils::DateTime>
    Statistics& WithAggregationEndTime(AggregationEndTimeT&& value) { SetAggregationEndTime(std::forward<AggregationEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    UsageType m_usageType{UsageType::NOT_SET};
    bool m_usageTypeHasBeenSet = false;

    Aws::String m_licenseProduct;
    bool m_licenseProductHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    Stats m_costInUsd;
    bool m_costInUsdHasBeenSet = false;

    Stats m_runtimeInSeconds;
    bool m_runtimeInSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_aggregationStartTime{};
    bool m_aggregationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_aggregationEndTime{};
    bool m_aggregationEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
