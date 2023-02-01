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
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ExecutionStatistics">AWS
   * API Reference</a></p>
   */
  class ExecutionStatistics
  {
  public:
    AWS_LAKEFORMATION_API ExecutionStatistics();
    AWS_LAKEFORMATION_API ExecutionStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API ExecutionStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The average time the request took to be executed.</p>
     */
    inline long long GetAverageExecutionTimeMillis() const{ return m_averageExecutionTimeMillis; }

    /**
     * <p>The average time the request took to be executed.</p>
     */
    inline bool AverageExecutionTimeMillisHasBeenSet() const { return m_averageExecutionTimeMillisHasBeenSet; }

    /**
     * <p>The average time the request took to be executed.</p>
     */
    inline void SetAverageExecutionTimeMillis(long long value) { m_averageExecutionTimeMillisHasBeenSet = true; m_averageExecutionTimeMillis = value; }

    /**
     * <p>The average time the request took to be executed.</p>
     */
    inline ExecutionStatistics& WithAverageExecutionTimeMillis(long long value) { SetAverageExecutionTimeMillis(value); return *this;}


    /**
     * <p>The amount of data that was scanned in bytes.</p>
     */
    inline long long GetDataScannedBytes() const{ return m_dataScannedBytes; }

    /**
     * <p>The amount of data that was scanned in bytes.</p>
     */
    inline bool DataScannedBytesHasBeenSet() const { return m_dataScannedBytesHasBeenSet; }

    /**
     * <p>The amount of data that was scanned in bytes.</p>
     */
    inline void SetDataScannedBytes(long long value) { m_dataScannedBytesHasBeenSet = true; m_dataScannedBytes = value; }

    /**
     * <p>The amount of data that was scanned in bytes.</p>
     */
    inline ExecutionStatistics& WithDataScannedBytes(long long value) { SetDataScannedBytes(value); return *this;}


    /**
     * <p>The number of work units executed.</p>
     */
    inline long long GetWorkUnitsExecutedCount() const{ return m_workUnitsExecutedCount; }

    /**
     * <p>The number of work units executed.</p>
     */
    inline bool WorkUnitsExecutedCountHasBeenSet() const { return m_workUnitsExecutedCountHasBeenSet; }

    /**
     * <p>The number of work units executed.</p>
     */
    inline void SetWorkUnitsExecutedCount(long long value) { m_workUnitsExecutedCountHasBeenSet = true; m_workUnitsExecutedCount = value; }

    /**
     * <p>The number of work units executed.</p>
     */
    inline ExecutionStatistics& WithWorkUnitsExecutedCount(long long value) { SetWorkUnitsExecutedCount(value); return *this;}

  private:

    long long m_averageExecutionTimeMillis;
    bool m_averageExecutionTimeMillisHasBeenSet = false;

    long long m_dataScannedBytes;
    bool m_dataScannedBytesHasBeenSet = false;

    long long m_workUnitsExecutedCount;
    bool m_workUnitsExecutedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
