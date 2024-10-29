﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class ListFileTransferResultsRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API ListFileTransferResultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFileTransferResults"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for a connector. This value should match the value
     * supplied to the corresponding <code>StartFileTransfer</code> call.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    inline void SetConnectorId(const Aws::String& value) { m_connectorIdHasBeenSet = true; m_connectorId = value; }
    inline void SetConnectorId(Aws::String&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::move(value); }
    inline void SetConnectorId(const char* value) { m_connectorIdHasBeenSet = true; m_connectorId.assign(value); }
    inline ListFileTransferResultsRequest& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}
    inline ListFileTransferResultsRequest& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}
    inline ListFileTransferResultsRequest& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a file transfer. This value should match the value
     * supplied to the corresponding <code>StartFileTransfer</code> call.</p>
     */
    inline const Aws::String& GetTransferId() const{ return m_transferId; }
    inline bool TransferIdHasBeenSet() const { return m_transferIdHasBeenSet; }
    inline void SetTransferId(const Aws::String& value) { m_transferIdHasBeenSet = true; m_transferId = value; }
    inline void SetTransferId(Aws::String&& value) { m_transferIdHasBeenSet = true; m_transferId = std::move(value); }
    inline void SetTransferId(const char* value) { m_transferIdHasBeenSet = true; m_transferId.assign(value); }
    inline ListFileTransferResultsRequest& WithTransferId(const Aws::String& value) { SetTransferId(value); return *this;}
    inline ListFileTransferResultsRequest& WithTransferId(Aws::String&& value) { SetTransferId(std::move(value)); return *this;}
    inline ListFileTransferResultsRequest& WithTransferId(const char* value) { SetTransferId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there are more file details than returned in this call, use this value for
     * a subsequent call to <code>ListFileTransferResults</code> to retrieve them.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListFileTransferResultsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFileTransferResultsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFileTransferResultsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of files to return in a single page. Note that currently
     * you can specify a maximum of 10 file paths in a single <a
     * href="https://docs.aws.amazon.com/transfer/latest/APIReference/API_StartFileTransfer.html">StartFileTransfer</a>
     * operation. Thus, the maximum number of file transfer results that can be
     * returned in a single page is 10. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFileTransferResultsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_transferId;
    bool m_transferIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
