/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/lambda/model/InvokeWithResponseStreamHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/ResponseStreamingInvocationType.h>
#include <aws/lambda/model/LogType.h>
#include <aws/core/utils/Array.h>
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
  class InvokeWithResponseStreamRequest : public StreamingLambdaRequest
  {
  public:
    AWS_LAMBDA_API InvokeWithResponseStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeWithResponseStream"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_LAMBDA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeWithResponseStreamHandler& GetEventStreamHandler() { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const InvokeWithResponseStreamHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeWithResponseStreamRequest& WithEventStreamHandler(const InvokeWithResponseStreamHandler& value) { SetEventStreamHandler(value); return *this; }


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
    InvokeWithResponseStreamRequest& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use one of the following options:</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) – Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out. The API
     * operation response includes the function response and additional data.</p> </li>
     * <li> <p> <code>DryRun</code> – Validate parameter values and verify that the IAM
     * user or role has permission to invoke the function.</p> </li> </ul>
     */
    inline ResponseStreamingInvocationType GetInvocationType() const { return m_invocationType; }
    inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }
    inline void SetInvocationType(ResponseStreamingInvocationType value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }
    inline InvokeWithResponseStreamRequest& WithInvocationType(ResponseStreamingInvocationType value) { SetInvocationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>Tail</code> to include the execution log in the response.
     * Applies to synchronously invoked functions only.</p>
     */
    inline LogType GetLogType() const { return m_logType; }
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
    inline void SetLogType(LogType value) { m_logTypeHasBeenSet = true; m_logType = value; }
    inline InvokeWithResponseStreamRequest& WithLogType(LogType value) { SetLogType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Up to 3,583 bytes of base64-encoded data about the invoking client to pass to
     * the function in the context object.</p>
     */
    inline const Aws::String& GetClientContext() const { return m_clientContext; }
    inline bool ClientContextHasBeenSet() const { return m_clientContextHasBeenSet; }
    template<typename ClientContextT = Aws::String>
    void SetClientContext(ClientContextT&& value) { m_clientContextHasBeenSet = true; m_clientContext = std::forward<ClientContextT>(value); }
    template<typename ClientContextT = Aws::String>
    InvokeWithResponseStreamRequest& WithClientContext(ClientContextT&& value) { SetClientContext(std::forward<ClientContextT>(value)); return *this;}
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
    InvokeWithResponseStreamRequest& WithQualifier(QualifierT&& value) { SetQualifier(std::forward<QualifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    ResponseStreamingInvocationType m_invocationType{ResponseStreamingInvocationType::NOT_SET};
    bool m_invocationTypeHasBeenSet = false;

    LogType m_logType{LogType::NOT_SET};
    bool m_logTypeHasBeenSet = false;

    Aws::String m_clientContext;
    bool m_clientContextHasBeenSet = false;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet = false;

    InvokeWithResponseStreamHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
