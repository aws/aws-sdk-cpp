/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PropertyNotification.h>
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
   * <p>Contains a summary of a property associated with an asset.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetPropertySummary">AWS
   * API Reference</a></p>
   */
  class AssetPropertySummary
  {
  public:
    AWS_IOTSITEWISE_API AssetPropertySummary();
    AWS_IOTSITEWISE_API AssetPropertySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetPropertySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the property.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the property.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the property.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the property.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the property.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the property.</p>
     */
    inline AssetPropertySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the property.</p>
     */
    inline AssetPropertySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the property.</p>
     */
    inline AssetPropertySummary& WithId(const char* value) { SetId(value); return *this;}


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
    inline AssetPropertySummary& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline AssetPropertySummary& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline AssetPropertySummary& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p> The unit of measure (such as Newtons or RPM) of the asset property. </p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p> The unit of measure (such as Newtons or RPM) of the asset property. </p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p> The unit of measure (such as Newtons or RPM) of the asset property. </p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p> The unit of measure (such as Newtons or RPM) of the asset property. </p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p> The unit of measure (such as Newtons or RPM) of the asset property. </p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p> The unit of measure (such as Newtons or RPM) of the asset property. </p>
     */
    inline AssetPropertySummary& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p> The unit of measure (such as Newtons or RPM) of the asset property. </p>
     */
    inline AssetPropertySummary& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p> The unit of measure (such as Newtons or RPM) of the asset property. </p>
     */
    inline AssetPropertySummary& WithUnit(const char* value) { SetUnit(value); return *this;}


    
    inline const PropertyNotification& GetNotification() const{ return m_notification; }

    
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }

    
    inline void SetNotification(const PropertyNotification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    
    inline void SetNotification(PropertyNotification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }

    
    inline AssetPropertySummary& WithNotification(const PropertyNotification& value) { SetNotification(value); return *this;}

    
    inline AssetPropertySummary& WithNotification(PropertyNotification&& value) { SetNotification(std::move(value)); return *this;}


    /**
     * <p> The ID of the composite model that contains the asset property. </p>
     */
    inline const Aws::String& GetAssetCompositeModelId() const{ return m_assetCompositeModelId; }

    /**
     * <p> The ID of the composite model that contains the asset property. </p>
     */
    inline bool AssetCompositeModelIdHasBeenSet() const { return m_assetCompositeModelIdHasBeenSet; }

    /**
     * <p> The ID of the composite model that contains the asset property. </p>
     */
    inline void SetAssetCompositeModelId(const Aws::String& value) { m_assetCompositeModelIdHasBeenSet = true; m_assetCompositeModelId = value; }

    /**
     * <p> The ID of the composite model that contains the asset property. </p>
     */
    inline void SetAssetCompositeModelId(Aws::String&& value) { m_assetCompositeModelIdHasBeenSet = true; m_assetCompositeModelId = std::move(value); }

    /**
     * <p> The ID of the composite model that contains the asset property. </p>
     */
    inline void SetAssetCompositeModelId(const char* value) { m_assetCompositeModelIdHasBeenSet = true; m_assetCompositeModelId.assign(value); }

    /**
     * <p> The ID of the composite model that contains the asset property. </p>
     */
    inline AssetPropertySummary& WithAssetCompositeModelId(const Aws::String& value) { SetAssetCompositeModelId(value); return *this;}

    /**
     * <p> The ID of the composite model that contains the asset property. </p>
     */
    inline AssetPropertySummary& WithAssetCompositeModelId(Aws::String&& value) { SetAssetCompositeModelId(std::move(value)); return *this;}

    /**
     * <p> The ID of the composite model that contains the asset property. </p>
     */
    inline AssetPropertySummary& WithAssetCompositeModelId(const char* value) { SetAssetCompositeModelId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    PropertyNotification m_notification;
    bool m_notificationHasBeenSet = false;

    Aws::String m_assetCompositeModelId;
    bool m_assetCompositeModelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
