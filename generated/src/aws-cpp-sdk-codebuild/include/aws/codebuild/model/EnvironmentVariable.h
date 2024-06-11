﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/EnvironmentVariableType.h>
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
   * <p>Information about an environment variable for a build project or a
   * build.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/EnvironmentVariable">AWS
   * API Reference</a></p>
   */
  class EnvironmentVariable
  {
  public:
    AWS_CODEBUILD_API EnvironmentVariable();
    AWS_CODEBUILD_API EnvironmentVariable(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API EnvironmentVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name or key of the environment variable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EnvironmentVariable& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EnvironmentVariable& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EnvironmentVariable& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the environment variable.</p>  <p>We strongly
     * discourage the use of <code>PLAINTEXT</code> environment variables to store
     * sensitive values, especially Amazon Web Services secret key IDs.
     * <code>PLAINTEXT</code> environment variables can be displayed in plain text
     * using the CodeBuild console and the CLI. For sensitive values, we recommend you
     * use an environment variable of type <code>PARAMETER_STORE</code> or
     * <code>SECRETS_MANAGER</code>. </p> 
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline EnvironmentVariable& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline EnvironmentVariable& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline EnvironmentVariable& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of environment variable. Valid values include:</p> <ul> <li> <p>
     * <code>PARAMETER_STORE</code>: An environment variable stored in Systems Manager
     * Parameter Store. For environment variables of this type, specify the name of the
     * parameter as the <code>value</code> of the EnvironmentVariable. The parameter
     * value will be substituted for the name at runtime. You can also define Parameter
     * Store environment variables in the buildspec. To learn how to do so, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-spec-ref.html#build-spec.env.parameter-store">env/parameter-store</a>
     * in the <i>CodeBuild User Guide</i>.</p> </li> <li> <p> <code>PLAINTEXT</code>:
     * An environment variable in plain text format. This is the default value.</p>
     * </li> <li> <p> <code>SECRETS_MANAGER</code>: An environment variable stored in
     * Secrets Manager. For environment variables of this type, specify the name of the
     * secret as the <code>value</code> of the EnvironmentVariable. The secret value
     * will be substituted for the name at runtime. You can also define Secrets Manager
     * environment variables in the buildspec. To learn how to do so, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-spec-ref.html#build-spec.env.secrets-manager">env/secrets-manager</a>
     * in the <i>CodeBuild User Guide</i>.</p> </li> </ul>
     */
    inline const EnvironmentVariableType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const EnvironmentVariableType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(EnvironmentVariableType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline EnvironmentVariable& WithType(const EnvironmentVariableType& value) { SetType(value); return *this;}
    inline EnvironmentVariable& WithType(EnvironmentVariableType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    EnvironmentVariableType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
