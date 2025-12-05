/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/StreamStorageConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace KinesisVideo {
namespace Model {
class DescribeStreamStorageConfigurationResult {
 public:
  AWS_KINESISVIDEO_API DescribeStreamStorageConfigurationResult() = default;
  AWS_KINESISVIDEO_API DescribeStreamStorageConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESISVIDEO_API DescribeStreamStorageConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the stream.</p>
   */
  inline const Aws::String& GetStreamName() const { return m_streamName; }
  template <typename StreamNameT = Aws::String>
  void SetStreamName(StreamNameT&& value) {
    m_streamNameHasBeenSet = true;
    m_streamName = std::forward<StreamNameT>(value);
  }
  template <typename StreamNameT = Aws::String>
  DescribeStreamStorageConfigurationResult& WithStreamName(StreamNameT&& value) {
    SetStreamName(std::forward<StreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the stream.</p>
   */
  inline const Aws::String& GetStreamARN() const { return m_streamARN; }
  template <typename StreamARNT = Aws::String>
  void SetStreamARN(StreamARNT&& value) {
    m_streamARNHasBeenSet = true;
    m_streamARN = std::forward<StreamARNT>(value);
  }
  template <typename StreamARNT = Aws::String>
  DescribeStreamStorageConfigurationResult& WithStreamARN(StreamARNT&& value) {
    SetStreamARN(std::forward<StreamARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current storage configuration for the stream, including the default
   * storage tier and other storage-related settings.</p>
   */
  inline const StreamStorageConfiguration& GetStreamStorageConfiguration() const { return m_streamStorageConfiguration; }
  template <typename StreamStorageConfigurationT = StreamStorageConfiguration>
  void SetStreamStorageConfiguration(StreamStorageConfigurationT&& value) {
    m_streamStorageConfigurationHasBeenSet = true;
    m_streamStorageConfiguration = std::forward<StreamStorageConfigurationT>(value);
  }
  template <typename StreamStorageConfigurationT = StreamStorageConfiguration>
  DescribeStreamStorageConfigurationResult& WithStreamStorageConfiguration(StreamStorageConfigurationT&& value) {
    SetStreamStorageConfiguration(std::forward<StreamStorageConfigurationT>(value));
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
  DescribeStreamStorageConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_streamName;

  Aws::String m_streamARN;

  StreamStorageConfiguration m_streamStorageConfiguration;

  Aws::String m_requestId;
  bool m_streamNameHasBeenSet = false;
  bool m_streamARNHasBeenSet = false;
  bool m_streamStorageConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisVideo
}  // namespace Aws
