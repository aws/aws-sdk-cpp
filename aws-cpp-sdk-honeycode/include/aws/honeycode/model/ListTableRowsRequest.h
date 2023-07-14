﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/HoneycodeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Honeycode
{
namespace Model
{

  /**
   */
  class AWS_HONEYCODE_API ListTableRowsRequest : public HoneycodeRequest
  {
  public:
    ListTableRowsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTableRows"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workbook that contains the table whose rows are being
     * retrieved.</p> <p> If a workbook with the specified id could not be found, this
     * API throws ResourceNotFoundException. </p>
     */
    inline const Aws::String& GetWorkbookId() const{ return m_workbookId; }

    /**
     * <p>The ID of the workbook that contains the table whose rows are being
     * retrieved.</p> <p> If a workbook with the specified id could not be found, this
     * API throws ResourceNotFoundException. </p>
     */
    inline bool WorkbookIdHasBeenSet() const { return m_workbookIdHasBeenSet; }

    /**
     * <p>The ID of the workbook that contains the table whose rows are being
     * retrieved.</p> <p> If a workbook with the specified id could not be found, this
     * API throws ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(const Aws::String& value) { m_workbookIdHasBeenSet = true; m_workbookId = value; }

    /**
     * <p>The ID of the workbook that contains the table whose rows are being
     * retrieved.</p> <p> If a workbook with the specified id could not be found, this
     * API throws ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(Aws::String&& value) { m_workbookIdHasBeenSet = true; m_workbookId = std::move(value); }

    /**
     * <p>The ID of the workbook that contains the table whose rows are being
     * retrieved.</p> <p> If a workbook with the specified id could not be found, this
     * API throws ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(const char* value) { m_workbookIdHasBeenSet = true; m_workbookId.assign(value); }

    /**
     * <p>The ID of the workbook that contains the table whose rows are being
     * retrieved.</p> <p> If a workbook with the specified id could not be found, this
     * API throws ResourceNotFoundException. </p>
     */
    inline ListTableRowsRequest& WithWorkbookId(const Aws::String& value) { SetWorkbookId(value); return *this;}

    /**
     * <p>The ID of the workbook that contains the table whose rows are being
     * retrieved.</p> <p> If a workbook with the specified id could not be found, this
     * API throws ResourceNotFoundException. </p>
     */
    inline ListTableRowsRequest& WithWorkbookId(Aws::String&& value) { SetWorkbookId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workbook that contains the table whose rows are being
     * retrieved.</p> <p> If a workbook with the specified id could not be found, this
     * API throws ResourceNotFoundException. </p>
     */
    inline ListTableRowsRequest& WithWorkbookId(const char* value) { SetWorkbookId(value); return *this;}


    /**
     * <p>The ID of the table whose rows are being retrieved.</p> <p> If a table with
     * the specified id could not be found, this API throws ResourceNotFoundException.
     * </p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }

    /**
     * <p>The ID of the table whose rows are being retrieved.</p> <p> If a table with
     * the specified id could not be found, this API throws ResourceNotFoundException.
     * </p>
     */
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }

    /**
     * <p>The ID of the table whose rows are being retrieved.</p> <p> If a table with
     * the specified id could not be found, this API throws ResourceNotFoundException.
     * </p>
     */
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }

    /**
     * <p>The ID of the table whose rows are being retrieved.</p> <p> If a table with
     * the specified id could not be found, this API throws ResourceNotFoundException.
     * </p>
     */
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }

    /**
     * <p>The ID of the table whose rows are being retrieved.</p> <p> If a table with
     * the specified id could not be found, this API throws ResourceNotFoundException.
     * </p>
     */
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }

    /**
     * <p>The ID of the table whose rows are being retrieved.</p> <p> If a table with
     * the specified id could not be found, this API throws ResourceNotFoundException.
     * </p>
     */
    inline ListTableRowsRequest& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}

    /**
     * <p>The ID of the table whose rows are being retrieved.</p> <p> If a table with
     * the specified id could not be found, this API throws ResourceNotFoundException.
     * </p>
     */
    inline ListTableRowsRequest& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the table whose rows are being retrieved.</p> <p> If a table with
     * the specified id could not be found, this API throws ResourceNotFoundException.
     * </p>
     */
    inline ListTableRowsRequest& WithTableId(const char* value) { SetTableId(value); return *this;}


    /**
     * <p> This parameter is optional. If one or more row ids are specified in this
     * list, then only the specified row ids are returned in the result. If no row ids
     * are specified here, then all the rows in the table are returned. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRowIds() const{ return m_rowIds; }

    /**
     * <p> This parameter is optional. If one or more row ids are specified in this
     * list, then only the specified row ids are returned in the result. If no row ids
     * are specified here, then all the rows in the table are returned. </p>
     */
    inline bool RowIdsHasBeenSet() const { return m_rowIdsHasBeenSet; }

    /**
     * <p> This parameter is optional. If one or more row ids are specified in this
     * list, then only the specified row ids are returned in the result. If no row ids
     * are specified here, then all the rows in the table are returned. </p>
     */
    inline void SetRowIds(const Aws::Vector<Aws::String>& value) { m_rowIdsHasBeenSet = true; m_rowIds = value; }

    /**
     * <p> This parameter is optional. If one or more row ids are specified in this
     * list, then only the specified row ids are returned in the result. If no row ids
     * are specified here, then all the rows in the table are returned. </p>
     */
    inline void SetRowIds(Aws::Vector<Aws::String>&& value) { m_rowIdsHasBeenSet = true; m_rowIds = std::move(value); }

    /**
     * <p> This parameter is optional. If one or more row ids are specified in this
     * list, then only the specified row ids are returned in the result. If no row ids
     * are specified here, then all the rows in the table are returned. </p>
     */
    inline ListTableRowsRequest& WithRowIds(const Aws::Vector<Aws::String>& value) { SetRowIds(value); return *this;}

    /**
     * <p> This parameter is optional. If one or more row ids are specified in this
     * list, then only the specified row ids are returned in the result. If no row ids
     * are specified here, then all the rows in the table are returned. </p>
     */
    inline ListTableRowsRequest& WithRowIds(Aws::Vector<Aws::String>&& value) { SetRowIds(std::move(value)); return *this;}

    /**
     * <p> This parameter is optional. If one or more row ids are specified in this
     * list, then only the specified row ids are returned in the result. If no row ids
     * are specified here, then all the rows in the table are returned. </p>
     */
    inline ListTableRowsRequest& AddRowIds(const Aws::String& value) { m_rowIdsHasBeenSet = true; m_rowIds.push_back(value); return *this; }

    /**
     * <p> This parameter is optional. If one or more row ids are specified in this
     * list, then only the specified row ids are returned in the result. If no row ids
     * are specified here, then all the rows in the table are returned. </p>
     */
    inline ListTableRowsRequest& AddRowIds(Aws::String&& value) { m_rowIdsHasBeenSet = true; m_rowIds.push_back(std::move(value)); return *this; }

    /**
     * <p> This parameter is optional. If one or more row ids are specified in this
     * list, then only the specified row ids are returned in the result. If no row ids
     * are specified here, then all the rows in the table are returned. </p>
     */
    inline ListTableRowsRequest& AddRowIds(const char* value) { m_rowIdsHasBeenSet = true; m_rowIds.push_back(value); return *this; }


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
    inline ListTableRowsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListTableRowsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline ListTableRowsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline ListTableRowsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_workbookId;
    bool m_workbookIdHasBeenSet;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet;

    Aws::Vector<Aws::String> m_rowIds;
    bool m_rowIdsHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
