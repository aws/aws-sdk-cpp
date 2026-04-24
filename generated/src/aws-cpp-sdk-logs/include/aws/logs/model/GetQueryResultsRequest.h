/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class GetQueryResultsRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API GetQueryResultsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetQueryResults"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID number of the query.</p>
   */
  inline const Aws::String& GetQueryId() const { return m_queryId; }
  inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
  template <typename QueryIdT = Aws::String>
  void SetQueryId(QueryIdT&& value) {
    m_queryIdHasBeenSet = true;
    m_queryId = std::forward<QueryIdT>(value);
  }
  template <typename QueryIdT = Aws::String>
  GetQueryResultsRequest& WithQueryId(QueryIdT&& value) {
    SetQueryId(std::forward<QueryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of items to return. The token expires after 1
   * hour.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetQueryResultsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of log events to return in the response. The maximum is
   * 10,000 log events.</p>
   */
  inline int GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  inline void SetMaxItems(int value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = value;
  }
  inline GetQueryResultsRequest& WithMaxItems(int value) {
    SetMaxItems(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_queryId;

  Aws::String m_nextToken;

  int m_maxItems{0};
  bool m_queryIdHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxItemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
