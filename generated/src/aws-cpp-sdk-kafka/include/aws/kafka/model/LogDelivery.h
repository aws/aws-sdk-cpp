/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ReplicatorLogDelivery.h>

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
 * <p>Configuration for log delivery to customer destinations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/LogDelivery">AWS
 * API Reference</a></p>
 */
class LogDelivery {
 public:
  AWS_KAFKA_API LogDelivery() = default;
  AWS_KAFKA_API LogDelivery(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API LogDelivery& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for replicator log delivery.</p>
   */
  inline const ReplicatorLogDelivery& GetReplicatorLogDelivery() const { return m_replicatorLogDelivery; }
  inline bool ReplicatorLogDeliveryHasBeenSet() const { return m_replicatorLogDeliveryHasBeenSet; }
  template <typename ReplicatorLogDeliveryT = ReplicatorLogDelivery>
  void SetReplicatorLogDelivery(ReplicatorLogDeliveryT&& value) {
    m_replicatorLogDeliveryHasBeenSet = true;
    m_replicatorLogDelivery = std::forward<ReplicatorLogDeliveryT>(value);
  }
  template <typename ReplicatorLogDeliveryT = ReplicatorLogDelivery>
  LogDelivery& WithReplicatorLogDelivery(ReplicatorLogDeliveryT&& value) {
    SetReplicatorLogDelivery(std::forward<ReplicatorLogDeliveryT>(value));
    return *this;
  }
  ///@}
 private:
  ReplicatorLogDelivery m_replicatorLogDelivery;
  bool m_replicatorLogDeliveryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
