/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents the data being being transformed during an AWS Glue DataBrew
   * project session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ViewFrame">AWS
   * API Reference</a></p>
   */
  class AWS_GLUEDATABREW_API ViewFrame
  {
  public:
    ViewFrame();
    ViewFrame(Aws::Utils::Json::JsonView jsonValue);
    ViewFrame& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The starting index for the range of columns to return in the view frame.</p>
     */
    inline int GetStartColumnIndex() const{ return m_startColumnIndex; }

    /**
     * <p>The starting index for the range of columns to return in the view frame.</p>
     */
    inline bool StartColumnIndexHasBeenSet() const { return m_startColumnIndexHasBeenSet; }

    /**
     * <p>The starting index for the range of columns to return in the view frame.</p>
     */
    inline void SetStartColumnIndex(int value) { m_startColumnIndexHasBeenSet = true; m_startColumnIndex = value; }

    /**
     * <p>The starting index for the range of columns to return in the view frame.</p>
     */
    inline ViewFrame& WithStartColumnIndex(int value) { SetStartColumnIndex(value); return *this;}


    /**
     * <p>The number of columns to include in the view frame, beginning with the
     * <code>StartColumnIndex</code> value and ignoring any columns in the
     * <code>HiddenColumns</code> list.</p>
     */
    inline int GetColumnRange() const{ return m_columnRange; }

    /**
     * <p>The number of columns to include in the view frame, beginning with the
     * <code>StartColumnIndex</code> value and ignoring any columns in the
     * <code>HiddenColumns</code> list.</p>
     */
    inline bool ColumnRangeHasBeenSet() const { return m_columnRangeHasBeenSet; }

    /**
     * <p>The number of columns to include in the view frame, beginning with the
     * <code>StartColumnIndex</code> value and ignoring any columns in the
     * <code>HiddenColumns</code> list.</p>
     */
    inline void SetColumnRange(int value) { m_columnRangeHasBeenSet = true; m_columnRange = value; }

    /**
     * <p>The number of columns to include in the view frame, beginning with the
     * <code>StartColumnIndex</code> value and ignoring any columns in the
     * <code>HiddenColumns</code> list.</p>
     */
    inline ViewFrame& WithColumnRange(int value) { SetColumnRange(value); return *this;}


    /**
     * <p>A list of columns to hide in the view frame.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHiddenColumns() const{ return m_hiddenColumns; }

    /**
     * <p>A list of columns to hide in the view frame.</p>
     */
    inline bool HiddenColumnsHasBeenSet() const { return m_hiddenColumnsHasBeenSet; }

    /**
     * <p>A list of columns to hide in the view frame.</p>
     */
    inline void SetHiddenColumns(const Aws::Vector<Aws::String>& value) { m_hiddenColumnsHasBeenSet = true; m_hiddenColumns = value; }

    /**
     * <p>A list of columns to hide in the view frame.</p>
     */
    inline void SetHiddenColumns(Aws::Vector<Aws::String>&& value) { m_hiddenColumnsHasBeenSet = true; m_hiddenColumns = std::move(value); }

    /**
     * <p>A list of columns to hide in the view frame.</p>
     */
    inline ViewFrame& WithHiddenColumns(const Aws::Vector<Aws::String>& value) { SetHiddenColumns(value); return *this;}

    /**
     * <p>A list of columns to hide in the view frame.</p>
     */
    inline ViewFrame& WithHiddenColumns(Aws::Vector<Aws::String>&& value) { SetHiddenColumns(std::move(value)); return *this;}

    /**
     * <p>A list of columns to hide in the view frame.</p>
     */
    inline ViewFrame& AddHiddenColumns(const Aws::String& value) { m_hiddenColumnsHasBeenSet = true; m_hiddenColumns.push_back(value); return *this; }

    /**
     * <p>A list of columns to hide in the view frame.</p>
     */
    inline ViewFrame& AddHiddenColumns(Aws::String&& value) { m_hiddenColumnsHasBeenSet = true; m_hiddenColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of columns to hide in the view frame.</p>
     */
    inline ViewFrame& AddHiddenColumns(const char* value) { m_hiddenColumnsHasBeenSet = true; m_hiddenColumns.push_back(value); return *this; }

  private:

    int m_startColumnIndex;
    bool m_startColumnIndexHasBeenSet;

    int m_columnRange;
    bool m_columnRangeHasBeenSet;

    Aws::Vector<Aws::String> m_hiddenColumns;
    bool m_hiddenColumnsHasBeenSet;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
