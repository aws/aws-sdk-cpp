/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ReplicationStartingPositionType.h>
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
   * <p>Configuration for specifying the position in the topics to start replicating
   * from.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ReplicationStartingPosition">AWS
   * API Reference</a></p>
   */
  class ReplicationStartingPosition
  {
  public:
    AWS_KAFKA_API ReplicationStartingPosition() = default;
    AWS_KAFKA_API ReplicationStartingPosition(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ReplicationStartingPosition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of replication starting position.</p>
     */
    inline ReplicationStartingPositionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ReplicationStartingPositionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ReplicationStartingPosition& WithType(ReplicationStartingPositionType value) { SetType(value); return *this;}
    ///@}
  private:

    ReplicationStartingPositionType m_type{ReplicationStartingPositionType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
