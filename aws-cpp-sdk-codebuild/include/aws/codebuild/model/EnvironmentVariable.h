/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEBUILD_API EnvironmentVariable
  {
  public:
    EnvironmentVariable();
    EnvironmentVariable(Aws::Utils::Json::JsonView jsonValue);
    EnvironmentVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name or key of the environment variable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name or key of the environment variable.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name or key of the environment variable.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name or key of the environment variable.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name or key of the environment variable.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name or key of the environment variable.</p>
     */
    inline EnvironmentVariable& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name or key of the environment variable.</p>
     */
    inline EnvironmentVariable& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name or key of the environment variable.</p>
     */
    inline EnvironmentVariable& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the environment variable.</p> <important> <p>We strongly
     * discourage the use of environment variables to store sensitive values,
     * especially AWS secret key IDs and secret access keys. Environment variables can
     * be displayed in plain text using the AWS CodeBuild console and the AWS Command
     * Line Interface (AWS CLI).</p> </important>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the environment variable.</p> <important> <p>We strongly
     * discourage the use of environment variables to store sensitive values,
     * especially AWS secret key IDs and secret access keys. Environment variables can
     * be displayed in plain text using the AWS CodeBuild console and the AWS Command
     * Line Interface (AWS CLI).</p> </important>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the environment variable.</p> <important> <p>We strongly
     * discourage the use of environment variables to store sensitive values,
     * especially AWS secret key IDs and secret access keys. Environment variables can
     * be displayed in plain text using the AWS CodeBuild console and the AWS Command
     * Line Interface (AWS CLI).</p> </important>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the environment variable.</p> <important> <p>We strongly
     * discourage the use of environment variables to store sensitive values,
     * especially AWS secret key IDs and secret access keys. Environment variables can
     * be displayed in plain text using the AWS CodeBuild console and the AWS Command
     * Line Interface (AWS CLI).</p> </important>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the environment variable.</p> <important> <p>We strongly
     * discourage the use of environment variables to store sensitive values,
     * especially AWS secret key IDs and secret access keys. Environment variables can
     * be displayed in plain text using the AWS CodeBuild console and the AWS Command
     * Line Interface (AWS CLI).</p> </important>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the environment variable.</p> <important> <p>We strongly
     * discourage the use of environment variables to store sensitive values,
     * especially AWS secret key IDs and secret access keys. Environment variables can
     * be displayed in plain text using the AWS CodeBuild console and the AWS Command
     * Line Interface (AWS CLI).</p> </important>
     */
    inline EnvironmentVariable& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the environment variable.</p> <important> <p>We strongly
     * discourage the use of environment variables to store sensitive values,
     * especially AWS secret key IDs and secret access keys. Environment variables can
     * be displayed in plain text using the AWS CodeBuild console and the AWS Command
     * Line Interface (AWS CLI).</p> </important>
     */
    inline EnvironmentVariable& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the environment variable.</p> <important> <p>We strongly
     * discourage the use of environment variables to store sensitive values,
     * especially AWS secret key IDs and secret access keys. Environment variables can
     * be displayed in plain text using the AWS CodeBuild console and the AWS Command
     * Line Interface (AWS CLI).</p> </important>
     */
    inline EnvironmentVariable& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The type of environment variable. Valid values include:</p> <ul> <li> <p>
     * <code>PARAMETER_STORE</code>: An environment variable stored in Amazon EC2
     * Systems Manager Parameter Store.</p> </li> <li> <p> <code>PLAINTEXT</code>: An
     * environment variable in plaintext format.</p> </li> </ul>
     */
    inline const EnvironmentVariableType& GetType() const{ return m_type; }

    /**
     * <p>The type of environment variable. Valid values include:</p> <ul> <li> <p>
     * <code>PARAMETER_STORE</code>: An environment variable stored in Amazon EC2
     * Systems Manager Parameter Store.</p> </li> <li> <p> <code>PLAINTEXT</code>: An
     * environment variable in plaintext format.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of environment variable. Valid values include:</p> <ul> <li> <p>
     * <code>PARAMETER_STORE</code>: An environment variable stored in Amazon EC2
     * Systems Manager Parameter Store.</p> </li> <li> <p> <code>PLAINTEXT</code>: An
     * environment variable in plaintext format.</p> </li> </ul>
     */
    inline void SetType(const EnvironmentVariableType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of environment variable. Valid values include:</p> <ul> <li> <p>
     * <code>PARAMETER_STORE</code>: An environment variable stored in Amazon EC2
     * Systems Manager Parameter Store.</p> </li> <li> <p> <code>PLAINTEXT</code>: An
     * environment variable in plaintext format.</p> </li> </ul>
     */
    inline void SetType(EnvironmentVariableType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of environment variable. Valid values include:</p> <ul> <li> <p>
     * <code>PARAMETER_STORE</code>: An environment variable stored in Amazon EC2
     * Systems Manager Parameter Store.</p> </li> <li> <p> <code>PLAINTEXT</code>: An
     * environment variable in plaintext format.</p> </li> </ul>
     */
    inline EnvironmentVariable& WithType(const EnvironmentVariableType& value) { SetType(value); return *this;}

    /**
     * <p>The type of environment variable. Valid values include:</p> <ul> <li> <p>
     * <code>PARAMETER_STORE</code>: An environment variable stored in Amazon EC2
     * Systems Manager Parameter Store.</p> </li> <li> <p> <code>PLAINTEXT</code>: An
     * environment variable in plaintext format.</p> </li> </ul>
     */
    inline EnvironmentVariable& WithType(EnvironmentVariableType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    EnvironmentVariableType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
