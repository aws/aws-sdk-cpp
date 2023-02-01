/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/KafkaClusterClientAuthenticationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>The client authentication information used in order to authenticate with the
   * Apache Kafka cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/KafkaClusterClientAuthentication">AWS
   * API Reference</a></p>
   */
  class KafkaClusterClientAuthentication
  {
  public:
    AWS_KAFKACONNECT_API KafkaClusterClientAuthentication();
    AWS_KAFKACONNECT_API KafkaClusterClientAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API KafkaClusterClientAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. Value NONE means that no client authentication is used.</p>
     */
    inline const KafkaClusterClientAuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. Value NONE means that no client authentication is used.</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. Value NONE means that no client authentication is used.</p>
     */
    inline void SetAuthenticationType(const KafkaClusterClientAuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. Value NONE means that no client authentication is used.</p>
     */
    inline void SetAuthenticationType(KafkaClusterClientAuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. Value NONE means that no client authentication is used.</p>
     */
    inline KafkaClusterClientAuthentication& WithAuthenticationType(const KafkaClusterClientAuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. Value NONE means that no client authentication is used.</p>
     */
    inline KafkaClusterClientAuthentication& WithAuthenticationType(KafkaClusterClientAuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}

  private:

    KafkaClusterClientAuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
