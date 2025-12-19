/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {

/**
 * <p>Configuration settings for batching.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/BatchConfig">AWS API
 * Reference</a></p>
 */
class BatchConfig {
 public:
  AWS_IOT_API BatchConfig() = default;
  AWS_IOT_API BatchConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API BatchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum amount of time (in milliseconds) that an outgoing call waits for
   * other calls with which it batches messages of the same type. The higher the
   * setting, the longer the latency of the batched HTTP Action will be.</p>
   */
  inline int GetMaxBatchOpenMs() const { return m_maxBatchOpenMs; }
  inline bool MaxBatchOpenMsHasBeenSet() const { return m_maxBatchOpenMsHasBeenSet; }
  inline void SetMaxBatchOpenMs(int value) {
    m_maxBatchOpenMsHasBeenSet = true;
    m_maxBatchOpenMs = value;
  }
  inline BatchConfig& WithMaxBatchOpenMs(int value) {
    SetMaxBatchOpenMs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of messages that are batched together in a single action
   * execution.</p>
   */
  inline int GetMaxBatchSize() const { return m_maxBatchSize; }
  inline bool MaxBatchSizeHasBeenSet() const { return m_maxBatchSizeHasBeenSet; }
  inline void SetMaxBatchSize(int value) {
    m_maxBatchSizeHasBeenSet = true;
    m_maxBatchSize = value;
  }
  inline BatchConfig& WithMaxBatchSize(int value) {
    SetMaxBatchSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum size of a message batch, in bytes.</p>
   */
  inline int GetMaxBatchSizeBytes() const { return m_maxBatchSizeBytes; }
  inline bool MaxBatchSizeBytesHasBeenSet() const { return m_maxBatchSizeBytesHasBeenSet; }
  inline void SetMaxBatchSizeBytes(int value) {
    m_maxBatchSizeBytesHasBeenSet = true;
    m_maxBatchSizeBytes = value;
  }
  inline BatchConfig& WithMaxBatchSizeBytes(int value) {
    SetMaxBatchSizeBytes(value);
    return *this;
  }
  ///@}
 private:
  int m_maxBatchOpenMs{0};

  int m_maxBatchSize{0};

  int m_maxBatchSizeBytes{0};
  bool m_maxBatchOpenMsHasBeenSet = false;
  bool m_maxBatchSizeHasBeenSet = false;
  bool m_maxBatchSizeBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
