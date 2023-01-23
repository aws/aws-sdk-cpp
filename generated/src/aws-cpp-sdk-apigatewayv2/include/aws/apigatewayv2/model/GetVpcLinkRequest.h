/**
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
  class GetVpcLinkRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API GetVpcLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetVpcLink"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the VPC link.</p>
     */
    inline const Aws::String& GetVpcLinkId() const{ return m_vpcLinkId; }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline bool VpcLinkIdHasBeenSet() const { return m_vpcLinkIdHasBeenSet; }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline void SetVpcLinkId(const Aws::String& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = value; }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline void SetVpcLinkId(Aws::String&& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = std::move(value); }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline void SetVpcLinkId(const char* value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId.assign(value); }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline GetVpcLinkRequest& WithVpcLinkId(const Aws::String& value) { SetVpcLinkId(value); return *this;}

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline GetVpcLinkRequest& WithVpcLinkId(Aws::String&& value) { SetVpcLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline GetVpcLinkRequest& WithVpcLinkId(const char* value) { SetVpcLinkId(value); return *this;}

  private:

    Aws::String m_vpcLinkId;
    bool m_vpcLinkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
