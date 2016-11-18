﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_CONFIGSERVICE_API ListDiscoveredResourcesRequest : public ConfigServiceRequest
  {
  public:
    ListDiscoveredResourcesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The type of resources that you want AWS Config to list in the response.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resources that you want AWS Config to list in the response.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resources that you want AWS Config to list in the response.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resources that you want AWS Config to list in the response.</p>
     */
    inline ListDiscoveredResourcesRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resources that you want AWS Config to list in the response.</p>
     */
    inline ListDiscoveredResourcesRequest& WithResourceType(ResourceType&& value) { SetResourceType(value); return *this;}

    /**
     * <p>The IDs of only those resources that you want AWS Config to list in the
     * response. If you do not specify this parameter, AWS Config lists all resources
     * of the specified type that it has discovered.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The IDs of only those resources that you want AWS Config to list in the
     * response. If you do not specify this parameter, AWS Config lists all resources
     * of the specified type that it has discovered.</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The IDs of only those resources that you want AWS Config to list in the
     * response. If you do not specify this parameter, AWS Config lists all resources
     * of the specified type that it has discovered.</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The IDs of only those resources that you want AWS Config to list in the
     * response. If you do not specify this parameter, AWS Config lists all resources
     * of the specified type that it has discovered.</p>
     */
    inline ListDiscoveredResourcesRequest& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The IDs of only those resources that you want AWS Config to list in the
     * response. If you do not specify this parameter, AWS Config lists all resources
     * of the specified type that it has discovered.</p>
     */
    inline ListDiscoveredResourcesRequest& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The IDs of only those resources that you want AWS Config to list in the
     * response. If you do not specify this parameter, AWS Config lists all resources
     * of the specified type that it has discovered.</p>
     */
    inline ListDiscoveredResourcesRequest& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of only those resources that you want AWS Config to list in the
     * response. If you do not specify this parameter, AWS Config lists all resources
     * of the specified type that it has discovered.</p>
     */
    inline ListDiscoveredResourcesRequest& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of only those resources that you want AWS Config to list in the
     * response. If you do not specify this parameter, AWS Config lists all resources
     * of the specified type that it has discovered.</p>
     */
    inline ListDiscoveredResourcesRequest& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The custom name of only those resources that you want AWS Config to list in
     * the response. If you do not specify this parameter, AWS Config lists all
     * resources of the specified type that it has discovered.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The custom name of only those resources that you want AWS Config to list in
     * the response. If you do not specify this parameter, AWS Config lists all
     * resources of the specified type that it has discovered.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The custom name of only those resources that you want AWS Config to list in
     * the response. If you do not specify this parameter, AWS Config lists all
     * resources of the specified type that it has discovered.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The custom name of only those resources that you want AWS Config to list in
     * the response. If you do not specify this parameter, AWS Config lists all
     * resources of the specified type that it has discovered.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The custom name of only those resources that you want AWS Config to list in
     * the response. If you do not specify this parameter, AWS Config lists all
     * resources of the specified type that it has discovered.</p>
     */
    inline ListDiscoveredResourcesRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The custom name of only those resources that you want AWS Config to list in
     * the response. If you do not specify this parameter, AWS Config lists all
     * resources of the specified type that it has discovered.</p>
     */
    inline ListDiscoveredResourcesRequest& WithResourceName(Aws::String&& value) { SetResourceName(value); return *this;}

    /**
     * <p>The custom name of only those resources that you want AWS Config to list in
     * the response. If you do not specify this parameter, AWS Config lists all
     * resources of the specified type that it has discovered.</p>
     */
    inline ListDiscoveredResourcesRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}

    /**
     * <p>The maximum number of resource identifiers returned on each page. The default
     * is 100. You cannot specify a limit greater than 100. If you specify 0, AWS
     * Config uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of resource identifiers returned on each page. The default
     * is 100. You cannot specify a limit greater than 100. If you specify 0, AWS
     * Config uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of resource identifiers returned on each page. The default
     * is 100. You cannot specify a limit greater than 100. If you specify 0, AWS
     * Config uses the default.</p>
     */
    inline ListDiscoveredResourcesRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>Specifies whether AWS Config includes deleted resources in the results. By
     * default, deleted resources are not included.</p>
     */
    inline bool GetIncludeDeletedResources() const{ return m_includeDeletedResources; }

    /**
     * <p>Specifies whether AWS Config includes deleted resources in the results. By
     * default, deleted resources are not included.</p>
     */
    inline void SetIncludeDeletedResources(bool value) { m_includeDeletedResourcesHasBeenSet = true; m_includeDeletedResources = value; }

    /**
     * <p>Specifies whether AWS Config includes deleted resources in the results. By
     * default, deleted resources are not included.</p>
     */
    inline ListDiscoveredResourcesRequest& WithIncludeDeletedResources(bool value) { SetIncludeDeletedResources(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline ListDiscoveredResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline ListDiscoveredResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline ListDiscoveredResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet;
    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    bool m_includeDeletedResources;
    bool m_includeDeletedResourcesHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
