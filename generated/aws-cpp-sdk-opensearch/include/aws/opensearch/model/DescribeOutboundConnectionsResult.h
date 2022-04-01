﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/OutboundConnection.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>The result of a <code> <a>DescribeOutboundConnections</a> </code> request.
   * Contains the list of connections matching the filter criteria. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeOutboundConnectionsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API DescribeOutboundConnectionsResult
  {
  public:
    DescribeOutboundConnectionsResult();
    DescribeOutboundConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeOutboundConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code> <a>OutboundConnection</a> </code> matching the specified
     * filter criteria. </p>
     */
    inline const Aws::Vector<OutboundConnection>& GetConnections() const{ return m_connections; }

    /**
     * <p>A list of <code> <a>OutboundConnection</a> </code> matching the specified
     * filter criteria. </p>
     */
    inline void SetConnections(const Aws::Vector<OutboundConnection>& value) { m_connections = value; }

    /**
     * <p>A list of <code> <a>OutboundConnection</a> </code> matching the specified
     * filter criteria. </p>
     */
    inline void SetConnections(Aws::Vector<OutboundConnection>&& value) { m_connections = std::move(value); }

    /**
     * <p>A list of <code> <a>OutboundConnection</a> </code> matching the specified
     * filter criteria. </p>
     */
    inline DescribeOutboundConnectionsResult& WithConnections(const Aws::Vector<OutboundConnection>& value) { SetConnections(value); return *this;}

    /**
     * <p>A list of <code> <a>OutboundConnection</a> </code> matching the specified
     * filter criteria. </p>
     */
    inline DescribeOutboundConnectionsResult& WithConnections(Aws::Vector<OutboundConnection>&& value) { SetConnections(std::move(value)); return *this;}

    /**
     * <p>A list of <code> <a>OutboundConnection</a> </code> matching the specified
     * filter criteria. </p>
     */
    inline DescribeOutboundConnectionsResult& AddConnections(const OutboundConnection& value) { m_connections.push_back(value); return *this; }

    /**
     * <p>A list of <code> <a>OutboundConnection</a> </code> matching the specified
     * filter criteria. </p>
     */
    inline DescribeOutboundConnectionsResult& AddConnections(OutboundConnection&& value) { m_connections.push_back(std::move(value)); return *this; }


    /**
     * <p>If more results are available and NextToken is present, make the next request
     * to the same API with the received NextToken to paginate the remaining results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If more results are available and NextToken is present, make the next request
     * to the same API with the received NextToken to paginate the remaining results.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If more results are available and NextToken is present, make the next request
     * to the same API with the received NextToken to paginate the remaining results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If more results are available and NextToken is present, make the next request
     * to the same API with the received NextToken to paginate the remaining results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If more results are available and NextToken is present, make the next request
     * to the same API with the received NextToken to paginate the remaining results.
     * </p>
     */
    inline DescribeOutboundConnectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If more results are available and NextToken is present, make the next request
     * to the same API with the received NextToken to paginate the remaining results.
     * </p>
     */
    inline DescribeOutboundConnectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If more results are available and NextToken is present, make the next request
     * to the same API with the received NextToken to paginate the remaining results.
     * </p>
     */
    inline DescribeOutboundConnectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OutboundConnection> m_connections;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
