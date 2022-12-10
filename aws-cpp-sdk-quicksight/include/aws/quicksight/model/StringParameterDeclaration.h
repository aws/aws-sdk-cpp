/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ParameterValueType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/StringDefaultValues.h>
#include <aws/quicksight/model/StringValueWhenUnsetConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A parameter declaration for the <code>String</code> data type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StringParameterDeclaration">AWS
   * API Reference</a></p>
   */
  class StringParameterDeclaration
  {
  public:
    AWS_QUICKSIGHT_API StringParameterDeclaration();
    AWS_QUICKSIGHT_API StringParameterDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StringParameterDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value type determines whether the parameter is a single-value or
     * multi-value parameter.</p>
     */
    inline const ParameterValueType& GetParameterValueType() const{ return m_parameterValueType; }

    /**
     * <p>The value type determines whether the parameter is a single-value or
     * multi-value parameter.</p>
     */
    inline bool ParameterValueTypeHasBeenSet() const { return m_parameterValueTypeHasBeenSet; }

    /**
     * <p>The value type determines whether the parameter is a single-value or
     * multi-value parameter.</p>
     */
    inline void SetParameterValueType(const ParameterValueType& value) { m_parameterValueTypeHasBeenSet = true; m_parameterValueType = value; }

    /**
     * <p>The value type determines whether the parameter is a single-value or
     * multi-value parameter.</p>
     */
    inline void SetParameterValueType(ParameterValueType&& value) { m_parameterValueTypeHasBeenSet = true; m_parameterValueType = std::move(value); }

    /**
     * <p>The value type determines whether the parameter is a single-value or
     * multi-value parameter.</p>
     */
    inline StringParameterDeclaration& WithParameterValueType(const ParameterValueType& value) { SetParameterValueType(value); return *this;}

    /**
     * <p>The value type determines whether the parameter is a single-value or
     * multi-value parameter.</p>
     */
    inline StringParameterDeclaration& WithParameterValueType(ParameterValueType&& value) { SetParameterValueType(std::move(value)); return *this;}


    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline StringParameterDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline StringParameterDeclaration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline StringParameterDeclaration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline const StringDefaultValues& GetDefaultValues() const{ return m_defaultValues; }

    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline bool DefaultValuesHasBeenSet() const { return m_defaultValuesHasBeenSet; }

    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline void SetDefaultValues(const StringDefaultValues& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = value; }

    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline void SetDefaultValues(StringDefaultValues&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = std::move(value); }

    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline StringParameterDeclaration& WithDefaultValues(const StringDefaultValues& value) { SetDefaultValues(value); return *this;}

    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline StringParameterDeclaration& WithDefaultValues(StringDefaultValues&& value) { SetDefaultValues(std::move(value)); return *this;}


    /**
     * <p>The configuration that defines the default value of a <code>String</code>
     * parameter when a value has not been set.</p>
     */
    inline const StringValueWhenUnsetConfiguration& GetValueWhenUnset() const{ return m_valueWhenUnset; }

    /**
     * <p>The configuration that defines the default value of a <code>String</code>
     * parameter when a value has not been set.</p>
     */
    inline bool ValueWhenUnsetHasBeenSet() const { return m_valueWhenUnsetHasBeenSet; }

    /**
     * <p>The configuration that defines the default value of a <code>String</code>
     * parameter when a value has not been set.</p>
     */
    inline void SetValueWhenUnset(const StringValueWhenUnsetConfiguration& value) { m_valueWhenUnsetHasBeenSet = true; m_valueWhenUnset = value; }

    /**
     * <p>The configuration that defines the default value of a <code>String</code>
     * parameter when a value has not been set.</p>
     */
    inline void SetValueWhenUnset(StringValueWhenUnsetConfiguration&& value) { m_valueWhenUnsetHasBeenSet = true; m_valueWhenUnset = std::move(value); }

    /**
     * <p>The configuration that defines the default value of a <code>String</code>
     * parameter when a value has not been set.</p>
     */
    inline StringParameterDeclaration& WithValueWhenUnset(const StringValueWhenUnsetConfiguration& value) { SetValueWhenUnset(value); return *this;}

    /**
     * <p>The configuration that defines the default value of a <code>String</code>
     * parameter when a value has not been set.</p>
     */
    inline StringParameterDeclaration& WithValueWhenUnset(StringValueWhenUnsetConfiguration&& value) { SetValueWhenUnset(std::move(value)); return *this;}

  private:

    ParameterValueType m_parameterValueType;
    bool m_parameterValueTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StringDefaultValues m_defaultValues;
    bool m_defaultValuesHasBeenSet = false;

    StringValueWhenUnsetConfiguration m_valueWhenUnset;
    bool m_valueWhenUnsetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
