/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PrometheusService {
namespace Model {

/**
 * <p>The configuration for collecting broker, topic, and consumer-group metrics
 * from an Amazon MSK cluster through a managed Kafka exporter. The cluster must be
 * active, have IAM authentication enabled, and be in the same account and Region
 * as the scraper. Provisioned clusters with Standard brokers are supported. MSK
 * Serverless clusters are not supported.</p> <p>Use a VPC source that can connect
 * to the cluster's IAM bootstrap brokers. The exporter authenticates with the
 * scraper's service-linked role. Metrics can be sent to an Amazon Managed Service
 * for Prometheus workspace or a CloudWatch dataset.</p> <p>You must have an Amazon
 * MSK cluster policy that grants the scraper's service-linked role access to the
 * cluster. Without this policy, the scraper collects no Kafka metrics. For the
 * required actions and example policies, see <a
 * href="https://docs.aws.amazon.com/prometheus/latest/userguide/prom-msk-kafka-exporter.html#prom-msk-kafka-exporter-access">Grant
 * the scraper access to the cluster</a> in the <i>Amazon Managed Service for
 * Prometheus User Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/KafkaExporterConfiguration">AWS
 * API Reference</a></p>
 */
class KafkaExporterConfiguration {
 public:
  AWS_PROMETHEUSSERVICE_API KafkaExporterConfiguration() = default;
  AWS_PROMETHEUSSERVICE_API KafkaExporterConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API KafkaExporterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon MSK cluster.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  KafkaExporterConfiguration& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An anchored RE2 regular expression that selects the Kafka topics to monitor.
   * The expression must start with <code>^</code> and end with <code>$</code>. If
   * omitted, the default is <code>^.*$</code>, which selects all topics.</p>
   */
  inline const Aws::String& GetTopicFilter() const { return m_topicFilter; }
  inline bool TopicFilterHasBeenSet() const { return m_topicFilterHasBeenSet; }
  template <typename TopicFilterT = Aws::String>
  void SetTopicFilter(TopicFilterT&& value) {
    m_topicFilterHasBeenSet = true;
    m_topicFilter = std::forward<TopicFilterT>(value);
  }
  template <typename TopicFilterT = Aws::String>
  KafkaExporterConfiguration& WithTopicFilter(TopicFilterT&& value) {
    SetTopicFilter(std::forward<TopicFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An anchored RE2 regular expression that selects the Kafka consumer groups to
   * monitor. The expression must start with <code>^</code> and end with
   * <code>$</code>. If omitted, the default is <code>^.*$</code>, which selects all
   * consumer groups.</p>
   */
  inline const Aws::String& GetConsumerGroupFilter() const { return m_consumerGroupFilter; }
  inline bool ConsumerGroupFilterHasBeenSet() const { return m_consumerGroupFilterHasBeenSet; }
  template <typename ConsumerGroupFilterT = Aws::String>
  void SetConsumerGroupFilter(ConsumerGroupFilterT&& value) {
    m_consumerGroupFilterHasBeenSet = true;
    m_consumerGroupFilter = std::forward<ConsumerGroupFilterT>(value);
  }
  template <typename ConsumerGroupFilterT = Aws::String>
  KafkaExporterConfiguration& WithConsumerGroupFilter(ConsumerGroupFilterT&& value) {
    SetConsumerGroupFilter(std::forward<ConsumerGroupFilterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  Aws::String m_topicFilter;

  Aws::String m_consumerGroupFilter;
  bool m_clusterArnHasBeenSet = false;
  bool m_topicFilterHasBeenSet = false;
  bool m_consumerGroupFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
