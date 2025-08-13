/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The custom Amazon Web Services Lambda handler within an account
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CustomAccountPoolHandler">AWS
   * API Reference</a></p>
   */
  class CustomAccountPoolHandler
  {
  public:
    AWS_DATAZONE_API CustomAccountPoolHandler() = default;
    AWS_DATAZONE_API CustomAccountPoolHandler(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API CustomAccountPoolHandler& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IAM role that enables Amazon SageMaker Unified Studio to
     * invoke the Amazon Web Services Lambda funtion if the account source is the
     * custom account pool handler.</p>
     */
    inline const Aws::String& GetLambdaExecutionRoleArn() const { return m_lambdaExecutionRoleArn; }
    inline bool LambdaExecutionRoleArnHasBeenSet() const { return m_lambdaExecutionRoleArnHasBeenSet; }
    template<typename LambdaExecutionRoleArnT = Aws::String>
    void SetLambdaExecutionRoleArn(LambdaExecutionRoleArnT&& value) { m_lambdaExecutionRoleArnHasBeenSet = true; m_lambdaExecutionRoleArn = std::forward<LambdaExecutionRoleArnT>(value); }
    template<typename LambdaExecutionRoleArnT = Aws::String>
    CustomAccountPoolHandler& WithLambdaExecutionRoleArn(LambdaExecutionRoleArnT&& value) { SetLambdaExecutionRoleArn(std::forward<LambdaExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Web Services Lambda function for the custom Amazon Web
     * Services Lambda handler.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const { return m_lambdaFunctionArn; }
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
    template<typename LambdaFunctionArnT = Aws::String>
    void SetLambdaFunctionArn(LambdaFunctionArnT&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::forward<LambdaFunctionArnT>(value); }
    template<typename LambdaFunctionArnT = Aws::String>
    CustomAccountPoolHandler& WithLambdaFunctionArn(LambdaFunctionArnT&& value) { SetLambdaFunctionArn(std::forward<LambdaFunctionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lambdaExecutionRoleArn;
    bool m_lambdaExecutionRoleArnHasBeenSet = false;

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
