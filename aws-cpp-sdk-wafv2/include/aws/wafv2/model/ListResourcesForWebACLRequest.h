/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class AWS_WAFV2_API ListResourcesForWebACLRequest : public WAFV2Request
  {
  public:
    ListResourcesForWebACLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourcesForWebACL"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the Web ACL.</p>
     */
    inline const Aws::String& GetWebACLArn() const{ return m_webACLArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Web ACL.</p>
     */
    inline bool WebACLArnHasBeenSet() const { return m_webACLArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Web ACL.</p>
     */
    inline void SetWebACLArn(const Aws::String& value) { m_webACLArnHasBeenSet = true; m_webACLArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Web ACL.</p>
     */
    inline void SetWebACLArn(Aws::String&& value) { m_webACLArnHasBeenSet = true; m_webACLArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Web ACL.</p>
     */
    inline void SetWebACLArn(const char* value) { m_webACLArnHasBeenSet = true; m_webACLArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Web ACL.</p>
     */
    inline ListResourcesForWebACLRequest& WithWebACLArn(const Aws::String& value) { SetWebACLArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Web ACL.</p>
     */
    inline ListResourcesForWebACLRequest& WithWebACLArn(Aws::String&& value) { SetWebACLArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Web ACL.</p>
     */
    inline ListResourcesForWebACLRequest& WithWebACLArn(const char* value) { SetWebACLArn(value); return *this;}


    /**
     * <p>Used for web ACLs that are scoped for regional applications. A regional
     * application can be an Application Load Balancer (ALB), an API Gateway REST API,
     * or an AppSync GraphQL API. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Used for web ACLs that are scoped for regional applications. A regional
     * application can be an Application Load Balancer (ALB), an API Gateway REST API,
     * or an AppSync GraphQL API. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Used for web ACLs that are scoped for regional applications. A regional
     * application can be an Application Load Balancer (ALB), an API Gateway REST API,
     * or an AppSync GraphQL API. </p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Used for web ACLs that are scoped for regional applications. A regional
     * application can be an Application Load Balancer (ALB), an API Gateway REST API,
     * or an AppSync GraphQL API. </p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Used for web ACLs that are scoped for regional applications. A regional
     * application can be an Application Load Balancer (ALB), an API Gateway REST API,
     * or an AppSync GraphQL API. </p>
     */
    inline ListResourcesForWebACLRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Used for web ACLs that are scoped for regional applications. A regional
     * application can be an Application Load Balancer (ALB), an API Gateway REST API,
     * or an AppSync GraphQL API. </p>
     */
    inline ListResourcesForWebACLRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_webACLArn;
    bool m_webACLArnHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
