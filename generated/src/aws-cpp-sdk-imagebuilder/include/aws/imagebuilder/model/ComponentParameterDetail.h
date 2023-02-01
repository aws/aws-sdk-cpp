/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Defines a parameter that is used to provide configuration details for the
   * component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ComponentParameterDetail">AWS
   * API Reference</a></p>
   */
  class ComponentParameterDetail
  {
  public:
    AWS_IMAGEBUILDER_API ComponentParameterDetail();
    AWS_IMAGEBUILDER_API ComponentParameterDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ComponentParameterDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of this input parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this input parameter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this input parameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this input parameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this input parameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this input parameter.</p>
     */
    inline ComponentParameterDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this input parameter.</p>
     */
    inline ComponentParameterDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this input parameter.</p>
     */
    inline ComponentParameterDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of input this parameter provides. The currently supported value is
     * "string".</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of input this parameter provides. The currently supported value is
     * "string".</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of input this parameter provides. The currently supported value is
     * "string".</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of input this parameter provides. The currently supported value is
     * "string".</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of input this parameter provides. The currently supported value is
     * "string".</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of input this parameter provides. The currently supported value is
     * "string".</p>
     */
    inline ComponentParameterDetail& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of input this parameter provides. The currently supported value is
     * "string".</p>
     */
    inline ComponentParameterDetail& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of input this parameter provides. The currently supported value is
     * "string".</p>
     */
    inline ComponentParameterDetail& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The default value of this parameter if no input is provided.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value of this parameter if no input is provided.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value of this parameter if no input is provided.</p>
     */
    inline void SetDefaultValue(const Aws::Vector<Aws::String>& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value of this parameter if no input is provided.</p>
     */
    inline void SetDefaultValue(Aws::Vector<Aws::String>&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value of this parameter if no input is provided.</p>
     */
    inline ComponentParameterDetail& WithDefaultValue(const Aws::Vector<Aws::String>& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value of this parameter if no input is provided.</p>
     */
    inline ComponentParameterDetail& WithDefaultValue(Aws::Vector<Aws::String>&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value of this parameter if no input is provided.</p>
     */
    inline ComponentParameterDetail& AddDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(value); return *this; }

    /**
     * <p>The default value of this parameter if no input is provided.</p>
     */
    inline ComponentParameterDetail& AddDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(std::move(value)); return *this; }

    /**
     * <p>The default value of this parameter if no input is provided.</p>
     */
    inline ComponentParameterDetail& AddDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(value); return *this; }


    /**
     * <p>Describes this parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Describes this parameter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Describes this parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Describes this parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Describes this parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Describes this parameter.</p>
     */
    inline ComponentParameterDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Describes this parameter.</p>
     */
    inline ComponentParameterDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Describes this parameter.</p>
     */
    inline ComponentParameterDetail& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
