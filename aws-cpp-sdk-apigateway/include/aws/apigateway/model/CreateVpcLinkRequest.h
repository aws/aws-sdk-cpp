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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Creates a VPC link, under the caller's account in a selected region, in an
   * asynchronous operation that typically takes 2-4 minutes to complete and become
   * operational. The caller must have permissions to create and update VPC Endpoint
   * services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateVpcLinkRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateVpcLinkRequest : public APIGatewayRequest
  {
  public:
    CreateVpcLinkRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcLink"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The name used to label and identify the VPC link.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>[Required] The name used to label and identify the VPC link.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>[Required] The name used to label and identify the VPC link.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>[Required] The name used to label and identify the VPC link.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>[Required] The name used to label and identify the VPC link.</p>
     */
    inline CreateVpcLinkRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>[Required] The name used to label and identify the VPC link.</p>
     */
    inline CreateVpcLinkRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>[Required] The name used to label and identify the VPC link.</p>
     */
    inline CreateVpcLinkRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the VPC link.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the VPC link.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the VPC link.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the VPC link.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the VPC link.</p>
     */
    inline CreateVpcLinkRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the VPC link.</p>
     */
    inline CreateVpcLinkRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the VPC link.</p>
     */
    inline CreateVpcLinkRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>[Required] The ARNs of network load balancers of the VPC targeted by the VPC
     * link. The network load balancers must be owned by the same AWS account of the
     * API owner.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetArns() const{ return m_targetArns; }

    /**
     * <p>[Required] The ARNs of network load balancers of the VPC targeted by the VPC
     * link. The network load balancers must be owned by the same AWS account of the
     * API owner.</p>
     */
    inline void SetTargetArns(const Aws::Vector<Aws::String>& value) { m_targetArnsHasBeenSet = true; m_targetArns = value; }

    /**
     * <p>[Required] The ARNs of network load balancers of the VPC targeted by the VPC
     * link. The network load balancers must be owned by the same AWS account of the
     * API owner.</p>
     */
    inline void SetTargetArns(Aws::Vector<Aws::String>&& value) { m_targetArnsHasBeenSet = true; m_targetArns = std::move(value); }

    /**
     * <p>[Required] The ARNs of network load balancers of the VPC targeted by the VPC
     * link. The network load balancers must be owned by the same AWS account of the
     * API owner.</p>
     */
    inline CreateVpcLinkRequest& WithTargetArns(const Aws::Vector<Aws::String>& value) { SetTargetArns(value); return *this;}

    /**
     * <p>[Required] The ARNs of network load balancers of the VPC targeted by the VPC
     * link. The network load balancers must be owned by the same AWS account of the
     * API owner.</p>
     */
    inline CreateVpcLinkRequest& WithTargetArns(Aws::Vector<Aws::String>&& value) { SetTargetArns(std::move(value)); return *this;}

    /**
     * <p>[Required] The ARNs of network load balancers of the VPC targeted by the VPC
     * link. The network load balancers must be owned by the same AWS account of the
     * API owner.</p>
     */
    inline CreateVpcLinkRequest& AddTargetArns(const Aws::String& value) { m_targetArnsHasBeenSet = true; m_targetArns.push_back(value); return *this; }

    /**
     * <p>[Required] The ARNs of network load balancers of the VPC targeted by the VPC
     * link. The network load balancers must be owned by the same AWS account of the
     * API owner.</p>
     */
    inline CreateVpcLinkRequest& AddTargetArns(Aws::String&& value) { m_targetArnsHasBeenSet = true; m_targetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>[Required] The ARNs of network load balancers of the VPC targeted by the VPC
     * link. The network load balancers must be owned by the same AWS account of the
     * API owner.</p>
     */
    inline CreateVpcLinkRequest& AddTargetArns(const char* value) { m_targetArnsHasBeenSet = true; m_targetArns.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_targetArns;
    bool m_targetArnsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
