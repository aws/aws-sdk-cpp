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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies details of an outbound connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/OutboundCrossClusterSearchConnection">AWS
   * API Reference</a></p>
   */
  class OutboundCrossClusterSearchConnection
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API OutboundCrossClusterSearchConnection() = default;
    AWS_ELASTICSEARCHSERVICE_API OutboundCrossClusterSearchConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API OutboundCrossClusterSearchConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline const DomainInformation& GetSourceDomainInfo() const { return m_sourceDomainInfo; }
    inline bool SourceDomainInfoHasBeenSet() const { return m_sourceDomainInfoHasBeenSet; }
    template<typename SourceDomainInfoT = DomainInformation>
    void SetSourceDomainInfo(SourceDomainInfoT&& value) { m_sourceDomainInfoHasBeenSet = true; m_sourceDomainInfo = std::forward<SourceDomainInfoT>(value); }
    template<typename SourceDomainInfoT = DomainInformation>
    OutboundCrossClusterSearchConnection& WithSourceDomainInfo(SourceDomainInfoT&& value) { SetSourceDomainInfo(std::forward<SourceDomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline const DomainInformation& GetDestinationDomainInfo() const { return m_destinationDomainInfo; }
    inline bool DestinationDomainInfoHasBeenSet() const { return m_destinationDomainInfoHasBeenSet; }
    template<typename DestinationDomainInfoT = DomainInformation>
    void SetDestinationDomainInfo(DestinationDomainInfoT&& value) { m_destinationDomainInfoHasBeenSet = true; m_destinationDomainInfo = std::forward<DestinationDomainInfoT>(value); }
    template<typename DestinationDomainInfoT = DomainInformation>
    OutboundCrossClusterSearchConnection& WithDestinationDomainInfo(DestinationDomainInfoT&& value) { SetDestinationDomainInfo(std::forward<DestinationDomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the connection id for the outbound cross-cluster search
     * connection.</p>
     */
    inline const Aws::String& GetCrossClusterSearchConnectionId() const { return m_crossClusterSearchConnectionId; }
    inline bool CrossClusterSearchConnectionIdHasBeenSet() const { return m_crossClusterSearchConnectionIdHasBeenSet; }
    template<typename CrossClusterSearchConnectionIdT = Aws::String>
    void SetCrossClusterSearchConnectionId(CrossClusterSearchConnectionIdT&& value) { m_crossClusterSearchConnectionIdHasBeenSet = true; m_crossClusterSearchConnectionId = std::forward<CrossClusterSearchConnectionIdT>(value); }
    template<typename CrossClusterSearchConnectionIdT = Aws::String>
    OutboundCrossClusterSearchConnection& WithCrossClusterSearchConnectionId(CrossClusterSearchConnectionIdT&& value) { SetCrossClusterSearchConnectionId(std::forward<CrossClusterSearchConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the connection alias for the outbound cross-cluster search
     * connection.</p>
     */
    inline const Aws::String& GetConnectionAlias() const { return m_connectionAlias; }
    inline bool ConnectionAliasHasBeenSet() const { return m_connectionAliasHasBeenSet; }
    template<typename ConnectionAliasT = Aws::String>
    void SetConnectionAlias(ConnectionAliasT&& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = std::forward<ConnectionAliasT>(value); }
    template<typename ConnectionAliasT = Aws::String>
    OutboundCrossClusterSearchConnection& WithConnectionAlias(ConnectionAliasT&& value) { SetConnectionAlias(std::forward<ConnectionAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the outbound connection.</p>
     */
    inline const OutboundCrossClusterSearchConnectionStatus& GetConnectionStatus() const { return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    template<typename ConnectionStatusT = OutboundCrossClusterSearchConnectionStatus>
    void SetConnectionStatus(ConnectionStatusT&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::forward<ConnectionStatusT>(value); }
    template<typename ConnectionStatusT = OutboundCrossClusterSearchConnectionStatus>
    OutboundCrossClusterSearchConnection& WithConnectionStatus(ConnectionStatusT&& value) { SetConnectionStatus(std::forward<ConnectionStatusT>(value)); return *this;}
    ///@}
  private:

    DomainInformation m_sourceDomainInfo;
    bool m_sourceDomainInfoHasBeenSet = false;

    DomainInformation m_destinationDomainInfo;
    bool m_destinationDomainInfoHasBeenSet = false;

    Aws::String m_crossClusterSearchConnectionId;
    bool m_crossClusterSearchConnectionIdHasBeenSet = false;

    Aws::String m_connectionAlias;
    bool m_connectionAliasHasBeenSet = false;

    OutboundCrossClusterSearchConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
