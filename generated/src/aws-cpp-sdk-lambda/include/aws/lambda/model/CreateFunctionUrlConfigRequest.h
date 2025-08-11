/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FunctionUrlAuthType.h>
#include <aws/lambda/model/Cors.h>
#include <aws/lambda/model/InvokeMode.h>
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
  class CreateFunctionUrlConfigRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API CreateFunctionUrlConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFunctionUrlConfig"; }

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
    CreateFunctionUrlConfigRequest& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias name.</p>
     */
    inline const Aws::String& GetQualifier() const { return m_qualifier; }
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
    template<typename QualifierT = Aws::String>
    void SetQualifier(QualifierT&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::forward<QualifierT>(value); }
    template<typename QualifierT = Aws::String>
    CreateFunctionUrlConfigRequest& WithQualifier(QualifierT&& value) { SetQualifier(std::forward<QualifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication that your function URL uses. Set to
     * <code>AWS_IAM</code> if you want to restrict access to authenticated users only.
     * Set to <code>NONE</code> if you want to bypass IAM authentication to create a
     * public endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/urls-auth.html">Security and
     * auth model for Lambda function URLs</a>.</p>
     */
    inline FunctionUrlAuthType GetAuthType() const { return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(FunctionUrlAuthType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline CreateFunctionUrlConfigRequest& WithAuthType(FunctionUrlAuthType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/CORS">cross-origin
     * resource sharing (CORS)</a> settings for your function URL.</p>
     */
    inline const Cors& GetCors() const { return m_cors; }
    inline bool CorsHasBeenSet() const { return m_corsHasBeenSet; }
    template<typename CorsT = Cors>
    void SetCors(CorsT&& value) { m_corsHasBeenSet = true; m_cors = std::forward<CorsT>(value); }
    template<typename CorsT = Cors>
    CreateFunctionUrlConfigRequest& WithCors(CorsT&& value) { SetCors(std::forward<CorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use one of the following options:</p> <ul> <li> <p> <code>BUFFERED</code> –
     * This is the default option. Lambda invokes your function using the
     * <code>Invoke</code> API operation. Invocation results are available when the
     * payload is complete. The maximum payload size is 6 MB.</p> </li> <li> <p>
     * <code>RESPONSE_STREAM</code> – Your function streams payload results as they
     * become available. Lambda invokes your function using the
     * <code>InvokeWithResponseStream</code> API operation. The maximum response
     * payload size is 200 MB.</p> </li> </ul>
     */
    inline InvokeMode GetInvokeMode() const { return m_invokeMode; }
    inline bool InvokeModeHasBeenSet() const { return m_invokeModeHasBeenSet; }
    inline void SetInvokeMode(InvokeMode value) { m_invokeModeHasBeenSet = true; m_invokeMode = value; }
    inline CreateFunctionUrlConfigRequest& WithInvokeMode(InvokeMode value) { SetInvokeMode(value); return *this;}
    ///@}
  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet = false;

    FunctionUrlAuthType m_authType{FunctionUrlAuthType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    Cors m_cors;
    bool m_corsHasBeenSet = false;

    InvokeMode m_invokeMode{InvokeMode::NOT_SET};
    bool m_invokeModeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
