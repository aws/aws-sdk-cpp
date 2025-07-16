/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
namespace BedrockAgentCore
{
namespace Model
{
  class GetWorkloadAccessTokenForJWTResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API GetWorkloadAccessTokenForJWTResult() = default;
    AWS_BEDROCKAGENTCORE_API GetWorkloadAccessTokenForJWTResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORE_API GetWorkloadAccessTokenForJWTResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Opaque token representing both agent and user identity</p>
     */
    inline const Aws::String& GetWorkloadAccessToken() const { return m_workloadAccessToken; }
    template<typename WorkloadAccessTokenT = Aws::String>
    void SetWorkloadAccessToken(WorkloadAccessTokenT&& value) { m_workloadAccessTokenHasBeenSet = true; m_workloadAccessToken = std::forward<WorkloadAccessTokenT>(value); }
    template<typename WorkloadAccessTokenT = Aws::String>
    GetWorkloadAccessTokenForJWTResult& WithWorkloadAccessToken(WorkloadAccessTokenT&& value) { SetWorkloadAccessToken(std::forward<WorkloadAccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkloadAccessTokenForJWTResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadAccessToken;
    bool m_workloadAccessTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
