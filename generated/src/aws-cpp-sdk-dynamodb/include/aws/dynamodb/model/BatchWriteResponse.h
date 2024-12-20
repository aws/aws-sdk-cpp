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

  class BatchWriteResponse
  {
  public:
    AWS_DYNAMODB_API BatchWriteResponse();
    AWS_DYNAMODB_API BatchWriteResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BatchWriteResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline double GetConsumedCapacityUnits() const{ return m_consumedCapacityUnits; }
    inline bool ConsumedCapacityUnitsHasBeenSet() const { return m_consumedCapacityUnitsHasBeenSet; }
    inline void SetConsumedCapacityUnits(double value) { m_consumedCapacityUnitsHasBeenSet = true; m_consumedCapacityUnits = value; }
    inline BatchWriteResponse& WithConsumedCapacityUnits(double value) { SetConsumedCapacityUnits(value); return *this;}
    ///@}
  private:

    double m_consumedCapacityUnits;
    bool m_consumedCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
