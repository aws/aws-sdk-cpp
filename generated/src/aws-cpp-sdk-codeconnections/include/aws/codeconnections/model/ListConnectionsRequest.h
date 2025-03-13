/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/CodeConnectionsRequest.h>
#include <aws/codeconnections/model/ProviderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{

  /**
   */
  class ListConnectionsRequest : public CodeConnectionsRequest
  {
  public:
    AWS_CODECONNECTIONS_API ListConnectionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConnections"; }

    AWS_CODECONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODECONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Filters the list of connections to those associated with a specified
     * provider, such as Bitbucket.</p>
     */
    inline ProviderType GetProviderTypeFilter() const { return m_providerTypeFilter; }
    inline bool ProviderTypeFilterHasBeenSet() const { return m_providerTypeFilterHasBeenSet; }
    inline void SetProviderTypeFilter(ProviderType value) { m_providerTypeFilterHasBeenSet = true; m_providerTypeFilter = value; }
    inline ListConnectionsRequest& WithProviderTypeFilter(ProviderType value) { SetProviderTypeFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of connections to those associated with a specified
     * host.</p>
     */
    inline const Aws::String& GetHostArnFilter() const { return m_hostArnFilter; }
    inline bool HostArnFilterHasBeenSet() const { return m_hostArnFilterHasBeenSet; }
    template<typename HostArnFilterT = Aws::String>
    void SetHostArnFilter(HostArnFilterT&& value) { m_hostArnFilterHasBeenSet = true; m_hostArnFilter = std::forward<HostArnFilterT>(value); }
    template<typename HostArnFilterT = Aws::String>
    ListConnectionsRequest& WithHostArnFilter(HostArnFilterT&& value) { SetHostArnFilter(std::forward<HostArnFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListConnectionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that was returned from the previous <code>ListConnections</code>
     * call, which can be used to return the next set of connections in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConnectionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    ProviderType m_providerTypeFilter{ProviderType::NOT_SET};
    bool m_providerTypeFilterHasBeenSet = false;

    Aws::String m_hostArnFilter;
    bool m_hostArnFilterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
