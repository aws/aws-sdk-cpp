/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ChannelSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {
class ListChannelsResult {
 public:
  AWS_KINESIS_API ListChannelsResult() = default;
  AWS_KINESIS_API ListChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESIS_API ListChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of channel summaries.</p>
   */
  inline const Aws::Vector<ChannelSummary>& GetChannelSummaries() const { return m_channelSummaries; }
  template <typename ChannelSummariesT = Aws::Vector<ChannelSummary>>
  void SetChannelSummaries(ChannelSummariesT&& value) {
    m_channelSummariesHasBeenSet = true;
    m_channelSummaries = std::forward<ChannelSummariesT>(value);
  }
  template <typename ChannelSummariesT = Aws::Vector<ChannelSummary>>
  ListChannelsResult& WithChannelSummaries(ChannelSummariesT&& value) {
    SetChannelSummaries(std::forward<ChannelSummariesT>(value));
    return *this;
  }
  template <typename ChannelSummariesT = ChannelSummary>
  ListChannelsResult& AddChannelSummaries(ChannelSummariesT&& value) {
    m_channelSummariesHasBeenSet = true;
    m_channelSummaries.emplace_back(std::forward<ChannelSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use in a subsequent call to retrieve the next page of
   * results. This value is <code>null</code> when there are no more results to
   * return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListChannelsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListChannelsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ChannelSummary> m_channelSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_channelSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
