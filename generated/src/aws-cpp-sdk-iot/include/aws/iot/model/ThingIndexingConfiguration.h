/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ThingIndexingMode.h>
#include <aws/iot/model/ThingConnectivityIndexingMode.h>
#include <aws/iot/model/DeviceDefenderIndexingMode.h>
#include <aws/iot/model/NamedShadowIndexingMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/IndexingFilter.h>
#include <aws/iot/model/Field.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The thing indexing configuration. For more information, see <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-index.html">Managing
   * Thing Indexing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingIndexingConfiguration">AWS
   * API Reference</a></p>
   */
  class ThingIndexingConfiguration
  {
  public:
    AWS_IOT_API ThingIndexingConfiguration() = default;
    AWS_IOT_API ThingIndexingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingIndexingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingMode GetThingIndexingMode() const { return m_thingIndexingMode; }
    inline bool ThingIndexingModeHasBeenSet() const { return m_thingIndexingModeHasBeenSet; }
    inline void SetThingIndexingMode(ThingIndexingMode value) { m_thingIndexingModeHasBeenSet = true; m_thingIndexingMode = value; }
    inline ThingIndexingConfiguration& WithThingIndexingMode(ThingIndexingMode value) { SetThingIndexingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, <i>thingIndexMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Thing connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline ThingConnectivityIndexingMode GetThingConnectivityIndexingMode() const { return m_thingConnectivityIndexingMode; }
    inline bool ThingConnectivityIndexingModeHasBeenSet() const { return m_thingConnectivityIndexingModeHasBeenSet; }
    inline void SetThingConnectivityIndexingMode(ThingConnectivityIndexingMode value) { m_thingConnectivityIndexingModeHasBeenSet = true; m_thingConnectivityIndexingMode = value; }
    inline ThingIndexingConfiguration& WithThingConnectivityIndexingMode(ThingConnectivityIndexingMode value) { SetThingConnectivityIndexingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device Defender indexing mode. Valid values are:</p> <ul> <li> <p>VIOLATIONS
     * – Your thing index contains Device Defender violations. To enable Device
     * Defender indexing, <i>deviceDefenderIndexingMode</i> must not be set to OFF.</p>
     * </li> <li> <p>OFF - Device Defender indexing is disabled.</p> </li> </ul> <p>For
     * more information about Device Defender violations, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender-detect.html">Device
     * Defender Detect.</a> </p>
     */
    inline DeviceDefenderIndexingMode GetDeviceDefenderIndexingMode() const { return m_deviceDefenderIndexingMode; }
    inline bool DeviceDefenderIndexingModeHasBeenSet() const { return m_deviceDefenderIndexingModeHasBeenSet; }
    inline void SetDeviceDefenderIndexingMode(DeviceDefenderIndexingMode value) { m_deviceDefenderIndexingModeHasBeenSet = true; m_deviceDefenderIndexingMode = value; }
    inline ThingIndexingConfiguration& WithDeviceDefenderIndexingMode(DeviceDefenderIndexingMode value) { SetDeviceDefenderIndexingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Named shadow indexing mode. Valid values are:</p> <ul> <li> <p>ON – Your
     * thing index contains named shadow. To enable thing named shadow indexing,
     * <i>namedShadowIndexingMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Named shadow indexing is disabled.</p> </li> </ul> <p>For more information about
     * Shadows, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-device-shadows.html">IoT
     * Device Shadow service.</a> </p>
     */
    inline NamedShadowIndexingMode GetNamedShadowIndexingMode() const { return m_namedShadowIndexingMode; }
    inline bool NamedShadowIndexingModeHasBeenSet() const { return m_namedShadowIndexingModeHasBeenSet; }
    inline void SetNamedShadowIndexingMode(NamedShadowIndexingMode value) { m_namedShadowIndexingModeHasBeenSet = true; m_namedShadowIndexingMode = value; }
    inline ThingIndexingConfiguration& WithNamedShadowIndexingMode(NamedShadowIndexingMode value) { SetNamedShadowIndexingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service. This is an optional field. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-fleet-index.html#managed-field">Managed
     * fields</a> in the <i>Amazon Web Services IoT Core Developer Guide</i>.</p>
     *  <p>You can't modify managed fields by updating fleet indexing
     * configuration.</p> 
     */
    inline const Aws::Vector<Field>& GetManagedFields() const { return m_managedFields; }
    inline bool ManagedFieldsHasBeenSet() const { return m_managedFieldsHasBeenSet; }
    template<typename ManagedFieldsT = Aws::Vector<Field>>
    void SetManagedFields(ManagedFieldsT&& value) { m_managedFieldsHasBeenSet = true; m_managedFields = std::forward<ManagedFieldsT>(value); }
    template<typename ManagedFieldsT = Aws::Vector<Field>>
    ThingIndexingConfiguration& WithManagedFields(ManagedFieldsT&& value) { SetManagedFields(std::forward<ManagedFieldsT>(value)); return *this;}
    template<typename ManagedFieldsT = Field>
    ThingIndexingConfiguration& AddManagedFields(ManagedFieldsT&& value) { m_managedFieldsHasBeenSet = true; m_managedFields.emplace_back(std::forward<ManagedFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline const Aws::Vector<Field>& GetCustomFields() const { return m_customFields; }
    inline bool CustomFieldsHasBeenSet() const { return m_customFieldsHasBeenSet; }
    template<typename CustomFieldsT = Aws::Vector<Field>>
    void SetCustomFields(CustomFieldsT&& value) { m_customFieldsHasBeenSet = true; m_customFields = std::forward<CustomFieldsT>(value); }
    template<typename CustomFieldsT = Aws::Vector<Field>>
    ThingIndexingConfiguration& WithCustomFields(CustomFieldsT&& value) { SetCustomFields(std::forward<CustomFieldsT>(value)); return *this;}
    template<typename CustomFieldsT = Field>
    ThingIndexingConfiguration& AddCustomFields(CustomFieldsT&& value) { m_customFieldsHasBeenSet = true; m_customFields.emplace_back(std::forward<CustomFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides additional selections for named shadows and geolocation data. </p>
     * <p>To add named shadows to your fleet indexing configuration, set
     * <code>namedShadowIndexingMode</code> to be ON and specify your shadow names in
     * <code>namedShadowNames</code> filter.</p> <p>To add geolocation data to your
     * fleet indexing configuration: </p> <ul> <li> <p>If you store geolocation data in
     * a class/unnamed shadow, set <code>thingIndexingMode</code> to be
     * <code>REGISTRY_AND_SHADOW</code> and specify your geolocation data in
     * <code>geoLocations</code> filter. </p> </li> <li> <p>If you store geolocation
     * data in a named shadow, set <code>namedShadowIndexingMode</code> to be
     * <code>ON</code>, add the shadow name in <code>namedShadowNames</code> filter,
     * and specify your geolocation data in <code>geoLocations</code> filter. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-fleet-index.html">Managing
     * fleet indexing</a>.</p> </li> </ul>
     */
    inline const IndexingFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = IndexingFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = IndexingFilter>
    ThingIndexingConfiguration& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    ThingIndexingMode m_thingIndexingMode{ThingIndexingMode::NOT_SET};
    bool m_thingIndexingModeHasBeenSet = false;

    ThingConnectivityIndexingMode m_thingConnectivityIndexingMode{ThingConnectivityIndexingMode::NOT_SET};
    bool m_thingConnectivityIndexingModeHasBeenSet = false;

    DeviceDefenderIndexingMode m_deviceDefenderIndexingMode{DeviceDefenderIndexingMode::NOT_SET};
    bool m_deviceDefenderIndexingModeHasBeenSet = false;

    NamedShadowIndexingMode m_namedShadowIndexingMode{NamedShadowIndexingMode::NOT_SET};
    bool m_namedShadowIndexingModeHasBeenSet = false;

    Aws::Vector<Field> m_managedFields;
    bool m_managedFieldsHasBeenSet = false;

    Aws::Vector<Field> m_customFields;
    bool m_customFieldsHasBeenSet = false;

    IndexingFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
