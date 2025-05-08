/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/EnvironmentVariableType.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The environment variables for the action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/EnvironmentVariable">AWS
   * API Reference</a></p>
   */
  class EnvironmentVariable
  {
  public:
    AWS_CODEPIPELINE_API EnvironmentVariable() = default;
    AWS_CODEPIPELINE_API EnvironmentVariable(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API EnvironmentVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment variable name in the key-value pair.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EnvironmentVariable& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variable value in the key-value pair.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    EnvironmentVariable& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of use for the environment variable value. The value can
     * be either <code>PLAINTEXT</code> or <code>SECRETS_MANAGER</code>. If the value
     * is <code>SECRETS_MANAGER</code>, provide the Secrets reference in the
     * EnvironmentVariable value.</p>
     */
    inline EnvironmentVariableType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EnvironmentVariableType value) { m_typeHasBeenSet = true; m_type = value; }
    inline EnvironmentVariable& WithType(EnvironmentVariableType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    EnvironmentVariableType m_type{EnvironmentVariableType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
