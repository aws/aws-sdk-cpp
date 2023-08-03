/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/ReactStartCodegenJobData.h>
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
   * <p>Describes the configuration information for rendering the UI component
   * associated with the code generation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CodegenJobRenderConfig">AWS
   * API Reference</a></p>
   */
  class CodegenJobRenderConfig
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CodegenJobRenderConfig();
    AWS_AMPLIFYUIBUILDER_API CodegenJobRenderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenJobRenderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the <code>ReactStartCodegenJobData</code> object.</p>
     */
    inline const ReactStartCodegenJobData& GetReact() const{ return m_react; }

    /**
     * <p>The name of the <code>ReactStartCodegenJobData</code> object.</p>
     */
    inline bool ReactHasBeenSet() const { return m_reactHasBeenSet; }

    /**
     * <p>The name of the <code>ReactStartCodegenJobData</code> object.</p>
     */
    inline void SetReact(const ReactStartCodegenJobData& value) { m_reactHasBeenSet = true; m_react = value; }

    /**
     * <p>The name of the <code>ReactStartCodegenJobData</code> object.</p>
     */
    inline void SetReact(ReactStartCodegenJobData&& value) { m_reactHasBeenSet = true; m_react = std::move(value); }

    /**
     * <p>The name of the <code>ReactStartCodegenJobData</code> object.</p>
     */
    inline CodegenJobRenderConfig& WithReact(const ReactStartCodegenJobData& value) { SetReact(value); return *this;}

    /**
     * <p>The name of the <code>ReactStartCodegenJobData</code> object.</p>
     */
    inline CodegenJobRenderConfig& WithReact(ReactStartCodegenJobData&& value) { SetReact(std::move(value)); return *this;}

  private:

    ReactStartCodegenJobData m_react;
    bool m_reactHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
