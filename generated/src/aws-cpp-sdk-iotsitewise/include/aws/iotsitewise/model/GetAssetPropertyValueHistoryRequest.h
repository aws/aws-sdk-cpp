/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/TimeOrdering.h>
#include <aws/iotsitewise/model/Quality.h>
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
  class GetAssetPropertyValueHistoryRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API GetAssetPropertyValueHistoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssetPropertyValueHistory"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the asset, in UUID format.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    GetAssetPropertyValueHistoryRequest& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset property, in UUID format.</p>
     */
    inline const Aws::String& GetPropertyId() const { return m_propertyId; }
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }
    template<typename PropertyIdT = Aws::String>
    void SetPropertyId(PropertyIdT&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::forward<PropertyIdT>(value); }
    template<typename PropertyIdT = Aws::String>
    GetAssetPropertyValueHistoryRequest& WithPropertyId(PropertyIdT&& value) { SetPropertyId(std::forward<PropertyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPropertyAlias() const { return m_propertyAlias; }
    inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }
    template<typename PropertyAliasT = Aws::String>
    void SetPropertyAlias(PropertyAliasT&& value) { m_propertyAliasHasBeenSet = true; m_propertyAlias = std::forward<PropertyAliasT>(value); }
    template<typename PropertyAliasT = Aws::String>
    GetAssetPropertyValueHistoryRequest& WithPropertyAlias(PropertyAliasT&& value) { SetPropertyAlias(std::forward<PropertyAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusive start of the range from which to query historical data,
     * expressed in seconds in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    GetAssetPropertyValueHistoryRequest& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive end of the range from which to query historical data, expressed
     * in seconds in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    GetAssetPropertyValueHistoryRequest& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quality by which to filter asset data.</p>
     */
    inline const Aws::Vector<Quality>& GetQualities() const { return m_qualities; }
    inline bool QualitiesHasBeenSet() const { return m_qualitiesHasBeenSet; }
    template<typename QualitiesT = Aws::Vector<Quality>>
    void SetQualities(QualitiesT&& value) { m_qualitiesHasBeenSet = true; m_qualities = std::forward<QualitiesT>(value); }
    template<typename QualitiesT = Aws::Vector<Quality>>
    GetAssetPropertyValueHistoryRequest& WithQualities(QualitiesT&& value) { SetQualities(std::forward<QualitiesT>(value)); return *this;}
    inline GetAssetPropertyValueHistoryRequest& AddQualities(Quality value) { m_qualitiesHasBeenSet = true; m_qualities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The chronological sorting order of the requested information.</p> <p>Default:
     * <code>ASCENDING</code> </p>
     */
    inline TimeOrdering GetTimeOrdering() const { return m_timeOrdering; }
    inline bool TimeOrderingHasBeenSet() const { return m_timeOrderingHasBeenSet; }
    inline void SetTimeOrdering(TimeOrdering value) { m_timeOrderingHasBeenSet = true; m_timeOrdering = value; }
    inline GetAssetPropertyValueHistoryRequest& WithTimeOrdering(TimeOrdering value) { SetTimeOrdering(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAssetPropertyValueHistoryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for each paginated request. A result
     * set is returned in the two cases, whichever occurs first.</p> <ul> <li> <p>The
     * size of the result set is equal to 4 MB.</p> </li> <li> <p>The number of data
     * points in the result set is equal to the value of <code>maxResults</code>. The
     * maximum value of <code>maxResults</code> is 20000.</p> </li> </ul>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetAssetPropertyValueHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;

    Aws::String m_propertyAlias;
    bool m_propertyAliasHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    Aws::Vector<Quality> m_qualities;
    bool m_qualitiesHasBeenSet = false;

    TimeOrdering m_timeOrdering{TimeOrdering::NOT_SET};
    bool m_timeOrderingHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
