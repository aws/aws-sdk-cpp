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
    AWS_LOOKOUTMETRICS_API TimestampColumn();
    AWS_LOOKOUTMETRICS_API TimestampColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API TimestampColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the timestamp column.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }
    inline TimestampColumn& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}
    inline TimestampColumn& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}
    inline TimestampColumn& WithColumnName(const char* value) { SetColumnName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the timestamp column.</p>
     */
    inline const Aws::String& GetColumnFormat() const{ return m_columnFormat; }
    inline bool ColumnFormatHasBeenSet() const { return m_columnFormatHasBeenSet; }
    inline void SetColumnFormat(const Aws::String& value) { m_columnFormatHasBeenSet = true; m_columnFormat = value; }
    inline void SetColumnFormat(Aws::String&& value) { m_columnFormatHasBeenSet = true; m_columnFormat = std::move(value); }
    inline void SetColumnFormat(const char* value) { m_columnFormatHasBeenSet = true; m_columnFormat.assign(value); }
    inline TimestampColumn& WithColumnFormat(const Aws::String& value) { SetColumnFormat(value); return *this;}
    inline TimestampColumn& WithColumnFormat(Aws::String&& value) { SetColumnFormat(std::move(value)); return *this;}
    inline TimestampColumn& WithColumnFormat(const char* value) { SetColumnFormat(value); return *this;}
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
