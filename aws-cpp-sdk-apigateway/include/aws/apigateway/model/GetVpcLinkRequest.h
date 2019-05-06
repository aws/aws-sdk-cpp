/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Gets a specified VPC link under the caller's account in a
   * region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetVpcLinkRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetVpcLinkRequest : public APIGatewayRequest
  {
  public:
    GetVpcLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetVpcLink"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The identifier of the <a>VpcLink</a>. It is used in an
     * <a>Integration</a> to reference this <a>VpcLink</a>.</p>
     */
    inline const Aws::String& GetVpcLinkId() const{ return m_vpcLinkId; }

    /**
     * <p>[Required] The identifier of the <a>VpcLink</a>. It is used in an
     * <a>Integration</a> to reference this <a>VpcLink</a>.</p>
     */
    inline bool VpcLinkIdHasBeenSet() const { return m_vpcLinkIdHasBeenSet; }

    /**
     * <p>[Required] The identifier of the <a>VpcLink</a>. It is used in an
     * <a>Integration</a> to reference this <a>VpcLink</a>.</p>
     */
    inline void SetVpcLinkId(const Aws::String& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = value; }

    /**
     * <p>[Required] The identifier of the <a>VpcLink</a>. It is used in an
     * <a>Integration</a> to reference this <a>VpcLink</a>.</p>
     */
    inline void SetVpcLinkId(Aws::String&& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = std::move(value); }

    /**
     * <p>[Required] The identifier of the <a>VpcLink</a>. It is used in an
     * <a>Integration</a> to reference this <a>VpcLink</a>.</p>
     */
    inline void SetVpcLinkId(const char* value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId.assign(value); }

    /**
     * <p>[Required] The identifier of the <a>VpcLink</a>. It is used in an
     * <a>Integration</a> to reference this <a>VpcLink</a>.</p>
     */
    inline GetVpcLinkRequest& WithVpcLinkId(const Aws::String& value) { SetVpcLinkId(value); return *this;}

    /**
     * <p>[Required] The identifier of the <a>VpcLink</a>. It is used in an
     * <a>Integration</a> to reference this <a>VpcLink</a>.</p>
     */
    inline GetVpcLinkRequest& WithVpcLinkId(Aws::String&& value) { SetVpcLinkId(std::move(value)); return *this;}

    /**
     * <p>[Required] The identifier of the <a>VpcLink</a>. It is used in an
     * <a>Integration</a> to reference this <a>VpcLink</a>.</p>
     */
    inline GetVpcLinkRequest& WithVpcLinkId(const char* value) { SetVpcLinkId(value); return *this;}

  private:

    Aws::String m_vpcLinkId;
    bool m_vpcLinkIdHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
