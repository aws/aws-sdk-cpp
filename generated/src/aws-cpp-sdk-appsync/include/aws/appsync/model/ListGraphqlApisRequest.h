/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/GraphQLApiType.h>
#include <aws/appsync/model/Ownership.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppSync
{
namespace Model
{

  /**
   */
  class ListGraphqlApisRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API ListGraphqlApisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGraphqlApis"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;

    AWS_APPSYNC_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline ListGraphqlApisRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline ListGraphqlApisRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline ListGraphqlApisRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results that you want the request to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results that you want the request to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results that you want the request to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results that you want the request to return.</p>
     */
    inline ListGraphqlApisRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline const GraphQLApiType& GetApiType() const{ return m_apiType; }

    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline bool ApiTypeHasBeenSet() const { return m_apiTypeHasBeenSet; }

    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline void SetApiType(const GraphQLApiType& value) { m_apiTypeHasBeenSet = true; m_apiType = value; }

    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline void SetApiType(GraphQLApiType&& value) { m_apiTypeHasBeenSet = true; m_apiType = std::move(value); }

    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline ListGraphqlApisRequest& WithApiType(const GraphQLApiType& value) { SetApiType(value); return *this;}

    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline ListGraphqlApisRequest& WithApiType(GraphQLApiType&& value) { SetApiType(std::move(value)); return *this;}


    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline const Ownership& GetOwner() const{ return m_owner; }

    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline void SetOwner(const Ownership& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline void SetOwner(Ownership&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline ListGraphqlApisRequest& WithOwner(const Ownership& value) { SetOwner(value); return *this;}

    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline ListGraphqlApisRequest& WithOwner(Ownership&& value) { SetOwner(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    GraphQLApiType m_apiType;
    bool m_apiTypeHasBeenSet = false;

    Ownership m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
