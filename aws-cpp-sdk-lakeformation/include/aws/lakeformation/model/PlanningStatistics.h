/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>Statistics related to the processing of a query statement.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/PlanningStatistics">AWS
   * API Reference</a></p>
   */
  class PlanningStatistics
  {
  public:
    AWS_LAKEFORMATION_API PlanningStatistics();
    AWS_LAKEFORMATION_API PlanningStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API PlanningStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An estimate of the data that was scanned in bytes.</p>
     */
    inline long long GetEstimatedDataToScanBytes() const{ return m_estimatedDataToScanBytes; }

    /**
     * <p>An estimate of the data that was scanned in bytes.</p>
     */
    inline bool EstimatedDataToScanBytesHasBeenSet() const { return m_estimatedDataToScanBytesHasBeenSet; }

    /**
     * <p>An estimate of the data that was scanned in bytes.</p>
     */
    inline void SetEstimatedDataToScanBytes(long long value) { m_estimatedDataToScanBytesHasBeenSet = true; m_estimatedDataToScanBytes = value; }

    /**
     * <p>An estimate of the data that was scanned in bytes.</p>
     */
    inline PlanningStatistics& WithEstimatedDataToScanBytes(long long value) { SetEstimatedDataToScanBytes(value); return *this;}


    /**
     * <p>The time that it took to process the request.</p>
     */
    inline long long GetPlanningTimeMillis() const{ return m_planningTimeMillis; }

    /**
     * <p>The time that it took to process the request.</p>
     */
    inline bool PlanningTimeMillisHasBeenSet() const { return m_planningTimeMillisHasBeenSet; }

    /**
     * <p>The time that it took to process the request.</p>
     */
    inline void SetPlanningTimeMillis(long long value) { m_planningTimeMillisHasBeenSet = true; m_planningTimeMillis = value; }

    /**
     * <p>The time that it took to process the request.</p>
     */
    inline PlanningStatistics& WithPlanningTimeMillis(long long value) { SetPlanningTimeMillis(value); return *this;}


    /**
     * <p>The time the request was in queue to be processed.</p>
     */
    inline long long GetQueueTimeMillis() const{ return m_queueTimeMillis; }

    /**
     * <p>The time the request was in queue to be processed.</p>
     */
    inline bool QueueTimeMillisHasBeenSet() const { return m_queueTimeMillisHasBeenSet; }

    /**
     * <p>The time the request was in queue to be processed.</p>
     */
    inline void SetQueueTimeMillis(long long value) { m_queueTimeMillisHasBeenSet = true; m_queueTimeMillis = value; }

    /**
     * <p>The time the request was in queue to be processed.</p>
     */
    inline PlanningStatistics& WithQueueTimeMillis(long long value) { SetQueueTimeMillis(value); return *this;}


    /**
     * <p>The number of work units generated.</p>
     */
    inline long long GetWorkUnitsGeneratedCount() const{ return m_workUnitsGeneratedCount; }

    /**
     * <p>The number of work units generated.</p>
     */
    inline bool WorkUnitsGeneratedCountHasBeenSet() const { return m_workUnitsGeneratedCountHasBeenSet; }

    /**
     * <p>The number of work units generated.</p>
     */
    inline void SetWorkUnitsGeneratedCount(long long value) { m_workUnitsGeneratedCountHasBeenSet = true; m_workUnitsGeneratedCount = value; }

    /**
     * <p>The number of work units generated.</p>
     */
    inline PlanningStatistics& WithWorkUnitsGeneratedCount(long long value) { SetWorkUnitsGeneratedCount(value); return *this;}

  private:

    long long m_estimatedDataToScanBytes;
    bool m_estimatedDataToScanBytesHasBeenSet = false;

    long long m_planningTimeMillis;
    bool m_planningTimeMillisHasBeenSet = false;

    long long m_queueTimeMillis;
    bool m_queueTimeMillisHasBeenSet = false;

    long long m_workUnitsGeneratedCount;
    bool m_workUnitsGeneratedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
