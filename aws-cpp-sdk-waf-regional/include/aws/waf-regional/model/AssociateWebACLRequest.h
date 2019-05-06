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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class AWS_WAFREGIONAL_API AssociateWebACLRequest : public WAFRegionalRequest
  {
  public:
    AssociateWebACLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateWebACL"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier (ID) for the web ACL. </p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }

    /**
     * <p>A unique identifier (ID) for the web ACL. </p>
     */
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }

    /**
     * <p>A unique identifier (ID) for the web ACL. </p>
     */
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * <p>A unique identifier (ID) for the web ACL. </p>
     */
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }

    /**
     * <p>A unique identifier (ID) for the web ACL. </p>
     */
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }

    /**
     * <p>A unique identifier (ID) for the web ACL. </p>
     */
    inline AssociateWebACLRequest& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}

    /**
     * <p>A unique identifier (ID) for the web ACL. </p>
     */
    inline AssociateWebACLRequest& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier (ID) for the web ACL. </p>
     */
    inline AssociateWebACLRequest& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected, either an
     * application load balancer or Amazon API Gateway stage. </p> <p>The ARN should be
     * in one of the following formats:</p> <ul> <li> <p>For an Application Load
     * Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway stage:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected, either an
     * application load balancer or Amazon API Gateway stage. </p> <p>The ARN should be
     * in one of the following formats:</p> <ul> <li> <p>For an Application Load
     * Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway stage:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> </ul>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected, either an
     * application load balancer or Amazon API Gateway stage. </p> <p>The ARN should be
     * in one of the following formats:</p> <ul> <li> <p>For an Application Load
     * Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway stage:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> </ul>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected, either an
     * application load balancer or Amazon API Gateway stage. </p> <p>The ARN should be
     * in one of the following formats:</p> <ul> <li> <p>For an Application Load
     * Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway stage:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> </ul>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected, either an
     * application load balancer or Amazon API Gateway stage. </p> <p>The ARN should be
     * in one of the following formats:</p> <ul> <li> <p>For an Application Load
     * Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway stage:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> </ul>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected, either an
     * application load balancer or Amazon API Gateway stage. </p> <p>The ARN should be
     * in one of the following formats:</p> <ul> <li> <p>For an Application Load
     * Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway stage:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> </ul>
     */
    inline AssociateWebACLRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected, either an
     * application load balancer or Amazon API Gateway stage. </p> <p>The ARN should be
     * in one of the following formats:</p> <ul> <li> <p>For an Application Load
     * Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway stage:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> </ul>
     */
    inline AssociateWebACLRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource to be protected, either an
     * application load balancer or Amazon API Gateway stage. </p> <p>The ARN should be
     * in one of the following formats:</p> <ul> <li> <p>For an Application Load
     * Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway stage:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> </ul>
     */
    inline AssociateWebACLRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
