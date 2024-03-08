/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>

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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The asset statistics from the data source run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RunStatisticsForAssets">AWS
   * API Reference</a></p>
   */
  class RunStatisticsForAssets
  {
  public:
    AWS_DATAZONE_API RunStatisticsForAssets();
    AWS_DATAZONE_API RunStatisticsForAssets(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RunStatisticsForAssets& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>added</code> statistic for the data source run.</p>
     */
    inline int GetAdded() const{ return m_added; }

    /**
     * <p>The <code>added</code> statistic for the data source run.</p>
     */
    inline bool AddedHasBeenSet() const { return m_addedHasBeenSet; }

    /**
     * <p>The <code>added</code> statistic for the data source run.</p>
     */
    inline void SetAdded(int value) { m_addedHasBeenSet = true; m_added = value; }

    /**
     * <p>The <code>added</code> statistic for the data source run.</p>
     */
    inline RunStatisticsForAssets& WithAdded(int value) { SetAdded(value); return *this;}


    /**
     * <p>The <code>failed</code> statistic for the data source run.</p>
     */
    inline int GetFailed() const{ return m_failed; }

    /**
     * <p>The <code>failed</code> statistic for the data source run.</p>
     */
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }

    /**
     * <p>The <code>failed</code> statistic for the data source run.</p>
     */
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }

    /**
     * <p>The <code>failed</code> statistic for the data source run.</p>
     */
    inline RunStatisticsForAssets& WithFailed(int value) { SetFailed(value); return *this;}


    /**
     * <p>The <code>skipped</code> statistic for the data source run.</p>
     */
    inline int GetSkipped() const{ return m_skipped; }

    /**
     * <p>The <code>skipped</code> statistic for the data source run.</p>
     */
    inline bool SkippedHasBeenSet() const { return m_skippedHasBeenSet; }

    /**
     * <p>The <code>skipped</code> statistic for the data source run.</p>
     */
    inline void SetSkipped(int value) { m_skippedHasBeenSet = true; m_skipped = value; }

    /**
     * <p>The <code>skipped</code> statistic for the data source run.</p>
     */
    inline RunStatisticsForAssets& WithSkipped(int value) { SetSkipped(value); return *this;}


    /**
     * <p>The <code>unchanged</code> statistic for the data source run.</p>
     */
    inline int GetUnchanged() const{ return m_unchanged; }

    /**
     * <p>The <code>unchanged</code> statistic for the data source run.</p>
     */
    inline bool UnchangedHasBeenSet() const { return m_unchangedHasBeenSet; }

    /**
     * <p>The <code>unchanged</code> statistic for the data source run.</p>
     */
    inline void SetUnchanged(int value) { m_unchangedHasBeenSet = true; m_unchanged = value; }

    /**
     * <p>The <code>unchanged</code> statistic for the data source run.</p>
     */
    inline RunStatisticsForAssets& WithUnchanged(int value) { SetUnchanged(value); return *this;}


    /**
     * <p>The <code>updated</code> statistic for the data source run.</p>
     */
    inline int GetUpdated() const{ return m_updated; }

    /**
     * <p>The <code>updated</code> statistic for the data source run.</p>
     */
    inline bool UpdatedHasBeenSet() const { return m_updatedHasBeenSet; }

    /**
     * <p>The <code>updated</code> statistic for the data source run.</p>
     */
    inline void SetUpdated(int value) { m_updatedHasBeenSet = true; m_updated = value; }

    /**
     * <p>The <code>updated</code> statistic for the data source run.</p>
     */
    inline RunStatisticsForAssets& WithUpdated(int value) { SetUpdated(value); return *this;}

  private:

    int m_added;
    bool m_addedHasBeenSet = false;

    int m_failed;
    bool m_failedHasBeenSet = false;

    int m_skipped;
    bool m_skippedHasBeenSet = false;

    int m_unchanged;
    bool m_unchangedHasBeenSet = false;

    int m_updated;
    bool m_updatedHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
