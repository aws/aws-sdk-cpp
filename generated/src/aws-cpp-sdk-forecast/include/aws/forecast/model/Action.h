/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/Operation.h>
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
   * <p>Defines the modifications that you are making to an attribute for a what-if
   * forecast. For example, you can use this operation to create a what-if forecast
   * that investigates a 10% off sale on all shoes. To do this, you specify
   * <code>"AttributeName": "shoes"</code>, <code>"Operation": "MULTIPLY"</code>, and
   * <code>"Value": "0.90"</code>. Pair this operation with the
   * <a>TimeSeriesCondition</a> operation within the
   * <a>CreateWhatIfForecastRequest$TimeSeriesTransformations</a> operation to define
   * a subset of attribute items that are modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/Action">AWS API
   * Reference</a></p>
   */
  class Action
  {
  public:
    AWS_FORECASTSERVICE_API Action();
    AWS_FORECASTSERVICE_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The related time series that you are modifying. This value is case
     * insensitive.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The related time series that you are modifying. This value is case
     * insensitive.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The related time series that you are modifying. This value is case
     * insensitive.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The related time series that you are modifying. This value is case
     * insensitive.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The related time series that you are modifying. This value is case
     * insensitive.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The related time series that you are modifying. This value is case
     * insensitive.</p>
     */
    inline Action& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The related time series that you are modifying. This value is case
     * insensitive.</p>
     */
    inline Action& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The related time series that you are modifying. This value is case
     * insensitive.</p>
     */
    inline Action& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The operation that is applied to the provided attribute. Operations
     * include:</p> <ul> <li> <p> <code>ADD</code> - adds <code>Value</code> to all
     * rows of <code>AttributeName</code>.</p> </li> <li> <p> <code>SUBTRACT</code> -
     * subtracts <code>Value</code> from all rows of <code>AttributeName</code>.</p>
     * </li> <li> <p> <code>MULTIPLY</code> - multiplies all rows of
     * <code>AttributeName</code> by <code>Value</code>.</p> </li> <li> <p>
     * <code>DIVIDE</code> - divides all rows of <code>AttributeName</code> by
     * <code>Value</code>.</p> </li> </ul>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p>The operation that is applied to the provided attribute. Operations
     * include:</p> <ul> <li> <p> <code>ADD</code> - adds <code>Value</code> to all
     * rows of <code>AttributeName</code>.</p> </li> <li> <p> <code>SUBTRACT</code> -
     * subtracts <code>Value</code> from all rows of <code>AttributeName</code>.</p>
     * </li> <li> <p> <code>MULTIPLY</code> - multiplies all rows of
     * <code>AttributeName</code> by <code>Value</code>.</p> </li> <li> <p>
     * <code>DIVIDE</code> - divides all rows of <code>AttributeName</code> by
     * <code>Value</code>.</p> </li> </ul>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The operation that is applied to the provided attribute. Operations
     * include:</p> <ul> <li> <p> <code>ADD</code> - adds <code>Value</code> to all
     * rows of <code>AttributeName</code>.</p> </li> <li> <p> <code>SUBTRACT</code> -
     * subtracts <code>Value</code> from all rows of <code>AttributeName</code>.</p>
     * </li> <li> <p> <code>MULTIPLY</code> - multiplies all rows of
     * <code>AttributeName</code> by <code>Value</code>.</p> </li> <li> <p>
     * <code>DIVIDE</code> - divides all rows of <code>AttributeName</code> by
     * <code>Value</code>.</p> </li> </ul>
     */
    inline void SetOperation(const Operation& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The operation that is applied to the provided attribute. Operations
     * include:</p> <ul> <li> <p> <code>ADD</code> - adds <code>Value</code> to all
     * rows of <code>AttributeName</code>.</p> </li> <li> <p> <code>SUBTRACT</code> -
     * subtracts <code>Value</code> from all rows of <code>AttributeName</code>.</p>
     * </li> <li> <p> <code>MULTIPLY</code> - multiplies all rows of
     * <code>AttributeName</code> by <code>Value</code>.</p> </li> <li> <p>
     * <code>DIVIDE</code> - divides all rows of <code>AttributeName</code> by
     * <code>Value</code>.</p> </li> </ul>
     */
    inline void SetOperation(Operation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The operation that is applied to the provided attribute. Operations
     * include:</p> <ul> <li> <p> <code>ADD</code> - adds <code>Value</code> to all
     * rows of <code>AttributeName</code>.</p> </li> <li> <p> <code>SUBTRACT</code> -
     * subtracts <code>Value</code> from all rows of <code>AttributeName</code>.</p>
     * </li> <li> <p> <code>MULTIPLY</code> - multiplies all rows of
     * <code>AttributeName</code> by <code>Value</code>.</p> </li> <li> <p>
     * <code>DIVIDE</code> - divides all rows of <code>AttributeName</code> by
     * <code>Value</code>.</p> </li> </ul>
     */
    inline Action& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p>The operation that is applied to the provided attribute. Operations
     * include:</p> <ul> <li> <p> <code>ADD</code> - adds <code>Value</code> to all
     * rows of <code>AttributeName</code>.</p> </li> <li> <p> <code>SUBTRACT</code> -
     * subtracts <code>Value</code> from all rows of <code>AttributeName</code>.</p>
     * </li> <li> <p> <code>MULTIPLY</code> - multiplies all rows of
     * <code>AttributeName</code> by <code>Value</code>.</p> </li> <li> <p>
     * <code>DIVIDE</code> - divides all rows of <code>AttributeName</code> by
     * <code>Value</code>.</p> </li> </ul>
     */
    inline Action& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}


    /**
     * <p>The value that is applied for the chosen <code>Operation</code>.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value that is applied for the chosen <code>Operation</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value that is applied for the chosen <code>Operation</code>.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value that is applied for the chosen <code>Operation</code>.</p>
     */
    inline Action& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Operation m_operation;
    bool m_operationHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
