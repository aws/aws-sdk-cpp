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
  class AWS_IOTSITEWISE_API ListAssetsRequest : public IoTSiteWiseRequest
  {
  public:
    ListAssetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssets"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline ListAssetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The ID of the asset model by which to filter the list of assets. Omit the
     * <code>assetModelId</code> to list all assets (of all models).</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p>The ID of the asset model by which to filter the list of assets. Omit the
     * <code>assetModelId</code> to list all assets (of all models).</p>
     */
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }

    /**
     * <p>The ID of the asset model by which to filter the list of assets. Omit the
     * <code>assetModelId</code> to list all assets (of all models).</p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }

    /**
     * <p>The ID of the asset model by which to filter the list of assets. Omit the
     * <code>assetModelId</code> to list all assets (of all models).</p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }

    /**
     * <p>The ID of the asset model by which to filter the list of assets. Omit the
     * <code>assetModelId</code> to list all assets (of all models).</p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }

    /**
     * <p>The ID of the asset model by which to filter the list of assets. Omit the
     * <code>assetModelId</code> to list all assets (of all models).</p>
     */
    inline ListAssetsRequest& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p>The ID of the asset model by which to filter the list of assets. Omit the
     * <code>assetModelId</code> to list all assets (of all models).</p>
     */
    inline ListAssetsRequest& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model by which to filter the list of assets. Omit the
     * <code>assetModelId</code> to list all assets (of all models).</p>
     */
    inline ListAssetsRequest& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


    /**
     * <p>The hierarchy level by which to filter the requested list of assets.</p>
     */
    inline const ListAssetsFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>The hierarchy level by which to filter the requested list of assets.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The hierarchy level by which to filter the requested list of assets.</p>
     */
    inline void SetFilter(const ListAssetsFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The hierarchy level by which to filter the requested list of assets.</p>
     */
    inline void SetFilter(ListAssetsFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The hierarchy level by which to filter the requested list of assets.</p>
     */
    inline ListAssetsRequest& WithFilter(const ListAssetsFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>The hierarchy level by which to filter the requested list of assets.</p>
     */
    inline ListAssetsRequest& WithFilter(ListAssetsFilter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet;

    ListAssetsFilter m_filter;
    bool m_filterHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
