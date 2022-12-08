/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ListAssetModelPropertiesFilter.h>
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
  class ListAssetModelPropertiesRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListAssetModelPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssetModelProperties"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the asset model.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p>The ID of the asset model.</p>
     */
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }

    /**
     * <p>The ID of the asset model.</p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }

    /**
     * <p>The ID of the asset model.</p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }

    /**
     * <p>The ID of the asset model.</p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }

    /**
     * <p>The ID of the asset model.</p>
     */
    inline ListAssetModelPropertiesRequest& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p>The ID of the asset model.</p>
     */
    inline ListAssetModelPropertiesRequest& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model.</p>
     */
    inline ListAssetModelPropertiesRequest& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


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
    inline ListAssetModelPropertiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAssetModelPropertiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListAssetModelPropertiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListAssetModelPropertiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> Filters the requested list of asset model properties. You can choose one of
     * the following options:</p> <ul> <li> <p> <code>ALL</code> – The list includes
     * all asset model properties for a given asset model ID. </p> </li> <li> <p>
     * <code>BASE</code> – The list includes only base asset model properties for a
     * given asset model ID. </p> </li> </ul> <p>Default: <code>BASE</code> </p>
     */
    inline const ListAssetModelPropertiesFilter& GetFilter() const{ return m_filter; }

    /**
     * <p> Filters the requested list of asset model properties. You can choose one of
     * the following options:</p> <ul> <li> <p> <code>ALL</code> – The list includes
     * all asset model properties for a given asset model ID. </p> </li> <li> <p>
     * <code>BASE</code> – The list includes only base asset model properties for a
     * given asset model ID. </p> </li> </ul> <p>Default: <code>BASE</code> </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p> Filters the requested list of asset model properties. You can choose one of
     * the following options:</p> <ul> <li> <p> <code>ALL</code> – The list includes
     * all asset model properties for a given asset model ID. </p> </li> <li> <p>
     * <code>BASE</code> – The list includes only base asset model properties for a
     * given asset model ID. </p> </li> </ul> <p>Default: <code>BASE</code> </p>
     */
    inline void SetFilter(const ListAssetModelPropertiesFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p> Filters the requested list of asset model properties. You can choose one of
     * the following options:</p> <ul> <li> <p> <code>ALL</code> – The list includes
     * all asset model properties for a given asset model ID. </p> </li> <li> <p>
     * <code>BASE</code> – The list includes only base asset model properties for a
     * given asset model ID. </p> </li> </ul> <p>Default: <code>BASE</code> </p>
     */
    inline void SetFilter(ListAssetModelPropertiesFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p> Filters the requested list of asset model properties. You can choose one of
     * the following options:</p> <ul> <li> <p> <code>ALL</code> – The list includes
     * all asset model properties for a given asset model ID. </p> </li> <li> <p>
     * <code>BASE</code> – The list includes only base asset model properties for a
     * given asset model ID. </p> </li> </ul> <p>Default: <code>BASE</code> </p>
     */
    inline ListAssetModelPropertiesRequest& WithFilter(const ListAssetModelPropertiesFilter& value) { SetFilter(value); return *this;}

    /**
     * <p> Filters the requested list of asset model properties. You can choose one of
     * the following options:</p> <ul> <li> <p> <code>ALL</code> – The list includes
     * all asset model properties for a given asset model ID. </p> </li> <li> <p>
     * <code>BASE</code> – The list includes only base asset model properties for a
     * given asset model ID. </p> </li> </ul> <p>Default: <code>BASE</code> </p>
     */
    inline ListAssetModelPropertiesRequest& WithFilter(ListAssetModelPropertiesFilter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ListAssetModelPropertiesFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
