﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/opensearch/model/DomainInformationContainer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code> <a>CreateOutboundConnection</a>
   * </code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateOutboundConnectionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API CreateOutboundConnectionRequest : public OpenSearchServiceRequest
  {
  public:
    CreateOutboundConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOutboundConnection"; }

    Aws::String SerializePayload() const override;


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
    inline CreateOutboundConnectionRequest& WithLocalDomainInfo(const DomainInformationContainer& value) { SetLocalDomainInfo(value); return *this;}

    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the local OpenSearch
     * domain. </p>
     */
    inline CreateOutboundConnectionRequest& WithLocalDomainInfo(DomainInformationContainer&& value) { SetLocalDomainInfo(std::move(value)); return *this;}


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
    inline CreateOutboundConnectionRequest& WithRemoteDomainInfo(const DomainInformationContainer& value) { SetRemoteDomainInfo(value); return *this;}

    /**
     * <p>The <code> <a>AWSDomainInformation</a> </code> for the remote OpenSearch
     * domain. </p>
     */
    inline CreateOutboundConnectionRequest& WithRemoteDomainInfo(DomainInformationContainer&& value) { SetRemoteDomainInfo(std::move(value)); return *this;}


    /**
     * <p>The connection alias used used by the customer for this cross-cluster
     * connection.</p>
     */
    inline const Aws::String& GetConnectionAlias() const{ return m_connectionAlias; }

    /**
     * <p>The connection alias used used by the customer for this cross-cluster
     * connection.</p>
     */
    inline bool ConnectionAliasHasBeenSet() const { return m_connectionAliasHasBeenSet; }

    /**
     * <p>The connection alias used used by the customer for this cross-cluster
     * connection.</p>
     */
    inline void SetConnectionAlias(const Aws::String& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = value; }

    /**
     * <p>The connection alias used used by the customer for this cross-cluster
     * connection.</p>
     */
    inline void SetConnectionAlias(Aws::String&& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = std::move(value); }

    /**
     * <p>The connection alias used used by the customer for this cross-cluster
     * connection.</p>
     */
    inline void SetConnectionAlias(const char* value) { m_connectionAliasHasBeenSet = true; m_connectionAlias.assign(value); }

    /**
     * <p>The connection alias used used by the customer for this cross-cluster
     * connection.</p>
     */
    inline CreateOutboundConnectionRequest& WithConnectionAlias(const Aws::String& value) { SetConnectionAlias(value); return *this;}

    /**
     * <p>The connection alias used used by the customer for this cross-cluster
     * connection.</p>
     */
    inline CreateOutboundConnectionRequest& WithConnectionAlias(Aws::String&& value) { SetConnectionAlias(std::move(value)); return *this;}

    /**
     * <p>The connection alias used used by the customer for this cross-cluster
     * connection.</p>
     */
    inline CreateOutboundConnectionRequest& WithConnectionAlias(const char* value) { SetConnectionAlias(value); return *this;}

  private:

    DomainInformationContainer m_localDomainInfo;
    bool m_localDomainInfoHasBeenSet;

    DomainInformationContainer m_remoteDomainInfo;
    bool m_remoteDomainInfoHasBeenSet;

    Aws::String m_connectionAlias;
    bool m_connectionAliasHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
