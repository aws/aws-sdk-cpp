/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class CreateWirelessGatewayTaskRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API CreateWirelessGatewayTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWirelessGatewayTask"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the resource to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline CreateWirelessGatewayTaskRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline CreateWirelessGatewayTaskRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline CreateWirelessGatewayTaskRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline const Aws::String& GetWirelessGatewayTaskDefinitionId() const{ return m_wirelessGatewayTaskDefinitionId; }

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline bool WirelessGatewayTaskDefinitionIdHasBeenSet() const { return m_wirelessGatewayTaskDefinitionIdHasBeenSet; }

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline void SetWirelessGatewayTaskDefinitionId(const Aws::String& value) { m_wirelessGatewayTaskDefinitionIdHasBeenSet = true; m_wirelessGatewayTaskDefinitionId = value; }

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline void SetWirelessGatewayTaskDefinitionId(Aws::String&& value) { m_wirelessGatewayTaskDefinitionIdHasBeenSet = true; m_wirelessGatewayTaskDefinitionId = std::move(value); }

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline void SetWirelessGatewayTaskDefinitionId(const char* value) { m_wirelessGatewayTaskDefinitionIdHasBeenSet = true; m_wirelessGatewayTaskDefinitionId.assign(value); }

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline CreateWirelessGatewayTaskRequest& WithWirelessGatewayTaskDefinitionId(const Aws::String& value) { SetWirelessGatewayTaskDefinitionId(value); return *this;}

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline CreateWirelessGatewayTaskRequest& WithWirelessGatewayTaskDefinitionId(Aws::String&& value) { SetWirelessGatewayTaskDefinitionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline CreateWirelessGatewayTaskRequest& WithWirelessGatewayTaskDefinitionId(const char* value) { SetWirelessGatewayTaskDefinitionId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_wirelessGatewayTaskDefinitionId;
    bool m_wirelessGatewayTaskDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
