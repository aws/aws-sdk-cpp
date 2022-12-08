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
    AWS_IOTTWINMAKER_API PropertyFilter();
    AWS_IOTTWINMAKER_API PropertyFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The property name associated with this property filter.</p>
     */
    inline const Aws::String& GetPropertyName() const{ return m_propertyName; }

    /**
     * <p>The property name associated with this property filter.</p>
     */
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }

    /**
     * <p>The property name associated with this property filter.</p>
     */
    inline void SetPropertyName(const Aws::String& value) { m_propertyNameHasBeenSet = true; m_propertyName = value; }

    /**
     * <p>The property name associated with this property filter.</p>
     */
    inline void SetPropertyName(Aws::String&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::move(value); }

    /**
     * <p>The property name associated with this property filter.</p>
     */
    inline void SetPropertyName(const char* value) { m_propertyNameHasBeenSet = true; m_propertyName.assign(value); }

    /**
     * <p>The property name associated with this property filter.</p>
     */
    inline PropertyFilter& WithPropertyName(const Aws::String& value) { SetPropertyName(value); return *this;}

    /**
     * <p>The property name associated with this property filter.</p>
     */
    inline PropertyFilter& WithPropertyName(Aws::String&& value) { SetPropertyName(std::move(value)); return *this;}

    /**
     * <p>The property name associated with this property filter.</p>
     */
    inline PropertyFilter& WithPropertyName(const char* value) { SetPropertyName(value); return *this;}


    /**
     * <p>The operator associated with this property filter.</p>
     */
    inline const Aws::String& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator associated with this property filter.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator associated with this property filter.</p>
     */
    inline void SetOperator(const Aws::String& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator associated with this property filter.</p>
     */
    inline void SetOperator(Aws::String&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator associated with this property filter.</p>
     */
    inline void SetOperator(const char* value) { m_operatorHasBeenSet = true; m_operator.assign(value); }

    /**
     * <p>The operator associated with this property filter.</p>
     */
    inline PropertyFilter& WithOperator(const Aws::String& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator associated with this property filter.</p>
     */
    inline PropertyFilter& WithOperator(Aws::String&& value) { SetOperator(std::move(value)); return *this;}

    /**
     * <p>The operator associated with this property filter.</p>
     */
    inline PropertyFilter& WithOperator(const char* value) { SetOperator(value); return *this;}


    /**
     * <p>The value associated with this property filter.</p>
     */
    inline const DataValue& GetValue() const{ return m_value; }

    /**
     * <p>The value associated with this property filter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value associated with this property filter.</p>
     */
    inline void SetValue(const DataValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value associated with this property filter.</p>
     */
    inline void SetValue(DataValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value associated with this property filter.</p>
     */
    inline PropertyFilter& WithValue(const DataValue& value) { SetValue(value); return *this;}

    /**
     * <p>The value associated with this property filter.</p>
     */
    inline PropertyFilter& WithValue(DataValue&& value) { SetValue(std::move(value)); return *this;}

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
