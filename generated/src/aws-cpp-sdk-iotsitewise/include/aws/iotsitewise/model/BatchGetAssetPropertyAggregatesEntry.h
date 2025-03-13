/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/TimeOrdering.h>
#include <aws/iotsitewise/model/AggregateType.h>
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
   * <p>Contains information for an asset property aggregate entry that is associated
   * with the <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_BatchGetAssetPropertyAggregates.html">BatchGetAssetPropertyAggregates</a>
   * API.</p> <p>To identify an asset property, you must specify one of the
   * following:</p> <ul> <li> <p>The <code>assetId</code> and <code>propertyId</code>
   * of an asset property.</p> </li> <li> <p>A <code>propertyAlias</code>, which is a
   * data stream alias (for example,
   * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset
   * property's alias, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyAggregatesEntry">AWS
   * API Reference</a></p>
   */
  class BatchGetAssetPropertyAggregatesEntry
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesEntry() = default;
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the entry.</p>
     */
    inline const Aws::String& GetEntryId() const { return m_entryId; }
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }
    template<typename EntryIdT = Aws::String>
    void SetEntryId(EntryIdT&& value) { m_entryIdHasBeenSet = true; m_entryId = std::forward<EntryIdT>(value); }
    template<typename EntryIdT = Aws::String>
    BatchGetAssetPropertyAggregatesEntry& WithEntryId(EntryIdT&& value) { SetEntryId(std::forward<EntryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    BatchGetAssetPropertyAggregatesEntry& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
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
    BatchGetAssetPropertyAggregatesEntry& WithPropertyId(PropertyIdT&& value) { SetPropertyId(std::forward<PropertyIdT>(value)); return *this;}
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
    BatchGetAssetPropertyAggregatesEntry& WithPropertyAlias(PropertyAliasT&& value) { SetPropertyAlias(std::forward<PropertyAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data aggregating function.</p>
     */
    inline const Aws::Vector<AggregateType>& GetAggregateTypes() const { return m_aggregateTypes; }
    inline bool AggregateTypesHasBeenSet() const { return m_aggregateTypesHasBeenSet; }
    template<typename AggregateTypesT = Aws::Vector<AggregateType>>
    void SetAggregateTypes(AggregateTypesT&& value) { m_aggregateTypesHasBeenSet = true; m_aggregateTypes = std::forward<AggregateTypesT>(value); }
    template<typename AggregateTypesT = Aws::Vector<AggregateType>>
    BatchGetAssetPropertyAggregatesEntry& WithAggregateTypes(AggregateTypesT&& value) { SetAggregateTypes(std::forward<AggregateTypesT>(value)); return *this;}
    inline BatchGetAssetPropertyAggregatesEntry& AddAggregateTypes(AggregateType value) { m_aggregateTypesHasBeenSet = true; m_aggregateTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time interval over which to aggregate data.</p>
     */
    inline const Aws::String& GetResolution() const { return m_resolution; }
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
    template<typename ResolutionT = Aws::String>
    void SetResolution(ResolutionT&& value) { m_resolutionHasBeenSet = true; m_resolution = std::forward<ResolutionT>(value); }
    template<typename ResolutionT = Aws::String>
    BatchGetAssetPropertyAggregatesEntry& WithResolution(ResolutionT&& value) { SetResolution(std::forward<ResolutionT>(value)); return *this;}
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
    BatchGetAssetPropertyAggregatesEntry& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
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
    BatchGetAssetPropertyAggregatesEntry& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
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
    BatchGetAssetPropertyAggregatesEntry& WithQualities(QualitiesT&& value) { SetQualities(std::forward<QualitiesT>(value)); return *this;}
    inline BatchGetAssetPropertyAggregatesEntry& AddQualities(Quality value) { m_qualitiesHasBeenSet = true; m_qualities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The chronological sorting order of the requested information.</p> <p>Default:
     * <code>ASCENDING</code> </p>
     */
    inline TimeOrdering GetTimeOrdering() const { return m_timeOrdering; }
    inline bool TimeOrderingHasBeenSet() const { return m_timeOrderingHasBeenSet; }
    inline void SetTimeOrdering(TimeOrdering value) { m_timeOrderingHasBeenSet = true; m_timeOrdering = value; }
    inline BatchGetAssetPropertyAggregatesEntry& WithTimeOrdering(TimeOrdering value) { SetTimeOrdering(value); return *this;}
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

    Aws::Vector<AggregateType> m_aggregateTypes;
    bool m_aggregateTypesHasBeenSet = false;

    Aws::String m_resolution;
    bool m_resolutionHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    Aws::Vector<Quality> m_qualities;
    bool m_qualitiesHasBeenSet = false;

    TimeOrdering m_timeOrdering{TimeOrdering::NOT_SET};
    bool m_timeOrderingHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
