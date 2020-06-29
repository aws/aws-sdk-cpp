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
  class AWS_QUICKSIGHT_API RowInfo
  {
  public:
    RowInfo();
    RowInfo(Aws::Utils::Json::JsonView jsonValue);
    RowInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    long long m_rowsIngested;
    bool m_rowsIngestedHasBeenSet;

    long long m_rowsDropped;
    bool m_rowsDroppedHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
