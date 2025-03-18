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
    AWS_IOTSITEWISE_API ListTimeSeriesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTimeSeries"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTimeSeriesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTimeSeriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset in which the asset property was created. This can be
     * either the actual ID in UUID format, or else <code>externalId:</code> followed
     * by the external ID, if it has one. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    ListTimeSeriesRequest& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias prefix of the time series.</p>
     */
    inline const Aws::String& GetAliasPrefix() const { return m_aliasPrefix; }
    inline bool AliasPrefixHasBeenSet() const { return m_aliasPrefixHasBeenSet; }
    template<typename AliasPrefixT = Aws::String>
    void SetAliasPrefix(AliasPrefixT&& value) { m_aliasPrefixHasBeenSet = true; m_aliasPrefix = std::forward<AliasPrefixT>(value); }
    template<typename AliasPrefixT = Aws::String>
    ListTimeSeriesRequest& WithAliasPrefix(AliasPrefixT&& value) { SetAliasPrefix(std::forward<AliasPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the time series. The time series type can be one of the following
     * values:</p> <ul> <li> <p> <code>ASSOCIATED</code> – The time series is
     * associated with an asset property.</p> </li> <li> <p> <code>DISASSOCIATED</code>
     * – The time series isn't associated with any asset property.</p> </li> </ul>
     */
    inline ListTimeSeriesType GetTimeSeriesType() const { return m_timeSeriesType; }
    inline bool TimeSeriesTypeHasBeenSet() const { return m_timeSeriesTypeHasBeenSet; }
    inline void SetTimeSeriesType(ListTimeSeriesType value) { m_timeSeriesTypeHasBeenSet = true; m_timeSeriesType = value; }
    inline ListTimeSeriesRequest& WithTimeSeriesType(ListTimeSeriesType value) { SetTimeSeriesType(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_aliasPrefix;
    bool m_aliasPrefixHasBeenSet = false;

    ListTimeSeriesType m_timeSeriesType{ListTimeSeriesType::NOT_SET};
    bool m_timeSeriesTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
