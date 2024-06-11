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
   * <p>Defines a parameter that's used to provide configuration details for the
   * workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/WorkflowParameterDetail">AWS
   * API Reference</a></p>
   */
  class WorkflowParameterDetail
  {
  public:
    AWS_IMAGEBUILDER_API WorkflowParameterDetail();
    AWS_IMAGEBUILDER_API WorkflowParameterDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API WorkflowParameterDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of this input parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WorkflowParameterDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkflowParameterDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkflowParameterDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of input this parameter provides. The currently supported value is
     * "string".</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline WorkflowParameterDetail& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline WorkflowParameterDetail& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline WorkflowParameterDetail& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value of this parameter if no input is provided.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::Vector<Aws::String>& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::Vector<Aws::String>&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline WorkflowParameterDetail& WithDefaultValue(const Aws::Vector<Aws::String>& value) { SetDefaultValue(value); return *this;}
    inline WorkflowParameterDetail& WithDefaultValue(Aws::Vector<Aws::String>&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline WorkflowParameterDetail& AddDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(value); return *this; }
    inline WorkflowParameterDetail& AddDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(std::move(value)); return *this; }
    inline WorkflowParameterDetail& AddDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes this parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline WorkflowParameterDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WorkflowParameterDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WorkflowParameterDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
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
