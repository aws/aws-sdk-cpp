/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/es/model/DomainInformation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the
   * <code><a>CreateOutboundCrossClusterSearchConnection</a></code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateOutboundCrossClusterSearchConnectionRequest">AWS
   * API Reference</a></p>
   */
  class CreateOutboundCrossClusterSearchConnectionRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CreateOutboundCrossClusterSearchConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOutboundCrossClusterSearchConnection"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


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
    inline CreateOutboundCrossClusterSearchConnectionRequest& WithSourceDomainInfo(const DomainInformation& value) { SetSourceDomainInfo(value); return *this;}

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionRequest& WithSourceDomainInfo(DomainInformation&& value) { SetSourceDomainInfo(std::move(value)); return *this;}


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
    inline CreateOutboundCrossClusterSearchConnectionRequest& WithDestinationDomainInfo(const DomainInformation& value) { SetDestinationDomainInfo(value); return *this;}

    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionRequest& WithDestinationDomainInfo(DomainInformation&& value) { SetDestinationDomainInfo(std::move(value)); return *this;}


    /**
     * <p>Specifies the connection alias that will be used by the customer for this
     * connection.</p>
     */
    inline const Aws::String& GetConnectionAlias() const{ return m_connectionAlias; }

    /**
     * <p>Specifies the connection alias that will be used by the customer for this
     * connection.</p>
     */
    inline bool ConnectionAliasHasBeenSet() const { return m_connectionAliasHasBeenSet; }

    /**
     * <p>Specifies the connection alias that will be used by the customer for this
     * connection.</p>
     */
    inline void SetConnectionAlias(const Aws::String& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = value; }

    /**
     * <p>Specifies the connection alias that will be used by the customer for this
     * connection.</p>
     */
    inline void SetConnectionAlias(Aws::String&& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = std::move(value); }

    /**
     * <p>Specifies the connection alias that will be used by the customer for this
     * connection.</p>
     */
    inline void SetConnectionAlias(const char* value) { m_connectionAliasHasBeenSet = true; m_connectionAlias.assign(value); }

    /**
     * <p>Specifies the connection alias that will be used by the customer for this
     * connection.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionRequest& WithConnectionAlias(const Aws::String& value) { SetConnectionAlias(value); return *this;}

    /**
     * <p>Specifies the connection alias that will be used by the customer for this
     * connection.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionRequest& WithConnectionAlias(Aws::String&& value) { SetConnectionAlias(std::move(value)); return *this;}

    /**
     * <p>Specifies the connection alias that will be used by the customer for this
     * connection.</p>
     */
    inline CreateOutboundCrossClusterSearchConnectionRequest& WithConnectionAlias(const char* value) { SetConnectionAlias(value); return *this;}

  private:

    DomainInformation m_sourceDomainInfo;
    bool m_sourceDomainInfoHasBeenSet = false;

    DomainInformation m_destinationDomainInfo;
    bool m_destinationDomainInfoHasBeenSet = false;

    Aws::String m_connectionAlias;
    bool m_connectionAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
