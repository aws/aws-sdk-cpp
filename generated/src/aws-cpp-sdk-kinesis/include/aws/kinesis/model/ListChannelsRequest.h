/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/StreamFilter.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class ListChannelsRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API ListChannelsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListChannels"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>Filters the results to channels associated with the specified streams.</p>
   */
  inline const Aws::Vector<StreamFilter>& GetStreamFilter() const { return m_streamFilter; }
  inline bool StreamFilterHasBeenSet() const { return m_streamFilterHasBeenSet; }
  template <typename StreamFilterT = Aws::Vector<StreamFilter>>
  void SetStreamFilter(StreamFilterT&& value) {
    m_streamFilterHasBeenSet = true;
    m_streamFilter = std::forward<StreamFilterT>(value);
  }
  template <typename StreamFilterT = Aws::Vector<StreamFilter>>
  ListChannelsRequest& WithStreamFilter(StreamFilterT&& value) {
    SetStreamFilter(std::forward<StreamFilterT>(value));
    return *this;
  }
  template <typename StreamFilterT = StreamFilter>
  ListChannelsRequest& AddStreamFilter(StreamFilterT&& value) {
    m_streamFilterHasBeenSet = true;
    m_streamFilter.emplace_back(std::forward<StreamFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of channels to return in a single call. The default value
   * is 100. If you specify a value greater than 100, at most 100 results are
   * returned.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListChannelsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token returned by a previous call. Specify this token to
   * retrieve the next page of results. This value is <code>null</code> when there
   * are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListChannelsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<StreamFilter> m_streamFilter;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_streamFilterHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
