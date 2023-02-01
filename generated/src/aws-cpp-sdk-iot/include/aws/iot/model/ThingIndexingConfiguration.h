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
    AWS_IOT_API ThingIndexingConfiguration();
    AWS_IOT_API ThingIndexingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingIndexingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline const ThingIndexingMode& GetThingIndexingMode() const{ return m_thingIndexingMode; }

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline bool ThingIndexingModeHasBeenSet() const { return m_thingIndexingModeHasBeenSet; }

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline void SetThingIndexingMode(const ThingIndexingMode& value) { m_thingIndexingModeHasBeenSet = true; m_thingIndexingMode = value; }

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline void SetThingIndexingMode(ThingIndexingMode&& value) { m_thingIndexingModeHasBeenSet = true; m_thingIndexingMode = std::move(value); }

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingConfiguration& WithThingIndexingMode(const ThingIndexingMode& value) { SetThingIndexingMode(value); return *this;}

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingConfiguration& WithThingIndexingMode(ThingIndexingMode&& value) { SetThingIndexingMode(std::move(value)); return *this;}


    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, <i>thingIndexMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Thing connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline const ThingConnectivityIndexingMode& GetThingConnectivityIndexingMode() const{ return m_thingConnectivityIndexingMode; }

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, <i>thingIndexMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Thing connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline bool ThingConnectivityIndexingModeHasBeenSet() const { return m_thingConnectivityIndexingModeHasBeenSet; }

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, <i>thingIndexMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Thing connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline void SetThingConnectivityIndexingMode(const ThingConnectivityIndexingMode& value) { m_thingConnectivityIndexingModeHasBeenSet = true; m_thingConnectivityIndexingMode = value; }

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, <i>thingIndexMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Thing connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline void SetThingConnectivityIndexingMode(ThingConnectivityIndexingMode&& value) { m_thingConnectivityIndexingModeHasBeenSet = true; m_thingConnectivityIndexingMode = std::move(value); }

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, <i>thingIndexMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Thing connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingConfiguration& WithThingConnectivityIndexingMode(const ThingConnectivityIndexingMode& value) { SetThingConnectivityIndexingMode(value); return *this;}

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, <i>thingIndexMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Thing connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingConfiguration& WithThingConnectivityIndexingMode(ThingConnectivityIndexingMode&& value) { SetThingConnectivityIndexingMode(std::move(value)); return *this;}


    /**
     * <p>Device Defender indexing mode. Valid values are:</p> <ul> <li> <p>VIOLATIONS
     * – Your thing index contains Device Defender violations. To enable Device
     * Defender indexing, <i>deviceDefenderIndexingMode</i> must not be set to OFF.</p>
     * </li> <li> <p>OFF - Device Defender indexing is disabled.</p> </li> </ul> <p>For
     * more information about Device Defender violations, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender-detect.html">Device
     * Defender Detect.</a> </p>
     */
    inline const DeviceDefenderIndexingMode& GetDeviceDefenderIndexingMode() const{ return m_deviceDefenderIndexingMode; }

    /**
     * <p>Device Defender indexing mode. Valid values are:</p> <ul> <li> <p>VIOLATIONS
     * – Your thing index contains Device Defender violations. To enable Device
     * Defender indexing, <i>deviceDefenderIndexingMode</i> must not be set to OFF.</p>
     * </li> <li> <p>OFF - Device Defender indexing is disabled.</p> </li> </ul> <p>For
     * more information about Device Defender violations, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender-detect.html">Device
     * Defender Detect.</a> </p>
     */
    inline bool DeviceDefenderIndexingModeHasBeenSet() const { return m_deviceDefenderIndexingModeHasBeenSet; }

    /**
     * <p>Device Defender indexing mode. Valid values are:</p> <ul> <li> <p>VIOLATIONS
     * – Your thing index contains Device Defender violations. To enable Device
     * Defender indexing, <i>deviceDefenderIndexingMode</i> must not be set to OFF.</p>
     * </li> <li> <p>OFF - Device Defender indexing is disabled.</p> </li> </ul> <p>For
     * more information about Device Defender violations, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender-detect.html">Device
     * Defender Detect.</a> </p>
     */
    inline void SetDeviceDefenderIndexingMode(const DeviceDefenderIndexingMode& value) { m_deviceDefenderIndexingModeHasBeenSet = true; m_deviceDefenderIndexingMode = value; }

    /**
     * <p>Device Defender indexing mode. Valid values are:</p> <ul> <li> <p>VIOLATIONS
     * – Your thing index contains Device Defender violations. To enable Device
     * Defender indexing, <i>deviceDefenderIndexingMode</i> must not be set to OFF.</p>
     * </li> <li> <p>OFF - Device Defender indexing is disabled.</p> </li> </ul> <p>For
     * more information about Device Defender violations, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender-detect.html">Device
     * Defender Detect.</a> </p>
     */
    inline void SetDeviceDefenderIndexingMode(DeviceDefenderIndexingMode&& value) { m_deviceDefenderIndexingModeHasBeenSet = true; m_deviceDefenderIndexingMode = std::move(value); }

    /**
     * <p>Device Defender indexing mode. Valid values are:</p> <ul> <li> <p>VIOLATIONS
     * – Your thing index contains Device Defender violations. To enable Device
     * Defender indexing, <i>deviceDefenderIndexingMode</i> must not be set to OFF.</p>
     * </li> <li> <p>OFF - Device Defender indexing is disabled.</p> </li> </ul> <p>For
     * more information about Device Defender violations, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender-detect.html">Device
     * Defender Detect.</a> </p>
     */
    inline ThingIndexingConfiguration& WithDeviceDefenderIndexingMode(const DeviceDefenderIndexingMode& value) { SetDeviceDefenderIndexingMode(value); return *this;}

    /**
     * <p>Device Defender indexing mode. Valid values are:</p> <ul> <li> <p>VIOLATIONS
     * – Your thing index contains Device Defender violations. To enable Device
     * Defender indexing, <i>deviceDefenderIndexingMode</i> must not be set to OFF.</p>
     * </li> <li> <p>OFF - Device Defender indexing is disabled.</p> </li> </ul> <p>For
     * more information about Device Defender violations, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender-detect.html">Device
     * Defender Detect.</a> </p>
     */
    inline ThingIndexingConfiguration& WithDeviceDefenderIndexingMode(DeviceDefenderIndexingMode&& value) { SetDeviceDefenderIndexingMode(std::move(value)); return *this;}


    /**
     * <p>Named shadow indexing mode. Valid values are:</p> <ul> <li> <p>ON – Your
     * thing index contains named shadow. To enable thing named shadow indexing,
     * <i>namedShadowIndexingMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Named shadow indexing is disabled.</p> </li> </ul> <p>For more information about
     * Shadows, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-device-shadows.html">IoT
     * Device Shadow service.</a> </p>
     */
    inline const NamedShadowIndexingMode& GetNamedShadowIndexingMode() const{ return m_namedShadowIndexingMode; }

    /**
     * <p>Named shadow indexing mode. Valid values are:</p> <ul> <li> <p>ON – Your
     * thing index contains named shadow. To enable thing named shadow indexing,
     * <i>namedShadowIndexingMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Named shadow indexing is disabled.</p> </li> </ul> <p>For more information about
     * Shadows, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-device-shadows.html">IoT
     * Device Shadow service.</a> </p>
     */
    inline bool NamedShadowIndexingModeHasBeenSet() const { return m_namedShadowIndexingModeHasBeenSet; }

    /**
     * <p>Named shadow indexing mode. Valid values are:</p> <ul> <li> <p>ON – Your
     * thing index contains named shadow. To enable thing named shadow indexing,
     * <i>namedShadowIndexingMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Named shadow indexing is disabled.</p> </li> </ul> <p>For more information about
     * Shadows, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-device-shadows.html">IoT
     * Device Shadow service.</a> </p>
     */
    inline void SetNamedShadowIndexingMode(const NamedShadowIndexingMode& value) { m_namedShadowIndexingModeHasBeenSet = true; m_namedShadowIndexingMode = value; }

    /**
     * <p>Named shadow indexing mode. Valid values are:</p> <ul> <li> <p>ON – Your
     * thing index contains named shadow. To enable thing named shadow indexing,
     * <i>namedShadowIndexingMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Named shadow indexing is disabled.</p> </li> </ul> <p>For more information about
     * Shadows, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-device-shadows.html">IoT
     * Device Shadow service.</a> </p>
     */
    inline void SetNamedShadowIndexingMode(NamedShadowIndexingMode&& value) { m_namedShadowIndexingModeHasBeenSet = true; m_namedShadowIndexingMode = std::move(value); }

    /**
     * <p>Named shadow indexing mode. Valid values are:</p> <ul> <li> <p>ON – Your
     * thing index contains named shadow. To enable thing named shadow indexing,
     * <i>namedShadowIndexingMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Named shadow indexing is disabled.</p> </li> </ul> <p>For more information about
     * Shadows, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-device-shadows.html">IoT
     * Device Shadow service.</a> </p>
     */
    inline ThingIndexingConfiguration& WithNamedShadowIndexingMode(const NamedShadowIndexingMode& value) { SetNamedShadowIndexingMode(value); return *this;}

    /**
     * <p>Named shadow indexing mode. Valid values are:</p> <ul> <li> <p>ON – Your
     * thing index contains named shadow. To enable thing named shadow indexing,
     * <i>namedShadowIndexingMode</i> must not be set to OFF.</p> </li> <li> <p>OFF -
     * Named shadow indexing is disabled.</p> </li> </ul> <p>For more information about
     * Shadows, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-device-shadows.html">IoT
     * Device Shadow service.</a> </p>
     */
    inline ThingIndexingConfiguration& WithNamedShadowIndexingMode(NamedShadowIndexingMode&& value) { SetNamedShadowIndexingMode(std::move(value)); return *this;}


    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline const Aws::Vector<Field>& GetManagedFields() const{ return m_managedFields; }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline bool ManagedFieldsHasBeenSet() const { return m_managedFieldsHasBeenSet; }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline void SetManagedFields(const Aws::Vector<Field>& value) { m_managedFieldsHasBeenSet = true; m_managedFields = value; }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline void SetManagedFields(Aws::Vector<Field>&& value) { m_managedFieldsHasBeenSet = true; m_managedFields = std::move(value); }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline ThingIndexingConfiguration& WithManagedFields(const Aws::Vector<Field>& value) { SetManagedFields(value); return *this;}

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline ThingIndexingConfiguration& WithManagedFields(Aws::Vector<Field>&& value) { SetManagedFields(std::move(value)); return *this;}

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline ThingIndexingConfiguration& AddManagedFields(const Field& value) { m_managedFieldsHasBeenSet = true; m_managedFields.push_back(value); return *this; }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline ThingIndexingConfiguration& AddManagedFields(Field&& value) { m_managedFieldsHasBeenSet = true; m_managedFields.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline const Aws::Vector<Field>& GetCustomFields() const{ return m_customFields; }

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline bool CustomFieldsHasBeenSet() const { return m_customFieldsHasBeenSet; }

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline void SetCustomFields(const Aws::Vector<Field>& value) { m_customFieldsHasBeenSet = true; m_customFields = value; }

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline void SetCustomFields(Aws::Vector<Field>&& value) { m_customFieldsHasBeenSet = true; m_customFields = std::move(value); }

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline ThingIndexingConfiguration& WithCustomFields(const Aws::Vector<Field>& value) { SetCustomFields(value); return *this;}

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline ThingIndexingConfiguration& WithCustomFields(Aws::Vector<Field>&& value) { SetCustomFields(std::move(value)); return *this;}

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline ThingIndexingConfiguration& AddCustomFields(const Field& value) { m_customFieldsHasBeenSet = true; m_customFields.push_back(value); return *this; }

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline ThingIndexingConfiguration& AddCustomFields(Field&& value) { m_customFieldsHasBeenSet = true; m_customFields.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides additional filters for specific data sources. Named shadow is the
     * only data source that currently supports and requires a filter. To add named
     * shadows to your fleet indexing configuration, set
     * <code>namedShadowIndexingMode</code> to be <code>ON</code> and specify your
     * shadow names in <code>filter</code>.</p>
     */
    inline const IndexingFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>Provides additional filters for specific data sources. Named shadow is the
     * only data source that currently supports and requires a filter. To add named
     * shadows to your fleet indexing configuration, set
     * <code>namedShadowIndexingMode</code> to be <code>ON</code> and specify your
     * shadow names in <code>filter</code>.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Provides additional filters for specific data sources. Named shadow is the
     * only data source that currently supports and requires a filter. To add named
     * shadows to your fleet indexing configuration, set
     * <code>namedShadowIndexingMode</code> to be <code>ON</code> and specify your
     * shadow names in <code>filter</code>.</p>
     */
    inline void SetFilter(const IndexingFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Provides additional filters for specific data sources. Named shadow is the
     * only data source that currently supports and requires a filter. To add named
     * shadows to your fleet indexing configuration, set
     * <code>namedShadowIndexingMode</code> to be <code>ON</code> and specify your
     * shadow names in <code>filter</code>.</p>
     */
    inline void SetFilter(IndexingFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Provides additional filters for specific data sources. Named shadow is the
     * only data source that currently supports and requires a filter. To add named
     * shadows to your fleet indexing configuration, set
     * <code>namedShadowIndexingMode</code> to be <code>ON</code> and specify your
     * shadow names in <code>filter</code>.</p>
     */
    inline ThingIndexingConfiguration& WithFilter(const IndexingFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>Provides additional filters for specific data sources. Named shadow is the
     * only data source that currently supports and requires a filter. To add named
     * shadows to your fleet indexing configuration, set
     * <code>namedShadowIndexingMode</code> to be <code>ON</code> and specify your
     * shadow names in <code>filter</code>.</p>
     */
    inline ThingIndexingConfiguration& WithFilter(IndexingFilter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    ThingIndexingMode m_thingIndexingMode;
    bool m_thingIndexingModeHasBeenSet = false;

    ThingConnectivityIndexingMode m_thingConnectivityIndexingMode;
    bool m_thingConnectivityIndexingModeHasBeenSet = false;

    DeviceDefenderIndexingMode m_deviceDefenderIndexingMode;
    bool m_deviceDefenderIndexingModeHasBeenSet = false;

    NamedShadowIndexingMode m_namedShadowIndexingMode;
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
