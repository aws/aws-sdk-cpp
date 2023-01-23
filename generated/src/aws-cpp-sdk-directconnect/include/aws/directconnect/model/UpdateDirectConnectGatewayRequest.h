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
    AWS_DIRECTCONNECT_API UpdateDirectConnectGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDirectConnectGateway"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Direct Connect gateway to update.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }

    /**
     * <p>The ID of the Direct Connect gateway to update.</p>
     */
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the Direct Connect gateway to update.</p>
     */
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = value; }

    /**
     * <p>The ID of the Direct Connect gateway to update.</p>
     */
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::move(value); }

    /**
     * <p>The ID of the Direct Connect gateway to update.</p>
     */
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId.assign(value); }

    /**
     * <p>The ID of the Direct Connect gateway to update.</p>
     */
    inline UpdateDirectConnectGatewayRequest& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway to update.</p>
     */
    inline UpdateDirectConnectGatewayRequest& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway to update.</p>
     */
    inline UpdateDirectConnectGatewayRequest& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    /**
     * <p>The new name for the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetNewDirectConnectGatewayName() const{ return m_newDirectConnectGatewayName; }

    /**
     * <p>The new name for the Direct Connect gateway.</p>
     */
    inline bool NewDirectConnectGatewayNameHasBeenSet() const { return m_newDirectConnectGatewayNameHasBeenSet; }

    /**
     * <p>The new name for the Direct Connect gateway.</p>
     */
    inline void SetNewDirectConnectGatewayName(const Aws::String& value) { m_newDirectConnectGatewayNameHasBeenSet = true; m_newDirectConnectGatewayName = value; }

    /**
     * <p>The new name for the Direct Connect gateway.</p>
     */
    inline void SetNewDirectConnectGatewayName(Aws::String&& value) { m_newDirectConnectGatewayNameHasBeenSet = true; m_newDirectConnectGatewayName = std::move(value); }

    /**
     * <p>The new name for the Direct Connect gateway.</p>
     */
    inline void SetNewDirectConnectGatewayName(const char* value) { m_newDirectConnectGatewayNameHasBeenSet = true; m_newDirectConnectGatewayName.assign(value); }

    /**
     * <p>The new name for the Direct Connect gateway.</p>
     */
    inline UpdateDirectConnectGatewayRequest& WithNewDirectConnectGatewayName(const Aws::String& value) { SetNewDirectConnectGatewayName(value); return *this;}

    /**
     * <p>The new name for the Direct Connect gateway.</p>
     */
    inline UpdateDirectConnectGatewayRequest& WithNewDirectConnectGatewayName(Aws::String&& value) { SetNewDirectConnectGatewayName(std::move(value)); return *this;}

    /**
     * <p>The new name for the Direct Connect gateway.</p>
     */
    inline UpdateDirectConnectGatewayRequest& WithNewDirectConnectGatewayName(const char* value) { SetNewDirectConnectGatewayName(value); return *this;}

  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    Aws::String m_newDirectConnectGatewayName;
    bool m_newDirectConnectGatewayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
