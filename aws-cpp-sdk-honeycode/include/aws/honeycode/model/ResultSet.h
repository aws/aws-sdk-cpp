/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/honeycode/model/ColumnMetadata.h>
#include <aws/honeycode/model/ResultRow.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p> ResultSet contains the results of the request for a single block or list
   * defined on the screen. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ResultSet">AWS
   * API Reference</a></p>
   */
  class ResultSet
  {
  public:
    AWS_HONEYCODE_API ResultSet();
    AWS_HONEYCODE_API ResultSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API ResultSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> List of headers for all the data cells in the block. The header identifies
     * the name and default format of the data cell. Data cells appear in the same
     * order in all rows as defined in the header. The names and formats are not
     * repeated in the rows. If a particular row does not have a value for a data cell,
     * a blank value is used. </p> <p> For example, a task list that displays the task
     * name, due date and assigned person might have headers [ { "name": "Task Name"},
     * {"name": "Due Date", "format": "DATE"}, {"name": "Assigned", "format":
     * "CONTACT"} ]. Every row in the result will have the task name as the first item,
     * due date as the second item and assigned person as the third item. If a
     * particular task does not have a due date, that row will still have a blank value
     * in the second element and the assigned person will still be in the third
     * element. </p>
     */
    inline const Aws::Vector<ColumnMetadata>& GetHeaders() const{ return m_headers; }

    /**
     * <p> List of headers for all the data cells in the block. The header identifies
     * the name and default format of the data cell. Data cells appear in the same
     * order in all rows as defined in the header. The names and formats are not
     * repeated in the rows. If a particular row does not have a value for a data cell,
     * a blank value is used. </p> <p> For example, a task list that displays the task
     * name, due date and assigned person might have headers [ { "name": "Task Name"},
     * {"name": "Due Date", "format": "DATE"}, {"name": "Assigned", "format":
     * "CONTACT"} ]. Every row in the result will have the task name as the first item,
     * due date as the second item and assigned person as the third item. If a
     * particular task does not have a due date, that row will still have a blank value
     * in the second element and the assigned person will still be in the third
     * element. </p>
     */
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }

    /**
     * <p> List of headers for all the data cells in the block. The header identifies
     * the name and default format of the data cell. Data cells appear in the same
     * order in all rows as defined in the header. The names and formats are not
     * repeated in the rows. If a particular row does not have a value for a data cell,
     * a blank value is used. </p> <p> For example, a task list that displays the task
     * name, due date and assigned person might have headers [ { "name": "Task Name"},
     * {"name": "Due Date", "format": "DATE"}, {"name": "Assigned", "format":
     * "CONTACT"} ]. Every row in the result will have the task name as the first item,
     * due date as the second item and assigned person as the third item. If a
     * particular task does not have a due date, that row will still have a blank value
     * in the second element and the assigned person will still be in the third
     * element. </p>
     */
    inline void SetHeaders(const Aws::Vector<ColumnMetadata>& value) { m_headersHasBeenSet = true; m_headers = value; }

    /**
     * <p> List of headers for all the data cells in the block. The header identifies
     * the name and default format of the data cell. Data cells appear in the same
     * order in all rows as defined in the header. The names and formats are not
     * repeated in the rows. If a particular row does not have a value for a data cell,
     * a blank value is used. </p> <p> For example, a task list that displays the task
     * name, due date and assigned person might have headers [ { "name": "Task Name"},
     * {"name": "Due Date", "format": "DATE"}, {"name": "Assigned", "format":
     * "CONTACT"} ]. Every row in the result will have the task name as the first item,
     * due date as the second item and assigned person as the third item. If a
     * particular task does not have a due date, that row will still have a blank value
     * in the second element and the assigned person will still be in the third
     * element. </p>
     */
    inline void SetHeaders(Aws::Vector<ColumnMetadata>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }

    /**
     * <p> List of headers for all the data cells in the block. The header identifies
     * the name and default format of the data cell. Data cells appear in the same
     * order in all rows as defined in the header. The names and formats are not
     * repeated in the rows. If a particular row does not have a value for a data cell,
     * a blank value is used. </p> <p> For example, a task list that displays the task
     * name, due date and assigned person might have headers [ { "name": "Task Name"},
     * {"name": "Due Date", "format": "DATE"}, {"name": "Assigned", "format":
     * "CONTACT"} ]. Every row in the result will have the task name as the first item,
     * due date as the second item and assigned person as the third item. If a
     * particular task does not have a due date, that row will still have a blank value
     * in the second element and the assigned person will still be in the third
     * element. </p>
     */
    inline ResultSet& WithHeaders(const Aws::Vector<ColumnMetadata>& value) { SetHeaders(value); return *this;}

    /**
     * <p> List of headers for all the data cells in the block. The header identifies
     * the name and default format of the data cell. Data cells appear in the same
     * order in all rows as defined in the header. The names and formats are not
     * repeated in the rows. If a particular row does not have a value for a data cell,
     * a blank value is used. </p> <p> For example, a task list that displays the task
     * name, due date and assigned person might have headers [ { "name": "Task Name"},
     * {"name": "Due Date", "format": "DATE"}, {"name": "Assigned", "format":
     * "CONTACT"} ]. Every row in the result will have the task name as the first item,
     * due date as the second item and assigned person as the third item. If a
     * particular task does not have a due date, that row will still have a blank value
     * in the second element and the assigned person will still be in the third
     * element. </p>
     */
    inline ResultSet& WithHeaders(Aws::Vector<ColumnMetadata>&& value) { SetHeaders(std::move(value)); return *this;}

    /**
     * <p> List of headers for all the data cells in the block. The header identifies
     * the name and default format of the data cell. Data cells appear in the same
     * order in all rows as defined in the header. The names and formats are not
     * repeated in the rows. If a particular row does not have a value for a data cell,
     * a blank value is used. </p> <p> For example, a task list that displays the task
     * name, due date and assigned person might have headers [ { "name": "Task Name"},
     * {"name": "Due Date", "format": "DATE"}, {"name": "Assigned", "format":
     * "CONTACT"} ]. Every row in the result will have the task name as the first item,
     * due date as the second item and assigned person as the third item. If a
     * particular task does not have a due date, that row will still have a blank value
     * in the second element and the assigned person will still be in the third
     * element. </p>
     */
    inline ResultSet& AddHeaders(const ColumnMetadata& value) { m_headersHasBeenSet = true; m_headers.push_back(value); return *this; }

    /**
     * <p> List of headers for all the data cells in the block. The header identifies
     * the name and default format of the data cell. Data cells appear in the same
     * order in all rows as defined in the header. The names and formats are not
     * repeated in the rows. If a particular row does not have a value for a data cell,
     * a blank value is used. </p> <p> For example, a task list that displays the task
     * name, due date and assigned person might have headers [ { "name": "Task Name"},
     * {"name": "Due Date", "format": "DATE"}, {"name": "Assigned", "format":
     * "CONTACT"} ]. Every row in the result will have the task name as the first item,
     * due date as the second item and assigned person as the third item. If a
     * particular task does not have a due date, that row will still have a blank value
     * in the second element and the assigned person will still be in the third
     * element. </p>
     */
    inline ResultSet& AddHeaders(ColumnMetadata&& value) { m_headersHasBeenSet = true; m_headers.push_back(std::move(value)); return *this; }


    /**
     * <p> List of rows returned by the request. Each row has a row Id and a list of
     * data cells in that row. The data cells will be present in the same order as they
     * are defined in the header. </p>
     */
    inline const Aws::Vector<ResultRow>& GetRows() const{ return m_rows; }

    /**
     * <p> List of rows returned by the request. Each row has a row Id and a list of
     * data cells in that row. The data cells will be present in the same order as they
     * are defined in the header. </p>
     */
    inline bool RowsHasBeenSet() const { return m_rowsHasBeenSet; }

    /**
     * <p> List of rows returned by the request. Each row has a row Id and a list of
     * data cells in that row. The data cells will be present in the same order as they
     * are defined in the header. </p>
     */
    inline void SetRows(const Aws::Vector<ResultRow>& value) { m_rowsHasBeenSet = true; m_rows = value; }

    /**
     * <p> List of rows returned by the request. Each row has a row Id and a list of
     * data cells in that row. The data cells will be present in the same order as they
     * are defined in the header. </p>
     */
    inline void SetRows(Aws::Vector<ResultRow>&& value) { m_rowsHasBeenSet = true; m_rows = std::move(value); }

    /**
     * <p> List of rows returned by the request. Each row has a row Id and a list of
     * data cells in that row. The data cells will be present in the same order as they
     * are defined in the header. </p>
     */
    inline ResultSet& WithRows(const Aws::Vector<ResultRow>& value) { SetRows(value); return *this;}

    /**
     * <p> List of rows returned by the request. Each row has a row Id and a list of
     * data cells in that row. The data cells will be present in the same order as they
     * are defined in the header. </p>
     */
    inline ResultSet& WithRows(Aws::Vector<ResultRow>&& value) { SetRows(std::move(value)); return *this;}

    /**
     * <p> List of rows returned by the request. Each row has a row Id and a list of
     * data cells in that row. The data cells will be present in the same order as they
     * are defined in the header. </p>
     */
    inline ResultSet& AddRows(const ResultRow& value) { m_rowsHasBeenSet = true; m_rows.push_back(value); return *this; }

    /**
     * <p> List of rows returned by the request. Each row has a row Id and a list of
     * data cells in that row. The data cells will be present in the same order as they
     * are defined in the header. </p>
     */
    inline ResultSet& AddRows(ResultRow&& value) { m_rowsHasBeenSet = true; m_rows.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ColumnMetadata> m_headers;
    bool m_headersHasBeenSet = false;

    Aws::Vector<ResultRow> m_rows;
    bool m_rowsHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
