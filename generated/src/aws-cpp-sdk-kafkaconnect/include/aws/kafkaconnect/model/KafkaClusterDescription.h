/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/ApacheKafkaClusterDescription.h>
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
   * <p>Details of how to connect to the Apache Kafka cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/KafkaClusterDescription">AWS
   * API Reference</a></p>
   */
  class KafkaClusterDescription
  {
  public:
    AWS_KAFKACONNECT_API KafkaClusterDescription();
    AWS_KAFKACONNECT_API KafkaClusterDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API KafkaClusterDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Apache Kafka cluster to which the connector is connected.</p>
     */
    inline const ApacheKafkaClusterDescription& GetApacheKafkaCluster() const{ return m_apacheKafkaCluster; }

    /**
     * <p>The Apache Kafka cluster to which the connector is connected.</p>
     */
    inline bool ApacheKafkaClusterHasBeenSet() const { return m_apacheKafkaClusterHasBeenSet; }

    /**
     * <p>The Apache Kafka cluster to which the connector is connected.</p>
     */
    inline void SetApacheKafkaCluster(const ApacheKafkaClusterDescription& value) { m_apacheKafkaClusterHasBeenSet = true; m_apacheKafkaCluster = value; }

    /**
     * <p>The Apache Kafka cluster to which the connector is connected.</p>
     */
    inline void SetApacheKafkaCluster(ApacheKafkaClusterDescription&& value) { m_apacheKafkaClusterHasBeenSet = true; m_apacheKafkaCluster = std::move(value); }

    /**
     * <p>The Apache Kafka cluster to which the connector is connected.</p>
     */
    inline KafkaClusterDescription& WithApacheKafkaCluster(const ApacheKafkaClusterDescription& value) { SetApacheKafkaCluster(value); return *this;}

    /**
     * <p>The Apache Kafka cluster to which the connector is connected.</p>
     */
    inline KafkaClusterDescription& WithApacheKafkaCluster(ApacheKafkaClusterDescription&& value) { SetApacheKafkaCluster(std::move(value)); return *this;}

  private:

    ApacheKafkaClusterDescription m_apacheKafkaCluster;
    bool m_apacheKafkaClusterHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
