/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetProvisionedConcurrencyConfigRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API GetProvisionedConcurrencyConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProvisionedConcurrencyConfig"; }

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
    GetProvisionedConcurrencyConfigRequest& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number or alias name.</p>
     */
    inline const Aws::String& GetQualifier() const { return m_qualifier; }
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
    template<typename QualifierT = Aws::String>
    void SetQualifier(QualifierT&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::forward<QualifierT>(value); }
    template<typename QualifierT = Aws::String>
    GetProvisionedConcurrencyConfigRequest& WithQualifier(QualifierT&& value) { SetQualifier(std::forward<QualifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
