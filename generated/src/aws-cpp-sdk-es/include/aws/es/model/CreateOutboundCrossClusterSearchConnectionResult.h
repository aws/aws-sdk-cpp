/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/DomainInformation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/OutboundCrossClusterSearchConnectionStatus.h>
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
   * <code><a>CreateOutboundCrossClusterSearchConnection</a></code> request. Contains
   * the details of the newly created cross-cluster search connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateOutboundCrossClusterSearchConnectionResponse">AWS
   * API Reference</a></p>
   */
  class CreateOutboundCrossClusterSearchConnectionResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CreateOutboundCrossClusterSearchConnectionResult() = default;
    AWS_ELASTICSEARCHSERVICE_API CreateOutboundCrossClusterSearchConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API CreateOutboundCrossClusterSearchConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline const DomainInformation& GetSourceDomainInfo() const { return m_sourceDomainInfo; }
    template<typename SourceDomainInfoT = DomainInformation>
    void SetSourceDomainInfo(SourceDomainInfoT&& value) { m_sourceDomainInfoHasBeenSet = true; m_sourceDomainInfo = std::forward<SourceDomainInfoT>(value); }
    template<typename SourceDomainInfoT = DomainInformation>
    CreateOutboundCrossClusterSearchConnectionResult& WithSourceDomainInfo(SourceDomainInfoT&& value) { SetSourceDomainInfo(std::forward<SourceDomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline const DomainInformation& GetDestinationDomainInfo() const { return m_destinationDomainInfo; }
    template<typename DestinationDomainInfoT = DomainInformation>
    void SetDestinationDomainInfo(DestinationDomainInfoT&& value) { m_destinationDomainInfoHasBeenSet = true; m_destinationDomainInfo = std::forward<DestinationDomainInfoT>(value); }
    template<typename DestinationDomainInfoT = DomainInformation>
    CreateOutboundCrossClusterSearchConnectionResult& WithDestinationDomainInfo(DestinationDomainInfoT&& value) { SetDestinationDomainInfo(std::forward<DestinationDomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the connection alias provided during the create connection
     * request.</p>
     */
    inline const Aws::String& GetConnectionAlias() const { return m_connectionAlias; }
    template<typename ConnectionAliasT = Aws::String>
    void SetConnectionAlias(ConnectionAliasT&& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = std::forward<ConnectionAliasT>(value); }
    template<typename ConnectionAliasT = Aws::String>
    CreateOutboundCrossClusterSearchConnectionResult& WithConnectionAlias(ConnectionAliasT&& value) { SetConnectionAlias(std::forward<ConnectionAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the newly created connection.</p>
     */
    inline const OutboundCrossClusterSearchConnectionStatus& GetConnectionStatus() const { return m_connectionStatus; }
    template<typename ConnectionStatusT = OutboundCrossClusterSearchConnectionStatus>
    void SetConnectionStatus(ConnectionStatusT&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::forward<ConnectionStatusT>(value); }
    template<typename ConnectionStatusT = OutboundCrossClusterSearchConnectionStatus>
    CreateOutboundCrossClusterSearchConnectionResult& WithConnectionStatus(ConnectionStatusT&& value) { SetConnectionStatus(std::forward<ConnectionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique id for the created outbound connection, which is used for subsequent
     * operations on connection.</p>
     */
    inline const Aws::String& GetCrossClusterSearchConnectionId() const { return m_crossClusterSearchConnectionId; }
    template<typename CrossClusterSearchConnectionIdT = Aws::String>
    void SetCrossClusterSearchConnectionId(CrossClusterSearchConnectionIdT&& value) { m_crossClusterSearchConnectionIdHasBeenSet = true; m_crossClusterSearchConnectionId = std::forward<CrossClusterSearchConnectionIdT>(value); }
    template<typename CrossClusterSearchConnectionIdT = Aws::String>
    CreateOutboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnectionId(CrossClusterSearchConnectionIdT&& value) { SetCrossClusterSearchConnectionId(std::forward<CrossClusterSearchConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateOutboundCrossClusterSearchConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainInformation m_sourceDomainInfo;
    bool m_sourceDomainInfoHasBeenSet = false;

    DomainInformation m_destinationDomainInfo;
    bool m_destinationDomainInfoHasBeenSet = false;

    Aws::String m_connectionAlias;
    bool m_connectionAliasHasBeenSet = false;

    OutboundCrossClusterSearchConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;

    Aws::String m_crossClusterSearchConnectionId;
    bool m_crossClusterSearchConnectionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
