/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/VpcDescription.h>
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
   * <p>The description of the Apache Kafka cluster to which the connector is
   * connected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ApacheKafkaClusterDescription">AWS
   * API Reference</a></p>
   */
  class ApacheKafkaClusterDescription
  {
  public:
    AWS_KAFKACONNECT_API ApacheKafkaClusterDescription();
    AWS_KAFKACONNECT_API ApacheKafkaClusterDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API ApacheKafkaClusterDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bootstrap servers of the cluster.</p>
     */
    inline const Aws::String& GetBootstrapServers() const{ return m_bootstrapServers; }
    inline bool BootstrapServersHasBeenSet() const { return m_bootstrapServersHasBeenSet; }
    inline void SetBootstrapServers(const Aws::String& value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers = value; }
    inline void SetBootstrapServers(Aws::String&& value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers = std::move(value); }
    inline void SetBootstrapServers(const char* value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers.assign(value); }
    inline ApacheKafkaClusterDescription& WithBootstrapServers(const Aws::String& value) { SetBootstrapServers(value); return *this;}
    inline ApacheKafkaClusterDescription& WithBootstrapServers(Aws::String&& value) { SetBootstrapServers(std::move(value)); return *this;}
    inline ApacheKafkaClusterDescription& WithBootstrapServers(const char* value) { SetBootstrapServers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of an Amazon VPC which has network connectivity to the Apache Kafka
     * cluster.</p>
     */
    inline const VpcDescription& GetVpc() const{ return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    inline void SetVpc(const VpcDescription& value) { m_vpcHasBeenSet = true; m_vpc = value; }
    inline void SetVpc(VpcDescription&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }
    inline ApacheKafkaClusterDescription& WithVpc(const VpcDescription& value) { SetVpc(value); return *this;}
    inline ApacheKafkaClusterDescription& WithVpc(VpcDescription&& value) { SetVpc(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_bootstrapServers;
    bool m_bootstrapServersHasBeenSet = false;

    VpcDescription m_vpc;
    bool m_vpcHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
