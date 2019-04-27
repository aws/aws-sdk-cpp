/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Represents the provisioned throughput settings for a specified table or
   * index. The settings can be modified using the <code>UpdateTable</code>
   * operation.</p> <p>For current minimum and maximum provisioned throughput values,
   * see <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
   * in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ProvisionedThroughput">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API ProvisionedThroughput
  {
  public:
    ProvisionedThroughput();
    ProvisionedThroughput(Aws::Utils::Json::JsonView jsonValue);
    ProvisionedThroughput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p> <p>If read/write capacity mode is <code>PAY_PER_REQUEST</code>
     * the value is set to 0.</p>
     */
    inline long long GetReadCapacityUnits() const{ return m_readCapacityUnits; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p> <p>If read/write capacity mode is <code>PAY_PER_REQUEST</code>
     * the value is set to 0.</p>
     */
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p> <p>If read/write capacity mode is <code>PAY_PER_REQUEST</code>
     * the value is set to 0.</p>
     */
    inline void SetReadCapacityUnits(long long value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p> <p>If read/write capacity mode is <code>PAY_PER_REQUEST</code>
     * the value is set to 0.</p>
     */
    inline ProvisionedThroughput& WithReadCapacityUnits(long long value) { SetReadCapacityUnits(value); return *this;}


    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p> <p>If read/write capacity mode is <code>PAY_PER_REQUEST</code>
     * the value is set to 0.</p>
     */
    inline long long GetWriteCapacityUnits() const{ return m_writeCapacityUnits; }

    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p> <p>If read/write capacity mode is <code>PAY_PER_REQUEST</code>
     * the value is set to 0.</p>
     */
    inline bool WriteCapacityUnitsHasBeenSet() const { return m_writeCapacityUnitsHasBeenSet; }

    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p> <p>If read/write capacity mode is <code>PAY_PER_REQUEST</code>
     * the value is set to 0.</p>
     */
    inline void SetWriteCapacityUnits(long long value) { m_writeCapacityUnitsHasBeenSet = true; m_writeCapacityUnits = value; }

    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p> <p>If read/write capacity mode is <code>PAY_PER_REQUEST</code>
     * the value is set to 0.</p>
     */
    inline ProvisionedThroughput& WithWriteCapacityUnits(long long value) { SetWriteCapacityUnits(value); return *this;}

  private:

    long long m_readCapacityUnits;
    bool m_readCapacityUnitsHasBeenSet;

    long long m_writeCapacityUnits;
    bool m_writeCapacityUnitsHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
