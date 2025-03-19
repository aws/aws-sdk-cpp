/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Lambda
{
namespace Model
{
  class InvokeResult
  {
  public:
    AWS_LAMBDA_API InvokeResult() = default;
    AWS_LAMBDA_API InvokeResult(InvokeResult&&) = default;
    AWS_LAMBDA_API InvokeResult& operator=(InvokeResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    InvokeResult(const InvokeResult&) = delete;
    InvokeResult& operator=(const InvokeResult&) = delete;


    AWS_LAMBDA_API InvokeResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LAMBDA_API InvokeResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The HTTP status code is in the 200 range for a successful request. For the
     * <code>RequestResponse</code> invocation type, this status code is 200. For the
     * <code>Event</code> invocation type, this status code is 202. For the
     * <code>DryRun</code> invocation type, the status code is 204.</p>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline InvokeResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If present, indicates that an error occurred during function execution.
     * Details about the error are included in the response payload.</p>
     */
    inline const Aws::String& GetFunctionError() const { return m_functionError; }
    template<typename FunctionErrorT = Aws::String>
    void SetFunctionError(FunctionErrorT&& value) { m_functionErrorHasBeenSet = true; m_functionError = std::forward<FunctionErrorT>(value); }
    template<typename FunctionErrorT = Aws::String>
    InvokeResult& WithFunctionError(FunctionErrorT&& value) { SetFunctionError(std::forward<FunctionErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last 4 KB of the execution log, which is base64-encoded.</p>
     */
    inline const Aws::String& GetLogResult() const { return m_logResult; }
    template<typename LogResultT = Aws::String>
    void SetLogResult(LogResultT&& value) { m_logResultHasBeenSet = true; m_logResult = std::forward<LogResultT>(value); }
    template<typename LogResultT = Aws::String>
    InvokeResult& WithLogResult(LogResultT&& value) { SetLogResult(std::forward<LogResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response from the function, or an error object.</p>
     */
    inline Aws::IOStream& GetPayload() const { return m_payload.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The version of the function that executed. When you invoke a function with an
     * alias, this indicates which version the alias resolved to.</p>
     */
    inline const Aws::String& GetExecutedVersion() const { return m_executedVersion; }
    template<typename ExecutedVersionT = Aws::String>
    void SetExecutedVersion(ExecutedVersionT&& value) { m_executedVersionHasBeenSet = true; m_executedVersion = std::forward<ExecutedVersionT>(value); }
    template<typename ExecutedVersionT = Aws::String>
    InvokeResult& WithExecutedVersion(ExecutedVersionT&& value) { SetExecutedVersion(std::forward<ExecutedVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InvokeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_functionError;
    bool m_functionErrorHasBeenSet = false;

    Aws::String m_logResult;
    bool m_logResultHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_payload{};
    bool m_payloadHasBeenSet = false;

    Aws::String m_executedVersion;
    bool m_executedVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
