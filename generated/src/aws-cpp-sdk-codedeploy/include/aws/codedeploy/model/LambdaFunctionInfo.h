/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class LambdaFunctionInfo
  {
  public:
    AWS_CODEDEPLOY_API LambdaFunctionInfo();
    AWS_CODEDEPLOY_API LambdaFunctionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API LambdaFunctionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of a Lambda function. </p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }
    inline LambdaFunctionInfo& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}
    inline LambdaFunctionInfo& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}
    inline LambdaFunctionInfo& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The alias of a Lambda function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Lambda
     * Function Aliases</a> in the <i>Lambda Developer Guide</i>.</p>
     */
    inline const Aws::String& GetFunctionAlias() const{ return m_functionAlias; }
    inline bool FunctionAliasHasBeenSet() const { return m_functionAliasHasBeenSet; }
    inline void SetFunctionAlias(const Aws::String& value) { m_functionAliasHasBeenSet = true; m_functionAlias = value; }
    inline void SetFunctionAlias(Aws::String&& value) { m_functionAliasHasBeenSet = true; m_functionAlias = std::move(value); }
    inline void SetFunctionAlias(const char* value) { m_functionAliasHasBeenSet = true; m_functionAlias.assign(value); }
    inline LambdaFunctionInfo& WithFunctionAlias(const Aws::String& value) { SetFunctionAlias(value); return *this;}
    inline LambdaFunctionInfo& WithFunctionAlias(Aws::String&& value) { SetFunctionAlias(std::move(value)); return *this;}
    inline LambdaFunctionInfo& WithFunctionAlias(const char* value) { SetFunctionAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of a Lambda function that production traffic points to. </p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline LambdaFunctionInfo& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline LambdaFunctionInfo& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline LambdaFunctionInfo& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of a Lambda function that production traffic points to after the
     * Lambda function is deployed. </p>
     */
    inline const Aws::String& GetTargetVersion() const{ return m_targetVersion; }
    inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }
    inline void SetTargetVersion(const Aws::String& value) { m_targetVersionHasBeenSet = true; m_targetVersion = value; }
    inline void SetTargetVersion(Aws::String&& value) { m_targetVersionHasBeenSet = true; m_targetVersion = std::move(value); }
    inline void SetTargetVersion(const char* value) { m_targetVersionHasBeenSet = true; m_targetVersion.assign(value); }
    inline LambdaFunctionInfo& WithTargetVersion(const Aws::String& value) { SetTargetVersion(value); return *this;}
    inline LambdaFunctionInfo& WithTargetVersion(Aws::String&& value) { SetTargetVersion(std::move(value)); return *this;}
    inline LambdaFunctionInfo& WithTargetVersion(const char* value) { SetTargetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The percentage of production traffic that the target version of a Lambda
     * function receives. </p>
     */
    inline double GetTargetVersionWeight() const{ return m_targetVersionWeight; }
    inline bool TargetVersionWeightHasBeenSet() const { return m_targetVersionWeightHasBeenSet; }
    inline void SetTargetVersionWeight(double value) { m_targetVersionWeightHasBeenSet = true; m_targetVersionWeight = value; }
    inline LambdaFunctionInfo& WithTargetVersionWeight(double value) { SetTargetVersionWeight(value); return *this;}
    ///@}
  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_functionAlias;
    bool m_functionAliasHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_targetVersion;
    bool m_targetVersionHasBeenSet = false;

    double m_targetVersionWeight;
    bool m_targetVersionWeightHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
