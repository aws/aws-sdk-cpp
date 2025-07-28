/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PropertyNotification.h>
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
   * <p>Contains a summary of a property associated with an asset.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetPropertySummary">AWS
   * API Reference</a></p>
   */
  class AssetPropertySummary
  {
  public:
    AWS_IOTSITEWISE_API AssetPropertySummary() = default;
    AWS_IOTSITEWISE_API AssetPropertySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetPropertySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the property.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AssetPropertySummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the property. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    AssetPropertySummary& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
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
    AssetPropertySummary& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unit of measure (such as Newtons or RPM) of the asset property. </p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    AssetPropertySummary& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PropertyNotification& GetNotification() const { return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    template<typename NotificationT = PropertyNotification>
    void SetNotification(NotificationT&& value) { m_notificationHasBeenSet = true; m_notification = std::forward<NotificationT>(value); }
    template<typename NotificationT = PropertyNotification>
    AssetPropertySummary& WithNotification(NotificationT&& value) { SetNotification(std::forward<NotificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the composite model that contains the asset property. </p>
     */
    inline const Aws::String& GetAssetCompositeModelId() const { return m_assetCompositeModelId; }
    inline bool AssetCompositeModelIdHasBeenSet() const { return m_assetCompositeModelIdHasBeenSet; }
    template<typename AssetCompositeModelIdT = Aws::String>
    void SetAssetCompositeModelId(AssetCompositeModelIdT&& value) { m_assetCompositeModelIdHasBeenSet = true; m_assetCompositeModelId = std::forward<AssetCompositeModelIdT>(value); }
    template<typename AssetCompositeModelIdT = Aws::String>
    AssetPropertySummary& WithAssetCompositeModelId(AssetCompositeModelIdT&& value) { SetAssetCompositeModelId(std::forward<AssetCompositeModelIdT>(value)); return *this;}
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
    AssetPropertySummary& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    template<typename PathT = AssetPropertyPathSegment>
    AssetPropertySummary& AddPath(PathT&& value) { m_pathHasBeenSet = true; m_path.emplace_back(std::forward<PathT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    PropertyNotification m_notification;
    bool m_notificationHasBeenSet = false;

    Aws::String m_assetCompositeModelId;
    bool m_assetCompositeModelIdHasBeenSet = false;

    Aws::Vector<AssetPropertyPathSegment> m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
