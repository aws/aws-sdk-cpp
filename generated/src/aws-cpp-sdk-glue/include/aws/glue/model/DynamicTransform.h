/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/TransformConfigParameter.h>
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
   * <p>Specifies the set of parameters needed to perform the dynamic
   * transform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DynamicTransform">AWS
   * API Reference</a></p>
   */
  class DynamicTransform
  {
  public:
    AWS_GLUE_API DynamicTransform();
    AWS_GLUE_API DynamicTransform(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DynamicTransform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the name of the dynamic transform.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DynamicTransform& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DynamicTransform& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DynamicTransform& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the dynamic transform as it appears in the Glue Studio
     * visual editor.</p>
     */
    inline const Aws::String& GetTransformName() const{ return m_transformName; }
    inline bool TransformNameHasBeenSet() const { return m_transformNameHasBeenSet; }
    inline void SetTransformName(const Aws::String& value) { m_transformNameHasBeenSet = true; m_transformName = value; }
    inline void SetTransformName(Aws::String&& value) { m_transformNameHasBeenSet = true; m_transformName = std::move(value); }
    inline void SetTransformName(const char* value) { m_transformNameHasBeenSet = true; m_transformName.assign(value); }
    inline DynamicTransform& WithTransformName(const Aws::String& value) { SetTransformName(value); return *this;}
    inline DynamicTransform& WithTransformName(Aws::String&& value) { SetTransformName(std::move(value)); return *this;}
    inline DynamicTransform& WithTransformName(const char* value) { SetTransformName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the inputs for the dynamic transform that are required.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline DynamicTransform& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}
    inline DynamicTransform& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}
    inline DynamicTransform& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline DynamicTransform& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    inline DynamicTransform& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the parameters of the dynamic transform.</p>
     */
    inline const Aws::Vector<TransformConfigParameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<TransformConfigParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<TransformConfigParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline DynamicTransform& WithParameters(const Aws::Vector<TransformConfigParameter>& value) { SetParameters(value); return *this;}
    inline DynamicTransform& WithParameters(Aws::Vector<TransformConfigParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline DynamicTransform& AddParameters(const TransformConfigParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline DynamicTransform& AddParameters(TransformConfigParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the function of the dynamic transform.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }
    inline DynamicTransform& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}
    inline DynamicTransform& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}
    inline DynamicTransform& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the path of the dynamic transform source and config files.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline DynamicTransform& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline DynamicTransform& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline DynamicTransform& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is not used and will be deprecated in future release.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline DynamicTransform& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline DynamicTransform& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline DynamicTransform& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the dynamic transform.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }
    inline DynamicTransform& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}
    inline DynamicTransform& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}
    inline DynamicTransform& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }
    inline DynamicTransform& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_transformName;
    bool m_transformNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<TransformConfigParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
