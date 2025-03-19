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
    AWS_ELASTICSEARCHSERVICE_API CreateOutboundCrossClusterSearchConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOutboundCrossClusterSearchConnection"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


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
    CreateOutboundCrossClusterSearchConnectionRequest& WithSourceDomainInfo(SourceDomainInfoT&& value) { SetSourceDomainInfo(std::forward<SourceDomainInfoT>(value)); return *this;}
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
    CreateOutboundCrossClusterSearchConnectionRequest& WithDestinationDomainInfo(DestinationDomainInfoT&& value) { SetDestinationDomainInfo(std::forward<DestinationDomainInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the connection alias that will be used by the customer for this
     * connection.</p>
     */
    inline const Aws::String& GetConnectionAlias() const { return m_connectionAlias; }
    inline bool ConnectionAliasHasBeenSet() const { return m_connectionAliasHasBeenSet; }
    template<typename ConnectionAliasT = Aws::String>
    void SetConnectionAlias(ConnectionAliasT&& value) { m_connectionAliasHasBeenSet = true; m_connectionAlias = std::forward<ConnectionAliasT>(value); }
    template<typename ConnectionAliasT = Aws::String>
    CreateOutboundCrossClusterSearchConnectionRequest& WithConnectionAlias(ConnectionAliasT&& value) { SetConnectionAlias(std::forward<ConnectionAliasT>(value)); return *this;}
    ///@}
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
