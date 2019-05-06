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
  class AWS_LAMBDA_API InvokeResult
  {
  public:
    InvokeResult();
    //We have to define these because Microsoft doesn't auto generate them
    InvokeResult(InvokeResult&&);
    InvokeResult& operator=(InvokeResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    InvokeResult(const InvokeResult&) = delete;
    InvokeResult& operator=(const InvokeResult&) = delete;


    InvokeResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    InvokeResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The HTTP status code is in the 200 range for a successful request. For the
     * <code>RequestResponse</code> invocation type, this status code is 200. For the
     * <code>Event</code> invocation type, this status code is 202. For the
     * <code>DryRun</code> invocation type, the status code is 204.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The HTTP status code is in the 200 range for a successful request. For the
     * <code>RequestResponse</code> invocation type, this status code is 200. For the
     * <code>Event</code> invocation type, this status code is 202. For the
     * <code>DryRun</code> invocation type, the status code is 204.</p>
     */
    inline void SetStatusCode(int value) { m_statusCode = value; }

    /**
     * <p>The HTTP status code is in the 200 range for a successful request. For the
     * <code>RequestResponse</code> invocation type, this status code is 200. For the
     * <code>Event</code> invocation type, this status code is 202. For the
     * <code>DryRun</code> invocation type, the status code is 204.</p>
     */
    inline InvokeResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}


    /**
     * <p>If present, indicates that an error occurred during function execution.
     * Details about the error are included in the response payload.</p> <ul> <li> <p>
     * <code>Handled</code> - The runtime caught an error thrown by the function and
     * formatted it into a JSON document.</p> </li> <li> <p> <code>Unhandled</code> -
     * The runtime didn't handle the error. For example, the function ran out of memory
     * or timed out.</p> </li> </ul>
     */
    inline const Aws::String& GetFunctionError() const{ return m_functionError; }

    /**
     * <p>If present, indicates that an error occurred during function execution.
     * Details about the error are included in the response payload.</p> <ul> <li> <p>
     * <code>Handled</code> - The runtime caught an error thrown by the function and
     * formatted it into a JSON document.</p> </li> <li> <p> <code>Unhandled</code> -
     * The runtime didn't handle the error. For example, the function ran out of memory
     * or timed out.</p> </li> </ul>
     */
    inline void SetFunctionError(const Aws::String& value) { m_functionError = value; }

    /**
     * <p>If present, indicates that an error occurred during function execution.
     * Details about the error are included in the response payload.</p> <ul> <li> <p>
     * <code>Handled</code> - The runtime caught an error thrown by the function and
     * formatted it into a JSON document.</p> </li> <li> <p> <code>Unhandled</code> -
     * The runtime didn't handle the error. For example, the function ran out of memory
     * or timed out.</p> </li> </ul>
     */
    inline void SetFunctionError(Aws::String&& value) { m_functionError = std::move(value); }

    /**
     * <p>If present, indicates that an error occurred during function execution.
     * Details about the error are included in the response payload.</p> <ul> <li> <p>
     * <code>Handled</code> - The runtime caught an error thrown by the function and
     * formatted it into a JSON document.</p> </li> <li> <p> <code>Unhandled</code> -
     * The runtime didn't handle the error. For example, the function ran out of memory
     * or timed out.</p> </li> </ul>
     */
    inline void SetFunctionError(const char* value) { m_functionError.assign(value); }

    /**
     * <p>If present, indicates that an error occurred during function execution.
     * Details about the error are included in the response payload.</p> <ul> <li> <p>
     * <code>Handled</code> - The runtime caught an error thrown by the function and
     * formatted it into a JSON document.</p> </li> <li> <p> <code>Unhandled</code> -
     * The runtime didn't handle the error. For example, the function ran out of memory
     * or timed out.</p> </li> </ul>
     */
    inline InvokeResult& WithFunctionError(const Aws::String& value) { SetFunctionError(value); return *this;}

    /**
     * <p>If present, indicates that an error occurred during function execution.
     * Details about the error are included in the response payload.</p> <ul> <li> <p>
     * <code>Handled</code> - The runtime caught an error thrown by the function and
     * formatted it into a JSON document.</p> </li> <li> <p> <code>Unhandled</code> -
     * The runtime didn't handle the error. For example, the function ran out of memory
     * or timed out.</p> </li> </ul>
     */
    inline InvokeResult& WithFunctionError(Aws::String&& value) { SetFunctionError(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that an error occurred during function execution.
     * Details about the error are included in the response payload.</p> <ul> <li> <p>
     * <code>Handled</code> - The runtime caught an error thrown by the function and
     * formatted it into a JSON document.</p> </li> <li> <p> <code>Unhandled</code> -
     * The runtime didn't handle the error. For example, the function ran out of memory
     * or timed out.</p> </li> </ul>
     */
    inline InvokeResult& WithFunctionError(const char* value) { SetFunctionError(value); return *this;}


    /**
     * <p>The last 4 KB of the execution log, which is base64 encoded.</p>
     */
    inline const Aws::String& GetLogResult() const{ return m_logResult; }

    /**
     * <p>The last 4 KB of the execution log, which is base64 encoded.</p>
     */
    inline void SetLogResult(const Aws::String& value) { m_logResult = value; }

    /**
     * <p>The last 4 KB of the execution log, which is base64 encoded.</p>
     */
    inline void SetLogResult(Aws::String&& value) { m_logResult = std::move(value); }

    /**
     * <p>The last 4 KB of the execution log, which is base64 encoded.</p>
     */
    inline void SetLogResult(const char* value) { m_logResult.assign(value); }

    /**
     * <p>The last 4 KB of the execution log, which is base64 encoded.</p>
     */
    inline InvokeResult& WithLogResult(const Aws::String& value) { SetLogResult(value); return *this;}

    /**
     * <p>The last 4 KB of the execution log, which is base64 encoded.</p>
     */
    inline InvokeResult& WithLogResult(Aws::String&& value) { SetLogResult(std::move(value)); return *this;}

    /**
     * <p>The last 4 KB of the execution log, which is base64 encoded.</p>
     */
    inline InvokeResult& WithLogResult(const char* value) { SetLogResult(value); return *this;}


    /**
     * <p>The response from the function, or an error object.</p>
     */
    inline Aws::IOStream& GetPayload() { return m_payload.GetUnderlyingStream(); }

    /**
     * <p>The response from the function, or an error object.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>The version of the function that executed. When you invoke a function with an
     * alias, this indicates which version the alias resolved to.</p>
     */
    inline const Aws::String& GetExecutedVersion() const{ return m_executedVersion; }

    /**
     * <p>The version of the function that executed. When you invoke a function with an
     * alias, this indicates which version the alias resolved to.</p>
     */
    inline void SetExecutedVersion(const Aws::String& value) { m_executedVersion = value; }

    /**
     * <p>The version of the function that executed. When you invoke a function with an
     * alias, this indicates which version the alias resolved to.</p>
     */
    inline void SetExecutedVersion(Aws::String&& value) { m_executedVersion = std::move(value); }

    /**
     * <p>The version of the function that executed. When you invoke a function with an
     * alias, this indicates which version the alias resolved to.</p>
     */
    inline void SetExecutedVersion(const char* value) { m_executedVersion.assign(value); }

    /**
     * <p>The version of the function that executed. When you invoke a function with an
     * alias, this indicates which version the alias resolved to.</p>
     */
    inline InvokeResult& WithExecutedVersion(const Aws::String& value) { SetExecutedVersion(value); return *this;}

    /**
     * <p>The version of the function that executed. When you invoke a function with an
     * alias, this indicates which version the alias resolved to.</p>
     */
    inline InvokeResult& WithExecutedVersion(Aws::String&& value) { SetExecutedVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the function that executed. When you invoke a function with an
     * alias, this indicates which version the alias resolved to.</p>
     */
    inline InvokeResult& WithExecutedVersion(const char* value) { SetExecutedVersion(value); return *this;}

  private:

    int m_statusCode;

    Aws::String m_functionError;

    Aws::String m_logResult;

  Aws::Utils::Stream::ResponseStream m_payload;

    Aws::String m_executedVersion;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
