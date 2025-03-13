/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Contains information about the column used to track time in a source data
   * file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/TimestampColumn">AWS
   * API Reference</a></p>
   */
  class TimestampColumn
  {
  public:
    AWS_LOOKOUTMETRICS_API TimestampColumn() = default;
    AWS_LOOKOUTMETRICS_API TimestampColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API TimestampColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the timestamp column.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    TimestampColumn& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the timestamp column.</p>
     */
    inline const Aws::String& GetColumnFormat() const { return m_columnFormat; }
    inline bool ColumnFormatHasBeenSet() const { return m_columnFormatHasBeenSet; }
    template<typename ColumnFormatT = Aws::String>
    void SetColumnFormat(ColumnFormatT&& value) { m_columnFormatHasBeenSet = true; m_columnFormat = std::forward<ColumnFormatT>(value); }
    template<typename ColumnFormatT = Aws::String>
    TimestampColumn& WithColumnFormat(ColumnFormatT&& value) { SetColumnFormat(std::forward<ColumnFormatT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_columnFormat;
    bool m_columnFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
