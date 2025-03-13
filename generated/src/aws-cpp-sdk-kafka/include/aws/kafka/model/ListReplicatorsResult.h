/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/ReplicatorSummary.h>
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
namespace Kafka
{
namespace Model
{
  class ListReplicatorsResult
  {
  public:
    AWS_KAFKA_API ListReplicatorsResult() = default;
    AWS_KAFKA_API ListReplicatorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListReplicatorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response of ListReplicators is truncated, it returns a NextToken in
     * the response. This NextToken should be sent in the subsequent request to
     * ListReplicators.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReplicatorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List containing information of each of the replicators in the account.</p>
     */
    inline const Aws::Vector<ReplicatorSummary>& GetReplicators() const { return m_replicators; }
    template<typename ReplicatorsT = Aws::Vector<ReplicatorSummary>>
    void SetReplicators(ReplicatorsT&& value) { m_replicatorsHasBeenSet = true; m_replicators = std::forward<ReplicatorsT>(value); }
    template<typename ReplicatorsT = Aws::Vector<ReplicatorSummary>>
    ListReplicatorsResult& WithReplicators(ReplicatorsT&& value) { SetReplicators(std::forward<ReplicatorsT>(value)); return *this;}
    template<typename ReplicatorsT = ReplicatorSummary>
    ListReplicatorsResult& AddReplicators(ReplicatorsT&& value) { m_replicatorsHasBeenSet = true; m_replicators.emplace_back(std::forward<ReplicatorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReplicatorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ReplicatorSummary> m_replicators;
    bool m_replicatorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
