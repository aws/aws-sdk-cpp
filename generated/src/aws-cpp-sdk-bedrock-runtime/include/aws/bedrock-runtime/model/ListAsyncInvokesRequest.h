/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/BedrockRuntimeRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-runtime/model/AsyncInvokeStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/SortAsyncInvocationBy.h>
#include <aws/bedrock-runtime/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BedrockRuntime
{
namespace Model
{

  /**
   */
  class ListAsyncInvokesRequest : public BedrockRuntimeRequest
  {
  public:
    AWS_BEDROCKRUNTIME_API ListAsyncInvokesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAsyncInvokes"; }

    AWS_BEDROCKRUNTIME_API Aws::String SerializePayload() const override;

    AWS_BEDROCKRUNTIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Include invocations submitted after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeAfter() const { return m_submitTimeAfter; }
    inline bool SubmitTimeAfterHasBeenSet() const { return m_submitTimeAfterHasBeenSet; }
    template<typename SubmitTimeAfterT = Aws::Utils::DateTime>
    void SetSubmitTimeAfter(SubmitTimeAfterT&& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = std::forward<SubmitTimeAfterT>(value); }
    template<typename SubmitTimeAfterT = Aws::Utils::DateTime>
    ListAsyncInvokesRequest& WithSubmitTimeAfter(SubmitTimeAfterT&& value) { SetSubmitTimeAfter(std::forward<SubmitTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include invocations submitted before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeBefore() const { return m_submitTimeBefore; }
    inline bool SubmitTimeBeforeHasBeenSet() const { return m_submitTimeBeforeHasBeenSet; }
    template<typename SubmitTimeBeforeT = Aws::Utils::DateTime>
    void SetSubmitTimeBefore(SubmitTimeBeforeT&& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = std::forward<SubmitTimeBeforeT>(value); }
    template<typename SubmitTimeBeforeT = Aws::Utils::DateTime>
    ListAsyncInvokesRequest& WithSubmitTimeBefore(SubmitTimeBeforeT&& value) { SetSubmitTimeBefore(std::forward<SubmitTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter invocations by status.</p>
     */
    inline AsyncInvokeStatus GetStatusEquals() const { return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(AsyncInvokeStatus value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline ListAsyncInvokesRequest& WithStatusEquals(AsyncInvokeStatus value) { SetStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of invocations to return in one page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAsyncInvokesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAsyncInvokesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How to sort the response.</p>
     */
    inline SortAsyncInvocationBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(SortAsyncInvocationBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListAsyncInvokesRequest& WithSortBy(SortAsyncInvocationBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sorting order for the response.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListAsyncInvokesRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_submitTimeAfter{};
    bool m_submitTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeBefore{};
    bool m_submitTimeBeforeHasBeenSet = false;

    AsyncInvokeStatus m_statusEquals{AsyncInvokeStatus::NOT_SET};
    bool m_statusEqualsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortAsyncInvocationBy m_sortBy{SortAsyncInvocationBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
