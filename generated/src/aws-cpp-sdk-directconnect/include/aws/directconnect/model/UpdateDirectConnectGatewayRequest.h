/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class UpdateDirectConnectGatewayRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API UpdateDirectConnectGatewayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDirectConnectGateway"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Direct Connect gateway to update.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const { return m_directConnectGatewayId; }
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }
    template<typename DirectConnectGatewayIdT = Aws::String>
    void SetDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::forward<DirectConnectGatewayIdT>(value); }
    template<typename DirectConnectGatewayIdT = Aws::String>
    UpdateDirectConnectGatewayRequest& WithDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { SetDirectConnectGatewayId(std::forward<DirectConnectGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetNewDirectConnectGatewayName() const { return m_newDirectConnectGatewayName; }
    inline bool NewDirectConnectGatewayNameHasBeenSet() const { return m_newDirectConnectGatewayNameHasBeenSet; }
    template<typename NewDirectConnectGatewayNameT = Aws::String>
    void SetNewDirectConnectGatewayName(NewDirectConnectGatewayNameT&& value) { m_newDirectConnectGatewayNameHasBeenSet = true; m_newDirectConnectGatewayName = std::forward<NewDirectConnectGatewayNameT>(value); }
    template<typename NewDirectConnectGatewayNameT = Aws::String>
    UpdateDirectConnectGatewayRequest& WithNewDirectConnectGatewayName(NewDirectConnectGatewayNameT&& value) { SetNewDirectConnectGatewayName(std::forward<NewDirectConnectGatewayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    Aws::String m_newDirectConnectGatewayName;
    bool m_newDirectConnectGatewayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
