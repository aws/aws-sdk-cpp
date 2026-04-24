/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/RebalancingStatus.h>

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
 *
          <p>Specifies whether or not intelligent rebalancing is turned on
 * for a newly created MSK Provisioned cluster with Express brokers. Intelligent
 * rebalancing performs automatic partition balancing operations when you scale
 * your clusters up or down. By default, intelligent rebalancing is ACTIVE for all
 * new Express-based clusters.</p>
       <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/Rebalancing">AWS
 * API Reference</a></p>
 */
class Rebalancing {
 public:
  AWS_KAFKA_API Rebalancing() = default;
  AWS_KAFKA_API Rebalancing(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Rebalancing& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   *
          <p>Intelligent rebalancing status. The default intelligent
   * rebalancing status is ACTIVE for all new Express-based clusters.</p>

   */
  inline RebalancingStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RebalancingStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Rebalancing& WithStatus(RebalancingStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  RebalancingStatus m_status{RebalancingStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
