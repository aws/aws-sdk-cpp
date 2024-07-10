/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowStatus.h>
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
namespace BedrockAgent
{
namespace Model
{
  class PrepareFlowResult
  {
  public:
    AWS_BEDROCKAGENT_API PrepareFlowResult();
    AWS_BEDROCKAGENT_API PrepareFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API PrepareFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the flow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline PrepareFlowResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline PrepareFlowResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline PrepareFlowResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow. When you submit this request, the status will be
     * <code>NotPrepared</code>. If preparation succeeds, the status becomes
     * <code>Prepared</code>. If it fails, the status becomes <code>FAILED</code>.</p>
     */
    inline const FlowStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const FlowStatus& value) { m_status = value; }
    inline void SetStatus(FlowStatus&& value) { m_status = std::move(value); }
    inline PrepareFlowResult& WithStatus(const FlowStatus& value) { SetStatus(value); return *this;}
    inline PrepareFlowResult& WithStatus(FlowStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PrepareFlowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PrepareFlowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PrepareFlowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    FlowStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
