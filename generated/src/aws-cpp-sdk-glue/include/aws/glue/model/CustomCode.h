/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/GlueSchema.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a transform that uses custom code you provide to perform the data
   * transformation. The output is a collection of DynamicFrames.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CustomCode">AWS API
   * Reference</a></p>
   */
  class CustomCode
  {
  public:
    AWS_GLUE_API CustomCode();
    AWS_GLUE_API CustomCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CustomCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CustomCode& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CustomCode& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CustomCode& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline CustomCode& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}
    inline CustomCode& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}
    inline CustomCode& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline CustomCode& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    inline CustomCode& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom code that is used to perform the data transformation.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline CustomCode& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline CustomCode& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline CustomCode& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name defined for the custom code node class.</p>
     */
    inline const Aws::String& GetClassName() const{ return m_className; }
    inline bool ClassNameHasBeenSet() const { return m_classNameHasBeenSet; }
    inline void SetClassName(const Aws::String& value) { m_classNameHasBeenSet = true; m_className = value; }
    inline void SetClassName(Aws::String&& value) { m_classNameHasBeenSet = true; m_className = std::move(value); }
    inline void SetClassName(const char* value) { m_classNameHasBeenSet = true; m_className.assign(value); }
    inline CustomCode& WithClassName(const Aws::String& value) { SetClassName(value); return *this;}
    inline CustomCode& WithClassName(Aws::String&& value) { SetClassName(std::move(value)); return *this;}
    inline CustomCode& WithClassName(const char* value) { SetClassName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the custom code transform.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }
    inline CustomCode& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}
    inline CustomCode& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}
    inline CustomCode& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }
    inline CustomCode& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_className;
    bool m_classNameHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
