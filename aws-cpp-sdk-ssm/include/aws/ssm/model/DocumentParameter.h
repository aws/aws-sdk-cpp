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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentParameterType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Parameters specified in a System Manager document that run on the server when
   * the command is run. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentParameter">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API DocumentParameter
  {
  public:
    DocumentParameter();
    DocumentParameter(Aws::Utils::Json::JsonView jsonValue);
    DocumentParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline DocumentParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline DocumentParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline DocumentParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of parameter. The type can be either String or StringList.</p>
     */
    inline const DocumentParameterType& GetType() const{ return m_type; }

    /**
     * <p>The type of parameter. The type can be either String or StringList.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of parameter. The type can be either String or StringList.</p>
     */
    inline void SetType(const DocumentParameterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of parameter. The type can be either String or StringList.</p>
     */
    inline void SetType(DocumentParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of parameter. The type can be either String or StringList.</p>
     */
    inline DocumentParameter& WithType(const DocumentParameterType& value) { SetType(value); return *this;}

    /**
     * <p>The type of parameter. The type can be either String or StringList.</p>
     */
    inline DocumentParameter& WithType(DocumentParameterType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A description of what the parameter does, how to use it, the default value,
     * and whether or not the parameter is optional.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of what the parameter does, how to use it, the default value,
     * and whether or not the parameter is optional.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of what the parameter does, how to use it, the default value,
     * and whether or not the parameter is optional.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of what the parameter does, how to use it, the default value,
     * and whether or not the parameter is optional.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of what the parameter does, how to use it, the default value,
     * and whether or not the parameter is optional.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of what the parameter does, how to use it, the default value,
     * and whether or not the parameter is optional.</p>
     */
    inline DocumentParameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of what the parameter does, how to use it, the default value,
     * and whether or not the parameter is optional.</p>
     */
    inline DocumentParameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of what the parameter does, how to use it, the default value,
     * and whether or not the parameter is optional.</p>
     */
    inline DocumentParameter& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>If specified, the default values for the parameters. Parameters without a
     * default value are required. Parameters with a default value are optional.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>If specified, the default values for the parameters. Parameters without a
     * default value are required. Parameters with a default value are optional.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>If specified, the default values for the parameters. Parameters without a
     * default value are required. Parameters with a default value are optional.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>If specified, the default values for the parameters. Parameters without a
     * default value are required. Parameters with a default value are optional.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>If specified, the default values for the parameters. Parameters without a
     * default value are required. Parameters with a default value are optional.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>If specified, the default values for the parameters. Parameters without a
     * default value are required. Parameters with a default value are optional.</p>
     */
    inline DocumentParameter& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>If specified, the default values for the parameters. Parameters without a
     * default value are required. Parameters with a default value are optional.</p>
     */
    inline DocumentParameter& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>If specified, the default values for the parameters. Parameters without a
     * default value are required. Parameters with a default value are optional.</p>
     */
    inline DocumentParameter& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    DocumentParameterType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
