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
    AWS_GREENGRASS_API CreateConnectorDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnectorDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateConnectorDefinitionVersionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateConnectorDefinitionVersionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateConnectorDefinitionVersionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * The ID of the connector definition.
     */
    inline const Aws::String& GetConnectorDefinitionId() const{ return m_connectorDefinitionId; }

    /**
     * The ID of the connector definition.
     */
    inline bool ConnectorDefinitionIdHasBeenSet() const { return m_connectorDefinitionIdHasBeenSet; }

    /**
     * The ID of the connector definition.
     */
    inline void SetConnectorDefinitionId(const Aws::String& value) { m_connectorDefinitionIdHasBeenSet = true; m_connectorDefinitionId = value; }

    /**
     * The ID of the connector definition.
     */
    inline void SetConnectorDefinitionId(Aws::String&& value) { m_connectorDefinitionIdHasBeenSet = true; m_connectorDefinitionId = std::move(value); }

    /**
     * The ID of the connector definition.
     */
    inline void SetConnectorDefinitionId(const char* value) { m_connectorDefinitionIdHasBeenSet = true; m_connectorDefinitionId.assign(value); }

    /**
     * The ID of the connector definition.
     */
    inline CreateConnectorDefinitionVersionRequest& WithConnectorDefinitionId(const Aws::String& value) { SetConnectorDefinitionId(value); return *this;}

    /**
     * The ID of the connector definition.
     */
    inline CreateConnectorDefinitionVersionRequest& WithConnectorDefinitionId(Aws::String&& value) { SetConnectorDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the connector definition.
     */
    inline CreateConnectorDefinitionVersionRequest& WithConnectorDefinitionId(const char* value) { SetConnectorDefinitionId(value); return *this;}


    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline const Aws::Vector<Connector>& GetConnectors() const{ return m_connectors; }

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline bool ConnectorsHasBeenSet() const { return m_connectorsHasBeenSet; }

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline void SetConnectors(const Aws::Vector<Connector>& value) { m_connectorsHasBeenSet = true; m_connectors = value; }

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline void SetConnectors(Aws::Vector<Connector>&& value) { m_connectorsHasBeenSet = true; m_connectors = std::move(value); }

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline CreateConnectorDefinitionVersionRequest& WithConnectors(const Aws::Vector<Connector>& value) { SetConnectors(value); return *this;}

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline CreateConnectorDefinitionVersionRequest& WithConnectors(Aws::Vector<Connector>&& value) { SetConnectors(std::move(value)); return *this;}

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline CreateConnectorDefinitionVersionRequest& AddConnectors(const Connector& value) { m_connectorsHasBeenSet = true; m_connectors.push_back(value); return *this; }

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline CreateConnectorDefinitionVersionRequest& AddConnectors(Connector&& value) { m_connectorsHasBeenSet = true; m_connectors.push_back(std::move(value)); return *this; }

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
