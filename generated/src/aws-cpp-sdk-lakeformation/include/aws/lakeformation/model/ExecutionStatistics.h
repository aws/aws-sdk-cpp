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
    AWS_LAKEFORMATION_API ExecutionStatistics() = default;
    AWS_LAKEFORMATION_API ExecutionStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API ExecutionStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The average time the request took to be executed.</p>
     */
    inline long long GetAverageExecutionTimeMillis() const { return m_averageExecutionTimeMillis; }
    inline bool AverageExecutionTimeMillisHasBeenSet() const { return m_averageExecutionTimeMillisHasBeenSet; }
    inline void SetAverageExecutionTimeMillis(long long value) { m_averageExecutionTimeMillisHasBeenSet = true; m_averageExecutionTimeMillis = value; }
    inline ExecutionStatistics& WithAverageExecutionTimeMillis(long long value) { SetAverageExecutionTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of data that was scanned in bytes.</p>
     */
    inline long long GetDataScannedBytes() const { return m_dataScannedBytes; }
    inline bool DataScannedBytesHasBeenSet() const { return m_dataScannedBytesHasBeenSet; }
    inline void SetDataScannedBytes(long long value) { m_dataScannedBytesHasBeenSet = true; m_dataScannedBytes = value; }
    inline ExecutionStatistics& WithDataScannedBytes(long long value) { SetDataScannedBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of work units executed.</p>
     */
    inline long long GetWorkUnitsExecutedCount() const { return m_workUnitsExecutedCount; }
    inline bool WorkUnitsExecutedCountHasBeenSet() const { return m_workUnitsExecutedCountHasBeenSet; }
    inline void SetWorkUnitsExecutedCount(long long value) { m_workUnitsExecutedCountHasBeenSet = true; m_workUnitsExecutedCount = value; }
    inline ExecutionStatistics& WithWorkUnitsExecutedCount(long long value) { SetWorkUnitsExecutedCount(value); return *this;}
    ///@}
  private:

    long long m_averageExecutionTimeMillis{0};
    bool m_averageExecutionTimeMillisHasBeenSet = false;

    long long m_dataScannedBytes{0};
    bool m_dataScannedBytesHasBeenSet = false;

    long long m_workUnitsExecutedCount{0};
    bool m_workUnitsExecutedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
