/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetInterpolatedAssetPropertyValuesRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API GetInterpolatedAssetPropertyValuesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInterpolatedAssetPropertyValues"; }

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
    GetInterpolatedAssetPropertyValuesRequest& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
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
    GetInterpolatedAssetPropertyValuesRequest& WithPropertyId(PropertyIdT&& value) { SetPropertyId(std::forward<PropertyIdT>(value)); return *this;}
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
    GetInterpolatedAssetPropertyValuesRequest& WithPropertyAlias(PropertyAliasT&& value) { SetPropertyAlias(std::forward<PropertyAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusive start of the range from which to interpolate data, expressed in
     * seconds in Unix epoch time.</p>
     */
    inline long long GetStartTimeInSeconds() const { return m_startTimeInSeconds; }
    inline bool StartTimeInSecondsHasBeenSet() const { return m_startTimeInSecondsHasBeenSet; }
    inline void SetStartTimeInSeconds(long long value) { m_startTimeInSecondsHasBeenSet = true; m_startTimeInSeconds = value; }
    inline GetInterpolatedAssetPropertyValuesRequest& WithStartTimeInSeconds(long long value) { SetStartTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nanosecond offset converted from <code>startTimeInSeconds</code>.</p>
     */
    inline int GetStartTimeOffsetInNanos() const { return m_startTimeOffsetInNanos; }
    inline bool StartTimeOffsetInNanosHasBeenSet() const { return m_startTimeOffsetInNanosHasBeenSet; }
    inline void SetStartTimeOffsetInNanos(int value) { m_startTimeOffsetInNanosHasBeenSet = true; m_startTimeOffsetInNanos = value; }
    inline GetInterpolatedAssetPropertyValuesRequest& WithStartTimeOffsetInNanos(int value) { SetStartTimeOffsetInNanos(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive end of the range from which to interpolate data, expressed in
     * seconds in Unix epoch time.</p>
     */
    inline long long GetEndTimeInSeconds() const { return m_endTimeInSeconds; }
    inline bool EndTimeInSecondsHasBeenSet() const { return m_endTimeInSecondsHasBeenSet; }
    inline void SetEndTimeInSeconds(long long value) { m_endTimeInSecondsHasBeenSet = true; m_endTimeInSeconds = value; }
    inline GetInterpolatedAssetPropertyValuesRequest& WithEndTimeInSeconds(long long value) { SetEndTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nanosecond offset converted from <code>endTimeInSeconds</code>.</p>
     */
    inline int GetEndTimeOffsetInNanos() const { return m_endTimeOffsetInNanos; }
    inline bool EndTimeOffsetInNanosHasBeenSet() const { return m_endTimeOffsetInNanosHasBeenSet; }
    inline void SetEndTimeOffsetInNanos(int value) { m_endTimeOffsetInNanosHasBeenSet = true; m_endTimeOffsetInNanos = value; }
    inline GetInterpolatedAssetPropertyValuesRequest& WithEndTimeOffsetInNanos(int value) { SetEndTimeOffsetInNanos(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quality of the asset property value. You can use this parameter as a
     * filter to choose only the asset property values that have a specific
     * quality.</p>
     */
    inline Quality GetQuality() const { return m_quality; }
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }
    inline void SetQuality(Quality value) { m_qualityHasBeenSet = true; m_quality = value; }
    inline GetInterpolatedAssetPropertyValuesRequest& WithQuality(Quality value) { SetQuality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time interval in seconds over which to interpolate data. Each interval
     * starts when the previous one ends.</p>
     */
    inline long long GetIntervalInSeconds() const { return m_intervalInSeconds; }
    inline bool IntervalInSecondsHasBeenSet() const { return m_intervalInSecondsHasBeenSet; }
    inline void SetIntervalInSeconds(long long value) { m_intervalInSecondsHasBeenSet = true; m_intervalInSeconds = value; }
    inline GetInterpolatedAssetPropertyValuesRequest& WithIntervalInSeconds(long long value) { SetIntervalInSeconds(value); return *this;}
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
    GetInterpolatedAssetPropertyValuesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for each paginated request. If not
     * specified, the default value is 10.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetInterpolatedAssetPropertyValuesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interpolation type.</p> <p>Valid values: <code>LINEAR_INTERPOLATION |
     * LOCF_INTERPOLATION</code> </p> <ul> <li> <p> <code>LINEAR_INTERPOLATION</code> –
     * Estimates missing data using <a
     * href="https://en.wikipedia.org/wiki/Linear_interpolation">linear
     * interpolation</a>.</p> <p>For example, you can use this operation to return the
     * interpolated temperature values for a wind turbine every 24 hours over a
     * duration of 7 days. If the interpolation starts July 1, 2021, at 9 AM, IoT
     * SiteWise returns the first interpolated value on July 2, 2021, at 9 AM, the
     * second interpolated value on July 3, 2021, at 9 AM, and so on.</p> </li> <li>
     * <p> <code>LOCF_INTERPOLATION</code> – Estimates missing data using last
     * observation carried forward interpolation</p> <p>If no data point is found for
     * an interval, IoT SiteWise returns the last observed data point for the previous
     * interval and carries forward this interpolated value until a new data point is
     * found.</p> <p>For example, you can get the state of an on-off valve every 24
     * hours over a duration of 7 days. If the interpolation starts July 1, 2021, at 9
     * AM, IoT SiteWise returns the last observed data point between July 1, 2021, at 9
     * AM and July 2, 2021, at 9 AM as the first interpolated value. If a data point
     * isn't found after 9 AM on July 2, 2021, IoT SiteWise uses the same interpolated
     * value for the rest of the days.</p> </li> </ul>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    GetInterpolatedAssetPropertyValuesRequest& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query interval for the window, in seconds. IoT SiteWise computes each
     * interpolated value by using data points from the timestamp of each interval,
     * minus the window to the timestamp of each interval plus the window. If not
     * specified, the window ranges between the start time minus the interval and the
     * end time plus the interval.</p>  <ul> <li> <p>If you specify a value for
     * the <code>intervalWindowInSeconds</code> parameter, the value for the
     * <code>type</code> parameter must be <code>LINEAR_INTERPOLATION</code>.</p> </li>
     * <li> <p>If a data point isn't found during the specified query window, IoT
     * SiteWise won't return an interpolated value for the interval. This indicates
     * that there's a gap in the ingested data points.</p> </li> </ul>  <p>For
     * example, you can get the interpolated temperature values for a wind turbine
     * every 24 hours over a duration of 7 days. If the interpolation starts on July 1,
     * 2021, at 9 AM with a window of 2 hours, IoT SiteWise uses the data points from 7
     * AM (9 AM minus 2 hours) to 11 AM (9 AM plus 2 hours) on July 2, 2021 to compute
     * the first interpolated value. Next, IoT SiteWise uses the data points from 7 AM
     * (9 AM minus 2 hours) to 11 AM (9 AM plus 2 hours) on July 3, 2021 to compute the
     * second interpolated value, and so on. </p>
     */
    inline long long GetIntervalWindowInSeconds() const { return m_intervalWindowInSeconds; }
    inline bool IntervalWindowInSecondsHasBeenSet() const { return m_intervalWindowInSecondsHasBeenSet; }
    inline void SetIntervalWindowInSeconds(long long value) { m_intervalWindowInSecondsHasBeenSet = true; m_intervalWindowInSeconds = value; }
    inline GetInterpolatedAssetPropertyValuesRequest& WithIntervalWindowInSeconds(long long value) { SetIntervalWindowInSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;

    Aws::String m_propertyAlias;
    bool m_propertyAliasHasBeenSet = false;

    long long m_startTimeInSeconds{0};
    bool m_startTimeInSecondsHasBeenSet = false;

    int m_startTimeOffsetInNanos{0};
    bool m_startTimeOffsetInNanosHasBeenSet = false;

    long long m_endTimeInSeconds{0};
    bool m_endTimeInSecondsHasBeenSet = false;

    int m_endTimeOffsetInNanos{0};
    bool m_endTimeOffsetInNanosHasBeenSet = false;

    Quality m_quality{Quality::NOT_SET};
    bool m_qualityHasBeenSet = false;

    long long m_intervalInSeconds{0};
    bool m_intervalInSecondsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    long long m_intervalWindowInSeconds{0};
    bool m_intervalWindowInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
