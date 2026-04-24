/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/AmazonMskCluster.h>
#include <aws/kafka/model/ApacheKafkaCluster.h>
#include <aws/kafka/model/KafkaClusterClientAuthentication.h>
#include <aws/kafka/model/KafkaClusterClientVpcConfig.h>
#include <aws/kafka/model/KafkaClusterEncryptionInTransit.h>

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
 * <p>Information about Kafka Cluster to be used as source / target for
 * replication.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/KafkaCluster">AWS
 * API Reference</a></p>
 */
class KafkaCluster {
 public:
  AWS_KAFKA_API KafkaCluster() = default;
  AWS_KAFKA_API KafkaCluster(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API KafkaCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details of an Amazon MSK Cluster.</p>
   */
  inline const AmazonMskCluster& GetAmazonMskCluster() const { return m_amazonMskCluster; }
  inline bool AmazonMskClusterHasBeenSet() const { return m_amazonMskClusterHasBeenSet; }
  template <typename AmazonMskClusterT = AmazonMskCluster>
  void SetAmazonMskCluster(AmazonMskClusterT&& value) {
    m_amazonMskClusterHasBeenSet = true;
    m_amazonMskCluster = std::forward<AmazonMskClusterT>(value);
  }
  template <typename AmazonMskClusterT = AmazonMskCluster>
  KafkaCluster& WithAmazonMskCluster(AmazonMskClusterT&& value) {
    SetAmazonMskCluster(std::forward<AmazonMskClusterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of an Apache Kafka Cluster.</p>
   */
  inline const ApacheKafkaCluster& GetApacheKafkaCluster() const { return m_apacheKafkaCluster; }
  inline bool ApacheKafkaClusterHasBeenSet() const { return m_apacheKafkaClusterHasBeenSet; }
  template <typename ApacheKafkaClusterT = ApacheKafkaCluster>
  void SetApacheKafkaCluster(ApacheKafkaClusterT&& value) {
    m_apacheKafkaClusterHasBeenSet = true;
    m_apacheKafkaCluster = std::forward<ApacheKafkaClusterT>(value);
  }
  template <typename ApacheKafkaClusterT = ApacheKafkaCluster>
  KafkaCluster& WithApacheKafkaCluster(ApacheKafkaClusterT&& value) {
    SetApacheKafkaCluster(std::forward<ApacheKafkaClusterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of an Amazon VPC which has network connectivity to the Apache Kafka
   * cluster.</p>
   */
  inline const KafkaClusterClientVpcConfig& GetVpcConfig() const { return m_vpcConfig; }
  inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
  template <typename VpcConfigT = KafkaClusterClientVpcConfig>
  void SetVpcConfig(VpcConfigT&& value) {
    m_vpcConfigHasBeenSet = true;
    m_vpcConfig = std::forward<VpcConfigT>(value);
  }
  template <typename VpcConfigT = KafkaClusterClientVpcConfig>
  KafkaCluster& WithVpcConfig(VpcConfigT&& value) {
    SetVpcConfig(std::forward<VpcConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the client authentication used by the Apache Kafka cluster.</p>
   */
  inline const KafkaClusterClientAuthentication& GetClientAuthentication() const { return m_clientAuthentication; }
  inline bool ClientAuthenticationHasBeenSet() const { return m_clientAuthenticationHasBeenSet; }
  template <typename ClientAuthenticationT = KafkaClusterClientAuthentication>
  void SetClientAuthentication(ClientAuthenticationT&& value) {
    m_clientAuthenticationHasBeenSet = true;
    m_clientAuthentication = std::forward<ClientAuthenticationT>(value);
  }
  template <typename ClientAuthenticationT = KafkaClusterClientAuthentication>
  KafkaCluster& WithClientAuthentication(ClientAuthenticationT&& value) {
    SetClientAuthentication(std::forward<ClientAuthenticationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
   */
  inline const KafkaClusterEncryptionInTransit& GetEncryptionInTransit() const { return m_encryptionInTransit; }
  inline bool EncryptionInTransitHasBeenSet() const { return m_encryptionInTransitHasBeenSet; }
  template <typename EncryptionInTransitT = KafkaClusterEncryptionInTransit>
  void SetEncryptionInTransit(EncryptionInTransitT&& value) {
    m_encryptionInTransitHasBeenSet = true;
    m_encryptionInTransit = std::forward<EncryptionInTransitT>(value);
  }
  template <typename EncryptionInTransitT = KafkaClusterEncryptionInTransit>
  KafkaCluster& WithEncryptionInTransit(EncryptionInTransitT&& value) {
    SetEncryptionInTransit(std::forward<EncryptionInTransitT>(value));
    return *this;
  }
  ///@}
 private:
  AmazonMskCluster m_amazonMskCluster;

  ApacheKafkaCluster m_apacheKafkaCluster;

  KafkaClusterClientVpcConfig m_vpcConfig;

  KafkaClusterClientAuthentication m_clientAuthentication;

  KafkaClusterEncryptionInTransit m_encryptionInTransit;
  bool m_amazonMskClusterHasBeenSet = false;
  bool m_apacheKafkaClusterHasBeenSet = false;
  bool m_vpcConfigHasBeenSet = false;
  bool m_clientAuthenticationHasBeenSet = false;
  bool m_encryptionInTransitHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
