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
   * <p>Snapshot retention metrics for Iceberg for the optimizer run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergRetentionMetrics">AWS
   * API Reference</a></p>
   */
  class IcebergRetentionMetrics
  {
  public:
    AWS_GLUE_API IcebergRetentionMetrics() = default;
    AWS_GLUE_API IcebergRetentionMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergRetentionMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of data files deleted by the retention job run.</p>
     */
    inline long long GetNumberOfDataFilesDeleted() const { return m_numberOfDataFilesDeleted; }
    inline bool NumberOfDataFilesDeletedHasBeenSet() const { return m_numberOfDataFilesDeletedHasBeenSet; }
    inline void SetNumberOfDataFilesDeleted(long long value) { m_numberOfDataFilesDeletedHasBeenSet = true; m_numberOfDataFilesDeleted = value; }
    inline IcebergRetentionMetrics& WithNumberOfDataFilesDeleted(long long value) { SetNumberOfDataFilesDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of manifest files deleted by the retention job run.</p>
     */
    inline long long GetNumberOfManifestFilesDeleted() const { return m_numberOfManifestFilesDeleted; }
    inline bool NumberOfManifestFilesDeletedHasBeenSet() const { return m_numberOfManifestFilesDeletedHasBeenSet; }
    inline void SetNumberOfManifestFilesDeleted(long long value) { m_numberOfManifestFilesDeletedHasBeenSet = true; m_numberOfManifestFilesDeleted = value; }
    inline IcebergRetentionMetrics& WithNumberOfManifestFilesDeleted(long long value) { SetNumberOfManifestFilesDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of manifest lists deleted by the retention job run.</p>
     */
    inline long long GetNumberOfManifestListsDeleted() const { return m_numberOfManifestListsDeleted; }
    inline bool NumberOfManifestListsDeletedHasBeenSet() const { return m_numberOfManifestListsDeletedHasBeenSet; }
    inline void SetNumberOfManifestListsDeleted(long long value) { m_numberOfManifestListsDeletedHasBeenSet = true; m_numberOfManifestListsDeleted = value; }
    inline IcebergRetentionMetrics& WithNumberOfManifestListsDeleted(long long value) { SetNumberOfManifestListsDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of DPU hours consumed by the job.</p>
     */
    inline double GetDpuHours() const { return m_dpuHours; }
    inline bool DpuHoursHasBeenSet() const { return m_dpuHoursHasBeenSet; }
    inline void SetDpuHours(double value) { m_dpuHoursHasBeenSet = true; m_dpuHours = value; }
    inline IcebergRetentionMetrics& WithDpuHours(double value) { SetDpuHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of DPUs consumed by the job, rounded up to the nearest whole
     * number.</p>
     */
    inline int GetNumberOfDpus() const { return m_numberOfDpus; }
    inline bool NumberOfDpusHasBeenSet() const { return m_numberOfDpusHasBeenSet; }
    inline void SetNumberOfDpus(int value) { m_numberOfDpusHasBeenSet = true; m_numberOfDpus = value; }
    inline IcebergRetentionMetrics& WithNumberOfDpus(int value) { SetNumberOfDpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the job in hours.</p>
     */
    inline double GetJobDurationInHour() const { return m_jobDurationInHour; }
    inline bool JobDurationInHourHasBeenSet() const { return m_jobDurationInHourHasBeenSet; }
    inline void SetJobDurationInHour(double value) { m_jobDurationInHourHasBeenSet = true; m_jobDurationInHour = value; }
    inline IcebergRetentionMetrics& WithJobDurationInHour(double value) { SetJobDurationInHour(value); return *this;}
    ///@}
  private:

    long long m_numberOfDataFilesDeleted{0};
    bool m_numberOfDataFilesDeletedHasBeenSet = false;

    long long m_numberOfManifestFilesDeleted{0};
    bool m_numberOfManifestFilesDeletedHasBeenSet = false;

    long long m_numberOfManifestListsDeleted{0};
    bool m_numberOfManifestListsDeletedHasBeenSet = false;

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
