/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of user parameters of an environment blueprint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CustomParameter">AWS
   * API Reference</a></p>
   */
  class CustomParameter
  {
  public:
    AWS_DATAZONE_API CustomParameter() = default;
    AWS_DATAZONE_API CustomParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API CustomParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default value of the parameter.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    CustomParameter& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CustomParameter& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filed type of the parameter.</p>
     */
    inline const Aws::String& GetFieldType() const { return m_fieldType; }
    inline bool FieldTypeHasBeenSet() const { return m_fieldTypeHasBeenSet; }
    template<typename FieldTypeT = Aws::String>
    void SetFieldType(FieldTypeT&& value) { m_fieldTypeHasBeenSet = true; m_fieldType = std::forward<FieldTypeT>(value); }
    template<typename FieldTypeT = Aws::String>
    CustomParameter& WithFieldType(FieldTypeT&& value) { SetFieldType(std::forward<FieldTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the parameter is editable.</p>
     */
    inline bool GetIsEditable() const { return m_isEditable; }
    inline bool IsEditableHasBeenSet() const { return m_isEditableHasBeenSet; }
    inline void SetIsEditable(bool value) { m_isEditableHasBeenSet = true; m_isEditable = value; }
    inline CustomParameter& WithIsEditable(bool value) { SetIsEditable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the custom parameter is optional.</p>
     */
    inline bool GetIsOptional() const { return m_isOptional; }
    inline bool IsOptionalHasBeenSet() const { return m_isOptionalHasBeenSet; }
    inline void SetIsOptional(bool value) { m_isOptionalHasBeenSet = true; m_isOptional = value; }
    inline CustomParameter& WithIsOptional(bool value) { SetIsOptional(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a parameter value can be updated after creation. </p>
     */
    inline bool GetIsUpdateSupported() const { return m_isUpdateSupported; }
    inline bool IsUpdateSupportedHasBeenSet() const { return m_isUpdateSupportedHasBeenSet; }
    inline void SetIsUpdateSupported(bool value) { m_isUpdateSupportedHasBeenSet = true; m_isUpdateSupported = value; }
    inline CustomParameter& WithIsUpdateSupported(bool value) { SetIsUpdateSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key name of the parameter.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    CustomParameter& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_fieldType;
    bool m_fieldTypeHasBeenSet = false;

    bool m_isEditable{false};
    bool m_isEditableHasBeenSet = false;

    bool m_isOptional{false};
    bool m_isOptionalHasBeenSet = false;

    bool m_isUpdateSupported{false};
    bool m_isUpdateSupportedHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
