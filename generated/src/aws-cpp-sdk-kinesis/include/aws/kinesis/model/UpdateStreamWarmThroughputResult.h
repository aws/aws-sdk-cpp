/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/WarmThroughputObject.h>

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
class UpdateStreamWarmThroughputResult {
 public:
  AWS_KINESIS_API UpdateStreamWarmThroughputResult() = default;
  AWS_KINESIS_API UpdateStreamWarmThroughputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESIS_API UpdateStreamWarmThroughputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the stream that was updated.</p>
   */
  inline const Aws::String& GetStreamARN() const { return m_streamARN; }
  template <typename StreamARNT = Aws::String>
  void SetStreamARN(StreamARNT&& value) {
    m_streamARNHasBeenSet = true;
    m_streamARN = std::forward<StreamARNT>(value);
  }
  template <typename StreamARNT = Aws::String>
  UpdateStreamWarmThroughputResult& WithStreamARN(StreamARNT&& value) {
    SetStreamARN(std::forward<StreamARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the stream that was updated.</p>
   */
  inline const Aws::String& GetStreamName() const { return m_streamName; }
  template <typename StreamNameT = Aws::String>
  void SetStreamName(StreamNameT&& value) {
    m_streamNameHasBeenSet = true;
    m_streamName = std::forward<StreamNameT>(value);
  }
  template <typename StreamNameT = Aws::String>
  UpdateStreamWarmThroughputResult& WithStreamName(StreamNameT&& value) {
    SetStreamName(std::forward<StreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the updated warm throughput configuration for your data stream.</p>
   */
  inline const WarmThroughputObject& GetWarmThroughput() const { return m_warmThroughput; }
  template <typename WarmThroughputT = WarmThroughputObject>
  void SetWarmThroughput(WarmThroughputT&& value) {
    m_warmThroughputHasBeenSet = true;
    m_warmThroughput = std::forward<WarmThroughputT>(value);
  }
  template <typename WarmThroughputT = WarmThroughputObject>
  UpdateStreamWarmThroughputResult& WithWarmThroughput(WarmThroughputT&& value) {
    SetWarmThroughput(std::forward<WarmThroughputT>(value));
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
  UpdateStreamWarmThroughputResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_streamARN;

  Aws::String m_streamName;

  WarmThroughputObject m_warmThroughput;

  Aws::String m_requestId;
  bool m_streamARNHasBeenSet = false;
  bool m_streamNameHasBeenSet = false;
  bool m_warmThroughputHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
