/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/KafkaClusterEncryptionInTransitType.h>

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
 * <p>Details of encryption in transit to the Apache Kafka cluster.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/KafkaClusterEncryptionInTransit">AWS
 * API Reference</a></p>
 */
class KafkaClusterEncryptionInTransit {
 public:
  AWS_KAFKA_API KafkaClusterEncryptionInTransit() = default;
  AWS_KAFKA_API KafkaClusterEncryptionInTransit(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API KafkaClusterEncryptionInTransit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of encryption in transit to the Apache Kafka cluster.</p>
   */
  inline KafkaClusterEncryptionInTransitType GetEncryptionType() const { return m_encryptionType; }
  inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
  inline void SetEncryptionType(KafkaClusterEncryptionInTransitType value) {
    m_encryptionTypeHasBeenSet = true;
    m_encryptionType = value;
  }
  inline KafkaClusterEncryptionInTransit& WithEncryptionType(KafkaClusterEncryptionInTransitType value) {
    SetEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The root CA certificate.</p>
   */
  inline const Aws::String& GetRootCaCertificate() const { return m_rootCaCertificate; }
  inline bool RootCaCertificateHasBeenSet() const { return m_rootCaCertificateHasBeenSet; }
  template <typename RootCaCertificateT = Aws::String>
  void SetRootCaCertificate(RootCaCertificateT&& value) {
    m_rootCaCertificateHasBeenSet = true;
    m_rootCaCertificate = std::forward<RootCaCertificateT>(value);
  }
  template <typename RootCaCertificateT = Aws::String>
  KafkaClusterEncryptionInTransit& WithRootCaCertificate(RootCaCertificateT&& value) {
    SetRootCaCertificate(std::forward<RootCaCertificateT>(value));
    return *this;
  }
  ///@}
 private:
  KafkaClusterEncryptionInTransitType m_encryptionType{KafkaClusterEncryptionInTransitType::NOT_SET};

  Aws::String m_rootCaCertificate;
  bool m_encryptionTypeHasBeenSet = false;
  bool m_rootCaCertificateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
