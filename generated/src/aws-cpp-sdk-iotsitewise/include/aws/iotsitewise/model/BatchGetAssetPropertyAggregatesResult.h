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
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesResult() = default;
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the errors (if any) associated with the batch request. Each error
     * entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline const Aws::Vector<BatchGetAssetPropertyAggregatesErrorEntry>& GetErrorEntries() const { return m_errorEntries; }
    template<typename ErrorEntriesT = Aws::Vector<BatchGetAssetPropertyAggregatesErrorEntry>>
    void SetErrorEntries(ErrorEntriesT&& value) { m_errorEntriesHasBeenSet = true; m_errorEntries = std::forward<ErrorEntriesT>(value); }
    template<typename ErrorEntriesT = Aws::Vector<BatchGetAssetPropertyAggregatesErrorEntry>>
    BatchGetAssetPropertyAggregatesResult& WithErrorEntries(ErrorEntriesT&& value) { SetErrorEntries(std::forward<ErrorEntriesT>(value)); return *this;}
    template<typename ErrorEntriesT = BatchGetAssetPropertyAggregatesErrorEntry>
    BatchGetAssetPropertyAggregatesResult& AddErrorEntries(ErrorEntriesT&& value) { m_errorEntriesHasBeenSet = true; m_errorEntries.emplace_back(std::forward<ErrorEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of entries that were processed successfully by this batch request.
     * Each success entry contains the <code>entryId</code> of the entry that succeeded
     * and the latest query result.</p>
     */
    inline const Aws::Vector<BatchGetAssetPropertyAggregatesSuccessEntry>& GetSuccessEntries() const { return m_successEntries; }
    template<typename SuccessEntriesT = Aws::Vector<BatchGetAssetPropertyAggregatesSuccessEntry>>
    void SetSuccessEntries(SuccessEntriesT&& value) { m_successEntriesHasBeenSet = true; m_successEntries = std::forward<SuccessEntriesT>(value); }
    template<typename SuccessEntriesT = Aws::Vector<BatchGetAssetPropertyAggregatesSuccessEntry>>
    BatchGetAssetPropertyAggregatesResult& WithSuccessEntries(SuccessEntriesT&& value) { SetSuccessEntries(std::forward<SuccessEntriesT>(value)); return *this;}
    template<typename SuccessEntriesT = BatchGetAssetPropertyAggregatesSuccessEntry>
    BatchGetAssetPropertyAggregatesResult& AddSuccessEntries(SuccessEntriesT&& value) { m_successEntriesHasBeenSet = true; m_successEntries.emplace_back(std::forward<SuccessEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of entries that were not processed by this batch request. because
     * these entries had been completely processed by previous paginated requests. Each
     * skipped entry contains the <code>entryId</code> of the entry that skipped.</p>
     */
    inline const Aws::Vector<BatchGetAssetPropertyAggregatesSkippedEntry>& GetSkippedEntries() const { return m_skippedEntries; }
    template<typename SkippedEntriesT = Aws::Vector<BatchGetAssetPropertyAggregatesSkippedEntry>>
    void SetSkippedEntries(SkippedEntriesT&& value) { m_skippedEntriesHasBeenSet = true; m_skippedEntries = std::forward<SkippedEntriesT>(value); }
    template<typename SkippedEntriesT = Aws::Vector<BatchGetAssetPropertyAggregatesSkippedEntry>>
    BatchGetAssetPropertyAggregatesResult& WithSkippedEntries(SkippedEntriesT&& value) { SetSkippedEntries(std::forward<SkippedEntriesT>(value)); return *this;}
    template<typename SkippedEntriesT = BatchGetAssetPropertyAggregatesSkippedEntry>
    BatchGetAssetPropertyAggregatesResult& AddSkippedEntries(SkippedEntriesT&& value) { m_skippedEntriesHasBeenSet = true; m_skippedEntries.emplace_back(std::forward<SkippedEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    BatchGetAssetPropertyAggregatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetAssetPropertyAggregatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetAssetPropertyAggregatesErrorEntry> m_errorEntries;
    bool m_errorEntriesHasBeenSet = false;

    Aws::Vector<BatchGetAssetPropertyAggregatesSuccessEntry> m_successEntries;
    bool m_successEntriesHasBeenSet = false;

    Aws::Vector<BatchGetAssetPropertyAggregatesSkippedEntry> m_skippedEntries;
    bool m_skippedEntriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
