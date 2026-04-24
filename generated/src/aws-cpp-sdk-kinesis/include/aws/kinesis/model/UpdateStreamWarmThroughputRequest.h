/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class UpdateStreamWarmThroughputRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API UpdateStreamWarmThroughputRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateStreamWarmThroughput"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The ARN of the stream to be updated.</p>
   */
  inline const Aws::String& GetStreamARN() const { return m_streamARN; }
  inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
  template <typename StreamARNT = Aws::String>
  void SetStreamARN(StreamARNT&& value) {
    m_streamARNHasBeenSet = true;
    m_streamARN = std::forward<StreamARNT>(value);
  }
  template <typename StreamARNT = Aws::String>
  UpdateStreamWarmThroughputRequest& WithStreamARN(StreamARNT&& value) {
    SetStreamARN(std::forward<StreamARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the stream to be updated.</p>
   */
  inline const Aws::String& GetStreamName() const { return m_streamName; }
  inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
  template <typename StreamNameT = Aws::String>
  void SetStreamName(StreamNameT&& value) {
    m_streamNameHasBeenSet = true;
    m_streamName = std::forward<StreamNameT>(value);
  }
  template <typename StreamNameT = Aws::String>
  UpdateStreamWarmThroughputRequest& WithStreamName(StreamNameT&& value) {
    SetStreamName(std::forward<StreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Not Implemented. Reserved for future use.</p>
   */
  inline const Aws::String& GetStreamId() const { return m_streamId; }
  inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
  template <typename StreamIdT = Aws::String>
  void SetStreamId(StreamIdT&& value) {
    m_streamIdHasBeenSet = true;
    m_streamId = std::forward<StreamIdT>(value);
  }
  template <typename StreamIdT = Aws::String>
  UpdateStreamWarmThroughputRequest& WithStreamId(StreamIdT&& value) {
    SetStreamId(std::forward<StreamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target warm throughput in MB/s that the stream should be scaled to
   * handle. This represents the throughput capacity that will be immediately
   * available for write operations.</p>
   */
  inline int GetWarmThroughputMiBps() const { return m_warmThroughputMiBps; }
  inline bool WarmThroughputMiBpsHasBeenSet() const { return m_warmThroughputMiBpsHasBeenSet; }
  inline void SetWarmThroughputMiBps(int value) {
    m_warmThroughputMiBpsHasBeenSet = true;
    m_warmThroughputMiBps = value;
  }
  inline UpdateStreamWarmThroughputRequest& WithWarmThroughputMiBps(int value) {
    SetWarmThroughputMiBps(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_streamARN;

  Aws::String m_streamName;

  Aws::String m_streamId;

  int m_warmThroughputMiBps{0};
  bool m_streamARNHasBeenSet = false;
  bool m_streamNameHasBeenSet = false;
  bool m_streamIdHasBeenSet = false;
  bool m_warmThroughputMiBpsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
