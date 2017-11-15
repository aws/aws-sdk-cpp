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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InventoryAggregator.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Specifies the inventory type and attribute for the aggregation
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryAggregator">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InventoryAggregator
  {
  public:
    InventoryAggregator();
    InventoryAggregator(const Aws::Utils::Json::JsonValue& jsonValue);
    InventoryAggregator& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The inventory type and attribute name for aggregation.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The inventory type and attribute name for aggregation.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The inventory type and attribute name for aggregation.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The inventory type and attribute name for aggregation.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The inventory type and attribute name for aggregation.</p>
     */
    inline InventoryAggregator& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The inventory type and attribute name for aggregation.</p>
     */
    inline InventoryAggregator& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The inventory type and attribute name for aggregation.</p>
     */
    inline InventoryAggregator& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>Nested aggregators to further refine aggregation for an inventory type.</p>
     */
    inline const Aws::Vector<InventoryAggregator>& GetAggregators() const{ return m_aggregators; }

    /**
     * <p>Nested aggregators to further refine aggregation for an inventory type.</p>
     */
    inline void SetAggregators(const Aws::Vector<InventoryAggregator>& value) { m_aggregatorsHasBeenSet = true; m_aggregators = value; }

    /**
     * <p>Nested aggregators to further refine aggregation for an inventory type.</p>
     */
    inline void SetAggregators(Aws::Vector<InventoryAggregator>&& value) { m_aggregatorsHasBeenSet = true; m_aggregators = std::move(value); }

    /**
     * <p>Nested aggregators to further refine aggregation for an inventory type.</p>
     */
    inline InventoryAggregator& WithAggregators(const Aws::Vector<InventoryAggregator>& value) { SetAggregators(value); return *this;}

    /**
     * <p>Nested aggregators to further refine aggregation for an inventory type.</p>
     */
    inline InventoryAggregator& WithAggregators(Aws::Vector<InventoryAggregator>&& value) { SetAggregators(std::move(value)); return *this;}

    /**
     * <p>Nested aggregators to further refine aggregation for an inventory type.</p>
     */
    inline InventoryAggregator& AddAggregators(const InventoryAggregator& value) { m_aggregatorsHasBeenSet = true; m_aggregators.push_back(value); return *this; }

    /**
     * <p>Nested aggregators to further refine aggregation for an inventory type.</p>
     */
    inline InventoryAggregator& AddAggregators(InventoryAggregator&& value) { m_aggregatorsHasBeenSet = true; m_aggregators.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet;

    Aws::Vector<InventoryAggregator> m_aggregators;
    bool m_aggregatorsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
