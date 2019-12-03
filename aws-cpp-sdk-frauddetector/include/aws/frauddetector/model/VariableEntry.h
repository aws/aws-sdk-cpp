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
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The variable entry in a list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/VariableEntry">AWS
   * API Reference</a></p>
   */
  class AWS_FRAUDDETECTOR_API VariableEntry
  {
  public:
    VariableEntry();
    VariableEntry(Aws::Utils::Json::JsonView jsonValue);
    VariableEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the variable entry.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the variable entry.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the variable entry.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the variable entry.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the variable entry.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the variable entry.</p>
     */
    inline VariableEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the variable entry.</p>
     */
    inline VariableEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the variable entry.</p>
     */
    inline VariableEntry& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type of the variable entry.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the variable entry.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the variable entry.</p>
     */
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the variable entry.</p>
     */
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the variable entry.</p>
     */
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    /**
     * <p>The data type of the variable entry.</p>
     */
    inline VariableEntry& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the variable entry.</p>
     */
    inline VariableEntry& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}

    /**
     * <p>The data type of the variable entry.</p>
     */
    inline VariableEntry& WithDataType(const char* value) { SetDataType(value); return *this;}


    /**
     * <p>The data source of the variable entry.</p>
     */
    inline const Aws::String& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data source of the variable entry.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The data source of the variable entry.</p>
     */
    inline void SetDataSource(const Aws::String& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The data source of the variable entry.</p>
     */
    inline void SetDataSource(Aws::String&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The data source of the variable entry.</p>
     */
    inline void SetDataSource(const char* value) { m_dataSourceHasBeenSet = true; m_dataSource.assign(value); }

    /**
     * <p>The data source of the variable entry.</p>
     */
    inline VariableEntry& WithDataSource(const Aws::String& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data source of the variable entry.</p>
     */
    inline VariableEntry& WithDataSource(Aws::String&& value) { SetDataSource(std::move(value)); return *this;}

    /**
     * <p>The data source of the variable entry.</p>
     */
    inline VariableEntry& WithDataSource(const char* value) { SetDataSource(value); return *this;}


    /**
     * <p>The default value of the variable entry.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value of the variable entry.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value of the variable entry.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value of the variable entry.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value of the variable entry.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value of the variable entry.</p>
     */
    inline VariableEntry& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value of the variable entry.</p>
     */
    inline VariableEntry& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value of the variable entry.</p>
     */
    inline VariableEntry& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The description of the variable entry.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the variable entry.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the variable entry.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the variable entry.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the variable entry.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the variable entry.</p>
     */
    inline VariableEntry& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the variable entry.</p>
     */
    inline VariableEntry& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the variable entry.</p>
     */
    inline VariableEntry& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of the variable entry.</p>
     */
    inline const Aws::String& GetVariableType() const{ return m_variableType; }

    /**
     * <p>The type of the variable entry.</p>
     */
    inline bool VariableTypeHasBeenSet() const { return m_variableTypeHasBeenSet; }

    /**
     * <p>The type of the variable entry.</p>
     */
    inline void SetVariableType(const Aws::String& value) { m_variableTypeHasBeenSet = true; m_variableType = value; }

    /**
     * <p>The type of the variable entry.</p>
     */
    inline void SetVariableType(Aws::String&& value) { m_variableTypeHasBeenSet = true; m_variableType = std::move(value); }

    /**
     * <p>The type of the variable entry.</p>
     */
    inline void SetVariableType(const char* value) { m_variableTypeHasBeenSet = true; m_variableType.assign(value); }

    /**
     * <p>The type of the variable entry.</p>
     */
    inline VariableEntry& WithVariableType(const Aws::String& value) { SetVariableType(value); return *this;}

    /**
     * <p>The type of the variable entry.</p>
     */
    inline VariableEntry& WithVariableType(Aws::String&& value) { SetVariableType(std::move(value)); return *this;}

    /**
     * <p>The type of the variable entry.</p>
     */
    inline VariableEntry& WithVariableType(const char* value) { SetVariableType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet;

    Aws::String m_dataSource;
    bool m_dataSourceHasBeenSet;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_variableType;
    bool m_variableTypeHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
