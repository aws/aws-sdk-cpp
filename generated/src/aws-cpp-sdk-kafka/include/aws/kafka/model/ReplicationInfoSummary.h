/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
   * <p>Summarized information of replication between clusters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ReplicationInfoSummary">AWS
   * API Reference</a></p>
   */
  class ReplicationInfoSummary
  {
  public:
    AWS_KAFKA_API ReplicationInfoSummary() = default;
    AWS_KAFKA_API ReplicationInfoSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ReplicationInfoSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline const Aws::String& GetSourceKafkaClusterAlias() const { return m_sourceKafkaClusterAlias; }
    inline bool SourceKafkaClusterAliasHasBeenSet() const { return m_sourceKafkaClusterAliasHasBeenSet; }
    template<typename SourceKafkaClusterAliasT = Aws::String>
    void SetSourceKafkaClusterAlias(SourceKafkaClusterAliasT&& value) { m_sourceKafkaClusterAliasHasBeenSet = true; m_sourceKafkaClusterAlias = std::forward<SourceKafkaClusterAliasT>(value); }
    template<typename SourceKafkaClusterAliasT = Aws::String>
    ReplicationInfoSummary& WithSourceKafkaClusterAlias(SourceKafkaClusterAliasT&& value) { SetSourceKafkaClusterAlias(std::forward<SourceKafkaClusterAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline const Aws::String& GetTargetKafkaClusterAlias() const { return m_targetKafkaClusterAlias; }
    inline bool TargetKafkaClusterAliasHasBeenSet() const { return m_targetKafkaClusterAliasHasBeenSet; }
    template<typename TargetKafkaClusterAliasT = Aws::String>
    void SetTargetKafkaClusterAlias(TargetKafkaClusterAliasT&& value) { m_targetKafkaClusterAliasHasBeenSet = true; m_targetKafkaClusterAlias = std::forward<TargetKafkaClusterAliasT>(value); }
    template<typename TargetKafkaClusterAliasT = Aws::String>
    ReplicationInfoSummary& WithTargetKafkaClusterAlias(TargetKafkaClusterAliasT&& value) { SetTargetKafkaClusterAlias(std::forward<TargetKafkaClusterAliasT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceKafkaClusterAlias;
    bool m_sourceKafkaClusterAliasHasBeenSet = false;

    Aws::String m_targetKafkaClusterAlias;
    bool m_targetKafkaClusterAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
