﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RelationalDatabaseParameter
  {
  public:
    AWS_LIGHTSAIL_API RelationalDatabaseParameter();
    AWS_LIGHTSAIL_API RelationalDatabaseParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RelationalDatabaseParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }
    inline RelationalDatabaseParameter& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}
    inline RelationalDatabaseParameter& WithAllowedValues(Aws::String&& value) { SetAllowedValues(std::move(value)); return *this;}
    inline RelationalDatabaseParameter& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when parameter updates are applied.</p> <p>Can be
     * <code>immediate</code> or <code>pending-reboot</code>.</p>
     */
    inline const Aws::String& GetApplyMethod() const{ return m_applyMethod; }
    inline bool ApplyMethodHasBeenSet() const { return m_applyMethodHasBeenSet; }
    inline void SetApplyMethod(const Aws::String& value) { m_applyMethodHasBeenSet = true; m_applyMethod = value; }
    inline void SetApplyMethod(Aws::String&& value) { m_applyMethodHasBeenSet = true; m_applyMethod = std::move(value); }
    inline void SetApplyMethod(const char* value) { m_applyMethodHasBeenSet = true; m_applyMethod.assign(value); }
    inline RelationalDatabaseParameter& WithApplyMethod(const Aws::String& value) { SetApplyMethod(value); return *this;}
    inline RelationalDatabaseParameter& WithApplyMethod(Aws::String&& value) { SetApplyMethod(std::move(value)); return *this;}
    inline RelationalDatabaseParameter& WithApplyMethod(const char* value) { SetApplyMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the engine-specific parameter type.</p>
     */
    inline const Aws::String& GetApplyType() const{ return m_applyType; }
    inline bool ApplyTypeHasBeenSet() const { return m_applyTypeHasBeenSet; }
    inline void SetApplyType(const Aws::String& value) { m_applyTypeHasBeenSet = true; m_applyType = value; }
    inline void SetApplyType(Aws::String&& value) { m_applyTypeHasBeenSet = true; m_applyType = std::move(value); }
    inline void SetApplyType(const char* value) { m_applyTypeHasBeenSet = true; m_applyType.assign(value); }
    inline RelationalDatabaseParameter& WithApplyType(const Aws::String& value) { SetApplyType(value); return *this;}
    inline RelationalDatabaseParameter& WithApplyType(Aws::String&& value) { SetApplyType(std::move(value)); return *this;}
    inline RelationalDatabaseParameter& WithApplyType(const char* value) { SetApplyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }
    inline RelationalDatabaseParameter& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}
    inline RelationalDatabaseParameter& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}
    inline RelationalDatabaseParameter& WithDataType(const char* value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RelationalDatabaseParameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RelationalDatabaseParameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RelationalDatabaseParameter& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the parameter can be modified.</p>
     */
    inline bool GetIsModifiable() const{ return m_isModifiable; }
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }
    inline void SetIsModifiable(bool value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }
    inline RelationalDatabaseParameter& WithIsModifiable(bool value) { SetIsModifiable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }
    inline RelationalDatabaseParameter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}
    inline RelationalDatabaseParameter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}
    inline RelationalDatabaseParameter& WithParameterName(const char* value) { SetParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }
    inline RelationalDatabaseParameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}
    inline RelationalDatabaseParameter& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}
    inline RelationalDatabaseParameter& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}
    ///@}
  private:

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    Aws::String m_applyMethod;
    bool m_applyMethodHasBeenSet = false;

    Aws::String m_applyType;
    bool m_applyTypeHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isModifiable;
    bool m_isModifiableHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
