/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/ResultSetMetadata.h>
#include <aws/athena/model/Row.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>The metadata and rows that make up a query result set. The metadata describes
   * the column structure and data types. To return a <code>ResultSet</code> object,
   * use <a>GetQueryResults</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ResultSet">AWS
   * API Reference</a></p>
   */
  class ResultSet
  {
  public:
    AWS_ATHENA_API ResultSet();
    AWS_ATHENA_API ResultSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ResultSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rows in the table.</p>
     */
    inline const Aws::Vector<Row>& GetRows() const{ return m_rows; }

    /**
     * <p>The rows in the table.</p>
     */
    inline bool RowsHasBeenSet() const { return m_rowsHasBeenSet; }

    /**
     * <p>The rows in the table.</p>
     */
    inline void SetRows(const Aws::Vector<Row>& value) { m_rowsHasBeenSet = true; m_rows = value; }

    /**
     * <p>The rows in the table.</p>
     */
    inline void SetRows(Aws::Vector<Row>&& value) { m_rowsHasBeenSet = true; m_rows = std::move(value); }

    /**
     * <p>The rows in the table.</p>
     */
    inline ResultSet& WithRows(const Aws::Vector<Row>& value) { SetRows(value); return *this;}

    /**
     * <p>The rows in the table.</p>
     */
    inline ResultSet& WithRows(Aws::Vector<Row>&& value) { SetRows(std::move(value)); return *this;}

    /**
     * <p>The rows in the table.</p>
     */
    inline ResultSet& AddRows(const Row& value) { m_rowsHasBeenSet = true; m_rows.push_back(value); return *this; }

    /**
     * <p>The rows in the table.</p>
     */
    inline ResultSet& AddRows(Row&& value) { m_rowsHasBeenSet = true; m_rows.push_back(std::move(value)); return *this; }


    /**
     * <p>The metadata that describes the column structure and data types of a table of
     * query results.</p>
     */
    inline const ResultSetMetadata& GetResultSetMetadata() const{ return m_resultSetMetadata; }

    /**
     * <p>The metadata that describes the column structure and data types of a table of
     * query results.</p>
     */
    inline bool ResultSetMetadataHasBeenSet() const { return m_resultSetMetadataHasBeenSet; }

    /**
     * <p>The metadata that describes the column structure and data types of a table of
     * query results.</p>
     */
    inline void SetResultSetMetadata(const ResultSetMetadata& value) { m_resultSetMetadataHasBeenSet = true; m_resultSetMetadata = value; }

    /**
     * <p>The metadata that describes the column structure and data types of a table of
     * query results.</p>
     */
    inline void SetResultSetMetadata(ResultSetMetadata&& value) { m_resultSetMetadataHasBeenSet = true; m_resultSetMetadata = std::move(value); }

    /**
     * <p>The metadata that describes the column structure and data types of a table of
     * query results.</p>
     */
    inline ResultSet& WithResultSetMetadata(const ResultSetMetadata& value) { SetResultSetMetadata(value); return *this;}

    /**
     * <p>The metadata that describes the column structure and data types of a table of
     * query results.</p>
     */
    inline ResultSet& WithResultSetMetadata(ResultSetMetadata&& value) { SetResultSetMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Row> m_rows;
    bool m_rowsHasBeenSet = false;

    ResultSetMetadata m_resultSetMetadata;
    bool m_resultSetMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
