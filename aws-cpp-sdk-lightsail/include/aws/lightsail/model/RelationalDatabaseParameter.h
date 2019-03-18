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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the parameters of a database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RelationalDatabaseParameter">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API RelationalDatabaseParameter
  {
  public:
    RelationalDatabaseParameter();
    RelationalDatabaseParameter(Aws::Utils::Json::JsonView jsonValue);
    RelationalDatabaseParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithAllowedValues(Aws::String&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}


    /**
     * <p>Indicates when parameter updates are applied.</p> <p>Can be
     * <code>immediate</code> or <code>pending-reboot</code>.</p>
     */
    inline const Aws::String& GetApplyMethod() const{ return m_applyMethod; }

    /**
     * <p>Indicates when parameter updates are applied.</p> <p>Can be
     * <code>immediate</code> or <code>pending-reboot</code>.</p>
     */
    inline bool ApplyMethodHasBeenSet() const { return m_applyMethodHasBeenSet; }

    /**
     * <p>Indicates when parameter updates are applied.</p> <p>Can be
     * <code>immediate</code> or <code>pending-reboot</code>.</p>
     */
    inline void SetApplyMethod(const Aws::String& value) { m_applyMethodHasBeenSet = true; m_applyMethod = value; }

    /**
     * <p>Indicates when parameter updates are applied.</p> <p>Can be
     * <code>immediate</code> or <code>pending-reboot</code>.</p>
     */
    inline void SetApplyMethod(Aws::String&& value) { m_applyMethodHasBeenSet = true; m_applyMethod = std::move(value); }

    /**
     * <p>Indicates when parameter updates are applied.</p> <p>Can be
     * <code>immediate</code> or <code>pending-reboot</code>.</p>
     */
    inline void SetApplyMethod(const char* value) { m_applyMethodHasBeenSet = true; m_applyMethod.assign(value); }

    /**
     * <p>Indicates when parameter updates are applied.</p> <p>Can be
     * <code>immediate</code> or <code>pending-reboot</code>.</p>
     */
    inline RelationalDatabaseParameter& WithApplyMethod(const Aws::String& value) { SetApplyMethod(value); return *this;}

    /**
     * <p>Indicates when parameter updates are applied.</p> <p>Can be
     * <code>immediate</code> or <code>pending-reboot</code>.</p>
     */
    inline RelationalDatabaseParameter& WithApplyMethod(Aws::String&& value) { SetApplyMethod(std::move(value)); return *this;}

    /**
     * <p>Indicates when parameter updates are applied.</p> <p>Can be
     * <code>immediate</code> or <code>pending-reboot</code>.</p>
     */
    inline RelationalDatabaseParameter& WithApplyMethod(const char* value) { SetApplyMethod(value); return *this;}


    /**
     * <p>Specifies the engine-specific parameter type.</p>
     */
    inline const Aws::String& GetApplyType() const{ return m_applyType; }

    /**
     * <p>Specifies the engine-specific parameter type.</p>
     */
    inline bool ApplyTypeHasBeenSet() const { return m_applyTypeHasBeenSet; }

    /**
     * <p>Specifies the engine-specific parameter type.</p>
     */
    inline void SetApplyType(const Aws::String& value) { m_applyTypeHasBeenSet = true; m_applyType = value; }

    /**
     * <p>Specifies the engine-specific parameter type.</p>
     */
    inline void SetApplyType(Aws::String&& value) { m_applyTypeHasBeenSet = true; m_applyType = std::move(value); }

    /**
     * <p>Specifies the engine-specific parameter type.</p>
     */
    inline void SetApplyType(const char* value) { m_applyTypeHasBeenSet = true; m_applyType.assign(value); }

    /**
     * <p>Specifies the engine-specific parameter type.</p>
     */
    inline RelationalDatabaseParameter& WithApplyType(const Aws::String& value) { SetApplyType(value); return *this;}

    /**
     * <p>Specifies the engine-specific parameter type.</p>
     */
    inline RelationalDatabaseParameter& WithApplyType(Aws::String&& value) { SetApplyType(std::move(value)); return *this;}

    /**
     * <p>Specifies the engine-specific parameter type.</p>
     */
    inline RelationalDatabaseParameter& WithApplyType(const char* value) { SetApplyType(value); return *this;}


    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}

    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithDataType(const char* value) { SetDataType(value); return *this;}


    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A Boolean value indicating whether the parameter can be modified.</p>
     */
    inline bool GetIsModifiable() const{ return m_isModifiable; }

    /**
     * <p>A Boolean value indicating whether the parameter can be modified.</p>
     */
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the parameter can be modified.</p>
     */
    inline void SetIsModifiable(bool value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }

    /**
     * <p>A Boolean value indicating whether the parameter can be modified.</p>
     */
    inline RelationalDatabaseParameter& WithIsModifiable(bool value) { SetIsModifiable(value); return *this;}


    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithParameterName(const char* value) { SetParameterName(value); return *this;}


    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}

    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline RelationalDatabaseParameter& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}

  private:

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet;

    Aws::String m_applyMethod;
    bool m_applyMethodHasBeenSet;

    Aws::String m_applyType;
    bool m_applyTypeHasBeenSet;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_isModifiable;
    bool m_isModifiableHasBeenSet;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
