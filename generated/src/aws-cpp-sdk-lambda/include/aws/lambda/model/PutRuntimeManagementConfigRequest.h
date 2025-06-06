﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/UpdateRuntimeOn.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   */
  class PutRuntimeManagementConfigRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API PutRuntimeManagementConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRuntimeManagementConfig"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;

    AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name or ARN of the Lambda function.</p> <p class="title"> <b>Name
     * formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>my-function</code>.</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const { return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    template<typename FunctionNameT = Aws::String>
    void SetFunctionName(FunctionNameT&& value) { m_functionNameHasBeenSet = true; m_functionName = std::forward<FunctionNameT>(value); }
    template<typename FunctionNameT = Aws::String>
    PutRuntimeManagementConfigRequest& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a version of the function. This can be <code>$LATEST</code> or a
     * published version number. If no value is specified, the configuration for the
     * <code>$LATEST</code> version is returned.</p>
     */
    inline const Aws::String& GetQualifier() const { return m_qualifier; }
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
    template<typename QualifierT = Aws::String>
    void SetQualifier(QualifierT&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::forward<QualifierT>(value); }
    template<typename QualifierT = Aws::String>
    PutRuntimeManagementConfigRequest& WithQualifier(QualifierT&& value) { SetQualifier(std::forward<QualifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the runtime update mode.</p> <ul> <li> <p> <b>Auto (default)</b> -
     * Automatically update to the most recent and secure runtime version using a <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/runtimes-update.html#runtime-management-two-phase">Two-phase
     * runtime version rollout</a>. This is the best choice for most customers to
     * ensure they always benefit from runtime updates.</p> </li> <li> <p> <b>Function
     * update</b> - Lambda updates the runtime of your function to the most recent and
     * secure runtime version when you update your function. This approach synchronizes
     * runtime updates with function deployments, giving you control over when runtime
     * updates are applied and allowing you to detect and mitigate rare runtime update
     * incompatibilities early. When using this setting, you need to regularly update
     * your functions to keep their runtime up-to-date.</p> </li> <li> <p>
     * <b>Manual</b> - You specify a runtime version in your function configuration.
     * The function will use this runtime version indefinitely. In the rare case where
     * a new runtime version is incompatible with an existing function, this allows you
     * to roll back your function to an earlier runtime version. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/runtimes-update.html#runtime-management-rollback">Roll
     * back a runtime version</a>.</p> </li> </ul>
     */
    inline UpdateRuntimeOn GetUpdateRuntimeOn() const { return m_updateRuntimeOn; }
    inline bool UpdateRuntimeOnHasBeenSet() const { return m_updateRuntimeOnHasBeenSet; }
    inline void SetUpdateRuntimeOn(UpdateRuntimeOn value) { m_updateRuntimeOnHasBeenSet = true; m_updateRuntimeOn = value; }
    inline PutRuntimeManagementConfigRequest& WithUpdateRuntimeOn(UpdateRuntimeOn value) { SetUpdateRuntimeOn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the runtime version you want the function to use.</p> 
     * <p>This is only required if you're using the <b>Manual</b> runtime update
     * mode.</p> 
     */
    inline const Aws::String& GetRuntimeVersionArn() const { return m_runtimeVersionArn; }
    inline bool RuntimeVersionArnHasBeenSet() const { return m_runtimeVersionArnHasBeenSet; }
    template<typename RuntimeVersionArnT = Aws::String>
    void SetRuntimeVersionArn(RuntimeVersionArnT&& value) { m_runtimeVersionArnHasBeenSet = true; m_runtimeVersionArn = std::forward<RuntimeVersionArnT>(value); }
    template<typename RuntimeVersionArnT = Aws::String>
    PutRuntimeManagementConfigRequest& WithRuntimeVersionArn(RuntimeVersionArnT&& value) { SetRuntimeVersionArn(std::forward<RuntimeVersionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet = false;

    UpdateRuntimeOn m_updateRuntimeOn{UpdateRuntimeOn::NOT_SET};
    bool m_updateRuntimeOnHasBeenSet = false;

    Aws::String m_runtimeVersionArn;
    bool m_runtimeVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
