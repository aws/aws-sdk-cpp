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
    AWS_KAFKACONNECT_API ListConnectorOperationsResult() = default;
    AWS_KAFKACONNECT_API ListConnectorOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API ListConnectorOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of connector operation descriptions.</p>
     */
    inline const Aws::Vector<ConnectorOperationSummary>& GetConnectorOperations() const { return m_connectorOperations; }
    template<typename ConnectorOperationsT = Aws::Vector<ConnectorOperationSummary>>
    void SetConnectorOperations(ConnectorOperationsT&& value) { m_connectorOperationsHasBeenSet = true; m_connectorOperations = std::forward<ConnectorOperationsT>(value); }
    template<typename ConnectorOperationsT = Aws::Vector<ConnectorOperationSummary>>
    ListConnectorOperationsResult& WithConnectorOperations(ConnectorOperationsT&& value) { SetConnectorOperations(std::forward<ConnectorOperationsT>(value)); return *this;}
    template<typename ConnectorOperationsT = ConnectorOperationSummary>
    ListConnectorOperationsResult& AddConnectorOperations(ConnectorOperationsT&& value) { m_connectorOperationsHasBeenSet = true; m_connectorOperations.emplace_back(std::forward<ConnectorOperationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, it includes a NextToken. Send this NextToken in
     * a subsequent request to continue listing from where it left off.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConnectorOperationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConnectorOperationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectorOperationSummary> m_connectorOperations;
    bool m_connectorOperationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
