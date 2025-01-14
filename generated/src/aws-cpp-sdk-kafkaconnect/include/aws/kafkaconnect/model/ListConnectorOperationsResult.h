/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/ConnectorOperationSummary.h>
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
namespace KafkaConnect
{
namespace Model
{
  class ListConnectorOperationsResult
  {
  public:
    AWS_KAFKACONNECT_API ListConnectorOperationsResult();
    AWS_KAFKACONNECT_API ListConnectorOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API ListConnectorOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of connector operation descriptions.</p>
     */
    inline const Aws::Vector<ConnectorOperationSummary>& GetConnectorOperations() const{ return m_connectorOperations; }
    inline void SetConnectorOperations(const Aws::Vector<ConnectorOperationSummary>& value) { m_connectorOperations = value; }
    inline void SetConnectorOperations(Aws::Vector<ConnectorOperationSummary>&& value) { m_connectorOperations = std::move(value); }
    inline ListConnectorOperationsResult& WithConnectorOperations(const Aws::Vector<ConnectorOperationSummary>& value) { SetConnectorOperations(value); return *this;}
    inline ListConnectorOperationsResult& WithConnectorOperations(Aws::Vector<ConnectorOperationSummary>&& value) { SetConnectorOperations(std::move(value)); return *this;}
    inline ListConnectorOperationsResult& AddConnectorOperations(const ConnectorOperationSummary& value) { m_connectorOperations.push_back(value); return *this; }
    inline ListConnectorOperationsResult& AddConnectorOperations(ConnectorOperationSummary&& value) { m_connectorOperations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, it includes a NextToken. Send this NextToken in
     * a subsequent request to continue listing from where it left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConnectorOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConnectorOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConnectorOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConnectorOperationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConnectorOperationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConnectorOperationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectorOperationSummary> m_connectorOperations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
