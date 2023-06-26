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
    AWS_IOTSITEWISE_API GetInterpolatedAssetPropertyValuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInterpolatedAssetPropertyValues"; }

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
    inline GetInterpolatedAssetPropertyValuesRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}


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
    inline GetInterpolatedAssetPropertyValuesRequest& WithPropertyId(const Aws::String& value) { SetPropertyId(value); return *this;}

    /**
     * <p>The ID of the asset property.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithPropertyId(Aws::String&& value) { SetPropertyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset property.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithPropertyId(const char* value) { SetPropertyId(value); return *this;}


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
    inline GetInterpolatedAssetPropertyValuesRequest& WithPropertyAlias(const Aws::String& value) { SetPropertyAlias(value); return *this;}

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithPropertyAlias(Aws::String&& value) { SetPropertyAlias(std::move(value)); return *this;}

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithPropertyAlias(const char* value) { SetPropertyAlias(value); return *this;}


    /**
     * <p>The exclusive start of the range from which to interpolate data, expressed in
     * seconds in Unix epoch time.</p>
     */
    inline long long GetStartTimeInSeconds() const{ return m_startTimeInSeconds; }

    /**
     * <p>The exclusive start of the range from which to interpolate data, expressed in
     * seconds in Unix epoch time.</p>
     */
    inline bool StartTimeInSecondsHasBeenSet() const { return m_startTimeInSecondsHasBeenSet; }

    /**
     * <p>The exclusive start of the range from which to interpolate data, expressed in
     * seconds in Unix epoch time.</p>
     */
    inline void SetStartTimeInSeconds(long long value) { m_startTimeInSecondsHasBeenSet = true; m_startTimeInSeconds = value; }

    /**
     * <p>The exclusive start of the range from which to interpolate data, expressed in
     * seconds in Unix epoch time.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithStartTimeInSeconds(long long value) { SetStartTimeInSeconds(value); return *this;}


    /**
     * <p>The nanosecond offset converted from <code>startTimeInSeconds</code>.</p>
     */
    inline int GetStartTimeOffsetInNanos() const{ return m_startTimeOffsetInNanos; }

    /**
     * <p>The nanosecond offset converted from <code>startTimeInSeconds</code>.</p>
     */
    inline bool StartTimeOffsetInNanosHasBeenSet() const { return m_startTimeOffsetInNanosHasBeenSet; }

    /**
     * <p>The nanosecond offset converted from <code>startTimeInSeconds</code>.</p>
     */
    inline void SetStartTimeOffsetInNanos(int value) { m_startTimeOffsetInNanosHasBeenSet = true; m_startTimeOffsetInNanos = value; }

    /**
     * <p>The nanosecond offset converted from <code>startTimeInSeconds</code>.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithStartTimeOffsetInNanos(int value) { SetStartTimeOffsetInNanos(value); return *this;}


    /**
     * <p>The inclusive end of the range from which to interpolate data, expressed in
     * seconds in Unix epoch time.</p>
     */
    inline long long GetEndTimeInSeconds() const{ return m_endTimeInSeconds; }

    /**
     * <p>The inclusive end of the range from which to interpolate data, expressed in
     * seconds in Unix epoch time.</p>
     */
    inline bool EndTimeInSecondsHasBeenSet() const { return m_endTimeInSecondsHasBeenSet; }

    /**
     * <p>The inclusive end of the range from which to interpolate data, expressed in
     * seconds in Unix epoch time.</p>
     */
    inline void SetEndTimeInSeconds(long long value) { m_endTimeInSecondsHasBeenSet = true; m_endTimeInSeconds = value; }

    /**
     * <p>The inclusive end of the range from which to interpolate data, expressed in
     * seconds in Unix epoch time.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithEndTimeInSeconds(long long value) { SetEndTimeInSeconds(value); return *this;}


    /**
     * <p>The nanosecond offset converted from <code>endTimeInSeconds</code>.</p>
     */
    inline int GetEndTimeOffsetInNanos() const{ return m_endTimeOffsetInNanos; }

    /**
     * <p>The nanosecond offset converted from <code>endTimeInSeconds</code>.</p>
     */
    inline bool EndTimeOffsetInNanosHasBeenSet() const { return m_endTimeOffsetInNanosHasBeenSet; }

    /**
     * <p>The nanosecond offset converted from <code>endTimeInSeconds</code>.</p>
     */
    inline void SetEndTimeOffsetInNanos(int value) { m_endTimeOffsetInNanosHasBeenSet = true; m_endTimeOffsetInNanos = value; }

    /**
     * <p>The nanosecond offset converted from <code>endTimeInSeconds</code>.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithEndTimeOffsetInNanos(int value) { SetEndTimeOffsetInNanos(value); return *this;}


    /**
     * <p>The quality of the asset property value. You can use this parameter as a
     * filter to choose only the asset property values that have a specific
     * quality.</p>
     */
    inline const Quality& GetQuality() const{ return m_quality; }

    /**
     * <p>The quality of the asset property value. You can use this parameter as a
     * filter to choose only the asset property values that have a specific
     * quality.</p>
     */
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }

    /**
     * <p>The quality of the asset property value. You can use this parameter as a
     * filter to choose only the asset property values that have a specific
     * quality.</p>
     */
    inline void SetQuality(const Quality& value) { m_qualityHasBeenSet = true; m_quality = value; }

    /**
     * <p>The quality of the asset property value. You can use this parameter as a
     * filter to choose only the asset property values that have a specific
     * quality.</p>
     */
    inline void SetQuality(Quality&& value) { m_qualityHasBeenSet = true; m_quality = std::move(value); }

    /**
     * <p>The quality of the asset property value. You can use this parameter as a
     * filter to choose only the asset property values that have a specific
     * quality.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithQuality(const Quality& value) { SetQuality(value); return *this;}

    /**
     * <p>The quality of the asset property value. You can use this parameter as a
     * filter to choose only the asset property values that have a specific
     * quality.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithQuality(Quality&& value) { SetQuality(std::move(value)); return *this;}


    /**
     * <p>The time interval in seconds over which to interpolate data. Each interval
     * starts when the previous one ends.</p>
     */
    inline long long GetIntervalInSeconds() const{ return m_intervalInSeconds; }

    /**
     * <p>The time interval in seconds over which to interpolate data. Each interval
     * starts when the previous one ends.</p>
     */
    inline bool IntervalInSecondsHasBeenSet() const { return m_intervalInSecondsHasBeenSet; }

    /**
     * <p>The time interval in seconds over which to interpolate data. Each interval
     * starts when the previous one ends.</p>
     */
    inline void SetIntervalInSeconds(long long value) { m_intervalInSecondsHasBeenSet = true; m_intervalInSeconds = value; }

    /**
     * <p>The time interval in seconds over which to interpolate data. Each interval
     * starts when the previous one ends.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithIntervalInSeconds(long long value) { SetIntervalInSeconds(value); return *this;}


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
    inline GetInterpolatedAssetPropertyValuesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for each paginated request. If not
     * specified, the default value is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for each paginated request. If not
     * specified, the default value is 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for each paginated request. If not
     * specified, the default value is 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for each paginated request. If not
     * specified, the default value is 10.</p>
     */
    inline GetInterpolatedAssetPropertyValuesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline const Aws::String& GetType() const{ return m_type; }

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
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

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
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

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
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

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
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

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
    inline GetInterpolatedAssetPropertyValuesRequest& WithType(const Aws::String& value) { SetType(value); return *this;}

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
    inline GetInterpolatedAssetPropertyValuesRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

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
    inline GetInterpolatedAssetPropertyValuesRequest& WithType(const char* value) { SetType(value); return *this;}


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
    inline long long GetIntervalWindowInSeconds() const{ return m_intervalWindowInSeconds; }

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
    inline bool IntervalWindowInSecondsHasBeenSet() const { return m_intervalWindowInSecondsHasBeenSet; }

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
    inline void SetIntervalWindowInSeconds(long long value) { m_intervalWindowInSecondsHasBeenSet = true; m_intervalWindowInSeconds = value; }

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
    inline GetInterpolatedAssetPropertyValuesRequest& WithIntervalWindowInSeconds(long long value) { SetIntervalWindowInSeconds(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;

    Aws::String m_propertyAlias;
    bool m_propertyAliasHasBeenSet = false;

    long long m_startTimeInSeconds;
    bool m_startTimeInSecondsHasBeenSet = false;

    int m_startTimeOffsetInNanos;
    bool m_startTimeOffsetInNanosHasBeenSet = false;

    long long m_endTimeInSeconds;
    bool m_endTimeInSecondsHasBeenSet = false;

    int m_endTimeOffsetInNanos;
    bool m_endTimeOffsetInNanosHasBeenSet = false;

    Quality m_quality;
    bool m_qualityHasBeenSet = false;

    long long m_intervalInSeconds;
    bool m_intervalInSecondsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    long long m_intervalWindowInSeconds;
    bool m_intervalWindowInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
