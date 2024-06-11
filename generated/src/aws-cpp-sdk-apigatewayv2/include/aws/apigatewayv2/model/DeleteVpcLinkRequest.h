﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class DeleteVpcLinkRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API DeleteVpcLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcLink"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the VPC link.</p>
     */
    inline const Aws::String& GetVpcLinkId() const{ return m_vpcLinkId; }
    inline bool VpcLinkIdHasBeenSet() const { return m_vpcLinkIdHasBeenSet; }
    inline void SetVpcLinkId(const Aws::String& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = value; }
    inline void SetVpcLinkId(Aws::String&& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = std::move(value); }
    inline void SetVpcLinkId(const char* value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId.assign(value); }
    inline DeleteVpcLinkRequest& WithVpcLinkId(const Aws::String& value) { SetVpcLinkId(value); return *this;}
    inline DeleteVpcLinkRequest& WithVpcLinkId(Aws::String&& value) { SetVpcLinkId(std::move(value)); return *this;}
    inline DeleteVpcLinkRequest& WithVpcLinkId(const char* value) { SetVpcLinkId(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcLinkId;
    bool m_vpcLinkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
