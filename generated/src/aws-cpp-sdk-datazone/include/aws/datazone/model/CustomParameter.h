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
    AWS_DATAZONE_API CustomParameter();
    AWS_DATAZONE_API CustomParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API CustomParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default value of the parameter.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value of the parameter.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value of the parameter.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value of the parameter.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value of the parameter.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value of the parameter.</p>
     */
    inline CustomParameter& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value of the parameter.</p>
     */
    inline CustomParameter& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value of the parameter.</p>
     */
    inline CustomParameter& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the parameter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the parameter.</p>
     */
    inline CustomParameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the parameter.</p>
     */
    inline CustomParameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the parameter.</p>
     */
    inline CustomParameter& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The filed type of the parameter.</p>
     */
    inline const Aws::String& GetFieldType() const{ return m_fieldType; }

    /**
     * <p>The filed type of the parameter.</p>
     */
    inline bool FieldTypeHasBeenSet() const { return m_fieldTypeHasBeenSet; }

    /**
     * <p>The filed type of the parameter.</p>
     */
    inline void SetFieldType(const Aws::String& value) { m_fieldTypeHasBeenSet = true; m_fieldType = value; }

    /**
     * <p>The filed type of the parameter.</p>
     */
    inline void SetFieldType(Aws::String&& value) { m_fieldTypeHasBeenSet = true; m_fieldType = std::move(value); }

    /**
     * <p>The filed type of the parameter.</p>
     */
    inline void SetFieldType(const char* value) { m_fieldTypeHasBeenSet = true; m_fieldType.assign(value); }

    /**
     * <p>The filed type of the parameter.</p>
     */
    inline CustomParameter& WithFieldType(const Aws::String& value) { SetFieldType(value); return *this;}

    /**
     * <p>The filed type of the parameter.</p>
     */
    inline CustomParameter& WithFieldType(Aws::String&& value) { SetFieldType(std::move(value)); return *this;}

    /**
     * <p>The filed type of the parameter.</p>
     */
    inline CustomParameter& WithFieldType(const char* value) { SetFieldType(value); return *this;}


    /**
     * <p>Specifies whether the parameter is editable.</p>
     */
    inline bool GetIsEditable() const{ return m_isEditable; }

    /**
     * <p>Specifies whether the parameter is editable.</p>
     */
    inline bool IsEditableHasBeenSet() const { return m_isEditableHasBeenSet; }

    /**
     * <p>Specifies whether the parameter is editable.</p>
     */
    inline void SetIsEditable(bool value) { m_isEditableHasBeenSet = true; m_isEditable = value; }

    /**
     * <p>Specifies whether the parameter is editable.</p>
     */
    inline CustomParameter& WithIsEditable(bool value) { SetIsEditable(value); return *this;}


    /**
     * <p>Specifies whether the custom parameter is optional.</p>
     */
    inline bool GetIsOptional() const{ return m_isOptional; }

    /**
     * <p>Specifies whether the custom parameter is optional.</p>
     */
    inline bool IsOptionalHasBeenSet() const { return m_isOptionalHasBeenSet; }

    /**
     * <p>Specifies whether the custom parameter is optional.</p>
     */
    inline void SetIsOptional(bool value) { m_isOptionalHasBeenSet = true; m_isOptional = value; }

    /**
     * <p>Specifies whether the custom parameter is optional.</p>
     */
    inline CustomParameter& WithIsOptional(bool value) { SetIsOptional(value); return *this;}


    /**
     * <p>The key name of the parameter.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The key name of the parameter.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>The key name of the parameter.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>The key name of the parameter.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>The key name of the parameter.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>The key name of the parameter.</p>
     */
    inline CustomParameter& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The key name of the parameter.</p>
     */
    inline CustomParameter& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The key name of the parameter.</p>
     */
    inline CustomParameter& WithKeyName(const char* value) { SetKeyName(value); return *this;}

  private:

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_fieldType;
    bool m_fieldTypeHasBeenSet = false;

    bool m_isEditable;
    bool m_isEditableHasBeenSet = false;

    bool m_isOptional;
    bool m_isOptionalHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
