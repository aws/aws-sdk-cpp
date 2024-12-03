/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/AsyncInvokeStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-runtime/model/AsyncInvokeOutputDataConfig.h>
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
namespace BedrockRuntime
{
namespace Model
{
  class GetAsyncInvokeResult
  {
  public:
    AWS_BEDROCKRUNTIME_API GetAsyncInvokeResult();
    AWS_BEDROCKRUNTIME_API GetAsyncInvokeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKRUNTIME_API GetAsyncInvokeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The invocation's ARN.</p>
     */
    inline const Aws::String& GetInvocationArn() const{ return m_invocationArn; }
    inline void SetInvocationArn(const Aws::String& value) { m_invocationArn = value; }
    inline void SetInvocationArn(Aws::String&& value) { m_invocationArn = std::move(value); }
    inline void SetInvocationArn(const char* value) { m_invocationArn.assign(value); }
    inline GetAsyncInvokeResult& WithInvocationArn(const Aws::String& value) { SetInvocationArn(value); return *this;}
    inline GetAsyncInvokeResult& WithInvocationArn(Aws::String&& value) { SetInvocationArn(std::move(value)); return *this;}
    inline GetAsyncInvokeResult& WithInvocationArn(const char* value) { SetInvocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation's model ARN.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }
    inline GetAsyncInvokeResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline GetAsyncInvokeResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline GetAsyncInvokeResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation's idempotency token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestToken.assign(value); }
    inline GetAsyncInvokeResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline GetAsyncInvokeResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline GetAsyncInvokeResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation's status.</p>
     */
    inline const AsyncInvokeStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const AsyncInvokeStatus& value) { m_status = value; }
    inline void SetStatus(AsyncInvokeStatus&& value) { m_status = std::move(value); }
    inline GetAsyncInvokeResult& WithStatus(const AsyncInvokeStatus& value) { SetStatus(value); return *this;}
    inline GetAsyncInvokeResult& WithStatus(AsyncInvokeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }
    inline GetAsyncInvokeResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline GetAsyncInvokeResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline GetAsyncInvokeResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the invocation request was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTime = value; }
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTime = std::move(value); }
    inline GetAsyncInvokeResult& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}
    inline GetAsyncInvokeResult& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation's last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline GetAsyncInvokeResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline GetAsyncInvokeResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the invocation ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetAsyncInvokeResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetAsyncInvokeResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output data settings.</p>
     */
    inline const AsyncInvokeOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline void SetOutputDataConfig(const AsyncInvokeOutputDataConfig& value) { m_outputDataConfig = value; }
    inline void SetOutputDataConfig(AsyncInvokeOutputDataConfig&& value) { m_outputDataConfig = std::move(value); }
    inline GetAsyncInvokeResult& WithOutputDataConfig(const AsyncInvokeOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline GetAsyncInvokeResult& WithOutputDataConfig(AsyncInvokeOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAsyncInvokeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAsyncInvokeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAsyncInvokeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_invocationArn;

    Aws::String m_modelArn;

    Aws::String m_clientRequestToken;

    AsyncInvokeStatus m_status;

    Aws::String m_failureMessage;

    Aws::Utils::DateTime m_submitTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_endTime;

    AsyncInvokeOutputDataConfig m_outputDataConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
