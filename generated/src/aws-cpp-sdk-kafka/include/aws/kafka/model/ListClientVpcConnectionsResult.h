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
    AWS_KAFKA_API ListClientVpcConnectionsResult();
    AWS_KAFKA_API ListClientVpcConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListClientVpcConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>List of client VPC connections.</p>
         
     */
    inline const Aws::Vector<ClientVpcConnection>& GetClientVpcConnections() const{ return m_clientVpcConnections; }

    /**
     * 
            <p>List of client VPC connections.</p>
         
     */
    inline void SetClientVpcConnections(const Aws::Vector<ClientVpcConnection>& value) { m_clientVpcConnections = value; }

    /**
     * 
            <p>List of client VPC connections.</p>
         
     */
    inline void SetClientVpcConnections(Aws::Vector<ClientVpcConnection>&& value) { m_clientVpcConnections = std::move(value); }

    /**
     * 
            <p>List of client VPC connections.</p>
         
     */
    inline ListClientVpcConnectionsResult& WithClientVpcConnections(const Aws::Vector<ClientVpcConnection>& value) { SetClientVpcConnections(value); return *this;}

    /**
     * 
            <p>List of client VPC connections.</p>
         
     */
    inline ListClientVpcConnectionsResult& WithClientVpcConnections(Aws::Vector<ClientVpcConnection>&& value) { SetClientVpcConnections(std::move(value)); return *this;}

    /**
     * 
            <p>List of client VPC connections.</p>
         
     */
    inline ListClientVpcConnectionsResult& AddClientVpcConnections(const ClientVpcConnection& value) { m_clientVpcConnections.push_back(value); return *this; }

    /**
     * 
            <p>List of client VPC connections.</p>
         
     */
    inline ListClientVpcConnectionsResult& AddClientVpcConnections(ClientVpcConnection&& value) { m_clientVpcConnections.push_back(std::move(value)); return *this; }


    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListClientVpcConnections operation is truncated, the call returns NextToken in
     * the response. 
               To get another batch of configurations, provide
     * this token in your next request.</p>
         
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListClientVpcConnections operation is truncated, the call returns NextToken in
     * the response. 
               To get another batch of configurations, provide
     * this token in your next request.</p>
         
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListClientVpcConnections operation is truncated, the call returns NextToken in
     * the response. 
               To get another batch of configurations, provide
     * this token in your next request.</p>
         
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListClientVpcConnections operation is truncated, the call returns NextToken in
     * the response. 
               To get another batch of configurations, provide
     * this token in your next request.</p>
         
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListClientVpcConnections operation is truncated, the call returns NextToken in
     * the response. 
               To get another batch of configurations, provide
     * this token in your next request.</p>
         
     */
    inline ListClientVpcConnectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListClientVpcConnections operation is truncated, the call returns NextToken in
     * the response. 
               To get another batch of configurations, provide
     * this token in your next request.</p>
         
     */
    inline ListClientVpcConnectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListClientVpcConnections operation is truncated, the call returns NextToken in
     * the response. 
               To get another batch of configurations, provide
     * this token in your next request.</p>
         
     */
    inline ListClientVpcConnectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListClientVpcConnectionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListClientVpcConnectionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListClientVpcConnectionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ClientVpcConnection> m_clientVpcConnections;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
