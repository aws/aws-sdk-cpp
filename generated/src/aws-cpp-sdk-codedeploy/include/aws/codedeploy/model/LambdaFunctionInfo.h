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
    AWS_CODEDEPLOY_API LambdaFunctionInfo() = default;
    AWS_CODEDEPLOY_API LambdaFunctionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API LambdaFunctionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of a Lambda function. </p>
     */
    inline const Aws::String& GetFunctionName() const { return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    template<typename FunctionNameT = Aws::String>
    void SetFunctionName(FunctionNameT&& value) { m_functionNameHasBeenSet = true; m_functionName = std::forward<FunctionNameT>(value); }
    template<typename FunctionNameT = Aws::String>
    LambdaFunctionInfo& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The alias of a Lambda function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Lambda
     * Function Aliases</a> in the <i>Lambda Developer Guide</i>.</p>
     */
    inline const Aws::String& GetFunctionAlias() const { return m_functionAlias; }
    inline bool FunctionAliasHasBeenSet() const { return m_functionAliasHasBeenSet; }
    template<typename FunctionAliasT = Aws::String>
    void SetFunctionAlias(FunctionAliasT&& value) { m_functionAliasHasBeenSet = true; m_functionAlias = std::forward<FunctionAliasT>(value); }
    template<typename FunctionAliasT = Aws::String>
    LambdaFunctionInfo& WithFunctionAlias(FunctionAliasT&& value) { SetFunctionAlias(std::forward<FunctionAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of a Lambda function that production traffic points to. </p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    LambdaFunctionInfo& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of a Lambda function that production traffic points to after the
     * Lambda function is deployed. </p>
     */
    inline const Aws::String& GetTargetVersion() const { return m_targetVersion; }
    inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }
    template<typename TargetVersionT = Aws::String>
    void SetTargetVersion(TargetVersionT&& value) { m_targetVersionHasBeenSet = true; m_targetVersion = std::forward<TargetVersionT>(value); }
    template<typename TargetVersionT = Aws::String>
    LambdaFunctionInfo& WithTargetVersion(TargetVersionT&& value) { SetTargetVersion(std::forward<TargetVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The percentage of production traffic that the target version of a Lambda
     * function receives. </p>
     */
    inline double GetTargetVersionWeight() const { return m_targetVersionWeight; }
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

    double m_targetVersionWeight{0.0};
    bool m_targetVersionWeightHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
