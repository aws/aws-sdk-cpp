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
#include <aws/waf-regional/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class AWS_WAFREGIONAL_API ListResourcesForWebACLRequest : public WAFRegionalRequest
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
     * <p>The unique identifier (ID) of the web ACL for which to list the associated
     * resources.</p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }

    /**
     * <p>The unique identifier (ID) of the web ACL for which to list the associated
     * resources.</p>
     */
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the web ACL for which to list the associated
     * resources.</p>
     */
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * <p>The unique identifier (ID) of the web ACL for which to list the associated
     * resources.</p>
     */
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the web ACL for which to list the associated
     * resources.</p>
     */
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the web ACL for which to list the associated
     * resources.</p>
     */
    inline ListResourcesForWebACLRequest& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the web ACL for which to list the associated
     * resources.</p>
     */
    inline ListResourcesForWebACLRequest& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the web ACL for which to list the associated
     * resources.</p>
     */
    inline ListResourcesForWebACLRequest& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}


    /**
     * <p>The type of resource to list, either an application load balancer or Amazon
     * API Gateway.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource to list, either an application load balancer or Amazon
     * API Gateway.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource to list, either an application load balancer or Amazon
     * API Gateway.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource to list, either an application load balancer or Amazon
     * API Gateway.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource to list, either an application load balancer or Amazon
     * API Gateway.</p>
     */
    inline ListResourcesForWebACLRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource to list, either an application load balancer or Amazon
     * API Gateway.</p>
     */
    inline ListResourcesForWebACLRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
