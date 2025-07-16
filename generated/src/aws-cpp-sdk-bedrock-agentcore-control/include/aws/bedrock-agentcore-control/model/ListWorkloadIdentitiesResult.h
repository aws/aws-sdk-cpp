/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/WorkloadIdentityType.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{
  class ListWorkloadIdentitiesResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ListWorkloadIdentitiesResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ListWorkloadIdentitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API ListWorkloadIdentitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of workload identities.</p>
     */
    inline const Aws::Vector<WorkloadIdentityType>& GetWorkloadIdentities() const { return m_workloadIdentities; }
    template<typename WorkloadIdentitiesT = Aws::Vector<WorkloadIdentityType>>
    void SetWorkloadIdentities(WorkloadIdentitiesT&& value) { m_workloadIdentitiesHasBeenSet = true; m_workloadIdentities = std::forward<WorkloadIdentitiesT>(value); }
    template<typename WorkloadIdentitiesT = Aws::Vector<WorkloadIdentityType>>
    ListWorkloadIdentitiesResult& WithWorkloadIdentities(WorkloadIdentitiesT&& value) { SetWorkloadIdentities(std::forward<WorkloadIdentitiesT>(value)); return *this;}
    template<typename WorkloadIdentitiesT = WorkloadIdentityType>
    ListWorkloadIdentitiesResult& AddWorkloadIdentities(WorkloadIdentitiesT&& value) { m_workloadIdentitiesHasBeenSet = true; m_workloadIdentities.emplace_back(std::forward<WorkloadIdentitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkloadIdentitiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkloadIdentitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkloadIdentityType> m_workloadIdentities;
    bool m_workloadIdentitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
