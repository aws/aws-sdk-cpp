/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/codestar-connections/model/ProviderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class ListConnectionsRequest : public CodeStarconnectionsRequest
  {
  public:
    AWS_CODESTARCONNECTIONS_API ListConnectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConnections"; }

    AWS_CODESTARCONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODESTARCONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Filters the list of connections to those associated with a specified
     * provider, such as Bitbucket.</p>
     */
    inline const ProviderType& GetProviderTypeFilter() const{ return m_providerTypeFilter; }

    /**
     * <p>Filters the list of connections to those associated with a specified
     * provider, such as Bitbucket.</p>
     */
    inline bool ProviderTypeFilterHasBeenSet() const { return m_providerTypeFilterHasBeenSet; }

    /**
     * <p>Filters the list of connections to those associated with a specified
     * provider, such as Bitbucket.</p>
     */
    inline void SetProviderTypeFilter(const ProviderType& value) { m_providerTypeFilterHasBeenSet = true; m_providerTypeFilter = value; }

    /**
     * <p>Filters the list of connections to those associated with a specified
     * provider, such as Bitbucket.</p>
     */
    inline void SetProviderTypeFilter(ProviderType&& value) { m_providerTypeFilterHasBeenSet = true; m_providerTypeFilter = std::move(value); }

    /**
     * <p>Filters the list of connections to those associated with a specified
     * provider, such as Bitbucket.</p>
     */
    inline ListConnectionsRequest& WithProviderTypeFilter(const ProviderType& value) { SetProviderTypeFilter(value); return *this;}

    /**
     * <p>Filters the list of connections to those associated with a specified
     * provider, such as Bitbucket.</p>
     */
    inline ListConnectionsRequest& WithProviderTypeFilter(ProviderType&& value) { SetProviderTypeFilter(std::move(value)); return *this;}


    /**
     * <p>Filters the list of connections to those associated with a specified
     * host.</p>
     */
    inline const Aws::String& GetHostArnFilter() const{ return m_hostArnFilter; }

    /**
     * <p>Filters the list of connections to those associated with a specified
     * host.</p>
     */
    inline bool HostArnFilterHasBeenSet() const { return m_hostArnFilterHasBeenSet; }

    /**
     * <p>Filters the list of connections to those associated with a specified
     * host.</p>
     */
    inline void SetHostArnFilter(const Aws::String& value) { m_hostArnFilterHasBeenSet = true; m_hostArnFilter = value; }

    /**
     * <p>Filters the list of connections to those associated with a specified
     * host.</p>
     */
    inline void SetHostArnFilter(Aws::String&& value) { m_hostArnFilterHasBeenSet = true; m_hostArnFilter = std::move(value); }

    /**
     * <p>Filters the list of connections to those associated with a specified
     * host.</p>
     */
    inline void SetHostArnFilter(const char* value) { m_hostArnFilterHasBeenSet = true; m_hostArnFilter.assign(value); }

    /**
     * <p>Filters the list of connections to those associated with a specified
     * host.</p>
     */
    inline ListConnectionsRequest& WithHostArnFilter(const Aws::String& value) { SetHostArnFilter(value); return *this;}

    /**
     * <p>Filters the list of connections to those associated with a specified
     * host.</p>
     */
    inline ListConnectionsRequest& WithHostArnFilter(Aws::String&& value) { SetHostArnFilter(std::move(value)); return *this;}

    /**
     * <p>Filters the list of connections to those associated with a specified
     * host.</p>
     */
    inline ListConnectionsRequest& WithHostArnFilter(const char* value) { SetHostArnFilter(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline ListConnectionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token that was returned from the previous <code>ListConnections</code>
     * call, which can be used to return the next set of connections in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that was returned from the previous <code>ListConnections</code>
     * call, which can be used to return the next set of connections in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that was returned from the previous <code>ListConnections</code>
     * call, which can be used to return the next set of connections in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that was returned from the previous <code>ListConnections</code>
     * call, which can be used to return the next set of connections in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that was returned from the previous <code>ListConnections</code>
     * call, which can be used to return the next set of connections in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that was returned from the previous <code>ListConnections</code>
     * call, which can be used to return the next set of connections in the list.</p>
     */
    inline ListConnectionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that was returned from the previous <code>ListConnections</code>
     * call, which can be used to return the next set of connections in the list.</p>
     */
    inline ListConnectionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that was returned from the previous <code>ListConnections</code>
     * call, which can be used to return the next set of connections in the list.</p>
     */
    inline ListConnectionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ProviderType m_providerTypeFilter;
    bool m_providerTypeFilterHasBeenSet = false;

    Aws::String m_hostArnFilter;
    bool m_hostArnFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
