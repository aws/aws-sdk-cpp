/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The metadata and rows that comprise a query result set. The metadata
   * describes the column structure and data types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ResultSet">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API ResultSet
  {
  public:
    ResultSet();
    ResultSet(Aws::Utils::Json::JsonView jsonValue);
    ResultSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_rowsHasBeenSet;

    ResultSetMetadata m_resultSetMetadata;
    bool m_resultSetMetadataHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
