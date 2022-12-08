/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/OutboundCrossClusterSearchConnection.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>The result of a
   * <code><a>DescribeOutboundCrossClusterSearchConnections</a></code> request.
   * Contains the list of connections matching the filter criteria.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeOutboundCrossClusterSearchConnectionsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeOutboundCrossClusterSearchConnectionsResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeOutboundCrossClusterSearchConnectionsResult();
    AWS_ELASTICSEARCHSERVICE_API DescribeOutboundCrossClusterSearchConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeOutboundCrossClusterSearchConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Consists of list of <code><a>OutboundCrossClusterSearchConnection</a></code>
     * matching the specified filter criteria.</p>
     */
    inline const Aws::Vector<OutboundCrossClusterSearchConnection>& GetCrossClusterSearchConnections() const{ return m_crossClusterSearchConnections; }

    /**
     * <p>Consists of list of <code><a>OutboundCrossClusterSearchConnection</a></code>
     * matching the specified filter criteria.</p>
     */
    inline void SetCrossClusterSearchConnections(const Aws::Vector<OutboundCrossClusterSearchConnection>& value) { m_crossClusterSearchConnections = value; }

    /**
     * <p>Consists of list of <code><a>OutboundCrossClusterSearchConnection</a></code>
     * matching the specified filter criteria.</p>
     */
    inline void SetCrossClusterSearchConnections(Aws::Vector<OutboundCrossClusterSearchConnection>&& value) { m_crossClusterSearchConnections = std::move(value); }

    /**
     * <p>Consists of list of <code><a>OutboundCrossClusterSearchConnection</a></code>
     * matching the specified filter criteria.</p>
     */
    inline DescribeOutboundCrossClusterSearchConnectionsResult& WithCrossClusterSearchConnections(const Aws::Vector<OutboundCrossClusterSearchConnection>& value) { SetCrossClusterSearchConnections(value); return *this;}

    /**
     * <p>Consists of list of <code><a>OutboundCrossClusterSearchConnection</a></code>
     * matching the specified filter criteria.</p>
     */
    inline DescribeOutboundCrossClusterSearchConnectionsResult& WithCrossClusterSearchConnections(Aws::Vector<OutboundCrossClusterSearchConnection>&& value) { SetCrossClusterSearchConnections(std::move(value)); return *this;}

    /**
     * <p>Consists of list of <code><a>OutboundCrossClusterSearchConnection</a></code>
     * matching the specified filter criteria.</p>
     */
    inline DescribeOutboundCrossClusterSearchConnectionsResult& AddCrossClusterSearchConnections(const OutboundCrossClusterSearchConnection& value) { m_crossClusterSearchConnections.push_back(value); return *this; }

    /**
     * <p>Consists of list of <code><a>OutboundCrossClusterSearchConnection</a></code>
     * matching the specified filter criteria.</p>
     */
    inline DescribeOutboundCrossClusterSearchConnectionsResult& AddCrossClusterSearchConnections(OutboundCrossClusterSearchConnection&& value) { m_crossClusterSearchConnections.push_back(std::move(value)); return *this; }


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
    inline DescribeOutboundCrossClusterSearchConnectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If more results are available and NextToken is present, make the next request
     * to the same API with the received NextToken to paginate the remaining results.
     * </p>
     */
    inline DescribeOutboundCrossClusterSearchConnectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If more results are available and NextToken is present, make the next request
     * to the same API with the received NextToken to paginate the remaining results.
     * </p>
     */
    inline DescribeOutboundCrossClusterSearchConnectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OutboundCrossClusterSearchConnection> m_crossClusterSearchConnections;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
