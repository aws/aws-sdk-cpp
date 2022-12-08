/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PropertyDataType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class DescribeTimeSeriesResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeTimeSeriesResult();
    AWS_IOTSITEWISE_API DescribeTimeSeriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeTimeSeriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetId = value; }

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetId = std::move(value); }

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline void SetAssetId(const char* value) { m_assetId.assign(value); }

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline DescribeTimeSeriesResult& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline DescribeTimeSeriesResult& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline DescribeTimeSeriesResult& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The ID of the asset property.</p>
     */
    inline const Aws::String& GetPropertyId() const{ return m_propertyId; }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline void SetPropertyId(const Aws::String& value) { m_propertyId = value; }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline void SetPropertyId(Aws::String&& value) { m_propertyId = std::move(value); }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline void SetPropertyId(const char* value) { m_propertyId.assign(value); }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline DescribeTimeSeriesResult& WithPropertyId(const Aws::String& value) { SetPropertyId(value); return *this;}

    /**
     * <p>The ID of the asset property.</p>
     */
    inline DescribeTimeSeriesResult& WithPropertyId(Aws::String&& value) { SetPropertyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset property.</p>
     */
    inline DescribeTimeSeriesResult& WithPropertyId(const char* value) { SetPropertyId(value); return *this;}


    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_alias = value; }

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_alias = std::move(value); }

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline void SetAlias(const char* value) { m_alias.assign(value); }

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline DescribeTimeSeriesResult& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline DescribeTimeSeriesResult& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline DescribeTimeSeriesResult& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>The ID of the time series.</p>
     */
    inline const Aws::String& GetTimeSeriesId() const{ return m_timeSeriesId; }

    /**
     * <p>The ID of the time series.</p>
     */
    inline void SetTimeSeriesId(const Aws::String& value) { m_timeSeriesId = value; }

    /**
     * <p>The ID of the time series.</p>
     */
    inline void SetTimeSeriesId(Aws::String&& value) { m_timeSeriesId = std::move(value); }

    /**
     * <p>The ID of the time series.</p>
     */
    inline void SetTimeSeriesId(const char* value) { m_timeSeriesId.assign(value); }

    /**
     * <p>The ID of the time series.</p>
     */
    inline DescribeTimeSeriesResult& WithTimeSeriesId(const Aws::String& value) { SetTimeSeriesId(value); return *this;}

    /**
     * <p>The ID of the time series.</p>
     */
    inline DescribeTimeSeriesResult& WithTimeSeriesId(Aws::String&& value) { SetTimeSeriesId(std::move(value)); return *this;}

    /**
     * <p>The ID of the time series.</p>
     */
    inline DescribeTimeSeriesResult& WithTimeSeriesId(const char* value) { SetTimeSeriesId(value); return *this;}


    /**
     * <p>The data type of the time series.</p> <p>If you specify <code>STRUCT</code>,
     * you must also specify <code>dataTypeSpec</code> to identify the type of the
     * structure for this time series.</p>
     */
    inline const PropertyDataType& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the time series.</p> <p>If you specify <code>STRUCT</code>,
     * you must also specify <code>dataTypeSpec</code> to identify the type of the
     * structure for this time series.</p>
     */
    inline void SetDataType(const PropertyDataType& value) { m_dataType = value; }

    /**
     * <p>The data type of the time series.</p> <p>If you specify <code>STRUCT</code>,
     * you must also specify <code>dataTypeSpec</code> to identify the type of the
     * structure for this time series.</p>
     */
    inline void SetDataType(PropertyDataType&& value) { m_dataType = std::move(value); }

    /**
     * <p>The data type of the time series.</p> <p>If you specify <code>STRUCT</code>,
     * you must also specify <code>dataTypeSpec</code> to identify the type of the
     * structure for this time series.</p>
     */
    inline DescribeTimeSeriesResult& WithDataType(const PropertyDataType& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the time series.</p> <p>If you specify <code>STRUCT</code>,
     * you must also specify <code>dataTypeSpec</code> to identify the type of the
     * structure for this time series.</p>
     */
    inline DescribeTimeSeriesResult& WithDataType(PropertyDataType&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline const Aws::String& GetDataTypeSpec() const{ return m_dataTypeSpec; }

    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline void SetDataTypeSpec(const Aws::String& value) { m_dataTypeSpec = value; }

    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline void SetDataTypeSpec(Aws::String&& value) { m_dataTypeSpec = std::move(value); }

    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline void SetDataTypeSpec(const char* value) { m_dataTypeSpec.assign(value); }

    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline DescribeTimeSeriesResult& WithDataTypeSpec(const Aws::String& value) { SetDataTypeSpec(value); return *this;}

    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline DescribeTimeSeriesResult& WithDataTypeSpec(Aws::String&& value) { SetDataTypeSpec(std::move(value)); return *this;}

    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline DescribeTimeSeriesResult& WithDataTypeSpec(const char* value) { SetDataTypeSpec(value); return *this;}


    /**
     * <p>The date that the time series was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeSeriesCreationDate() const{ return m_timeSeriesCreationDate; }

    /**
     * <p>The date that the time series was created, in Unix epoch time.</p>
     */
    inline void SetTimeSeriesCreationDate(const Aws::Utils::DateTime& value) { m_timeSeriesCreationDate = value; }

    /**
     * <p>The date that the time series was created, in Unix epoch time.</p>
     */
    inline void SetTimeSeriesCreationDate(Aws::Utils::DateTime&& value) { m_timeSeriesCreationDate = std::move(value); }

    /**
     * <p>The date that the time series was created, in Unix epoch time.</p>
     */
    inline DescribeTimeSeriesResult& WithTimeSeriesCreationDate(const Aws::Utils::DateTime& value) { SetTimeSeriesCreationDate(value); return *this;}

    /**
     * <p>The date that the time series was created, in Unix epoch time.</p>
     */
    inline DescribeTimeSeriesResult& WithTimeSeriesCreationDate(Aws::Utils::DateTime&& value) { SetTimeSeriesCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date that the time series was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeSeriesLastUpdateDate() const{ return m_timeSeriesLastUpdateDate; }

    /**
     * <p>The date that the time series was last updated, in Unix epoch time.</p>
     */
    inline void SetTimeSeriesLastUpdateDate(const Aws::Utils::DateTime& value) { m_timeSeriesLastUpdateDate = value; }

    /**
     * <p>The date that the time series was last updated, in Unix epoch time.</p>
     */
    inline void SetTimeSeriesLastUpdateDate(Aws::Utils::DateTime&& value) { m_timeSeriesLastUpdateDate = std::move(value); }

    /**
     * <p>The date that the time series was last updated, in Unix epoch time.</p>
     */
    inline DescribeTimeSeriesResult& WithTimeSeriesLastUpdateDate(const Aws::Utils::DateTime& value) { SetTimeSeriesLastUpdateDate(value); return *this;}

    /**
     * <p>The date that the time series was last updated, in Unix epoch time.</p>
     */
    inline DescribeTimeSeriesResult& WithTimeSeriesLastUpdateDate(Aws::Utils::DateTime&& value) { SetTimeSeriesLastUpdateDate(std::move(value)); return *this;}

  private:

    Aws::String m_assetId;

    Aws::String m_propertyId;

    Aws::String m_alias;

    Aws::String m_timeSeriesId;

    PropertyDataType m_dataType;

    Aws::String m_dataTypeSpec;

    Aws::Utils::DateTime m_timeSeriesCreationDate;

    Aws::Utils::DateTime m_timeSeriesLastUpdateDate;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
