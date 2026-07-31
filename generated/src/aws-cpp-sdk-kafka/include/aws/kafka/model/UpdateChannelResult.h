/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

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
 * <p>Returns the channel ARN and the cluster-operation ARN that tracks the
 * asynchronous update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateChannelResponse">AWS
 * API Reference</a></p>
 */
class UpdateChannelResult {
 public:
  AWS_KAFKA_API UpdateChannelResult() = default;
  AWS_KAFKA_API UpdateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API UpdateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that uniquely identifies the channel.</p>
   */
  inline const Aws::String& GetChannelArn() const { return m_channelArn; }
  template <typename ChannelArnT = Aws::String>
  void SetChannelArn(ChannelArnT&& value) {
    m_channelArnHasBeenSet = true;
    m_channelArn = std::forward<ChannelArnT>(value);
  }
  template <typename ChannelArnT = Aws::String>
  UpdateChannelResult& WithChannelArn(ChannelArnT&& value) {
    SetChannelArn(std::forward<ChannelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The Amazon Resource Name (ARN) of the cluster operation.</p>

   *
   */
  inline const Aws::String& GetClusterOperationArn() const { return m_clusterOperationArn; }
  template <typename ClusterOperationArnT = Aws::String>
  void SetClusterOperationArn(ClusterOperationArnT&& value) {
    m_clusterOperationArnHasBeenSet = true;
    m_clusterOperationArn = std::forward<ClusterOperationArnT>(value);
  }
  template <typename ClusterOperationArnT = Aws::String>
  UpdateChannelResult& WithClusterOperationArn(ClusterOperationArnT&& value) {
    SetClusterOperationArn(std::forward<ClusterOperationArnT>(value));
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
  UpdateChannelResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_channelArn;

  Aws::String m_clusterOperationArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_channelArnHasBeenSet = false;
  bool m_clusterOperationArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
