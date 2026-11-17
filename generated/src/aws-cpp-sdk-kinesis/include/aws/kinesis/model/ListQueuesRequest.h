/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/QueueStreamFilter.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class ListQueuesRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API ListQueuesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListQueues"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The maximum number of queue summaries to return in one response. The response
   * might contain fewer summaries than this value, and might contain a
   * <code>NextToken</code> even when it contains fewer.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListQueuesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>NextToken</code> returned by a previous <code>ListQueues</code>
   * request. Use it to retrieve the next page of queue summaries.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListQueuesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lists only the queues created on the specified data stream.</p>
   */
  inline const Aws::Vector<QueueStreamFilter>& GetStreamFilter() const { return m_streamFilter; }
  inline bool StreamFilterHasBeenSet() const { return m_streamFilterHasBeenSet; }
  template <typename StreamFilterT = Aws::Vector<QueueStreamFilter>>
  void SetStreamFilter(StreamFilterT&& value) {
    m_streamFilterHasBeenSet = true;
    m_streamFilter = std::forward<StreamFilterT>(value);
  }
  template <typename StreamFilterT = Aws::Vector<QueueStreamFilter>>
  ListQueuesRequest& WithStreamFilter(StreamFilterT&& value) {
    SetStreamFilter(std::forward<StreamFilterT>(value));
    return *this;
  }
  template <typename StreamFilterT = QueueStreamFilter>
  ListQueuesRequest& AddStreamFilter(StreamFilterT&& value) {
    m_streamFilterHasBeenSet = true;
    m_streamFilter.emplace_back(std::forward<StreamFilterT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::Vector<QueueStreamFilter> m_streamFilter;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_streamFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
