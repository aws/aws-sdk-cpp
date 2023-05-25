/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class DeleteConnectorDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API DeleteConnectorDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConnectorDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


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
    inline DeleteConnectorDefinitionRequest& WithConnectorDefinitionId(const Aws::String& value) { SetConnectorDefinitionId(value); return *this;}

    /**
     * The ID of the connector definition.
     */
    inline DeleteConnectorDefinitionRequest& WithConnectorDefinitionId(Aws::String&& value) { SetConnectorDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the connector definition.
     */
    inline DeleteConnectorDefinitionRequest& WithConnectorDefinitionId(const char* value) { SetConnectorDefinitionId(value); return *this;}

  private:

    Aws::String m_connectorDefinitionId;
    bool m_connectorDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
