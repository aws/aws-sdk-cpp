﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/AnalyticsMode.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents the data being transformed during an action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ViewFrame">AWS
   * API Reference</a></p>
   */
  class ViewFrame
  {
  public:
    AWS_GLUEDATABREW_API ViewFrame();
    AWS_GLUEDATABREW_API ViewFrame(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API ViewFrame& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The starting index for the range of columns to return in the view frame.</p>
     */
    inline int GetStartColumnIndex() const{ return m_startColumnIndex; }
    inline bool StartColumnIndexHasBeenSet() const { return m_startColumnIndexHasBeenSet; }
    inline void SetStartColumnIndex(int value) { m_startColumnIndexHasBeenSet = true; m_startColumnIndex = value; }
    inline ViewFrame& WithStartColumnIndex(int value) { SetStartColumnIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of columns to include in the view frame, beginning with the
     * <code>StartColumnIndex</code> value and ignoring any columns in the
     * <code>HiddenColumns</code> list.</p>
     */
    inline int GetColumnRange() const{ return m_columnRange; }
    inline bool ColumnRangeHasBeenSet() const { return m_columnRangeHasBeenSet; }
    inline void SetColumnRange(int value) { m_columnRangeHasBeenSet = true; m_columnRange = value; }
    inline ViewFrame& WithColumnRange(int value) { SetColumnRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of columns to hide in the view frame.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHiddenColumns() const{ return m_hiddenColumns; }
    inline bool HiddenColumnsHasBeenSet() const { return m_hiddenColumnsHasBeenSet; }
    inline void SetHiddenColumns(const Aws::Vector<Aws::String>& value) { m_hiddenColumnsHasBeenSet = true; m_hiddenColumns = value; }
    inline void SetHiddenColumns(Aws::Vector<Aws::String>&& value) { m_hiddenColumnsHasBeenSet = true; m_hiddenColumns = std::move(value); }
    inline ViewFrame& WithHiddenColumns(const Aws::Vector<Aws::String>& value) { SetHiddenColumns(value); return *this;}
    inline ViewFrame& WithHiddenColumns(Aws::Vector<Aws::String>&& value) { SetHiddenColumns(std::move(value)); return *this;}
    inline ViewFrame& AddHiddenColumns(const Aws::String& value) { m_hiddenColumnsHasBeenSet = true; m_hiddenColumns.push_back(value); return *this; }
    inline ViewFrame& AddHiddenColumns(Aws::String&& value) { m_hiddenColumnsHasBeenSet = true; m_hiddenColumns.push_back(std::move(value)); return *this; }
    inline ViewFrame& AddHiddenColumns(const char* value) { m_hiddenColumnsHasBeenSet = true; m_hiddenColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The starting index for the range of rows to return in the view frame.</p>
     */
    inline int GetStartRowIndex() const{ return m_startRowIndex; }
    inline bool StartRowIndexHasBeenSet() const { return m_startRowIndexHasBeenSet; }
    inline void SetStartRowIndex(int value) { m_startRowIndexHasBeenSet = true; m_startRowIndex = value; }
    inline ViewFrame& WithStartRowIndex(int value) { SetStartRowIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rows to include in the view frame, beginning with the
     * <code>StartRowIndex</code> value.</p>
     */
    inline int GetRowRange() const{ return m_rowRange; }
    inline bool RowRangeHasBeenSet() const { return m_rowRangeHasBeenSet; }
    inline void SetRowRange(int value) { m_rowRangeHasBeenSet = true; m_rowRange = value; }
    inline ViewFrame& WithRowRange(int value) { SetRowRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls if analytics computation is enabled or disabled. Enabled by
     * default.</p>
     */
    inline const AnalyticsMode& GetAnalytics() const{ return m_analytics; }
    inline bool AnalyticsHasBeenSet() const { return m_analyticsHasBeenSet; }
    inline void SetAnalytics(const AnalyticsMode& value) { m_analyticsHasBeenSet = true; m_analytics = value; }
    inline void SetAnalytics(AnalyticsMode&& value) { m_analyticsHasBeenSet = true; m_analytics = std::move(value); }
    inline ViewFrame& WithAnalytics(const AnalyticsMode& value) { SetAnalytics(value); return *this;}
    inline ViewFrame& WithAnalytics(AnalyticsMode&& value) { SetAnalytics(std::move(value)); return *this;}
    ///@}
  private:

    int m_startColumnIndex;
    bool m_startColumnIndexHasBeenSet = false;

    int m_columnRange;
    bool m_columnRangeHasBeenSet = false;

    Aws::Vector<Aws::String> m_hiddenColumns;
    bool m_hiddenColumnsHasBeenSet = false;

    int m_startRowIndex;
    bool m_startRowIndexHasBeenSet = false;

    int m_rowRange;
    bool m_rowRangeHasBeenSet = false;

    AnalyticsMode m_analytics;
    bool m_analyticsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
