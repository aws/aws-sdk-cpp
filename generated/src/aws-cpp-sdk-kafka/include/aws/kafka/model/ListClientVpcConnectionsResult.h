/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ClientVpcConnection.h>
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
  class ListClientVpcConnectionsResult
  {
  public:
    AWS_KAFKA_API ListClientVpcConnectionsResult() = default;
    AWS_KAFKA_API ListClientVpcConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListClientVpcConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>List of client VPC connections.</p>
         
     */
    inline const Aws::Vector<ClientVpcConnection>& GetClientVpcConnections() const { return m_clientVpcConnections; }
    template<typename ClientVpcConnectionsT = Aws::Vector<ClientVpcConnection>>
    void SetClientVpcConnections(ClientVpcConnectionsT&& value) { m_clientVpcConnectionsHasBeenSet = true; m_clientVpcConnections = std::forward<ClientVpcConnectionsT>(value); }
    template<typename ClientVpcConnectionsT = Aws::Vector<ClientVpcConnection>>
    ListClientVpcConnectionsResult& WithClientVpcConnections(ClientVpcConnectionsT&& value) { SetClientVpcConnections(std::forward<ClientVpcConnectionsT>(value)); return *this;}
    template<typename ClientVpcConnectionsT = ClientVpcConnection>
    ListClientVpcConnectionsResult& AddClientVpcConnections(ClientVpcConnectionsT&& value) { m_clientVpcConnectionsHasBeenSet = true; m_clientVpcConnections.emplace_back(std::forward<ClientVpcConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListClientVpcConnections operation is truncated, the call returns NextToken in
     * the response. 
               To get another batch of configurations, provide
     * this token in your next request.</p>
         
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClientVpcConnectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListClientVpcConnectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ClientVpcConnection> m_clientVpcConnections;
    bool m_clientVpcConnectionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
