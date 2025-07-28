/**
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
    AWS_IOTSITEWISE_API AssetProperty() = default;
    AWS_IOTSITEWISE_API AssetProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the asset property.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AssetProperty& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the asset property. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    AssetProperty& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the property.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssetProperty& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    AssetProperty& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset property's notification topic and state. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>.</p>
     */
    inline const PropertyNotification& GetNotification() const { return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    template<typename NotificationT = PropertyNotification>
    void SetNotification(NotificationT&& value) { m_notificationHasBeenSet = true; m_notification = std::forward<NotificationT>(value); }
    template<typename NotificationT = PropertyNotification>
    AssetProperty& WithNotification(NotificationT&& value) { SetNotification(std::forward<NotificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the asset property.</p>
     */
    inline PropertyDataType GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(PropertyDataType value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline AssetProperty& WithDataType(PropertyDataType value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline const Aws::String& GetDataTypeSpec() const { return m_dataTypeSpec; }
    inline bool DataTypeSpecHasBeenSet() const { return m_dataTypeSpecHasBeenSet; }
    template<typename DataTypeSpecT = Aws::String>
    void SetDataTypeSpec(DataTypeSpecT&& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = std::forward<DataTypeSpecT>(value); }
    template<typename DataTypeSpecT = Aws::String>
    AssetProperty& WithDataTypeSpec(DataTypeSpecT&& value) { SetDataTypeSpec(std::forward<DataTypeSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the asset
     * property.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    AssetProperty& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structured path to the property from the root of the asset.</p>
     */
    inline const Aws::Vector<AssetPropertyPathSegment>& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::Vector<AssetPropertyPathSegment>>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::Vector<AssetPropertyPathSegment>>
    AssetProperty& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    template<typename PathT = AssetPropertyPathSegment>
    AssetProperty& AddPath(PathT&& value) { m_pathHasBeenSet = true; m_path.emplace_back(std::forward<PathT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    PropertyNotification m_notification;
    bool m_notificationHasBeenSet = false;

    PropertyDataType m_dataType{PropertyDataType::NOT_SET};
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_dataTypeSpec;
    bool m_dataTypeSpecHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    Aws::Vector<AssetPropertyPathSegment> m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
