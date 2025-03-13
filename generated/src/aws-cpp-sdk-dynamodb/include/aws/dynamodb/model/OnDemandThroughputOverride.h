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
   * <p>Overrides the on-demand throughput settings for this replica table. If you
   * don't specify a value for this parameter, it uses the source table's on-demand
   * throughput settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/OnDemandThroughputOverride">AWS
   * API Reference</a></p>
   */
  class OnDemandThroughputOverride
  {
  public:
    AWS_DYNAMODB_API OnDemandThroughputOverride() = default;
    AWS_DYNAMODB_API OnDemandThroughputOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API OnDemandThroughputOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Maximum number of read request units for the specified replica table.</p>
     */
    inline long long GetMaxReadRequestUnits() const { return m_maxReadRequestUnits; }
    inline bool MaxReadRequestUnitsHasBeenSet() const { return m_maxReadRequestUnitsHasBeenSet; }
    inline void SetMaxReadRequestUnits(long long value) { m_maxReadRequestUnitsHasBeenSet = true; m_maxReadRequestUnits = value; }
    inline OnDemandThroughputOverride& WithMaxReadRequestUnits(long long value) { SetMaxReadRequestUnits(value); return *this;}
    ///@}
  private:

    long long m_maxReadRequestUnits{0};
    bool m_maxReadRequestUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
