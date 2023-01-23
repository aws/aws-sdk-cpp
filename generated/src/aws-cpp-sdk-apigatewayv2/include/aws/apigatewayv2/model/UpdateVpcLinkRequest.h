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
   * <p>Updates a VPC link.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateVpcLinkRequest">AWS
   * API Reference</a></p>
   */
  class UpdateVpcLinkRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API UpdateVpcLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVpcLink"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the VPC link.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline UpdateVpcLinkRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the VPC link.</p>
     */
    inline UpdateVpcLinkRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the VPC link.</p>
     */
    inline UpdateVpcLinkRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline UpdateVpcLinkRequest& WithVpcLinkId(const Aws::String& value) { SetVpcLinkId(value); return *this;}

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline UpdateVpcLinkRequest& WithVpcLinkId(Aws::String&& value) { SetVpcLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline UpdateVpcLinkRequest& WithVpcLinkId(const char* value) { SetVpcLinkId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_vpcLinkId;
    bool m_vpcLinkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
