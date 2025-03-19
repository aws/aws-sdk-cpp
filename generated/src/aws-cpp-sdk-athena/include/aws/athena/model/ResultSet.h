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
    AWS_ATHENA_API ResultSet() = default;
    AWS_ATHENA_API ResultSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ResultSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rows in the table.</p>
     */
    inline const Aws::Vector<Row>& GetRows() const { return m_rows; }
    inline bool RowsHasBeenSet() const { return m_rowsHasBeenSet; }
    template<typename RowsT = Aws::Vector<Row>>
    void SetRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows = std::forward<RowsT>(value); }
    template<typename RowsT = Aws::Vector<Row>>
    ResultSet& WithRows(RowsT&& value) { SetRows(std::forward<RowsT>(value)); return *this;}
    template<typename RowsT = Row>
    ResultSet& AddRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows.emplace_back(std::forward<RowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata that describes the column structure and data types of a table of
     * query results.</p>
     */
    inline const ResultSetMetadata& GetResultSetMetadata() const { return m_resultSetMetadata; }
    inline bool ResultSetMetadataHasBeenSet() const { return m_resultSetMetadataHasBeenSet; }
    template<typename ResultSetMetadataT = ResultSetMetadata>
    void SetResultSetMetadata(ResultSetMetadataT&& value) { m_resultSetMetadataHasBeenSet = true; m_resultSetMetadata = std::forward<ResultSetMetadataT>(value); }
    template<typename ResultSetMetadataT = ResultSetMetadata>
    ResultSet& WithResultSetMetadata(ResultSetMetadataT&& value) { SetResultSetMetadata(std::forward<ResultSetMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Row> m_rows;
    bool m_rowsHasBeenSet = false;

    ResultSetMetadata m_resultSetMetadata;
    bool m_resultSetMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
