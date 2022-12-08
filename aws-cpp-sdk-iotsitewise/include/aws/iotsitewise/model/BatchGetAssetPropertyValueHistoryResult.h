/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistoryErrorEntry.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistorySuccessEntry.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistorySkippedEntry.h>
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
  class BatchGetAssetPropertyValueHistoryResult
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryResult();
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline const Aws::Vector<BatchGetAssetPropertyValueHistoryErrorEntry>& GetErrorEntries() const{ return m_errorEntries; }

    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline void SetErrorEntries(const Aws::Vector<BatchGetAssetPropertyValueHistoryErrorEntry>& value) { m_errorEntries = value; }

    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline void SetErrorEntries(Aws::Vector<BatchGetAssetPropertyValueHistoryErrorEntry>&& value) { m_errorEntries = std::move(value); }

    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& WithErrorEntries(const Aws::Vector<BatchGetAssetPropertyValueHistoryErrorEntry>& value) { SetErrorEntries(value); return *this;}

    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& WithErrorEntries(Aws::Vector<BatchGetAssetPropertyValueHistoryErrorEntry>&& value) { SetErrorEntries(std::move(value)); return *this;}

    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& AddErrorEntries(const BatchGetAssetPropertyValueHistoryErrorEntry& value) { m_errorEntries.push_back(value); return *this; }

    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& AddErrorEntries(BatchGetAssetPropertyValueHistoryErrorEntry&& value) { m_errorEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline const Aws::Vector<BatchGetAssetPropertyValueHistorySuccessEntry>& GetSuccessEntries() const{ return m_successEntries; }

    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline void SetSuccessEntries(const Aws::Vector<BatchGetAssetPropertyValueHistorySuccessEntry>& value) { m_successEntries = value; }

    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline void SetSuccessEntries(Aws::Vector<BatchGetAssetPropertyValueHistorySuccessEntry>&& value) { m_successEntries = std::move(value); }

    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& WithSuccessEntries(const Aws::Vector<BatchGetAssetPropertyValueHistorySuccessEntry>& value) { SetSuccessEntries(value); return *this;}

    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& WithSuccessEntries(Aws::Vector<BatchGetAssetPropertyValueHistorySuccessEntry>&& value) { SetSuccessEntries(std::move(value)); return *this;}

    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& AddSuccessEntries(const BatchGetAssetPropertyValueHistorySuccessEntry& value) { m_successEntries.push_back(value); return *this; }

    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& AddSuccessEntries(BatchGetAssetPropertyValueHistorySuccessEntry&& value) { m_successEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline const Aws::Vector<BatchGetAssetPropertyValueHistorySkippedEntry>& GetSkippedEntries() const{ return m_skippedEntries; }

    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline void SetSkippedEntries(const Aws::Vector<BatchGetAssetPropertyValueHistorySkippedEntry>& value) { m_skippedEntries = value; }

    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline void SetSkippedEntries(Aws::Vector<BatchGetAssetPropertyValueHistorySkippedEntry>&& value) { m_skippedEntries = std::move(value); }

    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& WithSkippedEntries(const Aws::Vector<BatchGetAssetPropertyValueHistorySkippedEntry>& value) { SetSkippedEntries(value); return *this;}

    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& WithSkippedEntries(Aws::Vector<BatchGetAssetPropertyValueHistorySkippedEntry>&& value) { SetSkippedEntries(std::move(value)); return *this;}

    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& AddSkippedEntries(const BatchGetAssetPropertyValueHistorySkippedEntry& value) { m_skippedEntries.push_back(value); return *this; }

    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& AddSkippedEntries(BatchGetAssetPropertyValueHistorySkippedEntry&& value) { m_skippedEntries.push_back(std::move(value)); return *this; }


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
    inline BatchGetAssetPropertyValueHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline BatchGetAssetPropertyValueHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BatchGetAssetPropertyValueHistoryErrorEntry> m_errorEntries;

    Aws::Vector<BatchGetAssetPropertyValueHistorySuccessEntry> m_successEntries;

    Aws::Vector<BatchGetAssetPropertyValueHistorySkippedEntry> m_skippedEntries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
