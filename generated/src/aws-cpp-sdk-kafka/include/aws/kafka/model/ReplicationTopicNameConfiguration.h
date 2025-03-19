/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ReplicationTopicNameConfigurationType.h>
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
   * <p>Configuration for specifying replicated topic names should be the same as
   * their corresponding upstream topics or prefixed with source cluster
   * alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ReplicationTopicNameConfiguration">AWS
   * API Reference</a></p>
   */
  class ReplicationTopicNameConfiguration
  {
  public:
    AWS_KAFKA_API ReplicationTopicNameConfiguration() = default;
    AWS_KAFKA_API ReplicationTopicNameConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ReplicationTopicNameConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of replicated topic name.</p>
     */
    inline ReplicationTopicNameConfigurationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ReplicationTopicNameConfigurationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ReplicationTopicNameConfiguration& WithType(ReplicationTopicNameConfigurationType value) { SetType(value); return *this;}
    ///@}
  private:

    ReplicationTopicNameConfigurationType m_type{ReplicationTopicNameConfigurationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
