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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Option settings are the actual settings being applied or configured for that
   * option. It is used when you modify an option group or describe option groups.
   * For example, the NATIVE_NETWORK_ENCRYPTION option has a setting called
   * SQLNET.ENCRYPTION_SERVER that can have several different values.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionSetting">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API OptionSetting
  {
  public:
    OptionSetting();
    OptionSetting(const Aws::Utils::Xml::XmlNode& xmlNode);
    OptionSetting& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the option that has settings that you can set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the option that has settings that you can set.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the option that has settings that you can set.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the option that has settings that you can set.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the option that has settings that you can set.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the option that has settings that you can set.</p>
     */
    inline OptionSetting& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the option that has settings that you can set.</p>
     */
    inline OptionSetting& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the option that has settings that you can set.</p>
     */
    inline OptionSetting& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current value of the option setting.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The current value of the option setting.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The current value of the option setting.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current value of the option setting.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The current value of the option setting.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The current value of the option setting.</p>
     */
    inline OptionSetting& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The current value of the option setting.</p>
     */
    inline OptionSetting& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The current value of the option setting.</p>
     */
    inline OptionSetting& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The default value of the option setting.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value of the option setting.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value of the option setting.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value of the option setting.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value of the option setting.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value of the option setting.</p>
     */
    inline OptionSetting& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value of the option setting.</p>
     */
    inline OptionSetting& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value of the option setting.</p>
     */
    inline OptionSetting& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The description of the option setting.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the option setting.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the option setting.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the option setting.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the option setting.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the option setting.</p>
     */
    inline OptionSetting& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the option setting.</p>
     */
    inline OptionSetting& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the option setting.</p>
     */
    inline OptionSetting& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The DB engine specific parameter type.</p>
     */
    inline const Aws::String& GetApplyType() const{ return m_applyType; }

    /**
     * <p>The DB engine specific parameter type.</p>
     */
    inline bool ApplyTypeHasBeenSet() const { return m_applyTypeHasBeenSet; }

    /**
     * <p>The DB engine specific parameter type.</p>
     */
    inline void SetApplyType(const Aws::String& value) { m_applyTypeHasBeenSet = true; m_applyType = value; }

    /**
     * <p>The DB engine specific parameter type.</p>
     */
    inline void SetApplyType(Aws::String&& value) { m_applyTypeHasBeenSet = true; m_applyType = std::move(value); }

    /**
     * <p>The DB engine specific parameter type.</p>
     */
    inline void SetApplyType(const char* value) { m_applyTypeHasBeenSet = true; m_applyType.assign(value); }

    /**
     * <p>The DB engine specific parameter type.</p>
     */
    inline OptionSetting& WithApplyType(const Aws::String& value) { SetApplyType(value); return *this;}

    /**
     * <p>The DB engine specific parameter type.</p>
     */
    inline OptionSetting& WithApplyType(Aws::String&& value) { SetApplyType(std::move(value)); return *this;}

    /**
     * <p>The DB engine specific parameter type.</p>
     */
    inline OptionSetting& WithApplyType(const char* value) { SetApplyType(value); return *this;}


    /**
     * <p>The data type of the option setting.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the option setting.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the option setting.</p>
     */
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the option setting.</p>
     */
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the option setting.</p>
     */
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    /**
     * <p>The data type of the option setting.</p>
     */
    inline OptionSetting& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the option setting.</p>
     */
    inline OptionSetting& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}

    /**
     * <p>The data type of the option setting.</p>
     */
    inline OptionSetting& WithDataType(const char* value) { SetDataType(value); return *this;}


    /**
     * <p>The allowed values of the option setting.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>The allowed values of the option setting.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>The allowed values of the option setting.</p>
     */
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>The allowed values of the option setting.</p>
     */
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>The allowed values of the option setting.</p>
     */
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }

    /**
     * <p>The allowed values of the option setting.</p>
     */
    inline OptionSetting& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>The allowed values of the option setting.</p>
     */
    inline OptionSetting& WithAllowedValues(Aws::String&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>The allowed values of the option setting.</p>
     */
    inline OptionSetting& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}


    /**
     * <p>A Boolean value that, when true, indicates the option setting can be modified
     * from the default.</p>
     */
    inline bool GetIsModifiable() const{ return m_isModifiable; }

    /**
     * <p>A Boolean value that, when true, indicates the option setting can be modified
     * from the default.</p>
     */
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }

    /**
     * <p>A Boolean value that, when true, indicates the option setting can be modified
     * from the default.</p>
     */
    inline void SetIsModifiable(bool value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }

    /**
     * <p>A Boolean value that, when true, indicates the option setting can be modified
     * from the default.</p>
     */
    inline OptionSetting& WithIsModifiable(bool value) { SetIsModifiable(value); return *this;}


    /**
     * <p>Indicates if the option setting is part of a collection.</p>
     */
    inline bool GetIsCollection() const{ return m_isCollection; }

    /**
     * <p>Indicates if the option setting is part of a collection.</p>
     */
    inline bool IsCollectionHasBeenSet() const { return m_isCollectionHasBeenSet; }

    /**
     * <p>Indicates if the option setting is part of a collection.</p>
     */
    inline void SetIsCollection(bool value) { m_isCollectionHasBeenSet = true; m_isCollection = value; }

    /**
     * <p>Indicates if the option setting is part of a collection.</p>
     */
    inline OptionSetting& WithIsCollection(bool value) { SetIsCollection(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_applyType;
    bool m_applyTypeHasBeenSet;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet;

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet;

    bool m_isModifiable;
    bool m_isModifiableHasBeenSet;

    bool m_isCollection;
    bool m_isCollectionHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
