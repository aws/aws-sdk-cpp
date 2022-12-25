/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/Vpc.h>
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
   * <p>The details of the Apache Kafka cluster to which the connector is
   * connected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ApacheKafkaCluster">AWS
   * API Reference</a></p>
   */
  class ApacheKafkaCluster
  {
  public:
    AWS_KAFKACONNECT_API ApacheKafkaCluster();
    AWS_KAFKACONNECT_API ApacheKafkaCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API ApacheKafkaCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bootstrap servers of the cluster.</p>
     */
    inline const Aws::String& GetBootstrapServers() const{ return m_bootstrapServers; }

    /**
     * <p>The bootstrap servers of the cluster.</p>
     */
    inline bool BootstrapServersHasBeenSet() const { return m_bootstrapServersHasBeenSet; }

    /**
     * <p>The bootstrap servers of the cluster.</p>
     */
    inline void SetBootstrapServers(const Aws::String& value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers = value; }

    /**
     * <p>The bootstrap servers of the cluster.</p>
     */
    inline void SetBootstrapServers(Aws::String&& value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers = std::move(value); }

    /**
     * <p>The bootstrap servers of the cluster.</p>
     */
    inline void SetBootstrapServers(const char* value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers.assign(value); }

    /**
     * <p>The bootstrap servers of the cluster.</p>
     */
    inline ApacheKafkaCluster& WithBootstrapServers(const Aws::String& value) { SetBootstrapServers(value); return *this;}

    /**
     * <p>The bootstrap servers of the cluster.</p>
     */
    inline ApacheKafkaCluster& WithBootstrapServers(Aws::String&& value) { SetBootstrapServers(std::move(value)); return *this;}

    /**
     * <p>The bootstrap servers of the cluster.</p>
     */
    inline ApacheKafkaCluster& WithBootstrapServers(const char* value) { SetBootstrapServers(value); return *this;}


    /**
     * <p>Details of an Amazon VPC which has network connectivity to the Apache Kafka
     * cluster.</p>
     */
    inline const Vpc& GetVpc() const{ return m_vpc; }

    /**
     * <p>Details of an Amazon VPC which has network connectivity to the Apache Kafka
     * cluster.</p>
     */
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }

    /**
     * <p>Details of an Amazon VPC which has network connectivity to the Apache Kafka
     * cluster.</p>
     */
    inline void SetVpc(const Vpc& value) { m_vpcHasBeenSet = true; m_vpc = value; }

    /**
     * <p>Details of an Amazon VPC which has network connectivity to the Apache Kafka
     * cluster.</p>
     */
    inline void SetVpc(Vpc&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }

    /**
     * <p>Details of an Amazon VPC which has network connectivity to the Apache Kafka
     * cluster.</p>
     */
    inline ApacheKafkaCluster& WithVpc(const Vpc& value) { SetVpc(value); return *this;}

    /**
     * <p>Details of an Amazon VPC which has network connectivity to the Apache Kafka
     * cluster.</p>
     */
    inline ApacheKafkaCluster& WithVpc(Vpc&& value) { SetVpc(std::move(value)); return *this;}

  private:

    Aws::String m_bootstrapServers;
    bool m_bootstrapServersHasBeenSet = false;

    Vpc m_vpc;
    bool m_vpcHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
