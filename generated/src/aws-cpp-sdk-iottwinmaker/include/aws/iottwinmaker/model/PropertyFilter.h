/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/DataValue.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that filters items returned by a property request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertyFilter">AWS
   * API Reference</a></p>
   */
  class PropertyFilter
  {
  public:
    AWS_IOTTWINMAKER_API PropertyFilter() = default;
    AWS_IOTTWINMAKER_API PropertyFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The property name associated with this property filter.</p>
     */
    inline const Aws::String& GetPropertyName() const { return m_propertyName; }
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }
    template<typename PropertyNameT = Aws::String>
    void SetPropertyName(PropertyNameT&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::forward<PropertyNameT>(value); }
    template<typename PropertyNameT = Aws::String>
    PropertyFilter& WithPropertyName(PropertyNameT&& value) { SetPropertyName(std::forward<PropertyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator associated with this property filter.</p>
     */
    inline const Aws::String& GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    template<typename OperatorT = Aws::String>
    void SetOperator(OperatorT&& value) { m_operatorHasBeenSet = true; m_operator = std::forward<OperatorT>(value); }
    template<typename OperatorT = Aws::String>
    PropertyFilter& WithOperator(OperatorT&& value) { SetOperator(std::forward<OperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value associated with this property filter.</p>
     */
    inline const DataValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = DataValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = DataValue>
    PropertyFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_propertyName;
    bool m_propertyNameHasBeenSet = false;

    Aws::String m_operator;
    bool m_operatorHasBeenSet = false;

    DataValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
