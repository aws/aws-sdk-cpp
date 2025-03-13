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
   * <p>Replica-specific provisioned throughput settings. If not specified, uses the
   * source table's provisioned throughput settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ProvisionedThroughputOverride">AWS
   * API Reference</a></p>
   */
  class ProvisionedThroughputOverride
  {
  public:
    AWS_DYNAMODB_API ProvisionedThroughputOverride() = default;
    AWS_DYNAMODB_API ProvisionedThroughputOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ProvisionedThroughputOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Replica-specific read capacity units. If not specified, uses the source
     * table's read capacity settings.</p>
     */
    inline long long GetReadCapacityUnits() const { return m_readCapacityUnits; }
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }
    inline void SetReadCapacityUnits(long long value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }
    inline ProvisionedThroughputOverride& WithReadCapacityUnits(long long value) { SetReadCapacityUnits(value); return *this;}
    ///@}
  private:

    long long m_readCapacityUnits{0};
    bool m_readCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
