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
    AWS_APIGATEWAYV2_API GetVpcLinkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetVpcLink"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the VPC link.</p>
     */
    inline const Aws::String& GetVpcLinkId() const { return m_vpcLinkId; }
    inline bool VpcLinkIdHasBeenSet() const { return m_vpcLinkIdHasBeenSet; }
    template<typename VpcLinkIdT = Aws::String>
    void SetVpcLinkId(VpcLinkIdT&& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = std::forward<VpcLinkIdT>(value); }
    template<typename VpcLinkIdT = Aws::String>
    GetVpcLinkRequest& WithVpcLinkId(VpcLinkIdT&& value) { SetVpcLinkId(std::forward<VpcLinkIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcLinkId;
    bool m_vpcLinkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
