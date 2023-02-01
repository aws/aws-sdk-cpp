/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/ConnectorSummary.h>
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
  class ListConnectorsResult
  {
  public:
    AWS_KAFKACONNECT_API ListConnectorsResult();
    AWS_KAFKACONNECT_API ListConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API ListConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of connector descriptions.</p>
     */
    inline const Aws::Vector<ConnectorSummary>& GetConnectors() const{ return m_connectors; }

    /**
     * <p>An array of connector descriptions.</p>
     */
    inline void SetConnectors(const Aws::Vector<ConnectorSummary>& value) { m_connectors = value; }

    /**
     * <p>An array of connector descriptions.</p>
     */
    inline void SetConnectors(Aws::Vector<ConnectorSummary>&& value) { m_connectors = std::move(value); }

    /**
     * <p>An array of connector descriptions.</p>
     */
    inline ListConnectorsResult& WithConnectors(const Aws::Vector<ConnectorSummary>& value) { SetConnectors(value); return *this;}

    /**
     * <p>An array of connector descriptions.</p>
     */
    inline ListConnectorsResult& WithConnectors(Aws::Vector<ConnectorSummary>&& value) { SetConnectors(std::move(value)); return *this;}

    /**
     * <p>An array of connector descriptions.</p>
     */
    inline ListConnectorsResult& AddConnectors(const ConnectorSummary& value) { m_connectors.push_back(value); return *this; }

    /**
     * <p>An array of connector descriptions.</p>
     */
    inline ListConnectorsResult& AddConnectors(ConnectorSummary&& value) { m_connectors.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where it left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where it left off.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where it left off.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where it left off.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where it left off.</p>
     */
    inline ListConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where it left off.</p>
     */
    inline ListConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where it left off.</p>
     */
    inline ListConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConnectorSummary> m_connectors;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
