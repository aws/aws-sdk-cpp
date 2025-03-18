/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/IndexStatus.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>The description of the warm throughput value on a global secondary
   * index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalSecondaryIndexWarmThroughputDescription">AWS
   * API Reference</a></p>
   */
  class GlobalSecondaryIndexWarmThroughputDescription
  {
  public:
    AWS_DYNAMODB_API GlobalSecondaryIndexWarmThroughputDescription() = default;
    AWS_DYNAMODB_API GlobalSecondaryIndexWarmThroughputDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API GlobalSecondaryIndexWarmThroughputDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents warm throughput read units per second value for a global secondary
     * index.</p>
     */
    inline long long GetReadUnitsPerSecond() const { return m_readUnitsPerSecond; }
    inline bool ReadUnitsPerSecondHasBeenSet() const { return m_readUnitsPerSecondHasBeenSet; }
    inline void SetReadUnitsPerSecond(long long value) { m_readUnitsPerSecondHasBeenSet = true; m_readUnitsPerSecond = value; }
    inline GlobalSecondaryIndexWarmThroughputDescription& WithReadUnitsPerSecond(long long value) { SetReadUnitsPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents warm throughput write units per second value for a global
     * secondary index.</p>
     */
    inline long long GetWriteUnitsPerSecond() const { return m_writeUnitsPerSecond; }
    inline bool WriteUnitsPerSecondHasBeenSet() const { return m_writeUnitsPerSecondHasBeenSet; }
    inline void SetWriteUnitsPerSecond(long long value) { m_writeUnitsPerSecondHasBeenSet = true; m_writeUnitsPerSecond = value; }
    inline GlobalSecondaryIndexWarmThroughputDescription& WithWriteUnitsPerSecond(long long value) { SetWriteUnitsPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the warm throughput status being created or updated on a global
     * secondary index. The status can only be <code>UPDATING</code> or
     * <code>ACTIVE</code>.</p>
     */
    inline IndexStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IndexStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GlobalSecondaryIndexWarmThroughputDescription& WithStatus(IndexStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    long long m_readUnitsPerSecond{0};
    bool m_readUnitsPerSecondHasBeenSet = false;

    long long m_writeUnitsPerSecond{0};
    bool m_writeUnitsPerSecondHasBeenSet = false;

    IndexStatus m_status{IndexStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
