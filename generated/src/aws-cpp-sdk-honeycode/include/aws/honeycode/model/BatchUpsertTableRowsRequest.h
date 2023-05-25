/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/HoneycodeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/honeycode/model/UpsertRowData.h>
#include <utility>

namespace Aws
{
namespace Honeycode
{
namespace Model
{

  /**
   */
  class BatchUpsertTableRowsRequest : public HoneycodeRequest
  {
  public:
    AWS_HONEYCODE_API BatchUpsertTableRowsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpsertTableRows"; }

    AWS_HONEYCODE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workbook where the rows are being upserted.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline const Aws::String& GetWorkbookId() const{ return m_workbookId; }

    /**
     * <p>The ID of the workbook where the rows are being upserted.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline bool WorkbookIdHasBeenSet() const { return m_workbookIdHasBeenSet; }

    /**
     * <p>The ID of the workbook where the rows are being upserted.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(const Aws::String& value) { m_workbookIdHasBeenSet = true; m_workbookId = value; }

    /**
     * <p>The ID of the workbook where the rows are being upserted.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(Aws::String&& value) { m_workbookIdHasBeenSet = true; m_workbookId = std::move(value); }

    /**
     * <p>The ID of the workbook where the rows are being upserted.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(const char* value) { m_workbookIdHasBeenSet = true; m_workbookId.assign(value); }

    /**
     * <p>The ID of the workbook where the rows are being upserted.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline BatchUpsertTableRowsRequest& WithWorkbookId(const Aws::String& value) { SetWorkbookId(value); return *this;}

    /**
     * <p>The ID of the workbook where the rows are being upserted.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline BatchUpsertTableRowsRequest& WithWorkbookId(Aws::String&& value) { SetWorkbookId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workbook where the rows are being upserted.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline BatchUpsertTableRowsRequest& WithWorkbookId(const char* value) { SetWorkbookId(value); return *this;}


    /**
     * <p>The ID of the table where the rows are being upserted.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }

    /**
     * <p>The ID of the table where the rows are being upserted.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }

    /**
     * <p>The ID of the table where the rows are being upserted.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }

    /**
     * <p>The ID of the table where the rows are being upserted.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }

    /**
     * <p>The ID of the table where the rows are being upserted.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }

    /**
     * <p>The ID of the table where the rows are being upserted.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline BatchUpsertTableRowsRequest& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}

    /**
     * <p>The ID of the table where the rows are being upserted.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline BatchUpsertTableRowsRequest& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the table where the rows are being upserted.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline BatchUpsertTableRowsRequest& WithTableId(const char* value) { SetTableId(value); return *this;}


    /**
     * <p> The list of rows to upsert in the table. Each item in this list needs to
     * have a batch item id to uniquely identify the element in the request, a filter
     * expression to find the rows to update for that element and the cell values to
     * set for each column in the upserted rows. You need to specify at least one item
     * in this list. </p> <p> Note that if one of the filter formulas in the request
     * fails to evaluate because of an error or one of the column ids in any of the
     * rows does not exist in the table, then the request fails and no updates are made
     * to the table. </p>
     */
    inline const Aws::Vector<UpsertRowData>& GetRowsToUpsert() const{ return m_rowsToUpsert; }

    /**
     * <p> The list of rows to upsert in the table. Each item in this list needs to
     * have a batch item id to uniquely identify the element in the request, a filter
     * expression to find the rows to update for that element and the cell values to
     * set for each column in the upserted rows. You need to specify at least one item
     * in this list. </p> <p> Note that if one of the filter formulas in the request
     * fails to evaluate because of an error or one of the column ids in any of the
     * rows does not exist in the table, then the request fails and no updates are made
     * to the table. </p>
     */
    inline bool RowsToUpsertHasBeenSet() const { return m_rowsToUpsertHasBeenSet; }

    /**
     * <p> The list of rows to upsert in the table. Each item in this list needs to
     * have a batch item id to uniquely identify the element in the request, a filter
     * expression to find the rows to update for that element and the cell values to
     * set for each column in the upserted rows. You need to specify at least one item
     * in this list. </p> <p> Note that if one of the filter formulas in the request
     * fails to evaluate because of an error or one of the column ids in any of the
     * rows does not exist in the table, then the request fails and no updates are made
     * to the table. </p>
     */
    inline void SetRowsToUpsert(const Aws::Vector<UpsertRowData>& value) { m_rowsToUpsertHasBeenSet = true; m_rowsToUpsert = value; }

    /**
     * <p> The list of rows to upsert in the table. Each item in this list needs to
     * have a batch item id to uniquely identify the element in the request, a filter
     * expression to find the rows to update for that element and the cell values to
     * set for each column in the upserted rows. You need to specify at least one item
     * in this list. </p> <p> Note that if one of the filter formulas in the request
     * fails to evaluate because of an error or one of the column ids in any of the
     * rows does not exist in the table, then the request fails and no updates are made
     * to the table. </p>
     */
    inline void SetRowsToUpsert(Aws::Vector<UpsertRowData>&& value) { m_rowsToUpsertHasBeenSet = true; m_rowsToUpsert = std::move(value); }

    /**
     * <p> The list of rows to upsert in the table. Each item in this list needs to
     * have a batch item id to uniquely identify the element in the request, a filter
     * expression to find the rows to update for that element and the cell values to
     * set for each column in the upserted rows. You need to specify at least one item
     * in this list. </p> <p> Note that if one of the filter formulas in the request
     * fails to evaluate because of an error or one of the column ids in any of the
     * rows does not exist in the table, then the request fails and no updates are made
     * to the table. </p>
     */
    inline BatchUpsertTableRowsRequest& WithRowsToUpsert(const Aws::Vector<UpsertRowData>& value) { SetRowsToUpsert(value); return *this;}

    /**
     * <p> The list of rows to upsert in the table. Each item in this list needs to
     * have a batch item id to uniquely identify the element in the request, a filter
     * expression to find the rows to update for that element and the cell values to
     * set for each column in the upserted rows. You need to specify at least one item
     * in this list. </p> <p> Note that if one of the filter formulas in the request
     * fails to evaluate because of an error or one of the column ids in any of the
     * rows does not exist in the table, then the request fails and no updates are made
     * to the table. </p>
     */
    inline BatchUpsertTableRowsRequest& WithRowsToUpsert(Aws::Vector<UpsertRowData>&& value) { SetRowsToUpsert(std::move(value)); return *this;}

    /**
     * <p> The list of rows to upsert in the table. Each item in this list needs to
     * have a batch item id to uniquely identify the element in the request, a filter
     * expression to find the rows to update for that element and the cell values to
     * set for each column in the upserted rows. You need to specify at least one item
     * in this list. </p> <p> Note that if one of the filter formulas in the request
     * fails to evaluate because of an error or one of the column ids in any of the
     * rows does not exist in the table, then the request fails and no updates are made
     * to the table. </p>
     */
    inline BatchUpsertTableRowsRequest& AddRowsToUpsert(const UpsertRowData& value) { m_rowsToUpsertHasBeenSet = true; m_rowsToUpsert.push_back(value); return *this; }

    /**
     * <p> The list of rows to upsert in the table. Each item in this list needs to
     * have a batch item id to uniquely identify the element in the request, a filter
     * expression to find the rows to update for that element and the cell values to
     * set for each column in the upserted rows. You need to specify at least one item
     * in this list. </p> <p> Note that if one of the filter formulas in the request
     * fails to evaluate because of an error or one of the column ids in any of the
     * rows does not exist in the table, then the request fails and no updates are made
     * to the table. </p>
     */
    inline BatchUpsertTableRowsRequest& AddRowsToUpsert(UpsertRowData&& value) { m_rowsToUpsertHasBeenSet = true; m_rowsToUpsert.push_back(std::move(value)); return *this; }


    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline BatchUpsertTableRowsRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline BatchUpsertTableRowsRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline BatchUpsertTableRowsRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_workbookId;
    bool m_workbookIdHasBeenSet = false;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet = false;

    Aws::Vector<UpsertRowData> m_rowsToUpsert;
    bool m_rowsToUpsertHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
