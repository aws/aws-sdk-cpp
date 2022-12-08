/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainInformationContainer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/OutboundConnectionStatus.h>
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
   * <p>The result of a <code>CreateOutboundConnection</code> request. Contains
   * details about the newly created cross-cluster connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateOutboundConnectionResponse">AWS
   * API Reference</a></p>
   */
  class CreateOutboundConnectionResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API CreateOutboundConnectionResult();
    AWS_OPENSEARCHSERVICE_API CreateOutboundConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API CreateOutboundConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the source (local) domain.</p>
     */
    inline const DomainInformationContainer& GetLocalDomainInfo() const{ return m_localDomainInfo; }

    /**
     * <p>Information about the source (local) domain.</p>
     */
    inline void SetLocalDomainInfo(const DomainInformationContainer& value) { m_localDomainInfo = value; }

    /**
     * <p>Information about the source (local) domain.</p>
     */
    inline void SetLocalDomainInfo(DomainInformationContainer&& value) { m_localDomainInfo = std::move(value); }

    /**
     * <p>Information about the source (local) domain.</p>
     */
    inline CreateOutboundConnectionResult& WithLocalDomainInfo(const DomainInformationContainer& value) { SetLocalDomainInfo(value); return *this;}

    /**
     * <p>Information about the source (local) domain.</p>
     */
    inline CreateOutboundConnectionResult& WithLocalDomainInfo(DomainInformationContainer&& value) { SetLocalDomainInfo(std::move(value)); return *this;}


    /**
     * <p>Information about the destination (remote) domain.</p>
     */
    inline const DomainInformationContainer& GetRemoteDomainInfo() const{ return m_remoteDomainInfo; }

    /**
     * <p>Information about the destination (remote) domain.</p>
     */
    inline void SetRemoteDomainInfo(const DomainInformationContainer& value) { m_remoteDomainInfo = value; }

    /**
     * <p>Information about the destination (remote) domain.</p>
     */
    inline void SetRemoteDomainInfo(DomainInformationContainer&& value) { m_remoteDomainInfo = std::move(value); }

    /**
     * <p>Information about the destination (remote) domain.</p>
     */
    inline CreateOutboundConnectionResult& WithRemoteDomainInfo(const DomainInformationContainer& value) { SetRemoteDomainInfo(value); return *this;}

    /**
     * <p>Information about the destination (remote) domain.</p>
     */
    inline CreateOutboundConnectionResult& WithRemoteDomainInfo(DomainInformationContainer&& value) { SetRemoteDomainInfo(std::move(value)); return *this;}


    /**
     * <p>Name of the connection.</p>
     */
    inline const Aws::String& GetConnectionAlias() const{ return m_connectionAlias; }

    /**
     * <p>Name of the connection.</p>
     */
    inline void SetConnectionAlias(const Aws::String& value) { m_connectionAlias = value; }

    /**
     * <p>Name of the connection.</p>
     */
    inline void SetConnectionAlias(Aws::String&& value) { m_connectionAlias = std::move(value); }

    /**
     * <p>Name of the connection.</p>
     */
    inline void SetConnectionAlias(const char* value) { m_connectionAlias.assign(value); }

    /**
     * <p>Name of the connection.</p>
     */
    inline CreateOutboundConnectionResult& WithConnectionAlias(const Aws::String& value) { SetConnectionAlias(value); return *this;}

    /**
     * <p>Name of the connection.</p>
     */
    inline CreateOutboundConnectionResult& WithConnectionAlias(Aws::String&& value) { SetConnectionAlias(std::move(value)); return *this;}

    /**
     * <p>Name of the connection.</p>
     */
    inline CreateOutboundConnectionResult& WithConnectionAlias(const char* value) { SetConnectionAlias(value); return *this;}


    /**
     * <p>The status of the connection.</p>
     */
    inline const OutboundConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>The status of the connection.</p>
     */
    inline void SetConnectionStatus(const OutboundConnectionStatus& value) { m_connectionStatus = value; }

    /**
     * <p>The status of the connection.</p>
     */
    inline void SetConnectionStatus(OutboundConnectionStatus&& value) { m_connectionStatus = std::move(value); }

    /**
     * <p>The status of the connection.</p>
     */
    inline CreateOutboundConnectionResult& WithConnectionStatus(const OutboundConnectionStatus& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>The status of the connection.</p>
     */
    inline CreateOutboundConnectionResult& WithConnectionStatus(OutboundConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the created outbound connection, which is used for
     * subsequent operations on the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The unique identifier for the created outbound connection, which is used for
     * subsequent operations on the connection.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }

    /**
     * <p>The unique identifier for the created outbound connection, which is used for
     * subsequent operations on the connection.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }

    /**
     * <p>The unique identifier for the created outbound connection, which is used for
     * subsequent operations on the connection.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }

    /**
     * <p>The unique identifier for the created outbound connection, which is used for
     * subsequent operations on the connection.</p>
     */
    inline CreateOutboundConnectionResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The unique identifier for the created outbound connection, which is used for
     * subsequent operations on the connection.</p>
     */
    inline CreateOutboundConnectionResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the created outbound connection, which is used for
     * subsequent operations on the connection.</p>
     */
    inline CreateOutboundConnectionResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}

  private:

    DomainInformationContainer m_localDomainInfo;

    DomainInformationContainer m_remoteDomainInfo;

    Aws::String m_connectionAlias;

    OutboundConnectionStatus m_connectionStatus;

    Aws::String m_connectionId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
