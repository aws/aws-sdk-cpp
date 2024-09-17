/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/AmazonMskCluster.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/KafkaClusterClientVpcConfig.h>
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
   * <p>Information about Kafka Cluster used as source / target for
   * replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/KafkaClusterDescription">AWS
   * API Reference</a></p>
   */
  class KafkaClusterDescription
  {
  public:
    AWS_KAFKA_API KafkaClusterDescription();
    AWS_KAFKA_API KafkaClusterDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API KafkaClusterDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details of an Amazon MSK Cluster.</p>
     */
    inline const AmazonMskCluster& GetAmazonMskCluster() const{ return m_amazonMskCluster; }
    inline bool AmazonMskClusterHasBeenSet() const { return m_amazonMskClusterHasBeenSet; }
    inline void SetAmazonMskCluster(const AmazonMskCluster& value) { m_amazonMskClusterHasBeenSet = true; m_amazonMskCluster = value; }
    inline void SetAmazonMskCluster(AmazonMskCluster&& value) { m_amazonMskClusterHasBeenSet = true; m_amazonMskCluster = std::move(value); }
    inline KafkaClusterDescription& WithAmazonMskCluster(const AmazonMskCluster& value) { SetAmazonMskCluster(value); return *this;}
    inline KafkaClusterDescription& WithAmazonMskCluster(AmazonMskCluster&& value) { SetAmazonMskCluster(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the Kafka cluster. Used to prefix names of replicated
     * topics.</p> 
     */
    inline const Aws::String& GetKafkaClusterAlias() const{ return m_kafkaClusterAlias; }
    inline bool KafkaClusterAliasHasBeenSet() const { return m_kafkaClusterAliasHasBeenSet; }
    inline void SetKafkaClusterAlias(const Aws::String& value) { m_kafkaClusterAliasHasBeenSet = true; m_kafkaClusterAlias = value; }
    inline void SetKafkaClusterAlias(Aws::String&& value) { m_kafkaClusterAliasHasBeenSet = true; m_kafkaClusterAlias = std::move(value); }
    inline void SetKafkaClusterAlias(const char* value) { m_kafkaClusterAliasHasBeenSet = true; m_kafkaClusterAlias.assign(value); }
    inline KafkaClusterDescription& WithKafkaClusterAlias(const Aws::String& value) { SetKafkaClusterAlias(value); return *this;}
    inline KafkaClusterDescription& WithKafkaClusterAlias(Aws::String&& value) { SetKafkaClusterAlias(std::move(value)); return *this;}
    inline KafkaClusterDescription& WithKafkaClusterAlias(const char* value) { SetKafkaClusterAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of an Amazon VPC which has network connectivity to the Apache Kafka
     * cluster.</p>
     */
    inline const KafkaClusterClientVpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const KafkaClusterClientVpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(KafkaClusterClientVpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline KafkaClusterDescription& WithVpcConfig(const KafkaClusterClientVpcConfig& value) { SetVpcConfig(value); return *this;}
    inline KafkaClusterDescription& WithVpcConfig(KafkaClusterClientVpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}
  private:

    AmazonMskCluster m_amazonMskCluster;
    bool m_amazonMskClusterHasBeenSet = false;

    Aws::String m_kafkaClusterAlias;
    bool m_kafkaClusterAliasHasBeenSet = false;

    KafkaClusterClientVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
