/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
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
namespace BedrockDataAutomationRuntime
{
namespace Model
{
  /**
   * <p>Invoke Data Automation Async Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/InvokeDataAutomationAsyncResponse">AWS
   * API Reference</a></p>
   */
  class InvokeDataAutomationAsyncResult
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API InvokeDataAutomationAsyncResult();
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API InvokeDataAutomationAsyncResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API InvokeDataAutomationAsyncResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the automation job</p>
     */
    inline const Aws::String& GetInvocationArn() const{ return m_invocationArn; }
    inline void SetInvocationArn(const Aws::String& value) { m_invocationArn = value; }
    inline void SetInvocationArn(Aws::String&& value) { m_invocationArn = std::move(value); }
    inline void SetInvocationArn(const char* value) { m_invocationArn.assign(value); }
    inline InvokeDataAutomationAsyncResult& WithInvocationArn(const Aws::String& value) { SetInvocationArn(value); return *this;}
    inline InvokeDataAutomationAsyncResult& WithInvocationArn(Aws::String&& value) { SetInvocationArn(std::move(value)); return *this;}
    inline InvokeDataAutomationAsyncResult& WithInvocationArn(const char* value) { SetInvocationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InvokeDataAutomationAsyncResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InvokeDataAutomationAsyncResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InvokeDataAutomationAsyncResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_invocationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
