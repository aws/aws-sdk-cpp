/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ListAssetsFilter.h>
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
  class ListAssetsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListAssetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssets"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline ListAssetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAssetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAssetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline ListAssetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The ID of the asset model by which to filter the list of assets. This
     * parameter is required if you choose <code>ALL</code> for
     * <code>filter</code>.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p>The ID of the asset model by which to filter the list of assets. This
     * parameter is required if you choose <code>ALL</code> for
     * <code>filter</code>.</p>
     */
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }

    /**
     * <p>The ID of the asset model by which to filter the list of assets. This
     * parameter is required if you choose <code>ALL</code> for
     * <code>filter</code>.</p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }

    /**
     * <p>The ID of the asset model by which to filter the list of assets. This
     * parameter is required if you choose <code>ALL</code> for
     * <code>filter</code>.</p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }

    /**
     * <p>The ID of the asset model by which to filter the list of assets. This
     * parameter is required if you choose <code>ALL</code> for
     * <code>filter</code>.</p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }

    /**
     * <p>The ID of the asset model by which to filter the list of assets. This
     * parameter is required if you choose <code>ALL</code> for
     * <code>filter</code>.</p>
     */
    inline ListAssetsRequest& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p>The ID of the asset model by which to filter the list of assets. This
     * parameter is required if you choose <code>ALL</code> for
     * <code>filter</code>.</p>
     */
    inline ListAssetsRequest& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model by which to filter the list of assets. This
     * parameter is required if you choose <code>ALL</code> for
     * <code>filter</code>.</p>
     */
    inline ListAssetsRequest& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


    /**
     * <p>The filter for the requested list of assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all assets for a
     * given asset model ID. The <code>assetModelId</code> parameter is required if you
     * filter by <code>ALL</code>.</p> </li> <li> <p> <code>TOP_LEVEL</code> – The list
     * includes only top-level assets in the asset hierarchy tree.</p> </li> </ul>
     * <p>Default: <code>ALL</code> </p>
     */
    inline const ListAssetsFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>The filter for the requested list of assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all assets for a
     * given asset model ID. The <code>assetModelId</code> parameter is required if you
     * filter by <code>ALL</code>.</p> </li> <li> <p> <code>TOP_LEVEL</code> – The list
     * includes only top-level assets in the asset hierarchy tree.</p> </li> </ul>
     * <p>Default: <code>ALL</code> </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The filter for the requested list of assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all assets for a
     * given asset model ID. The <code>assetModelId</code> parameter is required if you
     * filter by <code>ALL</code>.</p> </li> <li> <p> <code>TOP_LEVEL</code> – The list
     * includes only top-level assets in the asset hierarchy tree.</p> </li> </ul>
     * <p>Default: <code>ALL</code> </p>
     */
    inline void SetFilter(const ListAssetsFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The filter for the requested list of assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all assets for a
     * given asset model ID. The <code>assetModelId</code> parameter is required if you
     * filter by <code>ALL</code>.</p> </li> <li> <p> <code>TOP_LEVEL</code> – The list
     * includes only top-level assets in the asset hierarchy tree.</p> </li> </ul>
     * <p>Default: <code>ALL</code> </p>
     */
    inline void SetFilter(ListAssetsFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The filter for the requested list of assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all assets for a
     * given asset model ID. The <code>assetModelId</code> parameter is required if you
     * filter by <code>ALL</code>.</p> </li> <li> <p> <code>TOP_LEVEL</code> – The list
     * includes only top-level assets in the asset hierarchy tree.</p> </li> </ul>
     * <p>Default: <code>ALL</code> </p>
     */
    inline ListAssetsRequest& WithFilter(const ListAssetsFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>The filter for the requested list of assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all assets for a
     * given asset model ID. The <code>assetModelId</code> parameter is required if you
     * filter by <code>ALL</code>.</p> </li> <li> <p> <code>TOP_LEVEL</code> – The list
     * includes only top-level assets in the asset hierarchy tree.</p> </li> </ul>
     * <p>Default: <code>ALL</code> </p>
     */
    inline ListAssetsRequest& WithFilter(ListAssetsFilter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    ListAssetsFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
