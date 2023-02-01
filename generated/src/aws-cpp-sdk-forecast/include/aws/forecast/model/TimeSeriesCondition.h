/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/Condition.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Creates a subset of items within an attribute that are modified. For example,
   * you can use this operation to create a subset of items that cost $5 or less. To
   * do this, you specify <code>"AttributeName": "price"</code>,
   * <code>"AttributeValue": "5"</code>, and <code>"Condition": "LESS_THAN"</code>.
   * Pair this operation with the <a>Action</a> operation within the
   * <a>CreateWhatIfForecastRequest$TimeSeriesTransformations</a> operation to define
   * how the attribute is modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/TimeSeriesCondition">AWS
   * API Reference</a></p>
   */
  class TimeSeriesCondition
  {
  public:
    AWS_FORECASTSERVICE_API TimeSeriesCondition();
    AWS_FORECASTSERVICE_API TimeSeriesCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API TimeSeriesCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The item_id, dimension name, IM name, or timestamp that you are
     * modifying.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The item_id, dimension name, IM name, or timestamp that you are
     * modifying.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The item_id, dimension name, IM name, or timestamp that you are
     * modifying.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The item_id, dimension name, IM name, or timestamp that you are
     * modifying.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The item_id, dimension name, IM name, or timestamp that you are
     * modifying.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The item_id, dimension name, IM name, or timestamp that you are
     * modifying.</p>
     */
    inline TimeSeriesCondition& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The item_id, dimension name, IM name, or timestamp that you are
     * modifying.</p>
     */
    inline TimeSeriesCondition& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The item_id, dimension name, IM name, or timestamp that you are
     * modifying.</p>
     */
    inline TimeSeriesCondition& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The value that is applied for the chosen <code>Condition</code>.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The value that is applied for the chosen <code>Condition</code>.</p>
     */
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }

    /**
     * <p>The value that is applied for the chosen <code>Condition</code>.</p>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The value that is applied for the chosen <code>Condition</code>.</p>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }

    /**
     * <p>The value that is applied for the chosen <code>Condition</code>.</p>
     */
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }

    /**
     * <p>The value that is applied for the chosen <code>Condition</code>.</p>
     */
    inline TimeSeriesCondition& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The value that is applied for the chosen <code>Condition</code>.</p>
     */
    inline TimeSeriesCondition& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}

    /**
     * <p>The value that is applied for the chosen <code>Condition</code>.</p>
     */
    inline TimeSeriesCondition& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}


    /**
     * <p>The condition to apply. Valid values are <code>EQUALS</code>,
     * <code>NOT_EQUALS</code>, <code>LESS_THAN</code> and
     * <code>GREATER_THAN</code>.</p>
     */
    inline const Condition& GetCondition() const{ return m_condition; }

    /**
     * <p>The condition to apply. Valid values are <code>EQUALS</code>,
     * <code>NOT_EQUALS</code>, <code>LESS_THAN</code> and
     * <code>GREATER_THAN</code>.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>The condition to apply. Valid values are <code>EQUALS</code>,
     * <code>NOT_EQUALS</code>, <code>LESS_THAN</code> and
     * <code>GREATER_THAN</code>.</p>
     */
    inline void SetCondition(const Condition& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>The condition to apply. Valid values are <code>EQUALS</code>,
     * <code>NOT_EQUALS</code>, <code>LESS_THAN</code> and
     * <code>GREATER_THAN</code>.</p>
     */
    inline void SetCondition(Condition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>The condition to apply. Valid values are <code>EQUALS</code>,
     * <code>NOT_EQUALS</code>, <code>LESS_THAN</code> and
     * <code>GREATER_THAN</code>.</p>
     */
    inline TimeSeriesCondition& WithCondition(const Condition& value) { SetCondition(value); return *this;}

    /**
     * <p>The condition to apply. Valid values are <code>EQUALS</code>,
     * <code>NOT_EQUALS</code>, <code>LESS_THAN</code> and
     * <code>GREATER_THAN</code>.</p>
     */
    inline TimeSeriesCondition& WithCondition(Condition&& value) { SetCondition(std::move(value)); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;

    Condition m_condition;
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
