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
    AWS_KAFKACONNECT_API ApacheKafkaClusterDescription() = default;
    AWS_KAFKACONNECT_API ApacheKafkaClusterDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API ApacheKafkaClusterDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bootstrap servers of the cluster.</p>
     */
    inline const Aws::String& GetBootstrapServers() const { return m_bootstrapServers; }
    inline bool BootstrapServersHasBeenSet() const { return m_bootstrapServersHasBeenSet; }
    template<typename BootstrapServersT = Aws::String>
    void SetBootstrapServers(BootstrapServersT&& value) { m_bootstrapServersHasBeenSet = true; m_bootstrapServers = std::forward<BootstrapServersT>(value); }
    template<typename BootstrapServersT = Aws::String>
    ApacheKafkaClusterDescription& WithBootstrapServers(BootstrapServersT&& value) { SetBootstrapServers(std::forward<BootstrapServersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of an Amazon VPC which has network connectivity to the Apache Kafka
     * cluster.</p>
     */
    inline const VpcDescription& GetVpc() const { return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    template<typename VpcT = VpcDescription>
    void SetVpc(VpcT&& value) { m_vpcHasBeenSet = true; m_vpc = std::forward<VpcT>(value); }
    template<typename VpcT = VpcDescription>
    ApacheKafkaClusterDescription& WithVpc(VpcT&& value) { SetVpc(std::forward<VpcT>(value)); return *this;}
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
