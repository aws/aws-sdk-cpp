/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>Orphan file deletion metrics for Iceberg for the optimizer run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergOrphanFileDeletionMetrics">AWS
   * API Reference</a></p>
   */
  class IcebergOrphanFileDeletionMetrics
  {
  public:
    AWS_GLUE_API IcebergOrphanFileDeletionMetrics() = default;
    AWS_GLUE_API IcebergOrphanFileDeletionMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergOrphanFileDeletionMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of orphan files deleted by the orphan file deletion job run.</p>
     */
    inline long long GetNumberOfOrphanFilesDeleted() const { return m_numberOfOrphanFilesDeleted; }
    inline bool NumberOfOrphanFilesDeletedHasBeenSet() const { return m_numberOfOrphanFilesDeletedHasBeenSet; }
    inline void SetNumberOfOrphanFilesDeleted(long long value) { m_numberOfOrphanFilesDeletedHasBeenSet = true; m_numberOfOrphanFilesDeleted = value; }
    inline IcebergOrphanFileDeletionMetrics& WithNumberOfOrphanFilesDeleted(long long value) { SetNumberOfOrphanFilesDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of DPU hours consumed by the job.</p>
     */
    inline double GetDpuHours() const { return m_dpuHours; }
    inline bool DpuHoursHasBeenSet() const { return m_dpuHoursHasBeenSet; }
    inline void SetDpuHours(double value) { m_dpuHoursHasBeenSet = true; m_dpuHours = value; }
    inline IcebergOrphanFileDeletionMetrics& WithDpuHours(double value) { SetDpuHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of DPUs consumed by the job, rounded up to the nearest whole
     * number.</p>
     */
    inline int GetNumberOfDpus() const { return m_numberOfDpus; }
    inline bool NumberOfDpusHasBeenSet() const { return m_numberOfDpusHasBeenSet; }
    inline void SetNumberOfDpus(int value) { m_numberOfDpusHasBeenSet = true; m_numberOfDpus = value; }
    inline IcebergOrphanFileDeletionMetrics& WithNumberOfDpus(int value) { SetNumberOfDpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the job in hours.</p>
     */
    inline double GetJobDurationInHour() const { return m_jobDurationInHour; }
    inline bool JobDurationInHourHasBeenSet() const { return m_jobDurationInHourHasBeenSet; }
    inline void SetJobDurationInHour(double value) { m_jobDurationInHourHasBeenSet = true; m_jobDurationInHour = value; }
    inline IcebergOrphanFileDeletionMetrics& WithJobDurationInHour(double value) { SetJobDurationInHour(value); return *this;}
    ///@}
  private:

    long long m_numberOfOrphanFilesDeleted{0};
    bool m_numberOfOrphanFilesDeletedHasBeenSet = false;

    double m_dpuHours{0.0};
    bool m_dpuHoursHasBeenSet = false;

    int m_numberOfDpus{0};
    bool m_numberOfDpusHasBeenSet = false;

    double m_jobDurationInHour{0.0};
    bool m_jobDurationInHourHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
