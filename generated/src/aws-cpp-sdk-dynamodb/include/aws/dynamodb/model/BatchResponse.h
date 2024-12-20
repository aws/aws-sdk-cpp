/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <utility>

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

  class BatchResponse
  {
  public:
    AWS_DYNAMODB_API BatchResponse();
    AWS_DYNAMODB_API BatchResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BatchResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline BatchResponse& WithItems(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { SetItems(value); return *this;}
    inline BatchResponse& WithItems(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { SetItems(std::move(value)); return *this;}
    inline BatchResponse& AddItems(const Aws::Map<Aws::String, AttributeValue>& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline BatchResponse& AddItems(Aws::Map<Aws::String, AttributeValue>&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline double GetConsumedCapacityUnits() const{ return m_consumedCapacityUnits; }
    inline bool ConsumedCapacityUnitsHasBeenSet() const { return m_consumedCapacityUnitsHasBeenSet; }
    inline void SetConsumedCapacityUnits(double value) { m_consumedCapacityUnitsHasBeenSet = true; m_consumedCapacityUnits = value; }
    inline BatchResponse& WithConsumedCapacityUnits(double value) { SetConsumedCapacityUnits(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Map<Aws::String, AttributeValue>> m_items;
    bool m_itemsHasBeenSet = false;

    double m_consumedCapacityUnits;
    bool m_consumedCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
