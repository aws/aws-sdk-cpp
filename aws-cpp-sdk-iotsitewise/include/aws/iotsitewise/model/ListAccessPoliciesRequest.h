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
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/model/IdentityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class AWS_IOTSITEWISE_API ListAccessPoliciesRequest : public IoTSiteWiseRequest
  {
  public:
    ListAccessPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccessPolicies"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The type of identity (user or group).</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>The type of identity (user or group).</p>
     */
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }

    /**
     * <p>The type of identity (user or group).</p>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>The type of identity (user or group).</p>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }

    /**
     * <p>The type of identity (user or group).</p>
     */
    inline ListAccessPoliciesRequest& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>The type of identity (user or group).</p>
     */
    inline ListAccessPoliciesRequest& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>The ID of the identity.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>The ID of the identity.</p>
     */
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }

    /**
     * <p>The ID of the identity.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>The ID of the identity.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }

    /**
     * <p>The ID of the identity.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * <p>The ID of the identity.</p>
     */
    inline ListAccessPoliciesRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>The ID of the identity.</p>
     */
    inline ListAccessPoliciesRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the identity.</p>
     */
    inline ListAccessPoliciesRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}


    /**
     * <p>The type of resource (portal or project).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource (portal or project).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource (portal or project).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource (portal or project).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource (portal or project).</p>
     */
    inline ListAccessPoliciesRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource (portal or project).</p>
     */
    inline ListAccessPoliciesRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline ListAccessPoliciesRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline ListAccessPoliciesRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline ListAccessPoliciesRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAccessPoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAccessPoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAccessPoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline ListAccessPoliciesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet;

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
