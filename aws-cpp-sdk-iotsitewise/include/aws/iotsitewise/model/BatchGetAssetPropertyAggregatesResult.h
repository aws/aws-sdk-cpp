/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesErrorEntry.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesSuccessEntry.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesSkippedEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class BatchGetAssetPropertyAggregatesResult
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesResult();
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline const Aws::Vector<BatchGetAssetPropertyAggregatesErrorEntry>& GetErrorEntries() const{ return m_errorEntries; }

    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline void SetErrorEntries(const Aws::Vector<BatchGetAssetPropertyAggregatesErrorEntry>& value) { m_errorEntries = value; }

    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline void SetErrorEntries(Aws::Vector<BatchGetAssetPropertyAggregatesErrorEntry>&& value) { m_errorEntries = std::move(value); }

    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& WithErrorEntries(const Aws::Vector<BatchGetAssetPropertyAggregatesErrorEntry>& value) { SetErrorEntries(value); return *this;}

    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& WithErrorEntries(Aws::Vector<BatchGetAssetPropertyAggregatesErrorEntry>&& value) { SetErrorEntries(std::move(value)); return *this;}

    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& AddErrorEntries(const BatchGetAssetPropertyAggregatesErrorEntry& value) { m_errorEntries.push_back(value); return *this; }

    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& AddErrorEntries(BatchGetAssetPropertyAggregatesErrorEntry&& value) { m_errorEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline const Aws::Vector<BatchGetAssetPropertyAggregatesSuccessEntry>& GetSuccessEntries() const{ return m_successEntries; }

    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline void SetSuccessEntries(const Aws::Vector<BatchGetAssetPropertyAggregatesSuccessEntry>& value) { m_successEntries = value; }

    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline void SetSuccessEntries(Aws::Vector<BatchGetAssetPropertyAggregatesSuccessEntry>&& value) { m_successEntries = std::move(value); }

    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& WithSuccessEntries(const Aws::Vector<BatchGetAssetPropertyAggregatesSuccessEntry>& value) { SetSuccessEntries(value); return *this;}

    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& WithSuccessEntries(Aws::Vector<BatchGetAssetPropertyAggregatesSuccessEntry>&& value) { SetSuccessEntries(std::move(value)); return *this;}

    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& AddSuccessEntries(const BatchGetAssetPropertyAggregatesSuccessEntry& value) { m_successEntries.push_back(value); return *this; }

    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& AddSuccessEntries(BatchGetAssetPropertyAggregatesSuccessEntry&& value) { m_successEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline const Aws::Vector<BatchGetAssetPropertyAggregatesSkippedEntry>& GetSkippedEntries() const{ return m_skippedEntries; }

    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline void SetSkippedEntries(const Aws::Vector<BatchGetAssetPropertyAggregatesSkippedEntry>& value) { m_skippedEntries = value; }

    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline void SetSkippedEntries(Aws::Vector<BatchGetAssetPropertyAggregatesSkippedEntry>&& value) { m_skippedEntries = std::move(value); }

    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& WithSkippedEntries(const Aws::Vector<BatchGetAssetPropertyAggregatesSkippedEntry>& value) { SetSkippedEntries(value); return *this;}

    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& WithSkippedEntries(Aws::Vector<BatchGetAssetPropertyAggregatesSkippedEntry>&& value) { SetSkippedEntries(std::move(value)); return *this;}

    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& AddSkippedEntries(const BatchGetAssetPropertyAggregatesSkippedEntry& value) { m_skippedEntries.push_back(value); return *this; }

    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& AddSkippedEntries(BatchGetAssetPropertyAggregatesSkippedEntry&& value) { m_skippedEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline BatchGetAssetPropertyAggregatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BatchGetAssetPropertyAggregatesErrorEntry> m_errorEntries;

    Aws::Vector<BatchGetAssetPropertyAggregatesSuccessEntry> m_successEntries;

    Aws::Vector<BatchGetAssetPropertyAggregatesSkippedEntry> m_skippedEntries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
