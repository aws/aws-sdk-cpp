/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ListTimeSeriesType.h>
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
  class ListTimeSeriesRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListTimeSeriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTimeSeries"; }

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
    inline ListTimeSeriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListTimeSeriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListTimeSeriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     */
    inline ListTimeSeriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline ListTimeSeriesRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline ListTimeSeriesRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline ListTimeSeriesRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The alias prefix of the time series.</p>
     */
    inline const Aws::String& GetAliasPrefix() const{ return m_aliasPrefix; }

    /**
     * <p>The alias prefix of the time series.</p>
     */
    inline bool AliasPrefixHasBeenSet() const { return m_aliasPrefixHasBeenSet; }

    /**
     * <p>The alias prefix of the time series.</p>
     */
    inline void SetAliasPrefix(const Aws::String& value) { m_aliasPrefixHasBeenSet = true; m_aliasPrefix = value; }

    /**
     * <p>The alias prefix of the time series.</p>
     */
    inline void SetAliasPrefix(Aws::String&& value) { m_aliasPrefixHasBeenSet = true; m_aliasPrefix = std::move(value); }

    /**
     * <p>The alias prefix of the time series.</p>
     */
    inline void SetAliasPrefix(const char* value) { m_aliasPrefixHasBeenSet = true; m_aliasPrefix.assign(value); }

    /**
     * <p>The alias prefix of the time series.</p>
     */
    inline ListTimeSeriesRequest& WithAliasPrefix(const Aws::String& value) { SetAliasPrefix(value); return *this;}

    /**
     * <p>The alias prefix of the time series.</p>
     */
    inline ListTimeSeriesRequest& WithAliasPrefix(Aws::String&& value) { SetAliasPrefix(std::move(value)); return *this;}

    /**
     * <p>The alias prefix of the time series.</p>
     */
    inline ListTimeSeriesRequest& WithAliasPrefix(const char* value) { SetAliasPrefix(value); return *this;}


    /**
     * <p>The type of the time series. The time series type can be one of the following
     * values:</p> <ul> <li> <p> <code>ASSOCIATED</code> – The time series is
     * associated with an asset property.</p> </li> <li> <p> <code>DISASSOCIATED</code>
     * – The time series isn't associated with any asset property.</p> </li> </ul>
     */
    inline const ListTimeSeriesType& GetTimeSeriesType() const{ return m_timeSeriesType; }

    /**
     * <p>The type of the time series. The time series type can be one of the following
     * values:</p> <ul> <li> <p> <code>ASSOCIATED</code> – The time series is
     * associated with an asset property.</p> </li> <li> <p> <code>DISASSOCIATED</code>
     * – The time series isn't associated with any asset property.</p> </li> </ul>
     */
    inline bool TimeSeriesTypeHasBeenSet() const { return m_timeSeriesTypeHasBeenSet; }

    /**
     * <p>The type of the time series. The time series type can be one of the following
     * values:</p> <ul> <li> <p> <code>ASSOCIATED</code> – The time series is
     * associated with an asset property.</p> </li> <li> <p> <code>DISASSOCIATED</code>
     * – The time series isn't associated with any asset property.</p> </li> </ul>
     */
    inline void SetTimeSeriesType(const ListTimeSeriesType& value) { m_timeSeriesTypeHasBeenSet = true; m_timeSeriesType = value; }

    /**
     * <p>The type of the time series. The time series type can be one of the following
     * values:</p> <ul> <li> <p> <code>ASSOCIATED</code> – The time series is
     * associated with an asset property.</p> </li> <li> <p> <code>DISASSOCIATED</code>
     * – The time series isn't associated with any asset property.</p> </li> </ul>
     */
    inline void SetTimeSeriesType(ListTimeSeriesType&& value) { m_timeSeriesTypeHasBeenSet = true; m_timeSeriesType = std::move(value); }

    /**
     * <p>The type of the time series. The time series type can be one of the following
     * values:</p> <ul> <li> <p> <code>ASSOCIATED</code> – The time series is
     * associated with an asset property.</p> </li> <li> <p> <code>DISASSOCIATED</code>
     * – The time series isn't associated with any asset property.</p> </li> </ul>
     */
    inline ListTimeSeriesRequest& WithTimeSeriesType(const ListTimeSeriesType& value) { SetTimeSeriesType(value); return *this;}

    /**
     * <p>The type of the time series. The time series type can be one of the following
     * values:</p> <ul> <li> <p> <code>ASSOCIATED</code> – The time series is
     * associated with an asset property.</p> </li> <li> <p> <code>DISASSOCIATED</code>
     * – The time series isn't associated with any asset property.</p> </li> </ul>
     */
    inline ListTimeSeriesRequest& WithTimeSeriesType(ListTimeSeriesType&& value) { SetTimeSeriesType(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_aliasPrefix;
    bool m_aliasPrefixHasBeenSet = false;

    ListTimeSeriesType m_timeSeriesType;
    bool m_timeSeriesTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
