﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains information about an exported environment variable. </p> <p>Exported
   * environment variables are used in conjunction with CodePipeline to export
   * environment variables from the current build stage to subsequent stages in the
   * pipeline. For more information, see <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/actions-variables.html">Working
   * with variables</a> in the <i>CodePipeline User Guide</i>.</p>  <p> During
   * a build, the value of a variable is available starting with the
   * <code>install</code> phase. It can be updated between the start of the
   * <code>install</code> phase and the end of the <code>post_build</code> phase.
   * After the <code>post_build</code> phase ends, the value of exported variables
   * cannot change.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ExportedEnvironmentVariable">AWS
   * API Reference</a></p>
   */
  class ExportedEnvironmentVariable
  {
  public:
    AWS_CODEBUILD_API ExportedEnvironmentVariable() = default;
    AWS_CODEBUILD_API ExportedEnvironmentVariable(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ExportedEnvironmentVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the exported environment variable.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ExportedEnvironmentVariable& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value assigned to the exported environment variable.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ExportedEnvironmentVariable& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
