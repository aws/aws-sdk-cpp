/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/TimeOrdering.h>
#include <aws/iotsitewise/model/AggregateType.h>
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
  class GetAssetPropertyAggregatesRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API GetAssetPropertyAggregatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssetPropertyAggregates"; }

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
    inline GetAssetPropertyAggregatesRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The ID of the asset property.</p>
     */
    inline const Aws::String& GetPropertyId() const{ return m_propertyId; }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline void SetPropertyId(const Aws::String& value) { m_propertyIdHasBeenSet = true; m_propertyId = value; }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline void SetPropertyId(Aws::String&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::move(value); }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline void SetPropertyId(const char* value) { m_propertyIdHasBeenSet = true; m_propertyId.assign(value); }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithPropertyId(const Aws::String& value) { SetPropertyId(value); return *this;}

    /**
     * <p>The ID of the asset property.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithPropertyId(Aws::String&& value) { SetPropertyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset property.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithPropertyId(const char* value) { SetPropertyId(value); return *this;}


    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPropertyAlias() const{ return m_propertyAlias; }

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetPropertyAlias(const Aws::String& value) { m_propertyAliasHasBeenSet = true; m_propertyAlias = value; }

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetPropertyAlias(Aws::String&& value) { m_propertyAliasHasBeenSet = true; m_propertyAlias = std::move(value); }

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetPropertyAlias(const char* value) { m_propertyAliasHasBeenSet = true; m_propertyAlias.assign(value); }

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithPropertyAlias(const Aws::String& value) { SetPropertyAlias(value); return *this;}

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithPropertyAlias(Aws::String&& value) { SetPropertyAlias(std::move(value)); return *this;}

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithPropertyAlias(const char* value) { SetPropertyAlias(value); return *this;}


    /**
     * <p>The data aggregating function.</p>
     */
    inline const Aws::Vector<AggregateType>& GetAggregateTypes() const{ return m_aggregateTypes; }

    /**
     * <p>The data aggregating function.</p>
     */
    inline bool AggregateTypesHasBeenSet() const { return m_aggregateTypesHasBeenSet; }

    /**
     * <p>The data aggregating function.</p>
     */
    inline void SetAggregateTypes(const Aws::Vector<AggregateType>& value) { m_aggregateTypesHasBeenSet = true; m_aggregateTypes = value; }

    /**
     * <p>The data aggregating function.</p>
     */
    inline void SetAggregateTypes(Aws::Vector<AggregateType>&& value) { m_aggregateTypesHasBeenSet = true; m_aggregateTypes = std::move(value); }

    /**
     * <p>The data aggregating function.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithAggregateTypes(const Aws::Vector<AggregateType>& value) { SetAggregateTypes(value); return *this;}

    /**
     * <p>The data aggregating function.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithAggregateTypes(Aws::Vector<AggregateType>&& value) { SetAggregateTypes(std::move(value)); return *this;}

    /**
     * <p>The data aggregating function.</p>
     */
    inline GetAssetPropertyAggregatesRequest& AddAggregateTypes(const AggregateType& value) { m_aggregateTypesHasBeenSet = true; m_aggregateTypes.push_back(value); return *this; }

    /**
     * <p>The data aggregating function.</p>
     */
    inline GetAssetPropertyAggregatesRequest& AddAggregateTypes(AggregateType&& value) { m_aggregateTypesHasBeenSet = true; m_aggregateTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The time interval over which to aggregate data.</p>
     */
    inline const Aws::String& GetResolution() const{ return m_resolution; }

    /**
     * <p>The time interval over which to aggregate data.</p>
     */
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }

    /**
     * <p>The time interval over which to aggregate data.</p>
     */
    inline void SetResolution(const Aws::String& value) { m_resolutionHasBeenSet = true; m_resolution = value; }

    /**
     * <p>The time interval over which to aggregate data.</p>
     */
    inline void SetResolution(Aws::String&& value) { m_resolutionHasBeenSet = true; m_resolution = std::move(value); }

    /**
     * <p>The time interval over which to aggregate data.</p>
     */
    inline void SetResolution(const char* value) { m_resolutionHasBeenSet = true; m_resolution.assign(value); }

    /**
     * <p>The time interval over which to aggregate data.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithResolution(const Aws::String& value) { SetResolution(value); return *this;}

    /**
     * <p>The time interval over which to aggregate data.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithResolution(Aws::String&& value) { SetResolution(std::move(value)); return *this;}

    /**
     * <p>The time interval over which to aggregate data.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithResolution(const char* value) { SetResolution(value); return *this;}


    /**
     * <p>The quality by which to filter asset data.</p>
     */
    inline const Aws::Vector<Quality>& GetQualities() const{ return m_qualities; }

    /**
     * <p>The quality by which to filter asset data.</p>
     */
    inline bool QualitiesHasBeenSet() const { return m_qualitiesHasBeenSet; }

    /**
     * <p>The quality by which to filter asset data.</p>
     */
    inline void SetQualities(const Aws::Vector<Quality>& value) { m_qualitiesHasBeenSet = true; m_qualities = value; }

    /**
     * <p>The quality by which to filter asset data.</p>
     */
    inline void SetQualities(Aws::Vector<Quality>&& value) { m_qualitiesHasBeenSet = true; m_qualities = std::move(value); }

    /**
     * <p>The quality by which to filter asset data.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithQualities(const Aws::Vector<Quality>& value) { SetQualities(value); return *this;}

    /**
     * <p>The quality by which to filter asset data.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithQualities(Aws::Vector<Quality>&& value) { SetQualities(std::move(value)); return *this;}

    /**
     * <p>The quality by which to filter asset data.</p>
     */
    inline GetAssetPropertyAggregatesRequest& AddQualities(const Quality& value) { m_qualitiesHasBeenSet = true; m_qualities.push_back(value); return *this; }

    /**
     * <p>The quality by which to filter asset data.</p>
     */
    inline GetAssetPropertyAggregatesRequest& AddQualities(Quality&& value) { m_qualitiesHasBeenSet = true; m_qualities.push_back(std::move(value)); return *this; }


    /**
     * <p>The exclusive start of the range from which to query historical data,
     * expressed in seconds in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The exclusive start of the range from which to query historical data,
     * expressed in seconds in Unix epoch time.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The exclusive start of the range from which to query historical data,
     * expressed in seconds in Unix epoch time.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The exclusive start of the range from which to query historical data,
     * expressed in seconds in Unix epoch time.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The exclusive start of the range from which to query historical data,
     * expressed in seconds in Unix epoch time.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The exclusive start of the range from which to query historical data,
     * expressed in seconds in Unix epoch time.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>The inclusive end of the range from which to query historical data, expressed
     * in seconds in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The inclusive end of the range from which to query historical data, expressed
     * in seconds in Unix epoch time.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The inclusive end of the range from which to query historical data, expressed
     * in seconds in Unix epoch time.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The inclusive end of the range from which to query historical data, expressed
     * in seconds in Unix epoch time.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The inclusive end of the range from which to query historical data, expressed
     * in seconds in Unix epoch time.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The inclusive end of the range from which to query historical data, expressed
     * in seconds in Unix epoch time.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>The chronological sorting order of the requested information.</p> <p>Default:
     * <code>ASCENDING</code> </p>
     */
    inline const TimeOrdering& GetTimeOrdering() const{ return m_timeOrdering; }

    /**
     * <p>The chronological sorting order of the requested information.</p> <p>Default:
     * <code>ASCENDING</code> </p>
     */
    inline bool TimeOrderingHasBeenSet() const { return m_timeOrderingHasBeenSet; }

    /**
     * <p>The chronological sorting order of the requested information.</p> <p>Default:
     * <code>ASCENDING</code> </p>
     */
    inline void SetTimeOrdering(const TimeOrdering& value) { m_timeOrderingHasBeenSet = true; m_timeOrdering = value; }

    /**
     * <p>The chronological sorting order of the requested information.</p> <p>Default:
     * <code>ASCENDING</code> </p>
     */
    inline void SetTimeOrdering(TimeOrdering&& value) { m_timeOrderingHasBeenSet = true; m_timeOrdering = std::move(value); }

    /**
     * <p>The chronological sorting order of the requested information.</p> <p>Default:
     * <code>ASCENDING</code> </p>
     */
    inline GetAssetPropertyAggregatesRequest& WithTimeOrdering(const TimeOrdering& value) { SetTimeOrdering(value); return *this;}

    /**
     * <p>The chronological sorting order of the requested information.</p> <p>Default:
     * <code>ASCENDING</code> </p>
     */
    inline GetAssetPropertyAggregatesRequest& WithTimeOrdering(TimeOrdering&& value) { SetTimeOrdering(std::move(value)); return *this;}


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
    inline GetAssetPropertyAggregatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 100</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 100</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 100</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 100</p>
     */
    inline GetAssetPropertyAggregatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;

    Aws::String m_propertyAlias;
    bool m_propertyAliasHasBeenSet = false;

    Aws::Vector<AggregateType> m_aggregateTypes;
    bool m_aggregateTypesHasBeenSet = false;

    Aws::String m_resolution;
    bool m_resolutionHasBeenSet = false;

    Aws::Vector<Quality> m_qualities;
    bool m_qualitiesHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    TimeOrdering m_timeOrdering;
    bool m_timeOrderingHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
