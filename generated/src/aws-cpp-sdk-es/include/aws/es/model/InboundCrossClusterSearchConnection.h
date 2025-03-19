/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/DomainInformation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/InboundCrossClusterSearchConnectionStatus.h>
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
   * <p>Specifies details of an inbound connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/InboundCrossClusterSearchConnection">AWS
   * API Reference</a></p>
   */
  class InboundCrossClusterSearchConnection
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API InboundCrossClusterSearchConnection() = default;
    AWS_ELASTICSEARCHSERVICE_API InboundCrossClusterSearchConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API InboundCrossClusterSearchConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    InboundCrossClusterSearchConnection& WithSourceDomainInfo(SourceDomainInfoT&& value) { SetSourceDomainInfo(std::forward<SourceDomainInfoT>(value)); return *this;}
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
    InboundCrossClusterSearchConnection& WithDestinationDomainInfo(DestinationDomainInfoT&& value) { SetDestinationDomainInfo(std::forward<DestinationDomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the connection id for the inbound cross-cluster search
     * connection.</p>
     */
    inline const Aws::String& GetCrossClusterSearchConnectionId() const { return m_crossClusterSearchConnectionId; }
    inline bool CrossClusterSearchConnectionIdHasBeenSet() const { return m_crossClusterSearchConnectionIdHasBeenSet; }
    template<typename CrossClusterSearchConnectionIdT = Aws::String>
    void SetCrossClusterSearchConnectionId(CrossClusterSearchConnectionIdT&& value) { m_crossClusterSearchConnectionIdHasBeenSet = true; m_crossClusterSearchConnectionId = std::forward<CrossClusterSearchConnectionIdT>(value); }
    template<typename CrossClusterSearchConnectionIdT = Aws::String>
    InboundCrossClusterSearchConnection& WithCrossClusterSearchConnectionId(CrossClusterSearchConnectionIdT&& value) { SetCrossClusterSearchConnectionId(std::forward<CrossClusterSearchConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnectionStatus</a></code>
     * for the outbound connection.</p>
     */
    inline const InboundCrossClusterSearchConnectionStatus& GetConnectionStatus() const { return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    template<typename ConnectionStatusT = InboundCrossClusterSearchConnectionStatus>
    void SetConnectionStatus(ConnectionStatusT&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::forward<ConnectionStatusT>(value); }
    template<typename ConnectionStatusT = InboundCrossClusterSearchConnectionStatus>
    InboundCrossClusterSearchConnection& WithConnectionStatus(ConnectionStatusT&& value) { SetConnectionStatus(std::forward<ConnectionStatusT>(value)); return *this;}
    ///@}
  private:

    DomainInformation m_sourceDomainInfo;
    bool m_sourceDomainInfoHasBeenSet = false;

    DomainInformation m_destinationDomainInfo;
    bool m_destinationDomainInfoHasBeenSet = false;

    Aws::String m_crossClusterSearchConnectionId;
    bool m_crossClusterSearchConnectionIdHasBeenSet = false;

    InboundCrossClusterSearchConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
