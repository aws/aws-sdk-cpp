/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 * <p>Details about delivering logs to Firehose.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ReplicatorFirehose">AWS
 * API Reference</a></p>
 */
class ReplicatorFirehose {
 public:
  AWS_KAFKA_API ReplicatorFirehose() = default;
  AWS_KAFKA_API ReplicatorFirehose(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API ReplicatorFirehose& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether log delivery to Firehose is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline ReplicatorFirehose& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Firehose delivery stream that is the destination for log delivery.</p>
   */
  inline const Aws::String& GetDeliveryStream() const { return m_deliveryStream; }
  inline bool DeliveryStreamHasBeenSet() const { return m_deliveryStreamHasBeenSet; }
  template <typename DeliveryStreamT = Aws::String>
  void SetDeliveryStream(DeliveryStreamT&& value) {
    m_deliveryStreamHasBeenSet = true;
    m_deliveryStream = std::forward<DeliveryStreamT>(value);
  }
  template <typename DeliveryStreamT = Aws::String>
  ReplicatorFirehose& WithDeliveryStream(DeliveryStreamT&& value) {
    SetDeliveryStream(std::forward<DeliveryStreamT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_deliveryStream;
  bool m_enabledHasBeenSet = false;
  bool m_deliveryStreamHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
