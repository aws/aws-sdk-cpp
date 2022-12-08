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
    AWS_ELASTICSEARCHSERVICE_API CreateOutboundCrossClusterSearchConnectionResult();
    AWS_ELASTICSEARCHSERVICE_API CreateOutboundCrossClusterSearchConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API CreateOutboundCrossClusterSearchConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline const DomainInformation& GetSourceDomainInfo() const{ return m_sourceDomainInfo; }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline void SetSourceDomainInfo(const DomainInformation& value) { m_sourceDomainInfo = value; }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline void SetSourceDomainInfo(DomainInformation&& value) { m_sourceDomainInfo = std::move(value); }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionResult& WithSourceDomainInfo(const DomainInformation& value) { SetSourceDomainInfo(value); return *this;}

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionResult& WithSourceDomainInfo(DomainInformation&& value) { SetSourceDomainInfo(std::move(value)); return *this;}


    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline const DomainInformation& GetDestinationDomainInfo() const{ return m_destinationDomainInfo; }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline void SetDestinationDomainInfo(const DomainInformation& value) { m_destinationDomainInfo = value; }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline void SetDestinationDomainInfo(DomainInformation&& value) { m_destinationDomainInfo = std::move(value); }

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionResult& WithDestinationDomainInfo(const DomainInformation& value) { SetDestinationDomainInfo(value); return *this;}

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionResult& WithDestinationDomainInfo(DomainInformation&& value) { SetDestinationDomainInfo(std::move(value)); return *this;}


    /**
     * <p>Specifies the connection alias provided during the create connection
     * request.</p>
     */
    inline const Aws::String& GetConnectionAlias() const{ return m_connectionAlias; }

    /**
     * <p>Specifies the connection alias provided during the create connection
     * request.</p>
     */
    inline void SetConnectionAlias(const Aws::String& value) { m_connectionAlias = value; }

    /**
     * <p>Specifies the connection alias provided during the create connection
     * request.</p>
     */
    inline void SetConnectionAlias(Aws::String&& value) { m_connectionAlias = std::move(value); }

    /**
     * <p>Specifies the connection alias provided during the create connection
     * request.</p>
     */
    inline void SetConnectionAlias(const char* value) { m_connectionAlias.assign(value); }

    /**
     * <p>Specifies the connection alias provided during the create connection
     * request.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionResult& WithConnectionAlias(const Aws::String& value) { SetConnectionAlias(value); return *this;}

    /**
     * <p>Specifies the connection alias provided during the create connection
     * request.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionResult& WithConnectionAlias(Aws::String&& value) { SetConnectionAlias(std::move(value)); return *this;}

    /**
     * <p>Specifies the connection alias provided during the create connection
     * request.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionResult& WithConnectionAlias(const char* value) { SetConnectionAlias(value); return *this;}


    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the newly created connection.</p>
     */
    inline const OutboundCrossClusterSearchConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the newly created connection.</p>
     */
    inline void SetConnectionStatus(const OutboundCrossClusterSearchConnectionStatus& value) { m_connectionStatus = value; }

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the newly created connection.</p>
     */
    inline void SetConnectionStatus(OutboundCrossClusterSearchConnectionStatus&& value) { m_connectionStatus = std::move(value); }

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the newly created connection.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionResult& WithConnectionStatus(const OutboundCrossClusterSearchConnectionStatus& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnectionStatus</a></code>
     * for the newly created connection.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionResult& WithConnectionStatus(OutboundCrossClusterSearchConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}


    /**
     * <p>Unique id for the created outbound connection, which is used for subsequent
     * operations on connection.</p>
     */
    inline const Aws::String& GetCrossClusterSearchConnectionId() const{ return m_crossClusterSearchConnectionId; }

    /**
     * <p>Unique id for the created outbound connection, which is used for subsequent
     * operations on connection.</p>
     */
    inline void SetCrossClusterSearchConnectionId(const Aws::String& value) { m_crossClusterSearchConnectionId = value; }

    /**
     * <p>Unique id for the created outbound connection, which is used for subsequent
     * operations on connection.</p>
     */
    inline void SetCrossClusterSearchConnectionId(Aws::String&& value) { m_crossClusterSearchConnectionId = std::move(value); }

    /**
     * <p>Unique id for the created outbound connection, which is used for subsequent
     * operations on connection.</p>
     */
    inline void SetCrossClusterSearchConnectionId(const char* value) { m_crossClusterSearchConnectionId.assign(value); }

    /**
     * <p>Unique id for the created outbound connection, which is used for subsequent
     * operations on connection.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnectionId(const Aws::String& value) { SetCrossClusterSearchConnectionId(value); return *this;}

    /**
     * <p>Unique id for the created outbound connection, which is used for subsequent
     * operations on connection.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnectionId(Aws::String&& value) { SetCrossClusterSearchConnectionId(std::move(value)); return *this;}

    /**
     * <p>Unique id for the created outbound connection, which is used for subsequent
     * operations on connection.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnectionId(const char* value) { SetCrossClusterSearchConnectionId(value); return *this;}

  private:

    DomainInformation m_sourceDomainInfo;

    DomainInformation m_destinationDomainInfo;

    Aws::String m_connectionAlias;

    OutboundCrossClusterSearchConnectionStatus m_connectionStatus;

    Aws::String m_crossClusterSearchConnectionId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
