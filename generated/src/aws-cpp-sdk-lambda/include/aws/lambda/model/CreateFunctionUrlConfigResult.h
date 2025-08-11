/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FunctionUrlAuthType.h>
#include <aws/lambda/model/Cors.h>
#include <aws/lambda/model/InvokeMode.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{
  class CreateFunctionUrlConfigResult
  {
  public:
    AWS_LAMBDA_API CreateFunctionUrlConfigResult() = default;
    AWS_LAMBDA_API CreateFunctionUrlConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API CreateFunctionUrlConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP URL endpoint for your function.</p>
     */
    inline const Aws::String& GetFunctionUrl() const { return m_functionUrl; }
    template<typename FunctionUrlT = Aws::String>
    void SetFunctionUrl(FunctionUrlT&& value) { m_functionUrlHasBeenSet = true; m_functionUrl = std::forward<FunctionUrlT>(value); }
    template<typename FunctionUrlT = Aws::String>
    CreateFunctionUrlConfigResult& WithFunctionUrl(FunctionUrlT&& value) { SetFunctionUrl(std::forward<FunctionUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of your function.</p>
     */
    inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
    template<typename FunctionArnT = Aws::String>
    void SetFunctionArn(FunctionArnT&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::forward<FunctionArnT>(value); }
    template<typename FunctionArnT = Aws::String>
    CreateFunctionUrlConfigResult& WithFunctionArn(FunctionArnT&& value) { SetFunctionArn(std::forward<FunctionArnT>(value)); return *this;}
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
    inline void SetAuthType(FunctionUrlAuthType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline CreateFunctionUrlConfigResult& WithAuthType(FunctionUrlAuthType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/CORS">cross-origin
     * resource sharing (CORS)</a> settings for your function URL.</p>
     */
    inline const Cors& GetCors() const { return m_cors; }
    template<typename CorsT = Cors>
    void SetCors(CorsT&& value) { m_corsHasBeenSet = true; m_cors = std::forward<CorsT>(value); }
    template<typename CorsT = Cors>
    CreateFunctionUrlConfigResult& WithCors(CorsT&& value) { SetCors(std::forward<CorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the function URL was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    CreateFunctionUrlConfigResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    inline void SetInvokeMode(InvokeMode value) { m_invokeModeHasBeenSet = true; m_invokeMode = value; }
    inline CreateFunctionUrlConfigResult& WithInvokeMode(InvokeMode value) { SetInvokeMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateFunctionUrlConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionUrl;
    bool m_functionUrlHasBeenSet = false;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    FunctionUrlAuthType m_authType{FunctionUrlAuthType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    Cors m_cors;
    bool m_corsHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    InvokeMode m_invokeMode{InvokeMode::NOT_SET};
    bool m_invokeModeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
