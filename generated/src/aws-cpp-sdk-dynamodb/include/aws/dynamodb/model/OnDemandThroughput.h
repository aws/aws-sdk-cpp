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
   * <p>Sets the maximum number of read and write units for the specified on-demand
   * table. If you use this parameter, you must specify
   * <code>MaxReadRequestUnits</code>, <code>MaxWriteRequestUnits</code>, or
   * both.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/OnDemandThroughput">AWS
   * API Reference</a></p>
   */
  class OnDemandThroughput
  {
  public:
    AWS_DYNAMODB_API OnDemandThroughput() = default;
    AWS_DYNAMODB_API OnDemandThroughput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API OnDemandThroughput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Maximum number of read request units for the specified table.</p> <p>To
     * specify a maximum <code>OnDemandThroughput</code> on your table, set the value
     * of <code>MaxReadRequestUnits</code> as greater than or equal to 1. To remove the
     * maximum <code>OnDemandThroughput</code> that is currently set on your table, set
     * the value of <code>MaxReadRequestUnits</code> to -1.</p>
     */
    inline long long GetMaxReadRequestUnits() const { return m_maxReadRequestUnits; }
    inline bool MaxReadRequestUnitsHasBeenSet() const { return m_maxReadRequestUnitsHasBeenSet; }
    inline void SetMaxReadRequestUnits(long long value) { m_maxReadRequestUnitsHasBeenSet = true; m_maxReadRequestUnits = value; }
    inline OnDemandThroughput& WithMaxReadRequestUnits(long long value) { SetMaxReadRequestUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of write request units for the specified table.</p> <p>To
     * specify a maximum <code>OnDemandThroughput</code> on your table, set the value
     * of <code>MaxWriteRequestUnits</code> as greater than or equal to 1. To remove
     * the maximum <code>OnDemandThroughput</code> that is currently set on your table,
     * set the value of <code>MaxWriteRequestUnits</code> to -1.</p>
     */
    inline long long GetMaxWriteRequestUnits() const { return m_maxWriteRequestUnits; }
    inline bool MaxWriteRequestUnitsHasBeenSet() const { return m_maxWriteRequestUnitsHasBeenSet; }
    inline void SetMaxWriteRequestUnits(long long value) { m_maxWriteRequestUnitsHasBeenSet = true; m_maxWriteRequestUnits = value; }
    inline OnDemandThroughput& WithMaxWriteRequestUnits(long long value) { SetMaxWriteRequestUnits(value); return *this;}
    ///@}
  private:

    long long m_maxReadRequestUnits{0};
    bool m_maxReadRequestUnitsHasBeenSet = false;

    long long m_maxWriteRequestUnits{0};
    bool m_maxWriteRequestUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
