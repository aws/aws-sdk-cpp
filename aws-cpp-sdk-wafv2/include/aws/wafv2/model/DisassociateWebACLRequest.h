/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class DisassociateWebACLRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API DisassociateWebACLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateWebACL"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource to disassociate from the web
     * ACL. </p> <p>The ARN must be in one of the following formats:</p> <ul> <li>
     * <p>For an Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway REST API:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> <li> <p>For an AppSync GraphQL API:
     * <code>arn:aws:appsync:<i>region</i>:<i>account-id</i>:apis/<i>GraphQLApiId</i>
     * </code> </p> </li> <li> <p>For an Amazon Cognito user pool:
     * <code>arn:aws:cognito-idp:<i>region</i>:<i>account-id</i>:userpool/<i>user-pool-id</i>
     * </code> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to disassociate from the web
     * ACL. </p> <p>The ARN must be in one of the following formats:</p> <ul> <li>
     * <p>For an Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway REST API:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> <li> <p>For an AppSync GraphQL API:
     * <code>arn:aws:appsync:<i>region</i>:<i>account-id</i>:apis/<i>GraphQLApiId</i>
     * </code> </p> </li> <li> <p>For an Amazon Cognito user pool:
     * <code>arn:aws:cognito-idp:<i>region</i>:<i>account-id</i>:userpool/<i>user-pool-id</i>
     * </code> </p> </li> </ul>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to disassociate from the web
     * ACL. </p> <p>The ARN must be in one of the following formats:</p> <ul> <li>
     * <p>For an Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway REST API:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> <li> <p>For an AppSync GraphQL API:
     * <code>arn:aws:appsync:<i>region</i>:<i>account-id</i>:apis/<i>GraphQLApiId</i>
     * </code> </p> </li> <li> <p>For an Amazon Cognito user pool:
     * <code>arn:aws:cognito-idp:<i>region</i>:<i>account-id</i>:userpool/<i>user-pool-id</i>
     * </code> </p> </li> </ul>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to disassociate from the web
     * ACL. </p> <p>The ARN must be in one of the following formats:</p> <ul> <li>
     * <p>For an Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway REST API:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> <li> <p>For an AppSync GraphQL API:
     * <code>arn:aws:appsync:<i>region</i>:<i>account-id</i>:apis/<i>GraphQLApiId</i>
     * </code> </p> </li> <li> <p>For an Amazon Cognito user pool:
     * <code>arn:aws:cognito-idp:<i>region</i>:<i>account-id</i>:userpool/<i>user-pool-id</i>
     * </code> </p> </li> </ul>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to disassociate from the web
     * ACL. </p> <p>The ARN must be in one of the following formats:</p> <ul> <li>
     * <p>For an Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway REST API:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> <li> <p>For an AppSync GraphQL API:
     * <code>arn:aws:appsync:<i>region</i>:<i>account-id</i>:apis/<i>GraphQLApiId</i>
     * </code> </p> </li> <li> <p>For an Amazon Cognito user pool:
     * <code>arn:aws:cognito-idp:<i>region</i>:<i>account-id</i>:userpool/<i>user-pool-id</i>
     * </code> </p> </li> </ul>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to disassociate from the web
     * ACL. </p> <p>The ARN must be in one of the following formats:</p> <ul> <li>
     * <p>For an Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway REST API:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> <li> <p>For an AppSync GraphQL API:
     * <code>arn:aws:appsync:<i>region</i>:<i>account-id</i>:apis/<i>GraphQLApiId</i>
     * </code> </p> </li> <li> <p>For an Amazon Cognito user pool:
     * <code>arn:aws:cognito-idp:<i>region</i>:<i>account-id</i>:userpool/<i>user-pool-id</i>
     * </code> </p> </li> </ul>
     */
    inline DisassociateWebACLRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to disassociate from the web
     * ACL. </p> <p>The ARN must be in one of the following formats:</p> <ul> <li>
     * <p>For an Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway REST API:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> <li> <p>For an AppSync GraphQL API:
     * <code>arn:aws:appsync:<i>region</i>:<i>account-id</i>:apis/<i>GraphQLApiId</i>
     * </code> </p> </li> <li> <p>For an Amazon Cognito user pool:
     * <code>arn:aws:cognito-idp:<i>region</i>:<i>account-id</i>:userpool/<i>user-pool-id</i>
     * </code> </p> </li> </ul>
     */
    inline DisassociateWebACLRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to disassociate from the web
     * ACL. </p> <p>The ARN must be in one of the following formats:</p> <ul> <li>
     * <p>For an Application Load Balancer:
     * <code>arn:aws:elasticloadbalancing:<i>region</i>:<i>account-id</i>:loadbalancer/app/<i>load-balancer-name</i>/<i>load-balancer-id</i>
     * </code> </p> </li> <li> <p>For an Amazon API Gateway REST API:
     * <code>arn:aws:apigateway:<i>region</i>::/restapis/<i>api-id</i>/stages/<i>stage-name</i>
     * </code> </p> </li> <li> <p>For an AppSync GraphQL API:
     * <code>arn:aws:appsync:<i>region</i>:<i>account-id</i>:apis/<i>GraphQLApiId</i>
     * </code> </p> </li> <li> <p>For an Amazon Cognito user pool:
     * <code>arn:aws:cognito-idp:<i>region</i>:<i>account-id</i>:userpool/<i>user-pool-id</i>
     * </code> </p> </li> </ul>
     */
    inline DisassociateWebACLRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
