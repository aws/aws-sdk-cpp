/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/AssetState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Outposts
{
namespace Model
{

  /**
   */
  class ListAssetsRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API ListAssetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssets"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline const Aws::String& GetOutpostIdentifier() const{ return m_outpostIdentifier; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline void SetOutpostIdentifier(const Aws::String& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = value; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline void SetOutpostIdentifier(Aws::String&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::move(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline void SetOutpostIdentifier(const char* value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier.assign(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline ListAssetsRequest& WithOutpostIdentifier(const Aws::String& value) { SetOutpostIdentifier(value); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline ListAssetsRequest& WithOutpostIdentifier(Aws::String&& value) { SetOutpostIdentifier(std::move(value)); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline ListAssetsRequest& WithOutpostIdentifier(const char* value) { SetOutpostIdentifier(value); return *this;}


    /**
     * <p>Filters the results by the host ID of a Dedicated Host.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIdFilter() const{ return m_hostIdFilter; }

    /**
     * <p>Filters the results by the host ID of a Dedicated Host.</p>
     */
    inline bool HostIdFilterHasBeenSet() const { return m_hostIdFilterHasBeenSet; }

    /**
     * <p>Filters the results by the host ID of a Dedicated Host.</p>
     */
    inline void SetHostIdFilter(const Aws::Vector<Aws::String>& value) { m_hostIdFilterHasBeenSet = true; m_hostIdFilter = value; }

    /**
     * <p>Filters the results by the host ID of a Dedicated Host.</p>
     */
    inline void SetHostIdFilter(Aws::Vector<Aws::String>&& value) { m_hostIdFilterHasBeenSet = true; m_hostIdFilter = std::move(value); }

    /**
     * <p>Filters the results by the host ID of a Dedicated Host.</p>
     */
    inline ListAssetsRequest& WithHostIdFilter(const Aws::Vector<Aws::String>& value) { SetHostIdFilter(value); return *this;}

    /**
     * <p>Filters the results by the host ID of a Dedicated Host.</p>
     */
    inline ListAssetsRequest& WithHostIdFilter(Aws::Vector<Aws::String>&& value) { SetHostIdFilter(std::move(value)); return *this;}

    /**
     * <p>Filters the results by the host ID of a Dedicated Host.</p>
     */
    inline ListAssetsRequest& AddHostIdFilter(const Aws::String& value) { m_hostIdFilterHasBeenSet = true; m_hostIdFilter.push_back(value); return *this; }

    /**
     * <p>Filters the results by the host ID of a Dedicated Host.</p>
     */
    inline ListAssetsRequest& AddHostIdFilter(Aws::String&& value) { m_hostIdFilterHasBeenSet = true; m_hostIdFilter.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the results by the host ID of a Dedicated Host.</p>
     */
    inline ListAssetsRequest& AddHostIdFilter(const char* value) { m_hostIdFilterHasBeenSet = true; m_hostIdFilter.push_back(value); return *this; }


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListAssetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListAssetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListAssetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListAssetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Filters the results by state.</p>
     */
    inline const Aws::Vector<AssetState>& GetStatusFilter() const{ return m_statusFilter; }

    /**
     * <p>Filters the results by state.</p>
     */
    inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }

    /**
     * <p>Filters the results by state.</p>
     */
    inline void SetStatusFilter(const Aws::Vector<AssetState>& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }

    /**
     * <p>Filters the results by state.</p>
     */
    inline void SetStatusFilter(Aws::Vector<AssetState>&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = std::move(value); }

    /**
     * <p>Filters the results by state.</p>
     */
    inline ListAssetsRequest& WithStatusFilter(const Aws::Vector<AssetState>& value) { SetStatusFilter(value); return *this;}

    /**
     * <p>Filters the results by state.</p>
     */
    inline ListAssetsRequest& WithStatusFilter(Aws::Vector<AssetState>&& value) { SetStatusFilter(std::move(value)); return *this;}

    /**
     * <p>Filters the results by state.</p>
     */
    inline ListAssetsRequest& AddStatusFilter(const AssetState& value) { m_statusFilterHasBeenSet = true; m_statusFilter.push_back(value); return *this; }

    /**
     * <p>Filters the results by state.</p>
     */
    inline ListAssetsRequest& AddStatusFilter(AssetState&& value) { m_statusFilterHasBeenSet = true; m_statusFilter.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_outpostIdentifier;
    bool m_outpostIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_hostIdFilter;
    bool m_hostIdFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AssetState> m_statusFilter;
    bool m_statusFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
