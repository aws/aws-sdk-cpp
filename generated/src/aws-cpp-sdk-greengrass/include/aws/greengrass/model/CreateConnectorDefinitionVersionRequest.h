/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Connector.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class CreateConnectorDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API CreateConnectorDefinitionVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnectorDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const { return m_amznClientToken; }
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }
    template<typename AmznClientTokenT = Aws::String>
    void SetAmznClientToken(AmznClientTokenT&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::forward<AmznClientTokenT>(value); }
    template<typename AmznClientTokenT = Aws::String>
    CreateConnectorDefinitionVersionRequest& WithAmznClientToken(AmznClientTokenT&& value) { SetAmznClientToken(std::forward<AmznClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the connector definition.
     */
    inline const Aws::String& GetConnectorDefinitionId() const { return m_connectorDefinitionId; }
    inline bool ConnectorDefinitionIdHasBeenSet() const { return m_connectorDefinitionIdHasBeenSet; }
    template<typename ConnectorDefinitionIdT = Aws::String>
    void SetConnectorDefinitionId(ConnectorDefinitionIdT&& value) { m_connectorDefinitionIdHasBeenSet = true; m_connectorDefinitionId = std::forward<ConnectorDefinitionIdT>(value); }
    template<typename ConnectorDefinitionIdT = Aws::String>
    CreateConnectorDefinitionVersionRequest& WithConnectorDefinitionId(ConnectorDefinitionIdT&& value) { SetConnectorDefinitionId(std::forward<ConnectorDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline const Aws::Vector<Connector>& GetConnectors() const { return m_connectors; }
    inline bool ConnectorsHasBeenSet() const { return m_connectorsHasBeenSet; }
    template<typename ConnectorsT = Aws::Vector<Connector>>
    void SetConnectors(ConnectorsT&& value) { m_connectorsHasBeenSet = true; m_connectors = std::forward<ConnectorsT>(value); }
    template<typename ConnectorsT = Aws::Vector<Connector>>
    CreateConnectorDefinitionVersionRequest& WithConnectors(ConnectorsT&& value) { SetConnectors(std::forward<ConnectorsT>(value)); return *this;}
    template<typename ConnectorsT = Connector>
    CreateConnectorDefinitionVersionRequest& AddConnectors(ConnectorsT&& value) { m_connectorsHasBeenSet = true; m_connectors.emplace_back(std::forward<ConnectorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet = false;

    Aws::String m_connectorDefinitionId;
    bool m_connectorDefinitionIdHasBeenSet = false;

    Aws::Vector<Connector> m_connectors;
    bool m_connectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
