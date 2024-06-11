/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/TimeOrdering.h>
#include <aws/iotsitewise/model/Quality.h>
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
   * <p>Contains information for an asset property historical value entry that is
   * associated with the <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_BatchGetAssetPropertyValue.html">BatchGetAssetPropertyValueHistory</a>
   * API.</p> <p>To identify an asset property, you must specify one of the
   * following:</p> <ul> <li> <p>The <code>assetId</code> and <code>propertyId</code>
   * of an asset property.</p> </li> <li> <p>A <code>propertyAlias</code>, which is a
   * data stream alias (for example,
   * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset
   * property's alias, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyValueHistoryEntry">AWS
   * API Reference</a></p>
   */
  class BatchGetAssetPropertyValueHistoryEntry
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryEntry();
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the entry.</p>
     */
    inline const Aws::String& GetEntryId() const{ return m_entryId; }
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }
    inline void SetEntryId(const Aws::String& value) { m_entryIdHasBeenSet = true; m_entryId = value; }
    inline void SetEntryId(Aws::String&& value) { m_entryIdHasBeenSet = true; m_entryId = std::move(value); }
    inline void SetEntryId(const char* value) { m_entryIdHasBeenSet = true; m_entryId.assign(value); }
    inline BatchGetAssetPropertyValueHistoryEntry& WithEntryId(const Aws::String& value) { SetEntryId(value); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& WithEntryId(Aws::String&& value) { SetEntryId(std::move(value)); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& WithEntryId(const char* value) { SetEntryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline BatchGetAssetPropertyValueHistoryEntry& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset property, in UUID format.</p>
     */
    inline const Aws::String& GetPropertyId() const{ return m_propertyId; }
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }
    inline void SetPropertyId(const Aws::String& value) { m_propertyIdHasBeenSet = true; m_propertyId = value; }
    inline void SetPropertyId(Aws::String&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::move(value); }
    inline void SetPropertyId(const char* value) { m_propertyIdHasBeenSet = true; m_propertyId.assign(value); }
    inline BatchGetAssetPropertyValueHistoryEntry& WithPropertyId(const Aws::String& value) { SetPropertyId(value); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& WithPropertyId(Aws::String&& value) { SetPropertyId(std::move(value)); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& WithPropertyId(const char* value) { SetPropertyId(value); return *this;}
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
    inline const Aws::String& GetPropertyAlias() const{ return m_propertyAlias; }
    inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }
    inline void SetPropertyAlias(const Aws::String& value) { m_propertyAliasHasBeenSet = true; m_propertyAlias = value; }
    inline void SetPropertyAlias(Aws::String&& value) { m_propertyAliasHasBeenSet = true; m_propertyAlias = std::move(value); }
    inline void SetPropertyAlias(const char* value) { m_propertyAliasHasBeenSet = true; m_propertyAlias.assign(value); }
    inline BatchGetAssetPropertyValueHistoryEntry& WithPropertyAlias(const Aws::String& value) { SetPropertyAlias(value); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& WithPropertyAlias(Aws::String&& value) { SetPropertyAlias(std::move(value)); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& WithPropertyAlias(const char* value) { SetPropertyAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusive start of the range from which to query historical data,
     * expressed in seconds in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline BatchGetAssetPropertyValueHistoryEntry& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive end of the range from which to query historical data, expressed
     * in seconds in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }
    inline BatchGetAssetPropertyValueHistoryEntry& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quality by which to filter asset data.</p>
     */
    inline const Aws::Vector<Quality>& GetQualities() const{ return m_qualities; }
    inline bool QualitiesHasBeenSet() const { return m_qualitiesHasBeenSet; }
    inline void SetQualities(const Aws::Vector<Quality>& value) { m_qualitiesHasBeenSet = true; m_qualities = value; }
    inline void SetQualities(Aws::Vector<Quality>&& value) { m_qualitiesHasBeenSet = true; m_qualities = std::move(value); }
    inline BatchGetAssetPropertyValueHistoryEntry& WithQualities(const Aws::Vector<Quality>& value) { SetQualities(value); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& WithQualities(Aws::Vector<Quality>&& value) { SetQualities(std::move(value)); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& AddQualities(const Quality& value) { m_qualitiesHasBeenSet = true; m_qualities.push_back(value); return *this; }
    inline BatchGetAssetPropertyValueHistoryEntry& AddQualities(Quality&& value) { m_qualitiesHasBeenSet = true; m_qualities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The chronological sorting order of the requested information.</p> <p>Default:
     * <code>ASCENDING</code> </p>
     */
    inline const TimeOrdering& GetTimeOrdering() const{ return m_timeOrdering; }
    inline bool TimeOrderingHasBeenSet() const { return m_timeOrderingHasBeenSet; }
    inline void SetTimeOrdering(const TimeOrdering& value) { m_timeOrderingHasBeenSet = true; m_timeOrdering = value; }
    inline void SetTimeOrdering(TimeOrdering&& value) { m_timeOrderingHasBeenSet = true; m_timeOrdering = std::move(value); }
    inline BatchGetAssetPropertyValueHistoryEntry& WithTimeOrdering(const TimeOrdering& value) { SetTimeOrdering(value); return *this;}
    inline BatchGetAssetPropertyValueHistoryEntry& WithTimeOrdering(TimeOrdering&& value) { SetTimeOrdering(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;

    Aws::String m_propertyAlias;
    bool m_propertyAliasHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    Aws::Vector<Quality> m_qualities;
    bool m_qualitiesHasBeenSet = false;

    TimeOrdering m_timeOrdering;
    bool m_timeOrderingHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
