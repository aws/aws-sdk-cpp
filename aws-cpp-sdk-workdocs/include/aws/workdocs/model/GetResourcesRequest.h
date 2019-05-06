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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/ResourceCollectionType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class AWS_WORKDOCS_API GetResourcesRequest : public WorkDocsRequest
  {
  public:
    GetResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResources"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API operation using AWS
     * credentials.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }

    /**
     * <p>The Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API operation using AWS
     * credentials.</p>
     */
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }

    /**
     * <p>The Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API operation using AWS
     * credentials.</p>
     */
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }

    /**
     * <p>The Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API operation using AWS
     * credentials.</p>
     */
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }

    /**
     * <p>The Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API operation using AWS
     * credentials.</p>
     */
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }

    /**
     * <p>The Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API operation using AWS
     * credentials.</p>
     */
    inline GetResourcesRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>The Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API operation using AWS
     * credentials.</p>
     */
    inline GetResourcesRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>The Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API operation using AWS
     * credentials.</p>
     */
    inline GetResourcesRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


    /**
     * <p>The user ID for the resource collection. This is a required field for
     * accessing the API operation using IAM credentials.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The user ID for the resource collection. This is a required field for
     * accessing the API operation using IAM credentials.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The user ID for the resource collection. This is a required field for
     * accessing the API operation using IAM credentials.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The user ID for the resource collection. This is a required field for
     * accessing the API operation using IAM credentials.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The user ID for the resource collection. This is a required field for
     * accessing the API operation using IAM credentials.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The user ID for the resource collection. This is a required field for
     * accessing the API operation using IAM credentials.</p>
     */
    inline GetResourcesRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The user ID for the resource collection. This is a required field for
     * accessing the API operation using IAM credentials.</p>
     */
    inline GetResourcesRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The user ID for the resource collection. This is a required field for
     * accessing the API operation using IAM credentials.</p>
     */
    inline GetResourcesRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The collection type.</p>
     */
    inline const ResourceCollectionType& GetCollectionType() const{ return m_collectionType; }

    /**
     * <p>The collection type.</p>
     */
    inline bool CollectionTypeHasBeenSet() const { return m_collectionTypeHasBeenSet; }

    /**
     * <p>The collection type.</p>
     */
    inline void SetCollectionType(const ResourceCollectionType& value) { m_collectionTypeHasBeenSet = true; m_collectionType = value; }

    /**
     * <p>The collection type.</p>
     */
    inline void SetCollectionType(ResourceCollectionType&& value) { m_collectionTypeHasBeenSet = true; m_collectionType = std::move(value); }

    /**
     * <p>The collection type.</p>
     */
    inline GetResourcesRequest& WithCollectionType(const ResourceCollectionType& value) { SetCollectionType(value); return *this;}

    /**
     * <p>The collection type.</p>
     */
    inline GetResourcesRequest& WithCollectionType(ResourceCollectionType&& value) { SetCollectionType(std::move(value)); return *this;}


    /**
     * <p>The maximum number of resources to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of resources to return.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of resources to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of resources to return.</p>
     */
    inline GetResourcesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline GetResourcesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline GetResourcesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results. This marker was received from a
     * previous call.</p>
     */
    inline GetResourcesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    ResourceCollectionType m_collectionType;
    bool m_collectionTypeHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
