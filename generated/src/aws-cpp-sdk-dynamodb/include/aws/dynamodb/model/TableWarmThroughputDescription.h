/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TableStatus.h>
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
   * <p>Represents the warm throughput value (in read units per second and write
   * units per second) of the table. Warm throughput is applicable for DynamoDB
   * Standard-IA tables and specifies the minimum provisioned capacity maintained for
   * immediate data access.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TableWarmThroughputDescription">AWS
   * API Reference</a></p>
   */
  class TableWarmThroughputDescription
  {
  public:
    AWS_DYNAMODB_API TableWarmThroughputDescription() = default;
    AWS_DYNAMODB_API TableWarmThroughputDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API TableWarmThroughputDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the base table's warm throughput value in read units per
     * second.</p>
     */
    inline long long GetReadUnitsPerSecond() const { return m_readUnitsPerSecond; }
    inline bool ReadUnitsPerSecondHasBeenSet() const { return m_readUnitsPerSecondHasBeenSet; }
    inline void SetReadUnitsPerSecond(long long value) { m_readUnitsPerSecondHasBeenSet = true; m_readUnitsPerSecond = value; }
    inline TableWarmThroughputDescription& WithReadUnitsPerSecond(long long value) { SetReadUnitsPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the base table's warm throughput value in write units per
     * second.</p>
     */
    inline long long GetWriteUnitsPerSecond() const { return m_writeUnitsPerSecond; }
    inline bool WriteUnitsPerSecondHasBeenSet() const { return m_writeUnitsPerSecondHasBeenSet; }
    inline void SetWriteUnitsPerSecond(long long value) { m_writeUnitsPerSecondHasBeenSet = true; m_writeUnitsPerSecond = value; }
    inline TableWarmThroughputDescription& WithWriteUnitsPerSecond(long long value) { SetWriteUnitsPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents warm throughput value of the base table.</p>
     */
    inline TableStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TableStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TableWarmThroughputDescription& WithStatus(TableStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    long long m_readUnitsPerSecond{0};
    bool m_readUnitsPerSecondHasBeenSet = false;

    long long m_writeUnitsPerSecond{0};
    bool m_writeUnitsPerSecondHasBeenSet = false;

    TableStatus m_status{TableStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
