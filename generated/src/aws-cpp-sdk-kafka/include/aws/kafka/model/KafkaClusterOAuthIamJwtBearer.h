/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/JwtSigningAlgorithm.h>

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
 * <p>Details for SASL/OAUTHBEARER using JWT Bearer assertion grant.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/KafkaClusterOAuthIamJwtBearer">AWS
 * API Reference</a></p>
 */
class KafkaClusterOAuthIamJwtBearer {
 public:
  AWS_KAFKA_API KafkaClusterOAuthIamJwtBearer() = default;
  AWS_KAFKA_API KafkaClusterOAuthIamJwtBearer(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API KafkaClusterOAuthIamJwtBearer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The audience for the JWT Bearer assertion.</p>
   */
  inline const Aws::String& GetAudience() const { return m_audience; }
  inline bool AudienceHasBeenSet() const { return m_audienceHasBeenSet; }
  template <typename AudienceT = Aws::String>
  void SetAudience(AudienceT&& value) {
    m_audienceHasBeenSet = true;
    m_audience = std::forward<AudienceT>(value);
  }
  template <typename AudienceT = Aws::String>
  KafkaClusterOAuthIamJwtBearer& WithAudience(AudienceT&& value) {
    SetAudience(std::forward<AudienceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The signing algorithm for the JWT Bearer assertion.</p>
   */
  inline JwtSigningAlgorithm GetSigningAlgorithm() const { return m_signingAlgorithm; }
  inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }
  inline void SetSigningAlgorithm(JwtSigningAlgorithm value) {
    m_signingAlgorithmHasBeenSet = true;
    m_signingAlgorithm = value;
  }
  inline KafkaClusterOAuthIamJwtBearer& WithSigningAlgorithm(JwtSigningAlgorithm value) {
    SetSigningAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Secrets Manager secret containing the
   * signing key.</p>
   */
  inline const Aws::String& GetTokenRequestSecretArn() const { return m_tokenRequestSecretArn; }
  inline bool TokenRequestSecretArnHasBeenSet() const { return m_tokenRequestSecretArnHasBeenSet; }
  template <typename TokenRequestSecretArnT = Aws::String>
  void SetTokenRequestSecretArn(TokenRequestSecretArnT&& value) {
    m_tokenRequestSecretArnHasBeenSet = true;
    m_tokenRequestSecretArn = std::forward<TokenRequestSecretArnT>(value);
  }
  template <typename TokenRequestSecretArnT = Aws::String>
  KafkaClusterOAuthIamJwtBearer& WithTokenRequestSecretArn(TokenRequestSecretArnT&& value) {
    SetTokenRequestSecretArn(std::forward<TokenRequestSecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_audience;

  JwtSigningAlgorithm m_signingAlgorithm{JwtSigningAlgorithm::NOT_SET};

  Aws::String m_tokenRequestSecretArn;
  bool m_audienceHasBeenSet = false;
  bool m_signingAlgorithmHasBeenSet = false;
  bool m_tokenRequestSecretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
