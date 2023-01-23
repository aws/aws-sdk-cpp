/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/HoneycodeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/honeycode/model/CreateRowData.h>
#include <utility>

namespace Aws
{
namespace Honeycode
{
namespace Model
{

  /**
   */
  class BatchCreateTableRowsRequest : public HoneycodeRequest
  {
  public:
    AWS_HONEYCODE_API BatchCreateTableRowsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateTableRows"; }

    AWS_HONEYCODE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workbook where the new rows are being added.</p> <p> If a
     * workbook with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline const Aws::String& GetWorkbookId() const{ return m_workbookId; }

    /**
     * <p>The ID of the workbook where the new rows are being added.</p> <p> If a
     * workbook with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline bool WorkbookIdHasBeenSet() const { return m_workbookIdHasBeenSet; }

    /**
     * <p>The ID of the workbook where the new rows are being added.</p> <p> If a
     * workbook with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(const Aws::String& value) { m_workbookIdHasBeenSet = true; m_workbookId = value; }

    /**
     * <p>The ID of the workbook where the new rows are being added.</p> <p> If a
     * workbook with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(Aws::String&& value) { m_workbookIdHasBeenSet = true; m_workbookId = std::move(value); }

    /**
     * <p>The ID of the workbook where the new rows are being added.</p> <p> If a
     * workbook with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(const char* value) { m_workbookIdHasBeenSet = true; m_workbookId.assign(value); }

    /**
     * <p>The ID of the workbook where the new rows are being added.</p> <p> If a
     * workbook with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline BatchCreateTableRowsRequest& WithWorkbookId(const Aws::String& value) { SetWorkbookId(value); return *this;}

    /**
     * <p>The ID of the workbook where the new rows are being added.</p> <p> If a
     * workbook with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline BatchCreateTableRowsRequest& WithWorkbookId(Aws::String&& value) { SetWorkbookId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workbook where the new rows are being added.</p> <p> If a
     * workbook with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline BatchCreateTableRowsRequest& WithWorkbookId(const char* value) { SetWorkbookId(value); return *this;}


    /**
     * <p>The ID of the table where the new rows are being added.</p> <p> If a table
     * with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }

    /**
     * <p>The ID of the table where the new rows are being added.</p> <p> If a table
     * with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }

    /**
     * <p>The ID of the table where the new rows are being added.</p> <p> If a table
     * with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }

    /**
     * <p>The ID of the table where the new rows are being added.</p> <p> If a table
     * with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }

    /**
     * <p>The ID of the table where the new rows are being added.</p> <p> If a table
     * with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }

    /**
     * <p>The ID of the table where the new rows are being added.</p> <p> If a table
     * with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline BatchCreateTableRowsRequest& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}

    /**
     * <p>The ID of the table where the new rows are being added.</p> <p> If a table
     * with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline BatchCreateTableRowsRequest& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the table where the new rows are being added.</p> <p> If a table
     * with the specified ID could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline BatchCreateTableRowsRequest& WithTableId(const char* value) { SetTableId(value); return *this;}


    /**
     * <p> The list of rows to create at the end of the table. Each item in this list
     * needs to have a batch item id to uniquely identify the element in the request
     * and the cells to create for that row. You need to specify at least one item in
     * this list. </p> <p> Note that if one of the column ids in any of the rows in the
     * request does not exist in the table, then the request fails and no updates are
     * made to the table. </p>
     */
    inline const Aws::Vector<CreateRowData>& GetRowsToCreate() const{ return m_rowsToCreate; }

    /**
     * <p> The list of rows to create at the end of the table. Each item in this list
     * needs to have a batch item id to uniquely identify the element in the request
     * and the cells to create for that row. You need to specify at least one item in
     * this list. </p> <p> Note that if one of the column ids in any of the rows in the
     * request does not exist in the table, then the request fails and no updates are
     * made to the table. </p>
     */
    inline bool RowsToCreateHasBeenSet() const { return m_rowsToCreateHasBeenSet; }

    /**
     * <p> The list of rows to create at the end of the table. Each item in this list
     * needs to have a batch item id to uniquely identify the element in the request
     * and the cells to create for that row. You need to specify at least one item in
     * this list. </p> <p> Note that if one of the column ids in any of the rows in the
     * request does not exist in the table, then the request fails and no updates are
     * made to the table. </p>
     */
    inline void SetRowsToCreate(const Aws::Vector<CreateRowData>& value) { m_rowsToCreateHasBeenSet = true; m_rowsToCreate = value; }

    /**
     * <p> The list of rows to create at the end of the table. Each item in this list
     * needs to have a batch item id to uniquely identify the element in the request
     * and the cells to create for that row. You need to specify at least one item in
     * this list. </p> <p> Note that if one of the column ids in any of the rows in the
     * request does not exist in the table, then the request fails and no updates are
     * made to the table. </p>
     */
    inline void SetRowsToCreate(Aws::Vector<CreateRowData>&& value) { m_rowsToCreateHasBeenSet = true; m_rowsToCreate = std::move(value); }

    /**
     * <p> The list of rows to create at the end of the table. Each item in this list
     * needs to have a batch item id to uniquely identify the element in the request
     * and the cells to create for that row. You need to specify at least one item in
     * this list. </p> <p> Note that if one of the column ids in any of the rows in the
     * request does not exist in the table, then the request fails and no updates are
     * made to the table. </p>
     */
    inline BatchCreateTableRowsRequest& WithRowsToCreate(const Aws::Vector<CreateRowData>& value) { SetRowsToCreate(value); return *this;}

    /**
     * <p> The list of rows to create at the end of the table. Each item in this list
     * needs to have a batch item id to uniquely identify the element in the request
     * and the cells to create for that row. You need to specify at least one item in
     * this list. </p> <p> Note that if one of the column ids in any of the rows in the
     * request does not exist in the table, then the request fails and no updates are
     * made to the table. </p>
     */
    inline BatchCreateTableRowsRequest& WithRowsToCreate(Aws::Vector<CreateRowData>&& value) { SetRowsToCreate(std::move(value)); return *this;}

    /**
     * <p> The list of rows to create at the end of the table. Each item in this list
     * needs to have a batch item id to uniquely identify the element in the request
     * and the cells to create for that row. You need to specify at least one item in
     * this list. </p> <p> Note that if one of the column ids in any of the rows in the
     * request does not exist in the table, then the request fails and no updates are
     * made to the table. </p>
     */
    inline BatchCreateTableRowsRequest& AddRowsToCreate(const CreateRowData& value) { m_rowsToCreateHasBeenSet = true; m_rowsToCreate.push_back(value); return *this; }

    /**
     * <p> The list of rows to create at the end of the table. Each item in this list
     * needs to have a batch item id to uniquely identify the element in the request
     * and the cells to create for that row. You need to specify at least one item in
     * this list. </p> <p> Note that if one of the column ids in any of the rows in the
     * request does not exist in the table, then the request fails and no updates are
     * made to the table. </p>
     */
    inline BatchCreateTableRowsRequest& AddRowsToCreate(CreateRowData&& value) { m_rowsToCreateHasBeenSet = true; m_rowsToCreate.push_back(std::move(value)); return *this; }


    /**
     * <p> The request token for performing the batch create operation. Request tokens
     * help to identify duplicate requests. If a call times out or fails due to a
     * transient error like a failed network connection, you can retry the call with
     * the same request token. The service ensures that if the first call using that
     * request token is successfully performed, the second call will not perform the
     * operation again. </p> <p> Note that request tokens are valid only for a few
     * minutes. You cannot use request tokens to dedupe requests spanning hours or
     * days. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p> The request token for performing the batch create operation. Request tokens
     * help to identify duplicate requests. If a call times out or fails due to a
     * transient error like a failed network connection, you can retry the call with
     * the same request token. The service ensures that if the first call using that
     * request token is successfully performed, the second call will not perform the
     * operation again. </p> <p> Note that request tokens are valid only for a few
     * minutes. You cannot use request tokens to dedupe requests spanning hours or
     * days. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p> The request token for performing the batch create operation. Request tokens
     * help to identify duplicate requests. If a call times out or fails due to a
     * transient error like a failed network connection, you can retry the call with
     * the same request token. The service ensures that if the first call using that
     * request token is successfully performed, the second call will not perform the
     * operation again. </p> <p> Note that request tokens are valid only for a few
     * minutes. You cannot use request tokens to dedupe requests spanning hours or
     * days. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p> The request token for performing the batch create operation. Request tokens
     * help to identify duplicate requests. If a call times out or fails due to a
     * transient error like a failed network connection, you can retry the call with
     * the same request token. The service ensures that if the first call using that
     * request token is successfully performed, the second call will not perform the
     * operation again. </p> <p> Note that request tokens are valid only for a few
     * minutes. You cannot use request tokens to dedupe requests spanning hours or
     * days. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p> The request token for performing the batch create operation. Request tokens
     * help to identify duplicate requests. If a call times out or fails due to a
     * transient error like a failed network connection, you can retry the call with
     * the same request token. The service ensures that if the first call using that
     * request token is successfully performed, the second call will not perform the
     * operation again. </p> <p> Note that request tokens are valid only for a few
     * minutes. You cannot use request tokens to dedupe requests spanning hours or
     * days. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p> The request token for performing the batch create operation. Request tokens
     * help to identify duplicate requests. If a call times out or fails due to a
     * transient error like a failed network connection, you can retry the call with
     * the same request token. The service ensures that if the first call using that
     * request token is successfully performed, the second call will not perform the
     * operation again. </p> <p> Note that request tokens are valid only for a few
     * minutes. You cannot use request tokens to dedupe requests spanning hours or
     * days. </p>
     */
    inline BatchCreateTableRowsRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p> The request token for performing the batch create operation. Request tokens
     * help to identify duplicate requests. If a call times out or fails due to a
     * transient error like a failed network connection, you can retry the call with
     * the same request token. The service ensures that if the first call using that
     * request token is successfully performed, the second call will not perform the
     * operation again. </p> <p> Note that request tokens are valid only for a few
     * minutes. You cannot use request tokens to dedupe requests spanning hours or
     * days. </p>
     */
    inline BatchCreateTableRowsRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p> The request token for performing the batch create operation. Request tokens
     * help to identify duplicate requests. If a call times out or fails due to a
     * transient error like a failed network connection, you can retry the call with
     * the same request token. The service ensures that if the first call using that
     * request token is successfully performed, the second call will not perform the
     * operation again. </p> <p> Note that request tokens are valid only for a few
     * minutes. You cannot use request tokens to dedupe requests spanning hours or
     * days. </p>
     */
    inline BatchCreateTableRowsRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_workbookId;
    bool m_workbookIdHasBeenSet = false;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet = false;

    Aws::Vector<CreateRowData> m_rowsToCreate;
    bool m_rowsToCreateHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
