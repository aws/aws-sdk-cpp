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
    AWS_FORECASTSERVICE_API TimeSeriesCondition() = default;
    AWS_FORECASTSERVICE_API TimeSeriesCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API TimeSeriesCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The item_id, dimension name, IM name, or timestamp that you are
     * modifying.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    TimeSeriesCondition& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that is applied for the chosen <code>Condition</code>.</p>
     */
    inline const Aws::String& GetAttributeValue() const { return m_attributeValue; }
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }
    template<typename AttributeValueT = Aws::String>
    void SetAttributeValue(AttributeValueT&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::forward<AttributeValueT>(value); }
    template<typename AttributeValueT = Aws::String>
    TimeSeriesCondition& WithAttributeValue(AttributeValueT&& value) { SetAttributeValue(std::forward<AttributeValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition to apply. Valid values are <code>EQUALS</code>,
     * <code>NOT_EQUALS</code>, <code>LESS_THAN</code> and
     * <code>GREATER_THAN</code>.</p>
     */
    inline Condition GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(Condition value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline TimeSeriesCondition& WithCondition(Condition value) { SetCondition(value); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;

    Condition m_condition{Condition::NOT_SET};
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
