/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/HoneycodeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/Filter.h>
#include <utility>

namespace Aws
{
namespace Honeycode
{
namespace Model
{

  /**
   */
  class QueryTableRowsRequest : public HoneycodeRequest
  {
  public:
    AWS_HONEYCODE_API QueryTableRowsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryTableRows"; }

    AWS_HONEYCODE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workbook whose table rows are being queried.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline const Aws::String& GetWorkbookId() const{ return m_workbookId; }

    /**
     * <p>The ID of the workbook whose table rows are being queried.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline bool WorkbookIdHasBeenSet() const { return m_workbookIdHasBeenSet; }

    /**
     * <p>The ID of the workbook whose table rows are being queried.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(const Aws::String& value) { m_workbookIdHasBeenSet = true; m_workbookId = value; }

    /**
     * <p>The ID of the workbook whose table rows are being queried.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(Aws::String&& value) { m_workbookIdHasBeenSet = true; m_workbookId = std::move(value); }

    /**
     * <p>The ID of the workbook whose table rows are being queried.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(const char* value) { m_workbookIdHasBeenSet = true; m_workbookId.assign(value); }

    /**
     * <p>The ID of the workbook whose table rows are being queried.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline QueryTableRowsRequest& WithWorkbookId(const Aws::String& value) { SetWorkbookId(value); return *this;}

    /**
     * <p>The ID of the workbook whose table rows are being queried.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline QueryTableRowsRequest& WithWorkbookId(Aws::String&& value) { SetWorkbookId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workbook whose table rows are being queried.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline QueryTableRowsRequest& WithWorkbookId(const char* value) { SetWorkbookId(value); return *this;}


    /**
     * <p>The ID of the table whose rows are being queried.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }

    /**
     * <p>The ID of the table whose rows are being queried.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }

    /**
     * <p>The ID of the table whose rows are being queried.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }

    /**
     * <p>The ID of the table whose rows are being queried.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }

    /**
     * <p>The ID of the table whose rows are being queried.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }

    /**
     * <p>The ID of the table whose rows are being queried.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline QueryTableRowsRequest& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}

    /**
     * <p>The ID of the table whose rows are being queried.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline QueryTableRowsRequest& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the table whose rows are being queried.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline QueryTableRowsRequest& WithTableId(const char* value) { SetTableId(value); return *this;}


    /**
     * <p>An object that represents a filter formula along with the id of the context
     * row under which the filter function needs to evaluate.</p>
     */
    inline const Filter& GetFilterFormula() const{ return m_filterFormula; }

    /**
     * <p>An object that represents a filter formula along with the id of the context
     * row under which the filter function needs to evaluate.</p>
     */
    inline bool FilterFormulaHasBeenSet() const { return m_filterFormulaHasBeenSet; }

    /**
     * <p>An object that represents a filter formula along with the id of the context
     * row under which the filter function needs to evaluate.</p>
     */
    inline void SetFilterFormula(const Filter& value) { m_filterFormulaHasBeenSet = true; m_filterFormula = value; }

    /**
     * <p>An object that represents a filter formula along with the id of the context
     * row under which the filter function needs to evaluate.</p>
     */
    inline void SetFilterFormula(Filter&& value) { m_filterFormulaHasBeenSet = true; m_filterFormula = std::move(value); }

    /**
     * <p>An object that represents a filter formula along with the id of the context
     * row under which the filter function needs to evaluate.</p>
     */
    inline QueryTableRowsRequest& WithFilterFormula(const Filter& value) { SetFilterFormula(value); return *this;}

    /**
     * <p>An object that represents a filter formula along with the id of the context
     * row under which the filter function needs to evaluate.</p>
     */
    inline QueryTableRowsRequest& WithFilterFormula(Filter&& value) { SetFilterFormula(std::move(value)); return *this;}


    /**
     * <p>The maximum number of rows to return in each page of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of rows to return in each page of the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of rows to return in each page of the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of rows to return in each page of the results.</p>
     */
    inline QueryTableRowsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline QueryTableRowsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline QueryTableRowsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline QueryTableRowsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_workbookId;
    bool m_workbookIdHasBeenSet = false;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet = false;

    Filter m_filterFormula;
    bool m_filterFormulaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
