/**
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
    AWS_LIGHTSAIL_API RelationalDatabaseParameter() = default;
    AWS_LIGHTSAIL_API RelationalDatabaseParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RelationalDatabaseParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline const Aws::String& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::String>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::String>
    RelationalDatabaseParameter& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when parameter updates are applied.</p> <p>Can be
     * <code>immediate</code> or <code>pending-reboot</code>.</p>
     */
    inline const Aws::String& GetApplyMethod() const { return m_applyMethod; }
    inline bool ApplyMethodHasBeenSet() const { return m_applyMethodHasBeenSet; }
    template<typename ApplyMethodT = Aws::String>
    void SetApplyMethod(ApplyMethodT&& value) { m_applyMethodHasBeenSet = true; m_applyMethod = std::forward<ApplyMethodT>(value); }
    template<typename ApplyMethodT = Aws::String>
    RelationalDatabaseParameter& WithApplyMethod(ApplyMethodT&& value) { SetApplyMethod(std::forward<ApplyMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the engine-specific parameter type.</p>
     */
    inline const Aws::String& GetApplyType() const { return m_applyType; }
    inline bool ApplyTypeHasBeenSet() const { return m_applyTypeHasBeenSet; }
    template<typename ApplyTypeT = Aws::String>
    void SetApplyType(ApplyTypeT&& value) { m_applyTypeHasBeenSet = true; m_applyType = std::forward<ApplyTypeT>(value); }
    template<typename ApplyTypeT = Aws::String>
    RelationalDatabaseParameter& WithApplyType(ApplyTypeT&& value) { SetApplyType(std::forward<ApplyTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline const Aws::String& GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    template<typename DataTypeT = Aws::String>
    void SetDataType(DataTypeT&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::forward<DataTypeT>(value); }
    template<typename DataTypeT = Aws::String>
    RelationalDatabaseParameter& WithDataType(DataTypeT&& value) { SetDataType(std::forward<DataTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RelationalDatabaseParameter& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the parameter can be modified.</p>
     */
    inline bool GetIsModifiable() const { return m_isModifiable; }
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }
    inline void SetIsModifiable(bool value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }
    inline RelationalDatabaseParameter& WithIsModifiable(bool value) { SetIsModifiable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const { return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    template<typename ParameterNameT = Aws::String>
    void SetParameterName(ParameterNameT&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::forward<ParameterNameT>(value); }
    template<typename ParameterNameT = Aws::String>
    RelationalDatabaseParameter& WithParameterName(ParameterNameT&& value) { SetParameterName(std::forward<ParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const { return m_parameterValue; }
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }
    template<typename ParameterValueT = Aws::String>
    void SetParameterValue(ParameterValueT&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::forward<ParameterValueT>(value); }
    template<typename ParameterValueT = Aws::String>
    RelationalDatabaseParameter& WithParameterValue(ParameterValueT&& value) { SetParameterValue(std::forward<ParameterValueT>(value)); return *this;}
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

    bool m_isModifiable{false};
    bool m_isModifiableHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
