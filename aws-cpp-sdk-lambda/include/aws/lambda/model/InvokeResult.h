/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Lambda
{
namespace Model
{
  /**
   * <p>Upon success, returns an empty response. Otherwise, throws an exception.</p>
   */
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


    InvokeResult(AmazonWebServiceResult<Utils::Stream::ResponseStream>&& result);
    InvokeResult& operator=(AmazonWebServiceResult<Utils::Stream::ResponseStream>&& result);


    /**
     * <p>The HTTP status code will be in the 200 range for successful request. For the
     * <code>RequestResonse</code> invocation type this status code will be 200. For
     * the <code>Event</code> invocation type this status code will be 202. For the
     * <code>DryRun</code> invocation type the status code will be 204. </p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The HTTP status code will be in the 200 range for successful request. For the
     * <code>RequestResonse</code> invocation type this status code will be 200. For
     * the <code>Event</code> invocation type this status code will be 202. For the
     * <code>DryRun</code> invocation type the status code will be 204. </p>
     */
    inline void SetStatusCode(int value) { m_statusCode = value; }

    /**
     * <p>The HTTP status code will be in the 200 range for successful request. For the
     * <code>RequestResonse</code> invocation type this status code will be 200. For
     * the <code>Event</code> invocation type this status code will be 202. For the
     * <code>DryRun</code> invocation type the status code will be 204. </p>
     */
    inline InvokeResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}

    /**
     * <p>Indicates whether an error occurred while executing the Lambda function. If
     * an error occurred this field will have one of two values; <code>Handled</code>
     * or <code>Unhandled</code>. <code>Handled</code> errors are errors that are
     * reported by the function while the <code>Unhandled</code> errors are those
     * detected and reported by AWS Lambda. Unhandled errors include out of memory
     * errors and function timeouts. For information about how to report an
     * <code>Handled</code> error, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model.html">Programming
     * Model</a>. </p>
     */
    inline const Aws::String& GetFunctionError() const{ return m_functionError; }

    /**
     * <p>Indicates whether an error occurred while executing the Lambda function. If
     * an error occurred this field will have one of two values; <code>Handled</code>
     * or <code>Unhandled</code>. <code>Handled</code> errors are errors that are
     * reported by the function while the <code>Unhandled</code> errors are those
     * detected and reported by AWS Lambda. Unhandled errors include out of memory
     * errors and function timeouts. For information about how to report an
     * <code>Handled</code> error, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model.html">Programming
     * Model</a>. </p>
     */
    inline void SetFunctionError(const Aws::String& value) { m_functionError = value; }

    /**
     * <p>Indicates whether an error occurred while executing the Lambda function. If
     * an error occurred this field will have one of two values; <code>Handled</code>
     * or <code>Unhandled</code>. <code>Handled</code> errors are errors that are
     * reported by the function while the <code>Unhandled</code> errors are those
     * detected and reported by AWS Lambda. Unhandled errors include out of memory
     * errors and function timeouts. For information about how to report an
     * <code>Handled</code> error, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model.html">Programming
     * Model</a>. </p>
     */
    inline void SetFunctionError(Aws::String&& value) { m_functionError = value; }

    /**
     * <p>Indicates whether an error occurred while executing the Lambda function. If
     * an error occurred this field will have one of two values; <code>Handled</code>
     * or <code>Unhandled</code>. <code>Handled</code> errors are errors that are
     * reported by the function while the <code>Unhandled</code> errors are those
     * detected and reported by AWS Lambda. Unhandled errors include out of memory
     * errors and function timeouts. For information about how to report an
     * <code>Handled</code> error, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model.html">Programming
     * Model</a>. </p>
     */
    inline void SetFunctionError(const char* value) { m_functionError.assign(value); }

    /**
     * <p>Indicates whether an error occurred while executing the Lambda function. If
     * an error occurred this field will have one of two values; <code>Handled</code>
     * or <code>Unhandled</code>. <code>Handled</code> errors are errors that are
     * reported by the function while the <code>Unhandled</code> errors are those
     * detected and reported by AWS Lambda. Unhandled errors include out of memory
     * errors and function timeouts. For information about how to report an
     * <code>Handled</code> error, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model.html">Programming
     * Model</a>. </p>
     */
    inline InvokeResult& WithFunctionError(const Aws::String& value) { SetFunctionError(value); return *this;}

    /**
     * <p>Indicates whether an error occurred while executing the Lambda function. If
     * an error occurred this field will have one of two values; <code>Handled</code>
     * or <code>Unhandled</code>. <code>Handled</code> errors are errors that are
     * reported by the function while the <code>Unhandled</code> errors are those
     * detected and reported by AWS Lambda. Unhandled errors include out of memory
     * errors and function timeouts. For information about how to report an
     * <code>Handled</code> error, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model.html">Programming
     * Model</a>. </p>
     */
    inline InvokeResult& WithFunctionError(Aws::String&& value) { SetFunctionError(value); return *this;}

    /**
     * <p>Indicates whether an error occurred while executing the Lambda function. If
     * an error occurred this field will have one of two values; <code>Handled</code>
     * or <code>Unhandled</code>. <code>Handled</code> errors are errors that are
     * reported by the function while the <code>Unhandled</code> errors are those
     * detected and reported by AWS Lambda. Unhandled errors include out of memory
     * errors and function timeouts. For information about how to report an
     * <code>Handled</code> error, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model.html">Programming
     * Model</a>. </p>
     */
    inline InvokeResult& WithFunctionError(const char* value) { SetFunctionError(value); return *this;}

    /**
     * <p> It is the base64-encoded logs for the Lambda function invocation. This is
     * present only if the invocation type is <code>RequestResponse</code> and the logs
     * were requested. </p>
     */
    inline const Aws::String& GetLogResult() const{ return m_logResult; }

    /**
     * <p> It is the base64-encoded logs for the Lambda function invocation. This is
     * present only if the invocation type is <code>RequestResponse</code> and the logs
     * were requested. </p>
     */
    inline void SetLogResult(const Aws::String& value) { m_logResult = value; }

    /**
     * <p> It is the base64-encoded logs for the Lambda function invocation. This is
     * present only if the invocation type is <code>RequestResponse</code> and the logs
     * were requested. </p>
     */
    inline void SetLogResult(Aws::String&& value) { m_logResult = value; }

    /**
     * <p> It is the base64-encoded logs for the Lambda function invocation. This is
     * present only if the invocation type is <code>RequestResponse</code> and the logs
     * were requested. </p>
     */
    inline void SetLogResult(const char* value) { m_logResult.assign(value); }

    /**
     * <p> It is the base64-encoded logs for the Lambda function invocation. This is
     * present only if the invocation type is <code>RequestResponse</code> and the logs
     * were requested. </p>
     */
    inline InvokeResult& WithLogResult(const Aws::String& value) { SetLogResult(value); return *this;}

    /**
     * <p> It is the base64-encoded logs for the Lambda function invocation. This is
     * present only if the invocation type is <code>RequestResponse</code> and the logs
     * were requested. </p>
     */
    inline InvokeResult& WithLogResult(Aws::String&& value) { SetLogResult(value); return *this;}

    /**
     * <p> It is the base64-encoded logs for the Lambda function invocation. This is
     * present only if the invocation type is <code>RequestResponse</code> and the logs
     * were requested. </p>
     */
    inline InvokeResult& WithLogResult(const char* value) { SetLogResult(value); return *this;}

    /**
     * <p> It is the JSON representation of the object returned by the Lambda function.
     * In This is present only if the invocation type is <code>RequestResponse</code>.
     * </p> <p>In the event of a function error this field contains a message
     * describing the error. For the <code>Handled</code> errors the Lambda function
     * will report this message. For <code>Unhandled</code> errors AWS Lambda reports
     * the message. </p>
     */
    inline Aws::IOStream& GetPayload() { return m_payload.GetUnderlyingStream(); }

    /**
     * <p> It is the JSON representation of the object returned by the Lambda function.
     * In This is present only if the invocation type is <code>RequestResponse</code>.
     * </p> <p>In the event of a function error this field contains a message
     * describing the error. For the <code>Handled</code> errors the Lambda function
     * will report this message. For <code>Unhandled</code> errors AWS Lambda reports
     * the message. </p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }
    
  private:
    int m_statusCode;
    Aws::String m_functionError;
    Aws::String m_logResult;
    Utils::Stream::ResponseStream m_payload;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
