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
   * <p>Represents the amount of provisioned throughput capacity consumed on a table
   * or an index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Capacity">AWS
   * API Reference</a></p>
   */
  class Capacity
  {
  public:
    AWS_DYNAMODB_API Capacity();
    AWS_DYNAMODB_API Capacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Capacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of read capacity units consumed on a table or an index.</p>
     */
    inline double GetReadCapacityUnits() const{ return m_readCapacityUnits; }

    /**
     * <p>The total number of read capacity units consumed on a table or an index.</p>
     */
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }

    /**
     * <p>The total number of read capacity units consumed on a table or an index.</p>
     */
    inline void SetReadCapacityUnits(double value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }

    /**
     * <p>The total number of read capacity units consumed on a table or an index.</p>
     */
    inline Capacity& WithReadCapacityUnits(double value) { SetReadCapacityUnits(value); return *this;}


    /**
     * <p>The total number of write capacity units consumed on a table or an index.</p>
     */
    inline double GetWriteCapacityUnits() const{ return m_writeCapacityUnits; }

    /**
     * <p>The total number of write capacity units consumed on a table or an index.</p>
     */
    inline bool WriteCapacityUnitsHasBeenSet() const { return m_writeCapacityUnitsHasBeenSet; }

    /**
     * <p>The total number of write capacity units consumed on a table or an index.</p>
     */
    inline void SetWriteCapacityUnits(double value) { m_writeCapacityUnitsHasBeenSet = true; m_writeCapacityUnits = value; }

    /**
     * <p>The total number of write capacity units consumed on a table or an index.</p>
     */
    inline Capacity& WithWriteCapacityUnits(double value) { SetWriteCapacityUnits(value); return *this;}


    /**
     * <p>The total number of capacity units consumed on a table or an index.</p>
     */
    inline double GetCapacityUnits() const{ return m_capacityUnits; }

    /**
     * <p>The total number of capacity units consumed on a table or an index.</p>
     */
    inline bool CapacityUnitsHasBeenSet() const { return m_capacityUnitsHasBeenSet; }

    /**
     * <p>The total number of capacity units consumed on a table or an index.</p>
     */
    inline void SetCapacityUnits(double value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = value; }

    /**
     * <p>The total number of capacity units consumed on a table or an index.</p>
     */
    inline Capacity& WithCapacityUnits(double value) { SetCapacityUnits(value); return *this;}

  private:

    double m_readCapacityUnits;
    bool m_readCapacityUnitsHasBeenSet = false;

    double m_writeCapacityUnits;
    bool m_writeCapacityUnitsHasBeenSet = false;

    double m_capacityUnits;
    bool m_capacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
