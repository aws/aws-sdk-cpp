/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartAsyncInvokeResult
  {
  public:
    AWS_BEDROCKRUNTIME_API StartAsyncInvokeResult();
    AWS_BEDROCKRUNTIME_API StartAsyncInvokeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKRUNTIME_API StartAsyncInvokeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the invocation.</p>
     */
    inline const Aws::String& GetInvocationArn() const{ return m_invocationArn; }
    inline void SetInvocationArn(const Aws::String& value) { m_invocationArn = value; }
    inline void SetInvocationArn(Aws::String&& value) { m_invocationArn = std::move(value); }
    inline void SetInvocationArn(const char* value) { m_invocationArn.assign(value); }
    inline StartAsyncInvokeResult& WithInvocationArn(const Aws::String& value) { SetInvocationArn(value); return *this;}
    inline StartAsyncInvokeResult& WithInvocationArn(Aws::String&& value) { SetInvocationArn(std::move(value)); return *this;}
    inline StartAsyncInvokeResult& WithInvocationArn(const char* value) { SetInvocationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartAsyncInvokeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartAsyncInvokeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartAsyncInvokeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_invocationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
