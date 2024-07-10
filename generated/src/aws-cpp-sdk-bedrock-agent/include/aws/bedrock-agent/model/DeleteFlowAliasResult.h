/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{
  class DeleteFlowAliasResult
  {
  public:
    AWS_BEDROCKAGENT_API DeleteFlowAliasResult();
    AWS_BEDROCKAGENT_API DeleteFlowAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API DeleteFlowAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the flow that the alias belongs to.</p>
     */
    inline const Aws::String& GetFlowId() const{ return m_flowId; }
    inline void SetFlowId(const Aws::String& value) { m_flowId = value; }
    inline void SetFlowId(Aws::String&& value) { m_flowId = std::move(value); }
    inline void SetFlowId(const char* value) { m_flowId.assign(value); }
    inline DeleteFlowAliasResult& WithFlowId(const Aws::String& value) { SetFlowId(value); return *this;}
    inline DeleteFlowAliasResult& WithFlowId(Aws::String&& value) { SetFlowId(std::move(value)); return *this;}
    inline DeleteFlowAliasResult& WithFlowId(const char* value) { SetFlowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DeleteFlowAliasResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeleteFlowAliasResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeleteFlowAliasResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteFlowAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteFlowAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteFlowAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_flowId;

    Aws::String m_id;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
