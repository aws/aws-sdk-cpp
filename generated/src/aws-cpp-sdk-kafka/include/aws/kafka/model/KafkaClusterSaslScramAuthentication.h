/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/KafkaClusterSaslScramMechanism.h>

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
 * <p>Details for SASL/SCRAM client authentication.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/KafkaClusterSaslScramAuthentication">AWS
 * API Reference</a></p>
 */
class KafkaClusterSaslScramAuthentication {
 public:
  AWS_KAFKA_API KafkaClusterSaslScramAuthentication() = default;
  AWS_KAFKA_API KafkaClusterSaslScramAuthentication(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API KafkaClusterSaslScramAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The SASL/SCRAM authentication mechanism.</p>
   */
  inline KafkaClusterSaslScramMechanism GetMechanism() const { return m_mechanism; }
  inline bool MechanismHasBeenSet() const { return m_mechanismHasBeenSet; }
  inline void SetMechanism(KafkaClusterSaslScramMechanism value) {
    m_mechanismHasBeenSet = true;
    m_mechanism = value;
  }
  inline KafkaClusterSaslScramAuthentication& WithMechanism(KafkaClusterSaslScramMechanism value) {
    SetMechanism(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Secrets Manager secret.</p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  KafkaClusterSaslScramAuthentication& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  KafkaClusterSaslScramMechanism m_mechanism{KafkaClusterSaslScramMechanism::NOT_SET};

  Aws::String m_secretArn;
  bool m_mechanismHasBeenSet = false;
  bool m_secretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
