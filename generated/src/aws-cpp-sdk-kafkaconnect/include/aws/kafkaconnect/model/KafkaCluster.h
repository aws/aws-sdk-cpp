/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/ApacheKafkaCluster.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/KafkaCluster">AWS
   * API Reference</a></p>
   */
  class KafkaCluster
  {
  public:
    AWS_KAFKACONNECT_API KafkaCluster() = default;
    AWS_KAFKACONNECT_API KafkaCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API KafkaCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Apache Kafka cluster to which the connector is connected.</p>
     */
    inline const ApacheKafkaCluster& GetApacheKafkaCluster() const { return m_apacheKafkaCluster; }
    inline bool ApacheKafkaClusterHasBeenSet() const { return m_apacheKafkaClusterHasBeenSet; }
    template<typename ApacheKafkaClusterT = ApacheKafkaCluster>
    void SetApacheKafkaCluster(ApacheKafkaClusterT&& value) { m_apacheKafkaClusterHasBeenSet = true; m_apacheKafkaCluster = std::forward<ApacheKafkaClusterT>(value); }
    template<typename ApacheKafkaClusterT = ApacheKafkaCluster>
    KafkaCluster& WithApacheKafkaCluster(ApacheKafkaClusterT&& value) { SetApacheKafkaCluster(std::forward<ApacheKafkaClusterT>(value)); return *this;}
    ///@}
  private:

    ApacheKafkaCluster m_apacheKafkaCluster;
    bool m_apacheKafkaClusterHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
