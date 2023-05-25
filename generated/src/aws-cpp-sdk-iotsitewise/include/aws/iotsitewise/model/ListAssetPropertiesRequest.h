/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ListAssetPropertiesFilter.h>
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
  class ListAssetPropertiesRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListAssetPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssetProperties"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The ID of the asset.</p>
     */
    inline ListAssetPropertiesRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline ListAssetPropertiesRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline ListAssetPropertiesRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}


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
    inline ListAssetPropertiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAssetPropertiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAssetPropertiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for each paginated request. If not
     * specified, the default value is 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for each paginated request. If not
     * specified, the default value is 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for each paginated request. If not
     * specified, the default value is 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for each paginated request. If not
     * specified, the default value is 50.</p>
     */
    inline ListAssetPropertiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> Filters the requested list of asset properties. You can choose one of the
     * following options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * asset properties for a given asset model ID. </p> </li> <li> <p>
     * <code>BASE</code> – The list includes only base asset properties for a given
     * asset model ID. </p> </li> </ul> <p>Default: <code>BASE</code> </p>
     */
    inline const ListAssetPropertiesFilter& GetFilter() const{ return m_filter; }

    /**
     * <p> Filters the requested list of asset properties. You can choose one of the
     * following options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * asset properties for a given asset model ID. </p> </li> <li> <p>
     * <code>BASE</code> – The list includes only base asset properties for a given
     * asset model ID. </p> </li> </ul> <p>Default: <code>BASE</code> </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p> Filters the requested list of asset properties. You can choose one of the
     * following options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * asset properties for a given asset model ID. </p> </li> <li> <p>
     * <code>BASE</code> – The list includes only base asset properties for a given
     * asset model ID. </p> </li> </ul> <p>Default: <code>BASE</code> </p>
     */
    inline void SetFilter(const ListAssetPropertiesFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p> Filters the requested list of asset properties. You can choose one of the
     * following options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * asset properties for a given asset model ID. </p> </li> <li> <p>
     * <code>BASE</code> – The list includes only base asset properties for a given
     * asset model ID. </p> </li> </ul> <p>Default: <code>BASE</code> </p>
     */
    inline void SetFilter(ListAssetPropertiesFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p> Filters the requested list of asset properties. You can choose one of the
     * following options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * asset properties for a given asset model ID. </p> </li> <li> <p>
     * <code>BASE</code> – The list includes only base asset properties for a given
     * asset model ID. </p> </li> </ul> <p>Default: <code>BASE</code> </p>
     */
    inline ListAssetPropertiesRequest& WithFilter(const ListAssetPropertiesFilter& value) { SetFilter(value); return *this;}

    /**
     * <p> Filters the requested list of asset properties. You can choose one of the
     * following options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * asset properties for a given asset model ID. </p> </li> <li> <p>
     * <code>BASE</code> – The list includes only base asset properties for a given
     * asset model ID. </p> </li> </ul> <p>Default: <code>BASE</code> </p>
     */
    inline ListAssetPropertiesRequest& WithFilter(ListAssetPropertiesFilter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ListAssetPropertiesFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
