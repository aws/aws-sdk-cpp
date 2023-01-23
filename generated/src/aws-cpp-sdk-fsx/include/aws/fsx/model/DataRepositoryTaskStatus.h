/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Provides the task status showing a running total of the total number of files
   * to be processed, the number successfully processed, and the number of files the
   * task failed to process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DataRepositoryTaskStatus">AWS
   * API Reference</a></p>
   */
  class DataRepositoryTaskStatus
  {
  public:
    AWS_FSX_API DataRepositoryTaskStatus();
    AWS_FSX_API DataRepositoryTaskStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DataRepositoryTaskStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of files that the task will process. While a task is
     * executing, the sum of <code>SucceededCount</code> plus <code>FailedCount</code>
     * may not equal <code>TotalCount</code>. When the task is complete,
     * <code>TotalCount</code> equals the sum of <code>SucceededCount</code> plus
     * <code>FailedCount</code>.</p>
     */
    inline long long GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of files that the task will process. While a task is
     * executing, the sum of <code>SucceededCount</code> plus <code>FailedCount</code>
     * may not equal <code>TotalCount</code>. When the task is complete,
     * <code>TotalCount</code> equals the sum of <code>SucceededCount</code> plus
     * <code>FailedCount</code>.</p>
     */
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }

    /**
     * <p>The total number of files that the task will process. While a task is
     * executing, the sum of <code>SucceededCount</code> plus <code>FailedCount</code>
     * may not equal <code>TotalCount</code>. When the task is complete,
     * <code>TotalCount</code> equals the sum of <code>SucceededCount</code> plus
     * <code>FailedCount</code>.</p>
     */
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }

    /**
     * <p>The total number of files that the task will process. While a task is
     * executing, the sum of <code>SucceededCount</code> plus <code>FailedCount</code>
     * may not equal <code>TotalCount</code>. When the task is complete,
     * <code>TotalCount</code> equals the sum of <code>SucceededCount</code> plus
     * <code>FailedCount</code>.</p>
     */
    inline DataRepositoryTaskStatus& WithTotalCount(long long value) { SetTotalCount(value); return *this;}


    /**
     * <p>A running total of the number of files that the task has successfully
     * processed.</p>
     */
    inline long long GetSucceededCount() const{ return m_succeededCount; }

    /**
     * <p>A running total of the number of files that the task has successfully
     * processed.</p>
     */
    inline bool SucceededCountHasBeenSet() const { return m_succeededCountHasBeenSet; }

    /**
     * <p>A running total of the number of files that the task has successfully
     * processed.</p>
     */
    inline void SetSucceededCount(long long value) { m_succeededCountHasBeenSet = true; m_succeededCount = value; }

    /**
     * <p>A running total of the number of files that the task has successfully
     * processed.</p>
     */
    inline DataRepositoryTaskStatus& WithSucceededCount(long long value) { SetSucceededCount(value); return *this;}


    /**
     * <p>A running total of the number of files that the task failed to process.</p>
     */
    inline long long GetFailedCount() const{ return m_failedCount; }

    /**
     * <p>A running total of the number of files that the task failed to process.</p>
     */
    inline bool FailedCountHasBeenSet() const { return m_failedCountHasBeenSet; }

    /**
     * <p>A running total of the number of files that the task failed to process.</p>
     */
    inline void SetFailedCount(long long value) { m_failedCountHasBeenSet = true; m_failedCount = value; }

    /**
     * <p>A running total of the number of files that the task failed to process.</p>
     */
    inline DataRepositoryTaskStatus& WithFailedCount(long long value) { SetFailedCount(value); return *this;}


    /**
     * <p>The time at which the task status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time at which the task status was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time at which the task status was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time at which the task status was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time at which the task status was last updated.</p>
     */
    inline DataRepositoryTaskStatus& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time at which the task status was last updated.</p>
     */
    inline DataRepositoryTaskStatus& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The total amount of data, in GiB, released by an Amazon File Cache
     * AUTO_RELEASE_DATA task that automatically releases files from the cache.</p>
     */
    inline long long GetReleasedCapacity() const{ return m_releasedCapacity; }

    /**
     * <p>The total amount of data, in GiB, released by an Amazon File Cache
     * AUTO_RELEASE_DATA task that automatically releases files from the cache.</p>
     */
    inline bool ReleasedCapacityHasBeenSet() const { return m_releasedCapacityHasBeenSet; }

    /**
     * <p>The total amount of data, in GiB, released by an Amazon File Cache
     * AUTO_RELEASE_DATA task that automatically releases files from the cache.</p>
     */
    inline void SetReleasedCapacity(long long value) { m_releasedCapacityHasBeenSet = true; m_releasedCapacity = value; }

    /**
     * <p>The total amount of data, in GiB, released by an Amazon File Cache
     * AUTO_RELEASE_DATA task that automatically releases files from the cache.</p>
     */
    inline DataRepositoryTaskStatus& WithReleasedCapacity(long long value) { SetReleasedCapacity(value); return *this;}

  private:

    long long m_totalCount;
    bool m_totalCountHasBeenSet = false;

    long long m_succeededCount;
    bool m_succeededCountHasBeenSet = false;

    long long m_failedCount;
    bool m_failedCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    long long m_releasedCapacity;
    bool m_releasedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
