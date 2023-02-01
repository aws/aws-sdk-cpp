/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PropertyNotification.h>
#include <aws/iotsitewise/model/PropertyDataType.h>
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
   * <p>Contains asset property information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetProperty">AWS
   * API Reference</a></p>
   */
  class AssetProperty
  {
  public:
    AWS_IOTSITEWISE_API AssetProperty();
    AWS_IOTSITEWISE_API AssetProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the asset property.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline AssetProperty& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the asset property.</p>
     */
    inline AssetProperty& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset property.</p>
     */
    inline AssetProperty& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the property.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the property.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the property.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the property.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the property.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the property.</p>
     */
    inline AssetProperty& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the property.</p>
     */
    inline AssetProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the property.</p>
     */
    inline AssetProperty& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline AssetProperty& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline AssetProperty& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline AssetProperty& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>The asset property's notification topic and state. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
     */
    inline const PropertyNotification& GetNotification() const{ return m_notification; }

    /**
     * <p>The asset property's notification topic and state. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
     */
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }

    /**
     * <p>The asset property's notification topic and state. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
     */
    inline void SetNotification(const PropertyNotification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>The asset property's notification topic and state. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
     */
    inline void SetNotification(PropertyNotification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }

    /**
     * <p>The asset property's notification topic and state. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
     */
    inline AssetProperty& WithNotification(const PropertyNotification& value) { SetNotification(value); return *this;}

    /**
     * <p>The asset property's notification topic and state. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
     */
    inline AssetProperty& WithNotification(PropertyNotification&& value) { SetNotification(std::move(value)); return *this;}


    /**
     * <p>The data type of the asset property.</p>
     */
    inline const PropertyDataType& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the asset property.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the asset property.</p>
     */
    inline void SetDataType(const PropertyDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the asset property.</p>
     */
    inline void SetDataType(PropertyDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the asset property.</p>
     */
    inline AssetProperty& WithDataType(const PropertyDataType& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the asset property.</p>
     */
    inline AssetProperty& WithDataType(PropertyDataType&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline const Aws::String& GetDataTypeSpec() const{ return m_dataTypeSpec; }

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline bool DataTypeSpecHasBeenSet() const { return m_dataTypeSpecHasBeenSet; }

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline void SetDataTypeSpec(const Aws::String& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = value; }

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline void SetDataTypeSpec(Aws::String&& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = std::move(value); }

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline void SetDataTypeSpec(const char* value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec.assign(value); }

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline AssetProperty& WithDataTypeSpec(const Aws::String& value) { SetDataTypeSpec(value); return *this;}

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline AssetProperty& WithDataTypeSpec(Aws::String&& value) { SetDataTypeSpec(std::move(value)); return *this;}

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline AssetProperty& WithDataTypeSpec(const char* value) { SetDataTypeSpec(value); return *this;}


    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the asset
     * property.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the asset
     * property.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the asset
     * property.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the asset
     * property.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the asset
     * property.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the asset
     * property.</p>
     */
    inline AssetProperty& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the asset
     * property.</p>
     */
    inline AssetProperty& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the asset
     * property.</p>
     */
    inline AssetProperty& WithUnit(const char* value) { SetUnit(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    PropertyNotification m_notification;
    bool m_notificationHasBeenSet = false;

    PropertyDataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_dataTypeSpec;
    bool m_dataTypeSpecHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
