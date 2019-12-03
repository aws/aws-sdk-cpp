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
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/DataType.h>
#include <aws/frauddetector/model/DataSource.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class AWS_FRAUDDETECTOR_API CreateVariableRequest : public FraudDetectorRequest
  {
  public:
    CreateVariableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVariable"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the variable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the variable.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the variable.</p>
     */
    inline CreateVariableRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the variable.</p>
     */
    inline CreateVariableRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the variable.</p>
     */
    inline CreateVariableRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type.</p>
     */
    inline const DataType& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type.</p>
     */
    inline void SetDataType(const DataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type.</p>
     */
    inline void SetDataType(DataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type.</p>
     */
    inline CreateVariableRequest& WithDataType(const DataType& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type.</p>
     */
    inline CreateVariableRequest& WithDataType(DataType&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>The source of the data.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The source of the data.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The source of the data.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The source of the data.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The source of the data.</p>
     */
    inline CreateVariableRequest& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The source of the data.</p>
     */
    inline CreateVariableRequest& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline CreateVariableRequest& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline CreateVariableRequest& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value for the variable when no value is received.</p>
     */
    inline CreateVariableRequest& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline CreateVariableRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline CreateVariableRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline CreateVariableRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The variable type.</p>
     */
    inline const Aws::String& GetVariableType() const{ return m_variableType; }

    /**
     * <p>The variable type.</p>
     */
    inline bool VariableTypeHasBeenSet() const { return m_variableTypeHasBeenSet; }

    /**
     * <p>The variable type.</p>
     */
    inline void SetVariableType(const Aws::String& value) { m_variableTypeHasBeenSet = true; m_variableType = value; }

    /**
     * <p>The variable type.</p>
     */
    inline void SetVariableType(Aws::String&& value) { m_variableTypeHasBeenSet = true; m_variableType = std::move(value); }

    /**
     * <p>The variable type.</p>
     */
    inline void SetVariableType(const char* value) { m_variableTypeHasBeenSet = true; m_variableType.assign(value); }

    /**
     * <p>The variable type.</p>
     */
    inline CreateVariableRequest& WithVariableType(const Aws::String& value) { SetVariableType(value); return *this;}

    /**
     * <p>The variable type.</p>
     */
    inline CreateVariableRequest& WithVariableType(Aws::String&& value) { SetVariableType(std::move(value)); return *this;}

    /**
     * <p>The variable type.</p>
     */
    inline CreateVariableRequest& WithVariableType(const char* value) { SetVariableType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    DataType m_dataType;
    bool m_dataTypeHasBeenSet;

    DataSource m_dataSource;
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
