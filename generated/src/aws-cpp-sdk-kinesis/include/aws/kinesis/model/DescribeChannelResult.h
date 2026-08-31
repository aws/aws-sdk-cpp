/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ChannelDescription.h>

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
class DescribeChannelResult {
 public:
  AWS_KINESIS_API DescribeChannelResult() = default;
  AWS_KINESIS_API DescribeChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESIS_API DescribeChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The configuration and current status of the channel.</p>
   */
  inline const ChannelDescription& GetChannelDescription() const { return m_channelDescription; }
  template <typename ChannelDescriptionT = ChannelDescription>
  void SetChannelDescription(ChannelDescriptionT&& value) {
    m_channelDescriptionHasBeenSet = true;
    m_channelDescription = std::forward<ChannelDescriptionT>(value);
  }
  template <typename ChannelDescriptionT = ChannelDescription>
  DescribeChannelResult& WithChannelDescription(ChannelDescriptionT&& value) {
    SetChannelDescription(std::forward<ChannelDescriptionT>(value));
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
  DescribeChannelResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ChannelDescription m_channelDescription;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_channelDescriptionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
