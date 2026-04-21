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
 * <p>Details of an Apache Kafka Cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ApacheKafkaCluster">AWS
 * API Reference</a></p>
 */
class ApacheKafkaCluster {
 public:
  AWS_KAFKA_API ApacheKafkaCluster() = default;
  AWS_KAFKA_API ApacheKafkaCluster(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API ApacheKafkaCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Apache Kafka cluster.</p>
   */
  inline const Aws::String& GetApacheKafkaClusterId() const { return m_apacheKafkaClusterId; }
  inline bool ApacheKafkaClusterIdHasBeenSet() const { return m_apacheKafkaClusterIdHasBeenSet; }
  template <typename ApacheKafkaClusterIdT = Aws::String>
  void SetApacheKafkaClusterId(ApacheKafkaClusterIdT&& value) {
    m_apacheKafkaClusterIdHasBeenSet = true;
    m_apacheKafkaClusterId = std::forward<ApacheKafkaClusterIdT>(value);
  }
  template <typename ApacheKafkaClusterIdT = Aws::String>
  ApacheKafkaCluster& WithApacheKafkaClusterId(ApacheKafkaClusterIdT&& value) {
    SetApacheKafkaClusterId(std::forward<ApacheKafkaClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bootstrap broker string of the Apache Kafka cluster.</p>
   */
  inline const Aws::String& GetBootstrapBrokerString() const { return m_bootstrapBrokerString; }
  inline bool BootstrapBrokerStringHasBeenSet() const { return m_bootstrapBrokerStringHasBeenSet; }
  template <typename BootstrapBrokerStringT = Aws::String>
  void SetBootstrapBrokerString(BootstrapBrokerStringT&& value) {
    m_bootstrapBrokerStringHasBeenSet = true;
    m_bootstrapBrokerString = std::forward<BootstrapBrokerStringT>(value);
  }
  template <typename BootstrapBrokerStringT = Aws::String>
  ApacheKafkaCluster& WithBootstrapBrokerString(BootstrapBrokerStringT&& value) {
    SetBootstrapBrokerString(std::forward<BootstrapBrokerStringT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_apacheKafkaClusterId;

  Aws::String m_bootstrapBrokerString;
  bool m_apacheKafkaClusterIdHasBeenSet = false;
  bool m_bootstrapBrokerStringHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
