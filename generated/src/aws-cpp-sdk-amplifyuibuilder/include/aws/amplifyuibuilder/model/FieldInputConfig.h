/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/ValueMappings.h>
#include <aws/amplifyuibuilder/model/FileUploaderFieldConfig.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the configuration for the default input values to display for a
   * field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FieldInputConfig">AWS
   * API Reference</a></p>
   */
  class FieldInputConfig
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FieldInputConfig();
    AWS_AMPLIFYUIBUILDER_API FieldInputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FieldInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input type for the field. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline FieldInputConfig& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline FieldInputConfig& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline FieldInputConfig& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a field that requires input.</p>
     */
    inline bool GetRequired() const{ return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline FieldInputConfig& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a read only field.</p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }
    inline FieldInputConfig& WithReadOnly(bool value) { SetReadOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text to display as a placeholder for the field.</p>
     */
    inline const Aws::String& GetPlaceholder() const{ return m_placeholder; }
    inline bool PlaceholderHasBeenSet() const { return m_placeholderHasBeenSet; }
    inline void SetPlaceholder(const Aws::String& value) { m_placeholderHasBeenSet = true; m_placeholder = value; }
    inline void SetPlaceholder(Aws::String&& value) { m_placeholderHasBeenSet = true; m_placeholder = std::move(value); }
    inline void SetPlaceholder(const char* value) { m_placeholderHasBeenSet = true; m_placeholder.assign(value); }
    inline FieldInputConfig& WithPlaceholder(const Aws::String& value) { SetPlaceholder(value); return *this;}
    inline FieldInputConfig& WithPlaceholder(Aws::String&& value) { SetPlaceholder(std::move(value)); return *this;}
    inline FieldInputConfig& WithPlaceholder(const char* value) { SetPlaceholder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value for the field.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline FieldInputConfig& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline FieldInputConfig& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline FieldInputConfig& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text to display to describe the field.</p>
     */
    inline const Aws::String& GetDescriptiveText() const{ return m_descriptiveText; }
    inline bool DescriptiveTextHasBeenSet() const { return m_descriptiveTextHasBeenSet; }
    inline void SetDescriptiveText(const Aws::String& value) { m_descriptiveTextHasBeenSet = true; m_descriptiveText = value; }
    inline void SetDescriptiveText(Aws::String&& value) { m_descriptiveTextHasBeenSet = true; m_descriptiveText = std::move(value); }
    inline void SetDescriptiveText(const char* value) { m_descriptiveTextHasBeenSet = true; m_descriptiveText.assign(value); }
    inline FieldInputConfig& WithDescriptiveText(const Aws::String& value) { SetDescriptiveText(value); return *this;}
    inline FieldInputConfig& WithDescriptiveText(Aws::String&& value) { SetDescriptiveText(std::move(value)); return *this;}
    inline FieldInputConfig& WithDescriptiveText(const char* value) { SetDescriptiveText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a field has a default value.</p>
     */
    inline bool GetDefaultChecked() const{ return m_defaultChecked; }
    inline bool DefaultCheckedHasBeenSet() const { return m_defaultCheckedHasBeenSet; }
    inline void SetDefaultChecked(bool value) { m_defaultCheckedHasBeenSet = true; m_defaultChecked = value; }
    inline FieldInputConfig& WithDefaultChecked(bool value) { SetDefaultChecked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default country code for a phone number.</p>
     */
    inline const Aws::String& GetDefaultCountryCode() const{ return m_defaultCountryCode; }
    inline bool DefaultCountryCodeHasBeenSet() const { return m_defaultCountryCodeHasBeenSet; }
    inline void SetDefaultCountryCode(const Aws::String& value) { m_defaultCountryCodeHasBeenSet = true; m_defaultCountryCode = value; }
    inline void SetDefaultCountryCode(Aws::String&& value) { m_defaultCountryCodeHasBeenSet = true; m_defaultCountryCode = std::move(value); }
    inline void SetDefaultCountryCode(const char* value) { m_defaultCountryCodeHasBeenSet = true; m_defaultCountryCode.assign(value); }
    inline FieldInputConfig& WithDefaultCountryCode(const Aws::String& value) { SetDefaultCountryCode(value); return *this;}
    inline FieldInputConfig& WithDefaultCountryCode(Aws::String&& value) { SetDefaultCountryCode(std::move(value)); return *this;}
    inline FieldInputConfig& WithDefaultCountryCode(const char* value) { SetDefaultCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information to use to customize the input fields with data at
     * runtime.</p>
     */
    inline const ValueMappings& GetValueMappings() const{ return m_valueMappings; }
    inline bool ValueMappingsHasBeenSet() const { return m_valueMappingsHasBeenSet; }
    inline void SetValueMappings(const ValueMappings& value) { m_valueMappingsHasBeenSet = true; m_valueMappings = value; }
    inline void SetValueMappings(ValueMappings&& value) { m_valueMappingsHasBeenSet = true; m_valueMappings = std::move(value); }
    inline FieldInputConfig& WithValueMappings(const ValueMappings& value) { SetValueMappings(value); return *this;}
    inline FieldInputConfig& WithValueMappings(ValueMappings&& value) { SetValueMappings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the field.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FieldInputConfig& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FieldInputConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FieldInputConfig& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value to display for the field.</p>
     */
    inline double GetMinValue() const{ return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    inline void SetMinValue(double value) { m_minValueHasBeenSet = true; m_minValue = value; }
    inline FieldInputConfig& WithMinValue(double value) { SetMinValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value to display for the field.</p>
     */
    inline double GetMaxValue() const{ return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    inline void SetMaxValue(double value) { m_maxValueHasBeenSet = true; m_maxValue = value; }
    inline FieldInputConfig& WithMaxValue(double value) { SetMaxValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stepping increment for a numeric value in a field.</p>
     */
    inline double GetStep() const{ return m_step; }
    inline bool StepHasBeenSet() const { return m_stepHasBeenSet; }
    inline void SetStep(double value) { m_stepHasBeenSet = true; m_step = value; }
    inline FieldInputConfig& WithStep(double value) { SetStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the field.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline FieldInputConfig& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline FieldInputConfig& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline FieldInputConfig& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to render the field as an array. This property is ignored
     * if the <code>dataSourceType</code> for the form is a Data Store.</p>
     */
    inline bool GetIsArray() const{ return m_isArray; }
    inline bool IsArrayHasBeenSet() const { return m_isArrayHasBeenSet; }
    inline void SetIsArray(bool value) { m_isArrayHasBeenSet = true; m_isArray = value; }
    inline FieldInputConfig& WithIsArray(bool value) { SetIsArray(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the file uploader field.</p>
     */
    inline const FileUploaderFieldConfig& GetFileUploaderConfig() const{ return m_fileUploaderConfig; }
    inline bool FileUploaderConfigHasBeenSet() const { return m_fileUploaderConfigHasBeenSet; }
    inline void SetFileUploaderConfig(const FileUploaderFieldConfig& value) { m_fileUploaderConfigHasBeenSet = true; m_fileUploaderConfig = value; }
    inline void SetFileUploaderConfig(FileUploaderFieldConfig&& value) { m_fileUploaderConfigHasBeenSet = true; m_fileUploaderConfig = std::move(value); }
    inline FieldInputConfig& WithFileUploaderConfig(const FileUploaderFieldConfig& value) { SetFileUploaderConfig(value); return *this;}
    inline FieldInputConfig& WithFileUploaderConfig(FileUploaderFieldConfig&& value) { SetFileUploaderConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;

    bool m_readOnly;
    bool m_readOnlyHasBeenSet = false;

    Aws::String m_placeholder;
    bool m_placeholderHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_descriptiveText;
    bool m_descriptiveTextHasBeenSet = false;

    bool m_defaultChecked;
    bool m_defaultCheckedHasBeenSet = false;

    Aws::String m_defaultCountryCode;
    bool m_defaultCountryCodeHasBeenSet = false;

    ValueMappings m_valueMappings;
    bool m_valueMappingsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_minValue;
    bool m_minValueHasBeenSet = false;

    double m_maxValue;
    bool m_maxValueHasBeenSet = false;

    double m_step;
    bool m_stepHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_isArray;
    bool m_isArrayHasBeenSet = false;

    FileUploaderFieldConfig m_fileUploaderConfig;
    bool m_fileUploaderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
