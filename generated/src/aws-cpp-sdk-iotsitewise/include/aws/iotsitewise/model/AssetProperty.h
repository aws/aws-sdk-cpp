﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PropertyNotification.h>
#include <aws/iotsitewise/model/PropertyDataType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetPropertyPathSegment.h>
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


    ///@{
    /**
     * <p>The ID of the asset property.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssetProperty& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssetProperty& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssetProperty& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the property.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssetProperty& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssetProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssetProperty& WithName(const char* value) { SetName(value); return *this;}
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
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }
    inline AssetProperty& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline AssetProperty& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline AssetProperty& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset property's notification topic and state. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
     */
    inline const PropertyNotification& GetNotification() const{ return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    inline void SetNotification(const PropertyNotification& value) { m_notificationHasBeenSet = true; m_notification = value; }
    inline void SetNotification(PropertyNotification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }
    inline AssetProperty& WithNotification(const PropertyNotification& value) { SetNotification(value); return *this;}
    inline AssetProperty& WithNotification(PropertyNotification&& value) { SetNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the asset property.</p>
     */
    inline const PropertyDataType& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const PropertyDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(PropertyDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline AssetProperty& WithDataType(const PropertyDataType& value) { SetDataType(value); return *this;}
    inline AssetProperty& WithDataType(PropertyDataType&& value) { SetDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline const Aws::String& GetDataTypeSpec() const{ return m_dataTypeSpec; }
    inline bool DataTypeSpecHasBeenSet() const { return m_dataTypeSpecHasBeenSet; }
    inline void SetDataTypeSpec(const Aws::String& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = value; }
    inline void SetDataTypeSpec(Aws::String&& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = std::move(value); }
    inline void SetDataTypeSpec(const char* value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec.assign(value); }
    inline AssetProperty& WithDataTypeSpec(const Aws::String& value) { SetDataTypeSpec(value); return *this;}
    inline AssetProperty& WithDataTypeSpec(Aws::String&& value) { SetDataTypeSpec(std::move(value)); return *this;}
    inline AssetProperty& WithDataTypeSpec(const char* value) { SetDataTypeSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the asset
     * property.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline AssetProperty& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline AssetProperty& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline AssetProperty& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structured path to the property from the root of the asset.</p>
     */
    inline const Aws::Vector<AssetPropertyPathSegment>& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::Vector<AssetPropertyPathSegment>& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::Vector<AssetPropertyPathSegment>&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline AssetProperty& WithPath(const Aws::Vector<AssetPropertyPathSegment>& value) { SetPath(value); return *this;}
    inline AssetProperty& WithPath(Aws::Vector<AssetPropertyPathSegment>&& value) { SetPath(std::move(value)); return *this;}
    inline AssetProperty& AddPath(const AssetPropertyPathSegment& value) { m_pathHasBeenSet = true; m_path.push_back(value); return *this; }
    inline AssetProperty& AddPath(AssetPropertyPathSegment&& value) { m_pathHasBeenSet = true; m_path.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The external ID of the asset property. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline AssetProperty& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline AssetProperty& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline AssetProperty& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}
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

    Aws::Vector<AssetPropertyPathSegment> m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
