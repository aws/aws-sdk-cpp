﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/JSModule.h>
#include <aws/amplifyuibuilder/model/JSTarget.h>
#include <aws/amplifyuibuilder/model/JSScript.h>
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
    AWS_AMPLIFYUIBUILDER_API ReactStartCodegenJobData();
    AWS_AMPLIFYUIBUILDER_API ReactStartCodegenJobData(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ReactStartCodegenJobData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The JavaScript module type.</p>
     */
    inline const JSModule& GetModule() const{ return m_module; }

    /**
     * <p>The JavaScript module type.</p>
     */
    inline bool ModuleHasBeenSet() const { return m_moduleHasBeenSet; }

    /**
     * <p>The JavaScript module type.</p>
     */
    inline void SetModule(const JSModule& value) { m_moduleHasBeenSet = true; m_module = value; }

    /**
     * <p>The JavaScript module type.</p>
     */
    inline void SetModule(JSModule&& value) { m_moduleHasBeenSet = true; m_module = std::move(value); }

    /**
     * <p>The JavaScript module type.</p>
     */
    inline ReactStartCodegenJobData& WithModule(const JSModule& value) { SetModule(value); return *this;}

    /**
     * <p>The JavaScript module type.</p>
     */
    inline ReactStartCodegenJobData& WithModule(JSModule&& value) { SetModule(std::move(value)); return *this;}


    /**
     * <p>The ECMAScript specification to use.</p>
     */
    inline const JSTarget& GetTarget() const{ return m_target; }

    /**
     * <p>The ECMAScript specification to use.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The ECMAScript specification to use.</p>
     */
    inline void SetTarget(const JSTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The ECMAScript specification to use.</p>
     */
    inline void SetTarget(JSTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The ECMAScript specification to use.</p>
     */
    inline ReactStartCodegenJobData& WithTarget(const JSTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>The ECMAScript specification to use.</p>
     */
    inline ReactStartCodegenJobData& WithTarget(JSTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>The file type to use for a JavaScript project.</p>
     */
    inline const JSScript& GetScript() const{ return m_script; }

    /**
     * <p>The file type to use for a JavaScript project.</p>
     */
    inline bool ScriptHasBeenSet() const { return m_scriptHasBeenSet; }

    /**
     * <p>The file type to use for a JavaScript project.</p>
     */
    inline void SetScript(const JSScript& value) { m_scriptHasBeenSet = true; m_script = value; }

    /**
     * <p>The file type to use for a JavaScript project.</p>
     */
    inline void SetScript(JSScript&& value) { m_scriptHasBeenSet = true; m_script = std::move(value); }

    /**
     * <p>The file type to use for a JavaScript project.</p>
     */
    inline ReactStartCodegenJobData& WithScript(const JSScript& value) { SetScript(value); return *this;}

    /**
     * <p>The file type to use for a JavaScript project.</p>
     */
    inline ReactStartCodegenJobData& WithScript(JSScript&& value) { SetScript(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the code generation job should render type declaration
     * files.</p>
     */
    inline bool GetRenderTypeDeclarations() const{ return m_renderTypeDeclarations; }

    /**
     * <p>Specifies whether the code generation job should render type declaration
     * files.</p>
     */
    inline bool RenderTypeDeclarationsHasBeenSet() const { return m_renderTypeDeclarationsHasBeenSet; }

    /**
     * <p>Specifies whether the code generation job should render type declaration
     * files.</p>
     */
    inline void SetRenderTypeDeclarations(bool value) { m_renderTypeDeclarationsHasBeenSet = true; m_renderTypeDeclarations = value; }

    /**
     * <p>Specifies whether the code generation job should render type declaration
     * files.</p>
     */
    inline ReactStartCodegenJobData& WithRenderTypeDeclarations(bool value) { SetRenderTypeDeclarations(value); return *this;}


    /**
     * <p>Specifies whether the code generation job should render inline source
     * maps.</p>
     */
    inline bool GetInlineSourceMap() const{ return m_inlineSourceMap; }

    /**
     * <p>Specifies whether the code generation job should render inline source
     * maps.</p>
     */
    inline bool InlineSourceMapHasBeenSet() const { return m_inlineSourceMapHasBeenSet; }

    /**
     * <p>Specifies whether the code generation job should render inline source
     * maps.</p>
     */
    inline void SetInlineSourceMap(bool value) { m_inlineSourceMapHasBeenSet = true; m_inlineSourceMap = value; }

    /**
     * <p>Specifies whether the code generation job should render inline source
     * maps.</p>
     */
    inline ReactStartCodegenJobData& WithInlineSourceMap(bool value) { SetInlineSourceMap(value); return *this;}

  private:

    JSModule m_module;
    bool m_moduleHasBeenSet = false;

    JSTarget m_target;
    bool m_targetHasBeenSet = false;

    JSScript m_script;
    bool m_scriptHasBeenSet = false;

    bool m_renderTypeDeclarations;
    bool m_renderTypeDeclarationsHasBeenSet = false;

    bool m_inlineSourceMap;
    bool m_inlineSourceMapHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
