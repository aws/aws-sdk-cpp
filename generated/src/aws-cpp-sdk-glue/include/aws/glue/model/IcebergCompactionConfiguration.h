/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CompactionStrategy.h>
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
   * <p>The configuration for an Iceberg compaction optimizer. This configuration
   * defines parameters for optimizing the layout of data files in Iceberg
   * tables.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergCompactionConfiguration">AWS
   * API Reference</a></p>
   */
  class IcebergCompactionConfiguration
  {
  public:
    AWS_GLUE_API IcebergCompactionConfiguration() = default;
    AWS_GLUE_API IcebergCompactionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergCompactionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The strategy to use for compaction. Valid values are:</p> <ul> <li> <p>
     * <code>binpack</code>: Combines small files into larger files, typically
     * targeting sizes over 100MB, while applying any pending deletes. This is the
     * recommended compaction strategy for most use cases. </p> </li> <li> <p>
     * <code>sort</code>: Organizes data based on specified columns which are sorted
     * hierarchically during compaction, improving query performance for filtered
     * operations. This strategy is recommended when your queries frequently filter on
     * specific columns. To use this strategy, you must first define a sort order in
     * your Iceberg table properties using the <code>sort_order</code> table
     * property.</p> </li> <li> <p> <code>z-order</code>: Optimizes data organization
     * by blending multiple attributes into a single scalar value that can be used for
     * sorting, allowing efficient querying across multiple dimensions. This strategy
     * is recommended when you need to query data across multiple dimensions
     * simultaneously. To use this strategy, you must first define a sort order in your
     * Iceberg table properties using the <code>sort_order</code> table property. </p>
     * </li> </ul> <p>If an input is not provided, the default value 'binpack' will be
     * used.</p>
     */
    inline CompactionStrategy GetStrategy() const { return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(CompactionStrategy value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline IcebergCompactionConfiguration& WithStrategy(CompactionStrategy value) { SetStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of data files that must be present in a partition before
     * compaction will actually compact files. This parameter helps control when
     * compaction is triggered, preventing unnecessary compaction operations on
     * partitions with few files. If an input is not provided, the default value 100
     * will be used.</p>
     */
    inline int GetMinInputFiles() const { return m_minInputFiles; }
    inline bool MinInputFilesHasBeenSet() const { return m_minInputFilesHasBeenSet; }
    inline void SetMinInputFiles(int value) { m_minInputFilesHasBeenSet = true; m_minInputFiles = value; }
    inline IcebergCompactionConfiguration& WithMinInputFiles(int value) { SetMinInputFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of deletes that must be present in a data file to make it
     * eligible for compaction. This parameter helps optimize compaction by focusing on
     * files that contain a significant number of delete operations, which can improve
     * query performance by removing deleted records. If an input is not provided, the
     * default value 1 will be used.</p>
     */
    inline int GetDeleteFileThreshold() const { return m_deleteFileThreshold; }
    inline bool DeleteFileThresholdHasBeenSet() const { return m_deleteFileThresholdHasBeenSet; }
    inline void SetDeleteFileThreshold(int value) { m_deleteFileThresholdHasBeenSet = true; m_deleteFileThreshold = value; }
    inline IcebergCompactionConfiguration& WithDeleteFileThreshold(int value) { SetDeleteFileThreshold(value); return *this;}
    ///@}
  private:

    CompactionStrategy m_strategy{CompactionStrategy::NOT_SET};
    bool m_strategyHasBeenSet = false;

    int m_minInputFiles{0};
    bool m_minInputFilesHasBeenSet = false;

    int m_deleteFileThreshold{0};
    bool m_deleteFileThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
