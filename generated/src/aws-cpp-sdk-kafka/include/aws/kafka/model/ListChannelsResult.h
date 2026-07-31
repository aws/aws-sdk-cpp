/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ChannelInfo.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {
/**
 * <p>Returns the list of channels in the cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListChannelsResponse">AWS
 * API Reference</a></p>
 */
class ListChannelsResult {
 public:
  AWS_KAFKA_API ListChannelsResult() = default;
  AWS_KAFKA_API ListChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API ListChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of channels in the cluster.</p>
   */
  inline const Aws::Vector<ChannelInfo>& GetChannels() const { return m_channels; }
  template <typename ChannelsT = Aws::Vector<ChannelInfo>>
  void SetChannels(ChannelsT&& value) {
    m_channelsHasBeenSet = true;
    m_channels = std::forward<ChannelsT>(value);
  }
  template <typename ChannelsT = Aws::Vector<ChannelInfo>>
  ListChannelsResult& WithChannels(ChannelsT&& value) {
    SetChannels(std::forward<ChannelsT>(value));
    return *this;
  }
  template <typename ChannelsT = ChannelInfo>
  ListChannelsResult& AddChannels(ChannelsT&& value) {
    m_channelsHasBeenSet = true;
    m_channels.emplace_back(std::forward<ChannelsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response from ListChannels is truncated, this token is included. Send
   * it as the nextToken parameter on a subsequent ListChannels call to retrieve the
   * next page.</p>
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
  Aws::Vector<ChannelInfo> m_channels;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_channelsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
