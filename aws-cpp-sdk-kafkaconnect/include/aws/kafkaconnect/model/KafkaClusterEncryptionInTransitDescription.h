/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/KafkaClusterEncryptionInTransitType.h>
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
   * <p>The description of the encryption in transit to the Apache Kafka
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/KafkaClusterEncryptionInTransitDescription">AWS
   * API Reference</a></p>
   */
  class KafkaClusterEncryptionInTransitDescription
  {
  public:
    AWS_KAFKACONNECT_API KafkaClusterEncryptionInTransitDescription();
    AWS_KAFKACONNECT_API KafkaClusterEncryptionInTransitDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API KafkaClusterEncryptionInTransitDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline const KafkaClusterEncryptionInTransitType& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The type of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    /**
     * <p>The type of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline void SetEncryptionType(const KafkaClusterEncryptionInTransitType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * <p>The type of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline void SetEncryptionType(KafkaClusterEncryptionInTransitType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * <p>The type of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline KafkaClusterEncryptionInTransitDescription& WithEncryptionType(const KafkaClusterEncryptionInTransitType& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The type of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline KafkaClusterEncryptionInTransitDescription& WithEncryptionType(KafkaClusterEncryptionInTransitType&& value) { SetEncryptionType(std::move(value)); return *this;}

  private:

    KafkaClusterEncryptionInTransitType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
