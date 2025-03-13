/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/InboundCrossClusterSearchConnection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The result of a <code><a>DeleteInboundCrossClusterSearchConnection</a></code>
   * operation. Contains details of deleted inbound connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteInboundCrossClusterSearchConnectionResponse">AWS
   * API Reference</a></p>
   */
  class DeleteInboundCrossClusterSearchConnectionResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DeleteInboundCrossClusterSearchConnectionResult() = default;
    AWS_ELASTICSEARCHSERVICE_API DeleteInboundCrossClusterSearchConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DeleteInboundCrossClusterSearchConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnection</a></code> of
     * deleted inbound connection. </p>
     */
    inline const InboundCrossClusterSearchConnection& GetCrossClusterSearchConnection() const { return m_crossClusterSearchConnection; }
    template<typename CrossClusterSearchConnectionT = InboundCrossClusterSearchConnection>
    void SetCrossClusterSearchConnection(CrossClusterSearchConnectionT&& value) { m_crossClusterSearchConnectionHasBeenSet = true; m_crossClusterSearchConnection = std::forward<CrossClusterSearchConnectionT>(value); }
    template<typename CrossClusterSearchConnectionT = InboundCrossClusterSearchConnection>
    DeleteInboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnection(CrossClusterSearchConnectionT&& value) { SetCrossClusterSearchConnection(std::forward<CrossClusterSearchConnectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteInboundCrossClusterSearchConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InboundCrossClusterSearchConnection m_crossClusterSearchConnection;
    bool m_crossClusterSearchConnectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
