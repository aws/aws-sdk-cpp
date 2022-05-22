/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainInformationContainer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/InboundConnectionStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Details of an inbound connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/InboundConnection">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API InboundConnection
  {
  public:
    InboundConnection();
    InboundConnection(Aws::Utils::Json::JsonView jsonValue);
    InboundConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the local OpenSearch
     * domain. </p>
     */
    inline const DomainInformationContainer& GetLocalDomainInfo() const{ return m_localDomainInfo; }

    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the local OpenSearch
     * domain. </p>
     */
    inline bool LocalDomainInfoHasBeenSet() const { return m_localDomainInfoHasBeenSet; }

    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the local OpenSearch
     * domain. </p>
     */
    inline void SetLocalDomainInfo(const DomainInformationContainer& value) { m_localDomainInfoHasBeenSet = true; m_localDomainInfo = value; }

    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the local OpenSearch
     * domain. </p>
     */
    inline void SetLocalDomainInfo(DomainInformationContainer&& value) { m_localDomainInfoHasBeenSet = true; m_localDomainInfo = std::move(value); }

    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the local OpenSearch
     * domain. </p>
     */
    inline InboundConnection& WithLocalDomainInfo(const DomainInformationContainer& value) { SetLocalDomainInfo(value); return *this;}

    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the local OpenSearch
     * domain. </p>
     */
    inline InboundConnection& WithLocalDomainInfo(DomainInformationContainer&& value) { SetLocalDomainInfo(std::move(value)); return *this;}


    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the remote OpenSearch
     * domain. </p>
     */
    inline const DomainInformationContainer& GetRemoteDomainInfo() const{ return m_remoteDomainInfo; }

    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the remote OpenSearch
     * domain. </p>
     */
    inline bool RemoteDomainInfoHasBeenSet() const { return m_remoteDomainInfoHasBeenSet; }

    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the remote OpenSearch
     * domain. </p>
     */
    inline void SetRemoteDomainInfo(const DomainInformationContainer& value) { m_remoteDomainInfoHasBeenSet = true; m_remoteDomainInfo = value; }

    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the remote OpenSearch
     * domain. </p>
     */
    inline void SetRemoteDomainInfo(DomainInformationContainer&& value) { m_remoteDomainInfoHasBeenSet = true; m_remoteDomainInfo = std::move(value); }

    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the remote OpenSearch
     * domain. </p>
     */
    inline InboundConnection& WithRemoteDomainInfo(const DomainInformationContainer& value) { SetRemoteDomainInfo(value); return *this;}

    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the remote OpenSearch
     * domain. </p>
     */
    inline InboundConnection& WithRemoteDomainInfo(DomainInformationContainer&& value) { SetRemoteDomainInfo(std::move(value)); return *this;}


    /**
     * <p>The connection ID for the inbound cross-cluster connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The connection ID for the inbound cross-cluster connection.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The connection ID for the inbound cross-cluster connection.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The connection ID for the inbound cross-cluster connection.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The connection ID for the inbound cross-cluster connection.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The connection ID for the inbound cross-cluster connection.</p>
     */
    inline InboundConnection& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The connection ID for the inbound cross-cluster connection.</p>
     */
    inline InboundConnection& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The connection ID for the inbound cross-cluster connection.</p>
     */
    inline InboundConnection& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The <code> <a>InboundConnectionStatus</a> </code> for the outbound
     * connection. </p>
     */
    inline const InboundConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>The <code> <a>InboundConnectionStatus</a> </code> for the outbound
     * connection. </p>
     */
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }

    /**
     * <p>The <code> <a>InboundConnectionStatus</a> </code> for the outbound
     * connection. </p>
     */
    inline void SetConnectionStatus(const InboundConnectionStatus& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }

    /**
     * <p>The <code> <a>InboundConnectionStatus</a> </code> for the outbound
     * connection. </p>
     */
    inline void SetConnectionStatus(InboundConnectionStatus&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }

    /**
     * <p>The <code> <a>InboundConnectionStatus</a> </code> for the outbound
     * connection. </p>
     */
    inline InboundConnection& WithConnectionStatus(const InboundConnectionStatus& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>The <code> <a>InboundConnectionStatus</a> </code> for the outbound
     * connection. </p>
     */
    inline InboundConnection& WithConnectionStatus(InboundConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}

  private:

    DomainInformationContainer m_localDomainInfo;
    bool m_localDomainInfoHasBeenSet;

    DomainInformationContainer m_remoteDomainInfo;
    bool m_remoteDomainInfoHasBeenSet;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;

    InboundConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
