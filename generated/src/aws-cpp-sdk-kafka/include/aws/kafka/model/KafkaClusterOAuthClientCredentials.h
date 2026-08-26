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
 * <p>Details for SASL/OAUTHBEARER using standard client_credentials
 * grant.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/KafkaClusterOAuthClientCredentials">AWS
 * API Reference</a></p>
 */
class KafkaClusterOAuthClientCredentials {
 public:
  AWS_KAFKA_API KafkaClusterOAuthClientCredentials() = default;
  AWS_KAFKA_API KafkaClusterOAuthClientCredentials(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API KafkaClusterOAuthClientCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Secrets Manager secret containing the
   * OAuth client credentials.</p>
   */
  inline const Aws::String& GetTokenRequestSecretArn() const { return m_tokenRequestSecretArn; }
  inline bool TokenRequestSecretArnHasBeenSet() const { return m_tokenRequestSecretArnHasBeenSet; }
  template <typename TokenRequestSecretArnT = Aws::String>
  void SetTokenRequestSecretArn(TokenRequestSecretArnT&& value) {
    m_tokenRequestSecretArnHasBeenSet = true;
    m_tokenRequestSecretArn = std::forward<TokenRequestSecretArnT>(value);
  }
  template <typename TokenRequestSecretArnT = Aws::String>
  KafkaClusterOAuthClientCredentials& WithTokenRequestSecretArn(TokenRequestSecretArnT&& value) {
    SetTokenRequestSecretArn(std::forward<TokenRequestSecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tokenRequestSecretArn;
  bool m_tokenRequestSecretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
