/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/JSModule.h>
#include <aws/amplifyuibuilder/model/JSTarget.h>
#include <aws/amplifyuibuilder/model/JSScript.h>
#include <aws/amplifyuibuilder/model/ApiConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the code generation job configuration for a React
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ReactStartCodegenJobData">AWS
   * API Reference</a></p>
   */
  class ReactStartCodegenJobData
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ReactStartCodegenJobData() = default;
    AWS_AMPLIFYUIBUILDER_API ReactStartCodegenJobData(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ReactStartCodegenJobData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The JavaScript module type.</p>
     */
    inline JSModule GetModule() const { return m_module; }
    inline bool ModuleHasBeenSet() const { return m_moduleHasBeenSet; }
    inline void SetModule(JSModule value) { m_moduleHasBeenSet = true; m_module = value; }
    inline ReactStartCodegenJobData& WithModule(JSModule value) { SetModule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ECMAScript specification to use.</p>
     */
    inline JSTarget GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(JSTarget value) { m_targetHasBeenSet = true; m_target = value; }
    inline ReactStartCodegenJobData& WithTarget(JSTarget value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file type to use for a JavaScript project.</p>
     */
    inline JSScript GetScript() const { return m_script; }
    inline bool ScriptHasBeenSet() const { return m_scriptHasBeenSet; }
    inline void SetScript(JSScript value) { m_scriptHasBeenSet = true; m_script = value; }
    inline ReactStartCodegenJobData& WithScript(JSScript value) { SetScript(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the code generation job should render type declaration
     * files.</p>
     */
    inline bool GetRenderTypeDeclarations() const { return m_renderTypeDeclarations; }
    inline bool RenderTypeDeclarationsHasBeenSet() const { return m_renderTypeDeclarationsHasBeenSet; }
    inline void SetRenderTypeDeclarations(bool value) { m_renderTypeDeclarationsHasBeenSet = true; m_renderTypeDeclarations = value; }
    inline ReactStartCodegenJobData& WithRenderTypeDeclarations(bool value) { SetRenderTypeDeclarations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the code generation job should render inline source
     * maps.</p>
     */
    inline bool GetInlineSourceMap() const { return m_inlineSourceMap; }
    inline bool InlineSourceMapHasBeenSet() const { return m_inlineSourceMapHasBeenSet; }
    inline void SetInlineSourceMap(bool value) { m_inlineSourceMapHasBeenSet = true; m_inlineSourceMap = value; }
    inline ReactStartCodegenJobData& WithInlineSourceMap(bool value) { SetInlineSourceMap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API configuration for the code generation job.</p>
     */
    inline const ApiConfiguration& GetApiConfiguration() const { return m_apiConfiguration; }
    inline bool ApiConfigurationHasBeenSet() const { return m_apiConfigurationHasBeenSet; }
    template<typename ApiConfigurationT = ApiConfiguration>
    void SetApiConfiguration(ApiConfigurationT&& value) { m_apiConfigurationHasBeenSet = true; m_apiConfiguration = std::forward<ApiConfigurationT>(value); }
    template<typename ApiConfigurationT = ApiConfiguration>
    ReactStartCodegenJobData& WithApiConfiguration(ApiConfigurationT&& value) { SetApiConfiguration(std::forward<ApiConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the dependency packages that may be required for the project code to
     * run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDependencies() const { return m_dependencies; }
    inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }
    template<typename DependenciesT = Aws::Map<Aws::String, Aws::String>>
    void SetDependencies(DependenciesT&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::forward<DependenciesT>(value); }
    template<typename DependenciesT = Aws::Map<Aws::String, Aws::String>>
    ReactStartCodegenJobData& WithDependencies(DependenciesT&& value) { SetDependencies(std::forward<DependenciesT>(value)); return *this;}
    template<typename DependenciesKeyT = Aws::String, typename DependenciesValueT = Aws::String>
    ReactStartCodegenJobData& AddDependencies(DependenciesKeyT&& key, DependenciesValueT&& value) {
      m_dependenciesHasBeenSet = true; m_dependencies.emplace(std::forward<DependenciesKeyT>(key), std::forward<DependenciesValueT>(value)); return *this;
    }
    ///@}
  private:

    JSModule m_module{JSModule::NOT_SET};
    bool m_moduleHasBeenSet = false;

    JSTarget m_target{JSTarget::NOT_SET};
    bool m_targetHasBeenSet = false;

    JSScript m_script{JSScript::NOT_SET};
    bool m_scriptHasBeenSet = false;

    bool m_renderTypeDeclarations{false};
    bool m_renderTypeDeclarationsHasBeenSet = false;

    bool m_inlineSourceMap{false};
    bool m_inlineSourceMapHasBeenSet = false;

    ApiConfiguration m_apiConfiguration;
    bool m_apiConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dependencies;
    bool m_dependenciesHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
