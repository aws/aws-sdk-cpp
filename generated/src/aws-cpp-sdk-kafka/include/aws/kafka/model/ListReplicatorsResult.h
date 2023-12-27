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
    AWS_KAFKA_API ListReplicatorsResult();
    AWS_KAFKA_API ListReplicatorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListReplicatorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the response of ListReplicators is truncated, it returns a NextToken in
     * the response. This NextToken should be sent in the subsequent request to
     * ListReplicators.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response of ListReplicators is truncated, it returns a NextToken in
     * the response. This NextToken should be sent in the subsequent request to
     * ListReplicators.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response of ListReplicators is truncated, it returns a NextToken in
     * the response. This NextToken should be sent in the subsequent request to
     * ListReplicators.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response of ListReplicators is truncated, it returns a NextToken in
     * the response. This NextToken should be sent in the subsequent request to
     * ListReplicators.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response of ListReplicators is truncated, it returns a NextToken in
     * the response. This NextToken should be sent in the subsequent request to
     * ListReplicators.</p>
     */
    inline ListReplicatorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response of ListReplicators is truncated, it returns a NextToken in
     * the response. This NextToken should be sent in the subsequent request to
     * ListReplicators.</p>
     */
    inline ListReplicatorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response of ListReplicators is truncated, it returns a NextToken in
     * the response. This NextToken should be sent in the subsequent request to
     * ListReplicators.</p>
     */
    inline ListReplicatorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List containing information of each of the replicators in the account.</p>
     */
    inline const Aws::Vector<ReplicatorSummary>& GetReplicators() const{ return m_replicators; }

    /**
     * <p>List containing information of each of the replicators in the account.</p>
     */
    inline void SetReplicators(const Aws::Vector<ReplicatorSummary>& value) { m_replicators = value; }

    /**
     * <p>List containing information of each of the replicators in the account.</p>
     */
    inline void SetReplicators(Aws::Vector<ReplicatorSummary>&& value) { m_replicators = std::move(value); }

    /**
     * <p>List containing information of each of the replicators in the account.</p>
     */
    inline ListReplicatorsResult& WithReplicators(const Aws::Vector<ReplicatorSummary>& value) { SetReplicators(value); return *this;}

    /**
     * <p>List containing information of each of the replicators in the account.</p>
     */
    inline ListReplicatorsResult& WithReplicators(Aws::Vector<ReplicatorSummary>&& value) { SetReplicators(std::move(value)); return *this;}

    /**
     * <p>List containing information of each of the replicators in the account.</p>
     */
    inline ListReplicatorsResult& AddReplicators(const ReplicatorSummary& value) { m_replicators.push_back(value); return *this; }

    /**
     * <p>List containing information of each of the replicators in the account.</p>
     */
    inline ListReplicatorsResult& AddReplicators(ReplicatorSummary&& value) { m_replicators.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListReplicatorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListReplicatorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListReplicatorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReplicatorSummary> m_replicators;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
