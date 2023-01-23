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
   * <p>Details of encryption in transit to the Apache Kafka cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/KafkaClusterEncryptionInTransit">AWS
   * API Reference</a></p>
   */
  class KafkaClusterEncryptionInTransit
  {
  public:
    AWS_KAFKACONNECT_API KafkaClusterEncryptionInTransit();
    AWS_KAFKACONNECT_API KafkaClusterEncryptionInTransit(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API KafkaClusterEncryptionInTransit& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline KafkaClusterEncryptionInTransit& WithEncryptionType(const KafkaClusterEncryptionInTransitType& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The type of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline KafkaClusterEncryptionInTransit& WithEncryptionType(KafkaClusterEncryptionInTransitType&& value) { SetEncryptionType(std::move(value)); return *this;}

  private:

    KafkaClusterEncryptionInTransitType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
