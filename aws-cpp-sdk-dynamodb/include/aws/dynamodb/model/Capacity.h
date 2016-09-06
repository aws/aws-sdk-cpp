/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the amount of provisioned throughput capacity consumed on a table
   * or an index.</p>
   */
  class AWS_DYNAMODB_API Capacity
  {
  public:
    Capacity();
    Capacity(const Aws::Utils::Json::JsonValue& jsonValue);
    Capacity& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The total number of capacity units consumed on a table or an index.</p>
     */
    inline double GetCapacityUnits() const{ return m_capacityUnits; }

    /**
     * <p>The total number of capacity units consumed on a table or an index.</p>
     */
    inline void SetCapacityUnits(double value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = value; }

    /**
     * <p>The total number of capacity units consumed on a table or an index.</p>
     */
    inline Capacity& WithCapacityUnits(double value) { SetCapacityUnits(value); return *this;}

  private:
    double m_capacityUnits;
    bool m_capacityUnitsHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
