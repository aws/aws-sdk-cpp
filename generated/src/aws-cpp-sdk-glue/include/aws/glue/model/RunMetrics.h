/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Metrics for the optimizer run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RunMetrics">AWS API
   * Reference</a></p>
   */
  class RunMetrics
  {
  public:
    AWS_GLUE_API RunMetrics();
    AWS_GLUE_API RunMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RunMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of bytes removed by the compaction job run.</p>
     */
    inline const Aws::String& GetNumberOfBytesCompacted() const{ return m_numberOfBytesCompacted; }

    /**
     * <p>The number of bytes removed by the compaction job run.</p>
     */
    inline bool NumberOfBytesCompactedHasBeenSet() const { return m_numberOfBytesCompactedHasBeenSet; }

    /**
     * <p>The number of bytes removed by the compaction job run.</p>
     */
    inline void SetNumberOfBytesCompacted(const Aws::String& value) { m_numberOfBytesCompactedHasBeenSet = true; m_numberOfBytesCompacted = value; }

    /**
     * <p>The number of bytes removed by the compaction job run.</p>
     */
    inline void SetNumberOfBytesCompacted(Aws::String&& value) { m_numberOfBytesCompactedHasBeenSet = true; m_numberOfBytesCompacted = std::move(value); }

    /**
     * <p>The number of bytes removed by the compaction job run.</p>
     */
    inline void SetNumberOfBytesCompacted(const char* value) { m_numberOfBytesCompactedHasBeenSet = true; m_numberOfBytesCompacted.assign(value); }

    /**
     * <p>The number of bytes removed by the compaction job run.</p>
     */
    inline RunMetrics& WithNumberOfBytesCompacted(const Aws::String& value) { SetNumberOfBytesCompacted(value); return *this;}

    /**
     * <p>The number of bytes removed by the compaction job run.</p>
     */
    inline RunMetrics& WithNumberOfBytesCompacted(Aws::String&& value) { SetNumberOfBytesCompacted(std::move(value)); return *this;}

    /**
     * <p>The number of bytes removed by the compaction job run.</p>
     */
    inline RunMetrics& WithNumberOfBytesCompacted(const char* value) { SetNumberOfBytesCompacted(value); return *this;}


    /**
     * <p>The number of files removed by the compaction job run.</p>
     */
    inline const Aws::String& GetNumberOfFilesCompacted() const{ return m_numberOfFilesCompacted; }

    /**
     * <p>The number of files removed by the compaction job run.</p>
     */
    inline bool NumberOfFilesCompactedHasBeenSet() const { return m_numberOfFilesCompactedHasBeenSet; }

    /**
     * <p>The number of files removed by the compaction job run.</p>
     */
    inline void SetNumberOfFilesCompacted(const Aws::String& value) { m_numberOfFilesCompactedHasBeenSet = true; m_numberOfFilesCompacted = value; }

    /**
     * <p>The number of files removed by the compaction job run.</p>
     */
    inline void SetNumberOfFilesCompacted(Aws::String&& value) { m_numberOfFilesCompactedHasBeenSet = true; m_numberOfFilesCompacted = std::move(value); }

    /**
     * <p>The number of files removed by the compaction job run.</p>
     */
    inline void SetNumberOfFilesCompacted(const char* value) { m_numberOfFilesCompactedHasBeenSet = true; m_numberOfFilesCompacted.assign(value); }

    /**
     * <p>The number of files removed by the compaction job run.</p>
     */
    inline RunMetrics& WithNumberOfFilesCompacted(const Aws::String& value) { SetNumberOfFilesCompacted(value); return *this;}

    /**
     * <p>The number of files removed by the compaction job run.</p>
     */
    inline RunMetrics& WithNumberOfFilesCompacted(Aws::String&& value) { SetNumberOfFilesCompacted(std::move(value)); return *this;}

    /**
     * <p>The number of files removed by the compaction job run.</p>
     */
    inline RunMetrics& WithNumberOfFilesCompacted(const char* value) { SetNumberOfFilesCompacted(value); return *this;}


    /**
     * <p>The number of DPU hours consumed by the job.</p>
     */
    inline const Aws::String& GetNumberOfDpus() const{ return m_numberOfDpus; }

    /**
     * <p>The number of DPU hours consumed by the job.</p>
     */
    inline bool NumberOfDpusHasBeenSet() const { return m_numberOfDpusHasBeenSet; }

    /**
     * <p>The number of DPU hours consumed by the job.</p>
     */
    inline void SetNumberOfDpus(const Aws::String& value) { m_numberOfDpusHasBeenSet = true; m_numberOfDpus = value; }

    /**
     * <p>The number of DPU hours consumed by the job.</p>
     */
    inline void SetNumberOfDpus(Aws::String&& value) { m_numberOfDpusHasBeenSet = true; m_numberOfDpus = std::move(value); }

    /**
     * <p>The number of DPU hours consumed by the job.</p>
     */
    inline void SetNumberOfDpus(const char* value) { m_numberOfDpusHasBeenSet = true; m_numberOfDpus.assign(value); }

    /**
     * <p>The number of DPU hours consumed by the job.</p>
     */
    inline RunMetrics& WithNumberOfDpus(const Aws::String& value) { SetNumberOfDpus(value); return *this;}

    /**
     * <p>The number of DPU hours consumed by the job.</p>
     */
    inline RunMetrics& WithNumberOfDpus(Aws::String&& value) { SetNumberOfDpus(std::move(value)); return *this;}

    /**
     * <p>The number of DPU hours consumed by the job.</p>
     */
    inline RunMetrics& WithNumberOfDpus(const char* value) { SetNumberOfDpus(value); return *this;}


    /**
     * <p>The duration of the job in hours.</p>
     */
    inline const Aws::String& GetJobDurationInHour() const{ return m_jobDurationInHour; }

    /**
     * <p>The duration of the job in hours.</p>
     */
    inline bool JobDurationInHourHasBeenSet() const { return m_jobDurationInHourHasBeenSet; }

    /**
     * <p>The duration of the job in hours.</p>
     */
    inline void SetJobDurationInHour(const Aws::String& value) { m_jobDurationInHourHasBeenSet = true; m_jobDurationInHour = value; }

    /**
     * <p>The duration of the job in hours.</p>
     */
    inline void SetJobDurationInHour(Aws::String&& value) { m_jobDurationInHourHasBeenSet = true; m_jobDurationInHour = std::move(value); }

    /**
     * <p>The duration of the job in hours.</p>
     */
    inline void SetJobDurationInHour(const char* value) { m_jobDurationInHourHasBeenSet = true; m_jobDurationInHour.assign(value); }

    /**
     * <p>The duration of the job in hours.</p>
     */
    inline RunMetrics& WithJobDurationInHour(const Aws::String& value) { SetJobDurationInHour(value); return *this;}

    /**
     * <p>The duration of the job in hours.</p>
     */
    inline RunMetrics& WithJobDurationInHour(Aws::String&& value) { SetJobDurationInHour(std::move(value)); return *this;}

    /**
     * <p>The duration of the job in hours.</p>
     */
    inline RunMetrics& WithJobDurationInHour(const char* value) { SetJobDurationInHour(value); return *this;}

  private:

    Aws::String m_numberOfBytesCompacted;
    bool m_numberOfBytesCompactedHasBeenSet = false;

    Aws::String m_numberOfFilesCompacted;
    bool m_numberOfFilesCompactedHasBeenSet = false;

    Aws::String m_numberOfDpus;
    bool m_numberOfDpusHasBeenSet = false;

    Aws::String m_jobDurationInHour;
    bool m_jobDurationInHourHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
