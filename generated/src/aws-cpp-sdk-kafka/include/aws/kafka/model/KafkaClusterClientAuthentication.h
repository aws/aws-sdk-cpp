/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/KafkaClusterMTLSAuthentication.h>
#include <aws/kafka/model/KafkaClusterSaslScramAuthentication.h>

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
 * <p>Details of the client authentication used by the Apache Kafka
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/KafkaClusterClientAuthentication">AWS
 * API Reference</a></p>
 */
class KafkaClusterClientAuthentication {
 public:
  AWS_KAFKA_API KafkaClusterClientAuthentication() = default;
  AWS_KAFKA_API KafkaClusterClientAuthentication(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API KafkaClusterClientAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details for SASL/SCRAM client authentication.</p>
   */
  inline const KafkaClusterSaslScramAuthentication& GetSaslScram() const { return m_saslScram; }
  inline bool SaslScramHasBeenSet() const { return m_saslScramHasBeenSet; }
  template <typename SaslScramT = KafkaClusterSaslScramAuthentication>
  void SetSaslScram(SaslScramT&& value) {
    m_saslScramHasBeenSet = true;
    m_saslScram = std::forward<SaslScramT>(value);
  }
  template <typename SaslScramT = KafkaClusterSaslScramAuthentication>
  KafkaClusterClientAuthentication& WithSaslScram(SaslScramT&& value) {
    SetSaslScram(std::forward<SaslScramT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details for mTLS client authentication.</p>
   */
  inline const KafkaClusterMTLSAuthentication& GetMTLS() const { return m_mTLS; }
  inline bool MTLSHasBeenSet() const { return m_mTLSHasBeenSet; }
  template <typename MTLST = KafkaClusterMTLSAuthentication>
  void SetMTLS(MTLST&& value) {
    m_mTLSHasBeenSet = true;
    m_mTLS = std::forward<MTLST>(value);
  }
  template <typename MTLST = KafkaClusterMTLSAuthentication>
  KafkaClusterClientAuthentication& WithMTLS(MTLST&& value) {
    SetMTLS(std::forward<MTLST>(value));
    return *this;
  }
  ///@}
 private:
  KafkaClusterSaslScramAuthentication m_saslScram;

  KafkaClusterMTLSAuthentication m_mTLS;
  bool m_saslScramHasBeenSet = false;
  bool m_mTLSHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
