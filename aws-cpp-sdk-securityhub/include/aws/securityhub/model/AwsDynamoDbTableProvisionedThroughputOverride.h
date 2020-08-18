/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Replica-specific configuration for the provisioned throughput.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableProvisionedThroughputOverride">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsDynamoDbTableProvisionedThroughputOverride
  {
  public:
    AwsDynamoDbTableProvisionedThroughputOverride();
    AwsDynamoDbTableProvisionedThroughputOverride(Aws::Utils::Json::JsonView jsonValue);
    AwsDynamoDbTableProvisionedThroughputOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The read capacity units for the replica.</p>
     */
    inline int GetReadCapacityUnits() const{ return m_readCapacityUnits; }

    /**
     * <p>The read capacity units for the replica.</p>
     */
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }

    /**
     * <p>The read capacity units for the replica.</p>
     */
    inline void SetReadCapacityUnits(int value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }

    /**
     * <p>The read capacity units for the replica.</p>
     */
    inline AwsDynamoDbTableProvisionedThroughputOverride& WithReadCapacityUnits(int value) { SetReadCapacityUnits(value); return *this;}

  private:

    int m_readCapacityUnits;
    bool m_readCapacityUnitsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
