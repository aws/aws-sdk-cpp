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
    AWS_ELASTICSEARCHSERVICE_API DescribeOutboundCrossClusterSearchConnectionsResult() = default;
    AWS_ELASTICSEARCHSERVICE_API DescribeOutboundCrossClusterSearchConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeOutboundCrossClusterSearchConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Consists of list of <code><a>OutboundCrossClusterSearchConnection</a></code>
     * matching the specified filter criteria.</p>
     */
    inline const Aws::Vector<OutboundCrossClusterSearchConnection>& GetCrossClusterSearchConnections() const { return m_crossClusterSearchConnections; }
    template<typename CrossClusterSearchConnectionsT = Aws::Vector<OutboundCrossClusterSearchConnection>>
    void SetCrossClusterSearchConnections(CrossClusterSearchConnectionsT&& value) { m_crossClusterSearchConnectionsHasBeenSet = true; m_crossClusterSearchConnections = std::forward<CrossClusterSearchConnectionsT>(value); }
    template<typename CrossClusterSearchConnectionsT = Aws::Vector<OutboundCrossClusterSearchConnection>>
    DescribeOutboundCrossClusterSearchConnectionsResult& WithCrossClusterSearchConnections(CrossClusterSearchConnectionsT&& value) { SetCrossClusterSearchConnections(std::forward<CrossClusterSearchConnectionsT>(value)); return *this;}
    template<typename CrossClusterSearchConnectionsT = OutboundCrossClusterSearchConnection>
    DescribeOutboundCrossClusterSearchConnectionsResult& AddCrossClusterSearchConnections(CrossClusterSearchConnectionsT&& value) { m_crossClusterSearchConnectionsHasBeenSet = true; m_crossClusterSearchConnections.emplace_back(std::forward<CrossClusterSearchConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If more results are available and NextToken is present, make the next request
     * to the same API with the received NextToken to paginate the remaining results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeOutboundCrossClusterSearchConnectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOutboundCrossClusterSearchConnectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OutboundCrossClusterSearchConnection> m_crossClusterSearchConnections;
    bool m_crossClusterSearchConnectionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
