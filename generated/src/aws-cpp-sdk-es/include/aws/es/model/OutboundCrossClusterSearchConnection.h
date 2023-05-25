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
    AWS_ELASTICSEARCHSERVICE_API OutboundCrossClusterSearchConnection();
    AWS_ELASTICSEARCHSERVICE_API OutboundCrossClusterSearchConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API OutboundCrossClusterSearchConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline const DomainInformation& GetSourceDomainInfo() const{ return m_sourceDomainInfo; }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline bool SourceDomainInfoHasBeenSet() const { return m_sourceDomainInfoHasBeenSet; }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline void SetSourceDomainInfo(const DomainInformation& value) { m_sourceDomainInfoHasBeenSet = true; m_sourceDomainInfo = value; }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline void SetSourceDomainInfo(DomainInformation&& value) { m_sourceDomainInfoHasBeenSet = true; m_sourceDomainInfo = std::move(value); }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline OutboundCrossClusterSearchConnection& WithSourceDomainInfo(const DomainInformation& value) { SetSourceDomainInfo(value); return *this;}

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline OutboundCrossClusterSearchConnection& WithSourceDomainInfo(DomainInformation&& value) { SetSourceDomainInfo(std::move(value)); return *this;}


    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline const DomainInformation& GetDestinationDomainInfo() const{ return m_destinationDomainInfo; }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline bool DestinationDomainInfoHasBeenSet() const { return m_destinationDomainInfoHasBeenSet; }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline void SetDestinationDomainInfo(const DomainInformation& value) { m_destinationDomainInfoHasBeenSet = true; m_destinationDomainInfo = value; }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline void SetDestinationDomainInfo(DomainInformation&& value) { m_destinationDomainInfoHasBeenSet = true; m_destinationDomainInfo = std::move(value); }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline OutboundCrossClusterSearchConnection& WithDestinationDomainInfo(const DomainInformation& value) { SetDestinationDomainInfo(value); return *this;}

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline OutboundCrossClusterSearchConnection& WithDestinationDomainInfo(DomainInformation&& value) { SetDestinationDomainInfo(std::move(value)); return *this;}


    /**
     * <p>Specifies the connection id for the outbound cross-cluster search
     * connection.</p>
     */
    inline const Aws::String& GetCrossClusterSearchConnectionId() const{ return m_crossClusterSearchConnectionId; }

    /**
     * <p>Specifies the connection id for the outbound cross-cluster search
     * connection.</p>
     */
    inline bool CrossClusterSearchConnectionIdHasBeenSet() const { return m_crossClusterSearchConnectionIdHasBeenSet; }

    /**
     * <p>Specifies the connection id for the outbound cross-cluster search
     * connection.</p>
     */
    inline void SetCrossClusterSearchConnectionId(const Aws::String& value) { m_crossClusterSearchConnectionIdHasBeenSet = true; m_crossClusterSearchConnectionId = value; }

    /**
     * <p>Specifies the connection id for the outbound cross-cluster search
     * connection.</p>
     */
    inline void SetCrossClusterSearchConnectionId(Aws::String&& value) { m_crossClusterSearchConnectionIdHasBeenSet = true; m_crossClusterSearchConnectionId = std::move(value); }

    /**
     * <p>Specifies the connection id for the outbound cross-cluster search
     * connection.</p>
     */
    inline void SetCrossClusterSearchConnectionId(const char* value) { m_crossClusterSearchConnectionIdHasBeenSet = true; m_crossClusterSearchConnectionId.assign(value); }

    /**
     * <p>Specifies the connection id for the outbound cross-cluster search
     * connection.</p>
     */
    inline OutboundCrossClusterSearchConnection& WithCrossClusterSearchConnectionId(const Aws::String& value) { SetCrossClusterSearchConnectionId(value); return *this;}

    /**
     * <p>Specifies the connection id for the outbound cross-cluster search
     * connection.</p>
     */
    inline OutboundCrossClusterSearchConnection& WithCrossClusterSearchConnectionId(Aws::String&& value) { SetCrossClusterSearchConnectionId(std::move(value)); return *this;}

    /**
     * <p>Specifies the connection id for the outbound cross-cluster search
     * connection.</p>
     */
    inline OutboundCrossClusterSearchConnection& WithCrossClusterSearchConnectionId(const char* value) { SetCrossClusterSearchConnectionId(value); return *this;}


    /**
     * <p>Specifies the connection alias for the outbound cross-cluster search
     * connection.</p>
     */
    inline const Aws::String& GetConnectionAlias() const{ return m_connectionAlias; }

    /**
     * <p>Specifies the connection alias for the outbound cross-cluster search
     * connection.</p>
     */
    inline bool ConnectionAliasHasBeenSet() const { return m_connectionAliasHasBeenSet; }

    /**
     * <p>Specifies the connection alias for the outbound cross-cluster search
     * connection.</p>
     */
    inline void SetConnectionAlias(const Aws::String& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = value; }

    /**
     * <p>Specifies the connection alias for the outbound cross-cluster search
     * connection.</p>
     */
    inline void SetConnectionAlias(Aws::String&& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = std::move(value); }

    /**
     * <p>Specifies the connection alias for the outbound cross-cluster search
     * connection.</p>
     */
    inline void SetConnectionAlias(const char* value) { m_connectionAliasHasBeenSet = true; m_connectionAlias.assign(value); }

    /**
     * <p>Specifies the connection alias for the outbound cross-cluster search
     * connection.</p>
     */
    inline OutboundCrossClusterSearchConnection& WithConnectionAlias(const Aws::String& value) { SetConnectionAlias(value); return *this;}

    /**
     * <p>Specifies the connection alias for the outbound cross-cluster search
     * connection.</p>
     */
    inline OutboundCrossClusterSearchConnection& WithConnectionAlias(Aws::String&& value) { SetConnectionAlias(std::move(value)); return *this;}

    /**
     * <p>Specifies the connection alias for the outbound cross-cluster search
     * connection.</p>
     */
    inline OutboundCrossClusterSearchConnection& WithConnectionAlias(const char* value) { SetConnectionAlias(value); return *this;}


    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the outbound connection.</p>
     */
    inline const OutboundCrossClusterSearchConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the outbound connection.</p>
     */
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the outbound connection.</p>
     */
    inline void SetConnectionStatus(const OutboundCrossClusterSearchConnectionStatus& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the outbound connection.</p>
     */
    inline void SetConnectionStatus(OutboundCrossClusterSearchConnectionStatus&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the outbound connection.</p>
     */
    inline OutboundCrossClusterSearchConnection& WithConnectionStatus(const OutboundCrossClusterSearchConnectionStatus& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the outbound connection.</p>
     */
    inline OutboundCrossClusterSearchConnection& WithConnectionStatus(OutboundCrossClusterSearchConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}

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
