/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/ScalarType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <memory>

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
namespace TimestreamQuery
{
namespace Model
{
  class ColumnInfo;
  class ColumnInfo;

  /**
   * <p>Contains the data type of a column in a query result set. The data type can
   * be scalar or complex. The supported scalar data types are integers, boolean,
   * string, double, timestamp, date, time, and intervals. The supported complex data
   * types are arrays, rows, and timeseries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/Type">AWS
   * API Reference</a></p>
   */
  class AWS_TIMESTREAMQUERY_API Type
  {
  public:
    Type();
    Type(Aws::Utils::Json::JsonView jsonValue);
    Type& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates if the column is of type string, integer, boolean, double,
     * timestamp, date, time. </p>
     */
    inline const ScalarType& GetScalarType() const{ return m_scalarType; }

    /**
     * <p>Indicates if the column is of type string, integer, boolean, double,
     * timestamp, date, time. </p>
     */
    inline bool ScalarTypeHasBeenSet() const { return m_scalarTypeHasBeenSet; }

    /**
     * <p>Indicates if the column is of type string, integer, boolean, double,
     * timestamp, date, time. </p>
     */
    inline void SetScalarType(const ScalarType& value) { m_scalarTypeHasBeenSet = true; m_scalarType = value; }

    /**
     * <p>Indicates if the column is of type string, integer, boolean, double,
     * timestamp, date, time. </p>
     */
    inline void SetScalarType(ScalarType&& value) { m_scalarTypeHasBeenSet = true; m_scalarType = std::move(value); }

    /**
     * <p>Indicates if the column is of type string, integer, boolean, double,
     * timestamp, date, time. </p>
     */
    inline Type& WithScalarType(const ScalarType& value) { SetScalarType(value); return *this;}

    /**
     * <p>Indicates if the column is of type string, integer, boolean, double,
     * timestamp, date, time. </p>
     */
    inline Type& WithScalarType(ScalarType&& value) { SetScalarType(std::move(value)); return *this;}


    /**
     * <p>Indicates if the column is an array.</p>
     */
    const ColumnInfo& GetArrayColumnInfo() const;

    /**
     * <p>Indicates if the column is an array.</p>
     */
    bool ArrayColumnInfoHasBeenSet() const;

    /**
     * <p>Indicates if the column is an array.</p>
     */
    void SetArrayColumnInfo(const ColumnInfo& value);

    /**
     * <p>Indicates if the column is an array.</p>
     */
    void SetArrayColumnInfo(ColumnInfo&& value);

    /**
     * <p>Indicates if the column is an array.</p>
     */
    Type& WithArrayColumnInfo(const ColumnInfo& value);

    /**
     * <p>Indicates if the column is an array.</p>
     */
    Type& WithArrayColumnInfo(ColumnInfo&& value);


    /**
     * <p>Indicates if the column is a timeseries data type.</p>
     */
    const ColumnInfo& GetTimeSeriesMeasureValueColumnInfo() const;

    /**
     * <p>Indicates if the column is a timeseries data type.</p>
     */
    bool TimeSeriesMeasureValueColumnInfoHasBeenSet() const;

    /**
     * <p>Indicates if the column is a timeseries data type.</p>
     */
    void SetTimeSeriesMeasureValueColumnInfo(const ColumnInfo& value);

    /**
     * <p>Indicates if the column is a timeseries data type.</p>
     */
    void SetTimeSeriesMeasureValueColumnInfo(ColumnInfo&& value);

    /**
     * <p>Indicates if the column is a timeseries data type.</p>
     */
    Type& WithTimeSeriesMeasureValueColumnInfo(const ColumnInfo& value);

    /**
     * <p>Indicates if the column is a timeseries data type.</p>
     */
    Type& WithTimeSeriesMeasureValueColumnInfo(ColumnInfo&& value);


    /**
     * <p>Indicates if the column is a row.</p>
     */
    inline const Aws::Vector<ColumnInfo>& GetRowColumnInfo() const{ return m_rowColumnInfo; }

    /**
     * <p>Indicates if the column is a row.</p>
     */
    inline bool RowColumnInfoHasBeenSet() const { return m_rowColumnInfoHasBeenSet; }

    /**
     * <p>Indicates if the column is a row.</p>
     */
    inline void SetRowColumnInfo(const Aws::Vector<ColumnInfo>& value) { m_rowColumnInfoHasBeenSet = true; m_rowColumnInfo = value; }

    /**
     * <p>Indicates if the column is a row.</p>
     */
    inline void SetRowColumnInfo(Aws::Vector<ColumnInfo>&& value) { m_rowColumnInfoHasBeenSet = true; m_rowColumnInfo = std::move(value); }

    /**
     * <p>Indicates if the column is a row.</p>
     */
    inline Type& WithRowColumnInfo(const Aws::Vector<ColumnInfo>& value) { SetRowColumnInfo(value); return *this;}

    /**
     * <p>Indicates if the column is a row.</p>
     */
    inline Type& WithRowColumnInfo(Aws::Vector<ColumnInfo>&& value) { SetRowColumnInfo(std::move(value)); return *this;}

    /**
     * <p>Indicates if the column is a row.</p>
     */
    inline Type& AddRowColumnInfo(const ColumnInfo& value) { m_rowColumnInfoHasBeenSet = true; m_rowColumnInfo.push_back(value); return *this; }

    /**
     * <p>Indicates if the column is a row.</p>
     */
    inline Type& AddRowColumnInfo(ColumnInfo&& value) { m_rowColumnInfoHasBeenSet = true; m_rowColumnInfo.push_back(std::move(value)); return *this; }

  private:

    ScalarType m_scalarType;
    bool m_scalarTypeHasBeenSet;

    std::shared_ptr<ColumnInfo> m_arrayColumnInfo;
    bool m_arrayColumnInfoHasBeenSet;

    std::shared_ptr<ColumnInfo> m_timeSeriesMeasureValueColumnInfo;
    bool m_timeSeriesMeasureValueColumnInfoHasBeenSet;

    Aws::Vector<ColumnInfo> m_rowColumnInfo;
    bool m_rowColumnInfoHasBeenSet;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
