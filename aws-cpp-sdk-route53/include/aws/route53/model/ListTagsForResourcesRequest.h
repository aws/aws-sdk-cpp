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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/model/TagResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the health checks or hosted
   * zones for which you want to list tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTagsForResourcesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListTagsForResourcesRequest : public Route53Request
  {
  public:
    ListTagsForResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResources"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The type of the resources.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline const TagResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resources.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resources.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline void SetResourceType(const TagResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resources.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline void SetResourceType(TagResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resources.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline ListTagsForResourcesRequest& WithResourceType(const TagResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resources.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline ListTagsForResourcesRequest& WithResourceType(TagResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains the ResourceId element for each resource for
     * which you want to get a list of tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>A complex type that contains the ResourceId element for each resource for
     * which you want to get a list of tags.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>A complex type that contains the ResourceId element for each resource for
     * which you want to get a list of tags.</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>A complex type that contains the ResourceId element for each resource for
     * which you want to get a list of tags.</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>A complex type that contains the ResourceId element for each resource for
     * which you want to get a list of tags.</p>
     */
    inline ListTagsForResourcesRequest& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>A complex type that contains the ResourceId element for each resource for
     * which you want to get a list of tags.</p>
     */
    inline ListTagsForResourcesRequest& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains the ResourceId element for each resource for
     * which you want to get a list of tags.</p>
     */
    inline ListTagsForResourcesRequest& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>A complex type that contains the ResourceId element for each resource for
     * which you want to get a list of tags.</p>
     */
    inline ListTagsForResourcesRequest& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A complex type that contains the ResourceId element for each resource for
     * which you want to get a list of tags.</p>
     */
    inline ListTagsForResourcesRequest& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

  private:

    TagResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
