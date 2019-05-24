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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p> Information about a Lambda function specified in a deployment.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/LambdaFunctionInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API LambdaFunctionInfo
  {
  public:
    LambdaFunctionInfo();
    LambdaFunctionInfo(Aws::Utils::Json::JsonView jsonValue);
    LambdaFunctionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of a Lambda function. </p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p> The name of a Lambda function. </p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p> The name of a Lambda function. </p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p> The name of a Lambda function. </p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p> The name of a Lambda function. </p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p> The name of a Lambda function. </p>
     */
    inline LambdaFunctionInfo& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p> The name of a Lambda function. </p>
     */
    inline LambdaFunctionInfo& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p> The name of a Lambda function. </p>
     */
    inline LambdaFunctionInfo& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p> The alias of a Lambda function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
     * to AWS Lambda Aliases</a>. </p>
     */
    inline const Aws::String& GetFunctionAlias() const{ return m_functionAlias; }

    /**
     * <p> The alias of a Lambda function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
     * to AWS Lambda Aliases</a>. </p>
     */
    inline bool FunctionAliasHasBeenSet() const { return m_functionAliasHasBeenSet; }

    /**
     * <p> The alias of a Lambda function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
     * to AWS Lambda Aliases</a>. </p>
     */
    inline void SetFunctionAlias(const Aws::String& value) { m_functionAliasHasBeenSet = true; m_functionAlias = value; }

    /**
     * <p> The alias of a Lambda function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
     * to AWS Lambda Aliases</a>. </p>
     */
    inline void SetFunctionAlias(Aws::String&& value) { m_functionAliasHasBeenSet = true; m_functionAlias = std::move(value); }

    /**
     * <p> The alias of a Lambda function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
     * to AWS Lambda Aliases</a>. </p>
     */
    inline void SetFunctionAlias(const char* value) { m_functionAliasHasBeenSet = true; m_functionAlias.assign(value); }

    /**
     * <p> The alias of a Lambda function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
     * to AWS Lambda Aliases</a>. </p>
     */
    inline LambdaFunctionInfo& WithFunctionAlias(const Aws::String& value) { SetFunctionAlias(value); return *this;}

    /**
     * <p> The alias of a Lambda function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
     * to AWS Lambda Aliases</a>. </p>
     */
    inline LambdaFunctionInfo& WithFunctionAlias(Aws::String&& value) { SetFunctionAlias(std::move(value)); return *this;}

    /**
     * <p> The alias of a Lambda function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
     * to AWS Lambda Aliases</a>. </p>
     */
    inline LambdaFunctionInfo& WithFunctionAlias(const char* value) { SetFunctionAlias(value); return *this;}


    /**
     * <p> The version of a Lambda function that production traffic points to. </p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p> The version of a Lambda function that production traffic points to. </p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p> The version of a Lambda function that production traffic points to. </p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p> The version of a Lambda function that production traffic points to. </p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p> The version of a Lambda function that production traffic points to. </p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * <p> The version of a Lambda function that production traffic points to. </p>
     */
    inline LambdaFunctionInfo& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p> The version of a Lambda function that production traffic points to. </p>
     */
    inline LambdaFunctionInfo& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p> The version of a Lambda function that production traffic points to. </p>
     */
    inline LambdaFunctionInfo& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * <p> The version of a Lambda function that production traffic points to after the
     * Lambda function is deployed. </p>
     */
    inline const Aws::String& GetTargetVersion() const{ return m_targetVersion; }

    /**
     * <p> The version of a Lambda function that production traffic points to after the
     * Lambda function is deployed. </p>
     */
    inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }

    /**
     * <p> The version of a Lambda function that production traffic points to after the
     * Lambda function is deployed. </p>
     */
    inline void SetTargetVersion(const Aws::String& value) { m_targetVersionHasBeenSet = true; m_targetVersion = value; }

    /**
     * <p> The version of a Lambda function that production traffic points to after the
     * Lambda function is deployed. </p>
     */
    inline void SetTargetVersion(Aws::String&& value) { m_targetVersionHasBeenSet = true; m_targetVersion = std::move(value); }

    /**
     * <p> The version of a Lambda function that production traffic points to after the
     * Lambda function is deployed. </p>
     */
    inline void SetTargetVersion(const char* value) { m_targetVersionHasBeenSet = true; m_targetVersion.assign(value); }

    /**
     * <p> The version of a Lambda function that production traffic points to after the
     * Lambda function is deployed. </p>
     */
    inline LambdaFunctionInfo& WithTargetVersion(const Aws::String& value) { SetTargetVersion(value); return *this;}

    /**
     * <p> The version of a Lambda function that production traffic points to after the
     * Lambda function is deployed. </p>
     */
    inline LambdaFunctionInfo& WithTargetVersion(Aws::String&& value) { SetTargetVersion(std::move(value)); return *this;}

    /**
     * <p> The version of a Lambda function that production traffic points to after the
     * Lambda function is deployed. </p>
     */
    inline LambdaFunctionInfo& WithTargetVersion(const char* value) { SetTargetVersion(value); return *this;}


    /**
     * <p> The percentage of production traffic that the target version of a Lambda
     * function receives. </p>
     */
    inline double GetTargetVersionWeight() const{ return m_targetVersionWeight; }

    /**
     * <p> The percentage of production traffic that the target version of a Lambda
     * function receives. </p>
     */
    inline bool TargetVersionWeightHasBeenSet() const { return m_targetVersionWeightHasBeenSet; }

    /**
     * <p> The percentage of production traffic that the target version of a Lambda
     * function receives. </p>
     */
    inline void SetTargetVersionWeight(double value) { m_targetVersionWeightHasBeenSet = true; m_targetVersionWeight = value; }

    /**
     * <p> The percentage of production traffic that the target version of a Lambda
     * function receives. </p>
     */
    inline LambdaFunctionInfo& WithTargetVersionWeight(double value) { SetTargetVersionWeight(value); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    Aws::String m_functionAlias;
    bool m_functionAliasHasBeenSet;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet;

    Aws::String m_targetVersion;
    bool m_targetVersionHasBeenSet;

    double m_targetVersionWeight;
    bool m_targetVersionWeightHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
