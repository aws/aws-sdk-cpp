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
 * <p>Details for mTLS client authentication.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/KafkaClusterMTLSAuthentication">AWS
 * API Reference</a></p>
 */
class KafkaClusterMTLSAuthentication {
 public:
  AWS_KAFKA_API KafkaClusterMTLSAuthentication() = default;
  AWS_KAFKA_API KafkaClusterMTLSAuthentication(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API KafkaClusterMTLSAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  KafkaClusterMTLSAuthentication& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretArn;
  bool m_secretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
