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
   * <p>Represents the provisioned throughput settings for the specified global
   * secondary index. You must use <code>ProvisionedThroughput</code> or
   * <code>OnDemandThroughput</code> based on your table’s capacity mode.</p> <p>For
   * current minimum and maximum provisioned throughput values, see <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Service,
   * Account, and Table Quotas</a> in the <i>Amazon DynamoDB Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ProvisionedThroughput">AWS
   * API Reference</a></p>
   */
  class ProvisionedThroughput
  {
  public:
    AWS_DYNAMODB_API ProvisionedThroughput() = default;
    AWS_DYNAMODB_API ProvisionedThroughput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ProvisionedThroughput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughput.html">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p> <p>If read/write capacity mode is <code>PAY_PER_REQUEST</code>
     * the value is set to 0.</p>
     */
    inline long long GetReadCapacityUnits() const { return m_readCapacityUnits; }
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }
    inline void SetReadCapacityUnits(long long value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }
    inline ProvisionedThroughput& WithReadCapacityUnits(long long value) { SetReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughput.html">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p> <p>If read/write capacity mode is <code>PAY_PER_REQUEST</code>
     * the value is set to 0.</p>
     */
    inline long long GetWriteCapacityUnits() const { return m_writeCapacityUnits; }
    inline bool WriteCapacityUnitsHasBeenSet() const { return m_writeCapacityUnitsHasBeenSet; }
    inline void SetWriteCapacityUnits(long long value) { m_writeCapacityUnitsHasBeenSet = true; m_writeCapacityUnits = value; }
    inline ProvisionedThroughput& WithWriteCapacityUnits(long long value) { SetWriteCapacityUnits(value); return *this;}
    ///@}
  private:

    long long m_readCapacityUnits{0};
    bool m_readCapacityUnitsHasBeenSet = false;

    long long m_writeCapacityUnits{0};
    bool m_writeCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
