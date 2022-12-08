/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QLDB
{
namespace Model
{

  /**
   */
  class ListJournalS3ExportsForLedgerRequest : public QLDBRequest
  {
  public:
    AWS_QLDB_API ListJournalS3ExportsForLedgerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJournalS3ExportsForLedger"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;

    AWS_QLDB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline ListJournalS3ExportsForLedgerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline ListJournalS3ExportsForLedgerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline ListJournalS3ExportsForLedgerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single
     * <code>ListJournalS3ExportsForLedger</code> request. (The actual number of
     * results returned might be fewer.)</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single
     * <code>ListJournalS3ExportsForLedger</code> request. (The actual number of
     * results returned might be fewer.)</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single
     * <code>ListJournalS3ExportsForLedger</code> request. (The actual number of
     * results returned might be fewer.)</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single
     * <code>ListJournalS3ExportsForLedger</code> request. (The actual number of
     * results returned might be fewer.)</p>
     */
    inline ListJournalS3ExportsForLedgerRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A pagination token, indicating that you want to retrieve the next page of
     * results. If you received a value for <code>NextToken</code> in the response from
     * a previous <code>ListJournalS3ExportsForLedger</code> call, then you should use
     * that value as input here.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token, indicating that you want to retrieve the next page of
     * results. If you received a value for <code>NextToken</code> in the response from
     * a previous <code>ListJournalS3ExportsForLedger</code> call, then you should use
     * that value as input here.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token, indicating that you want to retrieve the next page of
     * results. If you received a value for <code>NextToken</code> in the response from
     * a previous <code>ListJournalS3ExportsForLedger</code> call, then you should use
     * that value as input here.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token, indicating that you want to retrieve the next page of
     * results. If you received a value for <code>NextToken</code> in the response from
     * a previous <code>ListJournalS3ExportsForLedger</code> call, then you should use
     * that value as input here.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token, indicating that you want to retrieve the next page of
     * results. If you received a value for <code>NextToken</code> in the response from
     * a previous <code>ListJournalS3ExportsForLedger</code> call, then you should use
     * that value as input here.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token, indicating that you want to retrieve the next page of
     * results. If you received a value for <code>NextToken</code> in the response from
     * a previous <code>ListJournalS3ExportsForLedger</code> call, then you should use
     * that value as input here.</p>
     */
    inline ListJournalS3ExportsForLedgerRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token, indicating that you want to retrieve the next page of
     * results. If you received a value for <code>NextToken</code> in the response from
     * a previous <code>ListJournalS3ExportsForLedger</code> call, then you should use
     * that value as input here.</p>
     */
    inline ListJournalS3ExportsForLedgerRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token, indicating that you want to retrieve the next page of
     * results. If you received a value for <code>NextToken</code> in the response from
     * a previous <code>ListJournalS3ExportsForLedger</code> call, then you should use
     * that value as input here.</p>
     */
    inline ListJournalS3ExportsForLedgerRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
