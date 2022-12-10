/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Information about rows for a data set SPICE ingestion.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RowInfo">AWS
   * API Reference</a></p>
   */
  class RowInfo
  {
  public:
    AWS_QUICKSIGHT_API RowInfo();
    AWS_QUICKSIGHT_API RowInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RowInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of rows that were ingested.</p>
     */
    inline long long GetRowsIngested() const{ return m_rowsIngested; }

    /**
     * <p>The number of rows that were ingested.</p>
     */
    inline bool RowsIngestedHasBeenSet() const { return m_rowsIngestedHasBeenSet; }

    /**
     * <p>The number of rows that were ingested.</p>
     */
    inline void SetRowsIngested(long long value) { m_rowsIngestedHasBeenSet = true; m_rowsIngested = value; }

    /**
     * <p>The number of rows that were ingested.</p>
     */
    inline RowInfo& WithRowsIngested(long long value) { SetRowsIngested(value); return *this;}


    /**
     * <p>The number of rows that were not ingested.</p>
     */
    inline long long GetRowsDropped() const{ return m_rowsDropped; }

    /**
     * <p>The number of rows that were not ingested.</p>
     */
    inline bool RowsDroppedHasBeenSet() const { return m_rowsDroppedHasBeenSet; }

    /**
     * <p>The number of rows that were not ingested.</p>
     */
    inline void SetRowsDropped(long long value) { m_rowsDroppedHasBeenSet = true; m_rowsDropped = value; }

    /**
     * <p>The number of rows that were not ingested.</p>
     */
    inline RowInfo& WithRowsDropped(long long value) { SetRowsDropped(value); return *this;}


    /**
     * <p>The total number of rows in the dataset.</p>
     */
    inline long long GetTotalRowsInDataset() const{ return m_totalRowsInDataset; }

    /**
     * <p>The total number of rows in the dataset.</p>
     */
    inline bool TotalRowsInDatasetHasBeenSet() const { return m_totalRowsInDatasetHasBeenSet; }

    /**
     * <p>The total number of rows in the dataset.</p>
     */
    inline void SetTotalRowsInDataset(long long value) { m_totalRowsInDatasetHasBeenSet = true; m_totalRowsInDataset = value; }

    /**
     * <p>The total number of rows in the dataset.</p>
     */
    inline RowInfo& WithTotalRowsInDataset(long long value) { SetTotalRowsInDataset(value); return *this;}

  private:

    long long m_rowsIngested;
    bool m_rowsIngestedHasBeenSet = false;

    long long m_rowsDropped;
    bool m_rowsDroppedHasBeenSet = false;

    long long m_totalRowsInDataset;
    bool m_totalRowsInDatasetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
