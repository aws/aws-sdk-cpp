/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/ParticipantReplica.h>
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
namespace ivsrealtime
{
namespace Model
{
  class ListParticipantReplicasResult
  {
  public:
    AWS_IVSREALTIME_API ListParticipantReplicasResult() = default;
    AWS_IVSREALTIME_API ListParticipantReplicasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListParticipantReplicasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of all participant replicas.</p>
     */
    inline const Aws::Vector<ParticipantReplica>& GetReplicas() const { return m_replicas; }
    template<typename ReplicasT = Aws::Vector<ParticipantReplica>>
    void SetReplicas(ReplicasT&& value) { m_replicasHasBeenSet = true; m_replicas = std::forward<ReplicasT>(value); }
    template<typename ReplicasT = Aws::Vector<ParticipantReplica>>
    ListParticipantReplicasResult& WithReplicas(ReplicasT&& value) { SetReplicas(std::forward<ReplicasT>(value)); return *this;}
    template<typename ReplicasT = ParticipantReplica>
    ListParticipantReplicasResult& AddReplicas(ReplicasT&& value) { m_replicasHasBeenSet = true; m_replicas.emplace_back(std::forward<ReplicasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more participants than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListParticipantReplicasResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListParticipantReplicasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ParticipantReplica> m_replicas;
    bool m_replicasHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
