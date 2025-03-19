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
    AWS_IOTWIRELESS_API CreateWirelessGatewayTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWirelessGatewayTask"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the resource to update.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateWirelessGatewayTaskRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the WirelessGatewayTaskDefinition.</p>
     */
    inline const Aws::String& GetWirelessGatewayTaskDefinitionId() const { return m_wirelessGatewayTaskDefinitionId; }
    inline bool WirelessGatewayTaskDefinitionIdHasBeenSet() const { return m_wirelessGatewayTaskDefinitionIdHasBeenSet; }
    template<typename WirelessGatewayTaskDefinitionIdT = Aws::String>
    void SetWirelessGatewayTaskDefinitionId(WirelessGatewayTaskDefinitionIdT&& value) { m_wirelessGatewayTaskDefinitionIdHasBeenSet = true; m_wirelessGatewayTaskDefinitionId = std::forward<WirelessGatewayTaskDefinitionIdT>(value); }
    template<typename WirelessGatewayTaskDefinitionIdT = Aws::String>
    CreateWirelessGatewayTaskRequest& WithWirelessGatewayTaskDefinitionId(WirelessGatewayTaskDefinitionIdT&& value) { SetWirelessGatewayTaskDefinitionId(std::forward<WirelessGatewayTaskDefinitionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_wirelessGatewayTaskDefinitionId;
    bool m_wirelessGatewayTaskDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
