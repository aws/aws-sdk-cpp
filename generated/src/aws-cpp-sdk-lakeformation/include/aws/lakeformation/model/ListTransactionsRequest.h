﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/TransactionStatusFilter.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class ListTransactionsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API ListTransactionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTransactions"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The catalog for which to list transactions. Defaults to the account ID of the
     * caller.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline ListTransactionsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline ListTransactionsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline ListTransactionsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A filter indicating the status of transactions to return. Options are ALL |
     * COMPLETED | COMMITTED | ABORTED | ACTIVE. The default is <code>ALL</code>.</p>
     */
    inline const TransactionStatusFilter& GetStatusFilter() const{ return m_statusFilter; }
    inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }
    inline void SetStatusFilter(const TransactionStatusFilter& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }
    inline void SetStatusFilter(TransactionStatusFilter&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = std::move(value); }
    inline ListTransactionsRequest& WithStatusFilter(const TransactionStatusFilter& value) { SetStatusFilter(value); return *this;}
    inline ListTransactionsRequest& WithStatusFilter(TransactionStatusFilter&& value) { SetStatusFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of transactions to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTransactionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token if this is not the first call to retrieve
     * transactions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTransactionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTransactionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTransactionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    TransactionStatusFilter m_statusFilter;
    bool m_statusFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
