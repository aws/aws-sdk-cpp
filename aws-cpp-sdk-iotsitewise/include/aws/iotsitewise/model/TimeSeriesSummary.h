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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a summary of a time series (data stream).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TimeSeriesSummary">AWS
   * API Reference</a></p>
   */
  class TimeSeriesSummary
  {
  public:
    AWS_IOTSITEWISE_API TimeSeriesSummary();
    AWS_IOTSITEWISE_API TimeSeriesSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API TimeSeriesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline TimeSeriesSummary& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline TimeSeriesSummary& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline TimeSeriesSummary& WithAssetId(const char* value) { SetAssetId(value); return *this;}


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
    inline TimeSeriesSummary& WithPropertyId(const Aws::String& value) { SetPropertyId(value); return *this;}

    /**
     * <p>The ID of the asset property.</p>
     */
    inline TimeSeriesSummary& WithPropertyId(Aws::String&& value) { SetPropertyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset property.</p>
     */
    inline TimeSeriesSummary& WithPropertyId(const char* value) { SetPropertyId(value); return *this;}


    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline TimeSeriesSummary& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline TimeSeriesSummary& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline TimeSeriesSummary& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>The ID of the time series.</p>
     */
    inline const Aws::String& GetTimeSeriesId() const{ return m_timeSeriesId; }

    /**
     * <p>The ID of the time series.</p>
     */
    inline bool TimeSeriesIdHasBeenSet() const { return m_timeSeriesIdHasBeenSet; }

    /**
     * <p>The ID of the time series.</p>
     */
    inline void SetTimeSeriesId(const Aws::String& value) { m_timeSeriesIdHasBeenSet = true; m_timeSeriesId = value; }

    /**
     * <p>The ID of the time series.</p>
     */
    inline void SetTimeSeriesId(Aws::String&& value) { m_timeSeriesIdHasBeenSet = true; m_timeSeriesId = std::move(value); }

    /**
     * <p>The ID of the time series.</p>
     */
    inline void SetTimeSeriesId(const char* value) { m_timeSeriesIdHasBeenSet = true; m_timeSeriesId.assign(value); }

    /**
     * <p>The ID of the time series.</p>
     */
    inline TimeSeriesSummary& WithTimeSeriesId(const Aws::String& value) { SetTimeSeriesId(value); return *this;}

    /**
     * <p>The ID of the time series.</p>
     */
    inline TimeSeriesSummary& WithTimeSeriesId(Aws::String&& value) { SetTimeSeriesId(std::move(value)); return *this;}

    /**
     * <p>The ID of the time series.</p>
     */
    inline TimeSeriesSummary& WithTimeSeriesId(const char* value) { SetTimeSeriesId(value); return *this;}


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
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the time series.</p> <p>If you specify <code>STRUCT</code>,
     * you must also specify <code>dataTypeSpec</code> to identify the type of the
     * structure for this time series.</p>
     */
    inline void SetDataType(const PropertyDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the time series.</p> <p>If you specify <code>STRUCT</code>,
     * you must also specify <code>dataTypeSpec</code> to identify the type of the
     * structure for this time series.</p>
     */
    inline void SetDataType(PropertyDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the time series.</p> <p>If you specify <code>STRUCT</code>,
     * you must also specify <code>dataTypeSpec</code> to identify the type of the
     * structure for this time series.</p>
     */
    inline TimeSeriesSummary& WithDataType(const PropertyDataType& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the time series.</p> <p>If you specify <code>STRUCT</code>,
     * you must also specify <code>dataTypeSpec</code> to identify the type of the
     * structure for this time series.</p>
     */
    inline TimeSeriesSummary& WithDataType(PropertyDataType&& value) { SetDataType(std::move(value)); return *this;}


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
    inline bool DataTypeSpecHasBeenSet() const { return m_dataTypeSpecHasBeenSet; }

    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline void SetDataTypeSpec(const Aws::String& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = value; }

    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline void SetDataTypeSpec(Aws::String&& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = std::move(value); }

    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline void SetDataTypeSpec(const char* value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec.assign(value); }

    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline TimeSeriesSummary& WithDataTypeSpec(const Aws::String& value) { SetDataTypeSpec(value); return *this;}

    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline TimeSeriesSummary& WithDataTypeSpec(Aws::String&& value) { SetDataTypeSpec(std::move(value)); return *this;}

    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline TimeSeriesSummary& WithDataTypeSpec(const char* value) { SetDataTypeSpec(value); return *this;}


    /**
     * <p>The date that the time series was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeSeriesCreationDate() const{ return m_timeSeriesCreationDate; }

    /**
     * <p>The date that the time series was created, in Unix epoch time.</p>
     */
    inline bool TimeSeriesCreationDateHasBeenSet() const { return m_timeSeriesCreationDateHasBeenSet; }

    /**
     * <p>The date that the time series was created, in Unix epoch time.</p>
     */
    inline void SetTimeSeriesCreationDate(const Aws::Utils::DateTime& value) { m_timeSeriesCreationDateHasBeenSet = true; m_timeSeriesCreationDate = value; }

    /**
     * <p>The date that the time series was created, in Unix epoch time.</p>
     */
    inline void SetTimeSeriesCreationDate(Aws::Utils::DateTime&& value) { m_timeSeriesCreationDateHasBeenSet = true; m_timeSeriesCreationDate = std::move(value); }

    /**
     * <p>The date that the time series was created, in Unix epoch time.</p>
     */
    inline TimeSeriesSummary& WithTimeSeriesCreationDate(const Aws::Utils::DateTime& value) { SetTimeSeriesCreationDate(value); return *this;}

    /**
     * <p>The date that the time series was created, in Unix epoch time.</p>
     */
    inline TimeSeriesSummary& WithTimeSeriesCreationDate(Aws::Utils::DateTime&& value) { SetTimeSeriesCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date that the time series was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeSeriesLastUpdateDate() const{ return m_timeSeriesLastUpdateDate; }

    /**
     * <p>The date that the time series was last updated, in Unix epoch time.</p>
     */
    inline bool TimeSeriesLastUpdateDateHasBeenSet() const { return m_timeSeriesLastUpdateDateHasBeenSet; }

    /**
     * <p>The date that the time series was last updated, in Unix epoch time.</p>
     */
    inline void SetTimeSeriesLastUpdateDate(const Aws::Utils::DateTime& value) { m_timeSeriesLastUpdateDateHasBeenSet = true; m_timeSeriesLastUpdateDate = value; }

    /**
     * <p>The date that the time series was last updated, in Unix epoch time.</p>
     */
    inline void SetTimeSeriesLastUpdateDate(Aws::Utils::DateTime&& value) { m_timeSeriesLastUpdateDateHasBeenSet = true; m_timeSeriesLastUpdateDate = std::move(value); }

    /**
     * <p>The date that the time series was last updated, in Unix epoch time.</p>
     */
    inline TimeSeriesSummary& WithTimeSeriesLastUpdateDate(const Aws::Utils::DateTime& value) { SetTimeSeriesLastUpdateDate(value); return *this;}

    /**
     * <p>The date that the time series was last updated, in Unix epoch time.</p>
     */
    inline TimeSeriesSummary& WithTimeSeriesLastUpdateDate(Aws::Utils::DateTime&& value) { SetTimeSeriesLastUpdateDate(std::move(value)); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_timeSeriesId;
    bool m_timeSeriesIdHasBeenSet = false;

    PropertyDataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_dataTypeSpec;
    bool m_dataTypeSpecHasBeenSet = false;

    Aws::Utils::DateTime m_timeSeriesCreationDate;
    bool m_timeSeriesCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_timeSeriesLastUpdateDate;
    bool m_timeSeriesLastUpdateDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
