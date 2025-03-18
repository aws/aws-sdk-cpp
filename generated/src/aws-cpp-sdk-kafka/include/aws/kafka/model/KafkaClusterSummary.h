/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/AmazonMskCluster.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * <p>Summarized information about Kafka Cluster used as source / target for
   * replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/KafkaClusterSummary">AWS
   * API Reference</a></p>
   */
  class KafkaClusterSummary
  {
  public:
    AWS_KAFKA_API KafkaClusterSummary() = default;
    AWS_KAFKA_API KafkaClusterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API KafkaClusterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details of an Amazon MSK Cluster.</p>
     */
    inline const AmazonMskCluster& GetAmazonMskCluster() const { return m_amazonMskCluster; }
    inline bool AmazonMskClusterHasBeenSet() const { return m_amazonMskClusterHasBeenSet; }
    template<typename AmazonMskClusterT = AmazonMskCluster>
    void SetAmazonMskCluster(AmazonMskClusterT&& value) { m_amazonMskClusterHasBeenSet = true; m_amazonMskCluster = std::forward<AmazonMskClusterT>(value); }
    template<typename AmazonMskClusterT = AmazonMskCluster>
    KafkaClusterSummary& WithAmazonMskCluster(AmazonMskClusterT&& value) { SetAmazonMskCluster(std::forward<AmazonMskClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the Kafka cluster. Used to prefix names of replicated
     * topics.</p> 
     */
    inline const Aws::String& GetKafkaClusterAlias() const { return m_kafkaClusterAlias; }
    inline bool KafkaClusterAliasHasBeenSet() const { return m_kafkaClusterAliasHasBeenSet; }
    template<typename KafkaClusterAliasT = Aws::String>
    void SetKafkaClusterAlias(KafkaClusterAliasT&& value) { m_kafkaClusterAliasHasBeenSet = true; m_kafkaClusterAlias = std::forward<KafkaClusterAliasT>(value); }
    template<typename KafkaClusterAliasT = Aws::String>
    KafkaClusterSummary& WithKafkaClusterAlias(KafkaClusterAliasT&& value) { SetKafkaClusterAlias(std::forward<KafkaClusterAliasT>(value)); return *this;}
    ///@}
  private:

    AmazonMskCluster m_amazonMskCluster;
    bool m_amazonMskClusterHasBeenSet = false;

    Aws::String m_kafkaClusterAlias;
    bool m_kafkaClusterAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
