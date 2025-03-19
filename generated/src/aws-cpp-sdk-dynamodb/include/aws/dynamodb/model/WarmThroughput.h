/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

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
   * <p>Provides visibility into the number of read and write operations your table
   * or secondary index can instantaneously support. The settings can be modified
   * using the <code>UpdateTable</code> operation to meet the throughput requirements
   * of an upcoming peak event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/WarmThroughput">AWS
   * API Reference</a></p>
   */
  class WarmThroughput
  {
  public:
    AWS_DYNAMODB_API WarmThroughput() = default;
    AWS_DYNAMODB_API WarmThroughput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API WarmThroughput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the number of read operations your base table can instantaneously
     * support.</p>
     */
    inline long long GetReadUnitsPerSecond() const { return m_readUnitsPerSecond; }
    inline bool ReadUnitsPerSecondHasBeenSet() const { return m_readUnitsPerSecondHasBeenSet; }
    inline void SetReadUnitsPerSecond(long long value) { m_readUnitsPerSecondHasBeenSet = true; m_readUnitsPerSecond = value; }
    inline WarmThroughput& WithReadUnitsPerSecond(long long value) { SetReadUnitsPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the number of write operations your base table can instantaneously
     * support.</p>
     */
    inline long long GetWriteUnitsPerSecond() const { return m_writeUnitsPerSecond; }
    inline bool WriteUnitsPerSecondHasBeenSet() const { return m_writeUnitsPerSecondHasBeenSet; }
    inline void SetWriteUnitsPerSecond(long long value) { m_writeUnitsPerSecondHasBeenSet = true; m_writeUnitsPerSecond = value; }
    inline WarmThroughput& WithWriteUnitsPerSecond(long long value) { SetWriteUnitsPerSecond(value); return *this;}
    ///@}
  private:

    long long m_readUnitsPerSecond{0};
    bool m_readUnitsPerSecondHasBeenSet = false;

    long long m_writeUnitsPerSecond{0};
    bool m_writeUnitsPerSecondHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
