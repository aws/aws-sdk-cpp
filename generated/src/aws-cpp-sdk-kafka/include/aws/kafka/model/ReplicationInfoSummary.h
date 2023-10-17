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
    AWS_KAFKA_API ReplicationInfoSummary();
    AWS_KAFKA_API ReplicationInfoSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ReplicationInfoSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline const Aws::String& GetSourceKafkaClusterAlias() const{ return m_sourceKafkaClusterAlias; }

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline bool SourceKafkaClusterAliasHasBeenSet() const { return m_sourceKafkaClusterAliasHasBeenSet; }

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline void SetSourceKafkaClusterAlias(const Aws::String& value) { m_sourceKafkaClusterAliasHasBeenSet = true; m_sourceKafkaClusterAlias = value; }

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline void SetSourceKafkaClusterAlias(Aws::String&& value) { m_sourceKafkaClusterAliasHasBeenSet = true; m_sourceKafkaClusterAlias = std::move(value); }

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline void SetSourceKafkaClusterAlias(const char* value) { m_sourceKafkaClusterAliasHasBeenSet = true; m_sourceKafkaClusterAlias.assign(value); }

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline ReplicationInfoSummary& WithSourceKafkaClusterAlias(const Aws::String& value) { SetSourceKafkaClusterAlias(value); return *this;}

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline ReplicationInfoSummary& WithSourceKafkaClusterAlias(Aws::String&& value) { SetSourceKafkaClusterAlias(std::move(value)); return *this;}

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline ReplicationInfoSummary& WithSourceKafkaClusterAlias(const char* value) { SetSourceKafkaClusterAlias(value); return *this;}


    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline const Aws::String& GetTargetKafkaClusterAlias() const{ return m_targetKafkaClusterAlias; }

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline bool TargetKafkaClusterAliasHasBeenSet() const { return m_targetKafkaClusterAliasHasBeenSet; }

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline void SetTargetKafkaClusterAlias(const Aws::String& value) { m_targetKafkaClusterAliasHasBeenSet = true; m_targetKafkaClusterAlias = value; }

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline void SetTargetKafkaClusterAlias(Aws::String&& value) { m_targetKafkaClusterAliasHasBeenSet = true; m_targetKafkaClusterAlias = std::move(value); }

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline void SetTargetKafkaClusterAlias(const char* value) { m_targetKafkaClusterAliasHasBeenSet = true; m_targetKafkaClusterAlias.assign(value); }

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline ReplicationInfoSummary& WithTargetKafkaClusterAlias(const Aws::String& value) { SetTargetKafkaClusterAlias(value); return *this;}

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline ReplicationInfoSummary& WithTargetKafkaClusterAlias(Aws::String&& value) { SetTargetKafkaClusterAlias(std::move(value)); return *this;}

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline ReplicationInfoSummary& WithTargetKafkaClusterAlias(const char* value) { SetTargetKafkaClusterAlias(value); return *this;}

  private:

    Aws::String m_sourceKafkaClusterAlias;
    bool m_sourceKafkaClusterAliasHasBeenSet = false;

    Aws::String m_targetKafkaClusterAlias;
    bool m_targetKafkaClusterAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
