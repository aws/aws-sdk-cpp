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
 * <p>The batching configuration of an InfluxDB rule action. IoT closes a batch and
 * writes it to InfluxDB when the first of the configured limits is
 * reached.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/InfluxDBBatchConfig">AWS
 * API Reference</a></p>
 */
class InfluxDBBatchConfig {
 public:
  AWS_IOT_API InfluxDBBatchConfig() = default;
  AWS_IOT_API InfluxDBBatchConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API InfluxDBBatchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of data points to collect in a batch.</p> <p>If you don't
   * specify a value, this limit doesn't apply. IoT then closes each batch when
   * another configured limit is reached.</p>
   */
  inline int GetMaxBatchSize() const { return m_maxBatchSize; }
  inline bool MaxBatchSizeHasBeenSet() const { return m_maxBatchSizeHasBeenSet; }
  inline void SetMaxBatchSize(int value) {
    m_maxBatchSizeHasBeenSet = true;
    m_maxBatchSize = value;
  }
  inline InfluxDBBatchConfig& WithMaxBatchSize(int value) {
    SetMaxBatchSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum length of time, in milliseconds, to keep a batch open before
   * writing it to InfluxDB.</p> <p>If you don't specify a value, this limit doesn't
   * apply. IoT then closes each batch when another configured limit is reached.</p>
   */
  inline int GetMaxBatchOpenMs() const { return m_maxBatchOpenMs; }
  inline bool MaxBatchOpenMsHasBeenSet() const { return m_maxBatchOpenMsHasBeenSet; }
  inline void SetMaxBatchOpenMs(int value) {
    m_maxBatchOpenMsHasBeenSet = true;
    m_maxBatchOpenMs = value;
  }
  inline InfluxDBBatchConfig& WithMaxBatchOpenMs(int value) {
    SetMaxBatchOpenMs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum size of a batch, in bytes, before IoT writes it to InfluxDB.</p>
   * <p>If you don't specify a value, this limit doesn't apply. IoT then closes each
   * batch when another configured limit is reached.</p>
   */
  inline int GetMaxBatchSizeBytes() const { return m_maxBatchSizeBytes; }
  inline bool MaxBatchSizeBytesHasBeenSet() const { return m_maxBatchSizeBytesHasBeenSet; }
  inline void SetMaxBatchSizeBytes(int value) {
    m_maxBatchSizeBytesHasBeenSet = true;
    m_maxBatchSizeBytes = value;
  }
  inline InfluxDBBatchConfig& WithMaxBatchSizeBytes(int value) {
    SetMaxBatchSizeBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to collect data points from different topics into the same
   * batch.</p> <p>If omitted or <code>false</code>, IoT batches data points for each
   * topic separately.</p>
   */
  inline bool GetBatchAcrossTopics() const { return m_batchAcrossTopics; }
  inline bool BatchAcrossTopicsHasBeenSet() const { return m_batchAcrossTopicsHasBeenSet; }
  inline void SetBatchAcrossTopics(bool value) {
    m_batchAcrossTopicsHasBeenSet = true;
    m_batchAcrossTopics = value;
  }
  inline InfluxDBBatchConfig& WithBatchAcrossTopics(bool value) {
    SetBatchAcrossTopics(value);
    return *this;
  }
  ///@}
 private:
  int m_maxBatchSize{0};

  int m_maxBatchOpenMs{0};

  int m_maxBatchSizeBytes{0};

  bool m_batchAcrossTopics{false};
  bool m_maxBatchSizeHasBeenSet = false;
  bool m_maxBatchOpenMsHasBeenSet = false;
  bool m_maxBatchSizeBytesHasBeenSet = false;
  bool m_batchAcrossTopicsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
