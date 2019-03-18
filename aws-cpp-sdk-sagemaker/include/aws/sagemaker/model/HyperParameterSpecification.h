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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ParameterType.h>
#include <aws/sagemaker/model/ParameterRange.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines a hyperparameter to be used by an algorithm.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API HyperParameterSpecification
  {
  public:
    HyperParameterSpecification();
    HyperParameterSpecification(Aws::Utils::Json::JsonView jsonValue);
    HyperParameterSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of this hyperparameter. The name must be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this hyperparameter. The name must be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this hyperparameter. The name must be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this hyperparameter. The name must be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this hyperparameter. The name must be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this hyperparameter. The name must be unique.</p>
     */
    inline HyperParameterSpecification& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this hyperparameter. The name must be unique.</p>
     */
    inline HyperParameterSpecification& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this hyperparameter. The name must be unique.</p>
     */
    inline HyperParameterSpecification& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A brief description of the hyperparameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the hyperparameter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the hyperparameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the hyperparameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the hyperparameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the hyperparameter.</p>
     */
    inline HyperParameterSpecification& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the hyperparameter.</p>
     */
    inline HyperParameterSpecification& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the hyperparameter.</p>
     */
    inline HyperParameterSpecification& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of this hyperparameter. The valid types are <code>Integer</code>,
     * <code>Continuous</code>, <code>Categorical</code>, and
     * <code>FreeText</code>.</p>
     */
    inline const ParameterType& GetType() const{ return m_type; }

    /**
     * <p>The type of this hyperparameter. The valid types are <code>Integer</code>,
     * <code>Continuous</code>, <code>Categorical</code>, and
     * <code>FreeText</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of this hyperparameter. The valid types are <code>Integer</code>,
     * <code>Continuous</code>, <code>Categorical</code>, and
     * <code>FreeText</code>.</p>
     */
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of this hyperparameter. The valid types are <code>Integer</code>,
     * <code>Continuous</code>, <code>Categorical</code>, and
     * <code>FreeText</code>.</p>
     */
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of this hyperparameter. The valid types are <code>Integer</code>,
     * <code>Continuous</code>, <code>Categorical</code>, and
     * <code>FreeText</code>.</p>
     */
    inline HyperParameterSpecification& WithType(const ParameterType& value) { SetType(value); return *this;}

    /**
     * <p>The type of this hyperparameter. The valid types are <code>Integer</code>,
     * <code>Continuous</code>, <code>Categorical</code>, and
     * <code>FreeText</code>.</p>
     */
    inline HyperParameterSpecification& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The allowed range for this hyperparameter.</p>
     */
    inline const ParameterRange& GetRange() const{ return m_range; }

    /**
     * <p>The allowed range for this hyperparameter.</p>
     */
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }

    /**
     * <p>The allowed range for this hyperparameter.</p>
     */
    inline void SetRange(const ParameterRange& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * <p>The allowed range for this hyperparameter.</p>
     */
    inline void SetRange(ParameterRange&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }

    /**
     * <p>The allowed range for this hyperparameter.</p>
     */
    inline HyperParameterSpecification& WithRange(const ParameterRange& value) { SetRange(value); return *this;}

    /**
     * <p>The allowed range for this hyperparameter.</p>
     */
    inline HyperParameterSpecification& WithRange(ParameterRange&& value) { SetRange(std::move(value)); return *this;}


    /**
     * <p>Indicates whether this hyperparameter is tunable in a hyperparameter tuning
     * job.</p>
     */
    inline bool GetIsTunable() const{ return m_isTunable; }

    /**
     * <p>Indicates whether this hyperparameter is tunable in a hyperparameter tuning
     * job.</p>
     */
    inline bool IsTunableHasBeenSet() const { return m_isTunableHasBeenSet; }

    /**
     * <p>Indicates whether this hyperparameter is tunable in a hyperparameter tuning
     * job.</p>
     */
    inline void SetIsTunable(bool value) { m_isTunableHasBeenSet = true; m_isTunable = value; }

    /**
     * <p>Indicates whether this hyperparameter is tunable in a hyperparameter tuning
     * job.</p>
     */
    inline HyperParameterSpecification& WithIsTunable(bool value) { SetIsTunable(value); return *this;}


    /**
     * <p>Indicates whether this hyperparameter is required.</p>
     */
    inline bool GetIsRequired() const{ return m_isRequired; }

    /**
     * <p>Indicates whether this hyperparameter is required.</p>
     */
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }

    /**
     * <p>Indicates whether this hyperparameter is required.</p>
     */
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }

    /**
     * <p>Indicates whether this hyperparameter is required.</p>
     */
    inline HyperParameterSpecification& WithIsRequired(bool value) { SetIsRequired(value); return *this;}


    /**
     * <p>The default value for this hyperparameter. If a default value is specified, a
     * hyperparameter cannot be required.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value for this hyperparameter. If a default value is specified, a
     * hyperparameter cannot be required.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value for this hyperparameter. If a default value is specified, a
     * hyperparameter cannot be required.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value for this hyperparameter. If a default value is specified, a
     * hyperparameter cannot be required.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value for this hyperparameter. If a default value is specified, a
     * hyperparameter cannot be required.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value for this hyperparameter. If a default value is specified, a
     * hyperparameter cannot be required.</p>
     */
    inline HyperParameterSpecification& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value for this hyperparameter. If a default value is specified, a
     * hyperparameter cannot be required.</p>
     */
    inline HyperParameterSpecification& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value for this hyperparameter. If a default value is specified, a
     * hyperparameter cannot be required.</p>
     */
    inline HyperParameterSpecification& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ParameterType m_type;
    bool m_typeHasBeenSet;

    ParameterRange m_range;
    bool m_rangeHasBeenSet;

    bool m_isTunable;
    bool m_isTunableHasBeenSet;

    bool m_isRequired;
    bool m_isRequiredHasBeenSet;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
