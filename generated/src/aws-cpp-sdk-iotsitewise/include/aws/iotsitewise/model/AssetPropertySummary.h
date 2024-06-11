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
    AWS_IOTSITEWISE_API AssetPropertySummary();
    AWS_IOTSITEWISE_API AssetPropertySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetPropertySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the property.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssetPropertySummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssetPropertySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssetPropertySummary& WithId(const char* value) { SetId(value); return *this;}
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
    inline AssetPropertySummary& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline AssetPropertySummary& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline AssetPropertySummary& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unit of measure (such as Newtons or RPM) of the asset property. </p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline AssetPropertySummary& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline AssetPropertySummary& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline AssetPropertySummary& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    
    inline const PropertyNotification& GetNotification() const{ return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    inline void SetNotification(const PropertyNotification& value) { m_notificationHasBeenSet = true; m_notification = value; }
    inline void SetNotification(PropertyNotification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }
    inline AssetPropertySummary& WithNotification(const PropertyNotification& value) { SetNotification(value); return *this;}
    inline AssetPropertySummary& WithNotification(PropertyNotification&& value) { SetNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the composite model that contains the asset property. </p>
     */
    inline const Aws::String& GetAssetCompositeModelId() const{ return m_assetCompositeModelId; }
    inline bool AssetCompositeModelIdHasBeenSet() const { return m_assetCompositeModelIdHasBeenSet; }
    inline void SetAssetCompositeModelId(const Aws::String& value) { m_assetCompositeModelIdHasBeenSet = true; m_assetCompositeModelId = value; }
    inline void SetAssetCompositeModelId(Aws::String&& value) { m_assetCompositeModelIdHasBeenSet = true; m_assetCompositeModelId = std::move(value); }
    inline void SetAssetCompositeModelId(const char* value) { m_assetCompositeModelIdHasBeenSet = true; m_assetCompositeModelId.assign(value); }
    inline AssetPropertySummary& WithAssetCompositeModelId(const Aws::String& value) { SetAssetCompositeModelId(value); return *this;}
    inline AssetPropertySummary& WithAssetCompositeModelId(Aws::String&& value) { SetAssetCompositeModelId(std::move(value)); return *this;}
    inline AssetPropertySummary& WithAssetCompositeModelId(const char* value) { SetAssetCompositeModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structured path to the property from the root of the asset.</p>
     */
    inline const Aws::Vector<AssetPropertyPathSegment>& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::Vector<AssetPropertyPathSegment>& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::Vector<AssetPropertyPathSegment>&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline AssetPropertySummary& WithPath(const Aws::Vector<AssetPropertyPathSegment>& value) { SetPath(value); return *this;}
    inline AssetPropertySummary& WithPath(Aws::Vector<AssetPropertyPathSegment>&& value) { SetPath(std::move(value)); return *this;}
    inline AssetPropertySummary& AddPath(const AssetPropertyPathSegment& value) { m_pathHasBeenSet = true; m_path.push_back(value); return *this; }
    inline AssetPropertySummary& AddPath(AssetPropertyPathSegment&& value) { m_pathHasBeenSet = true; m_path.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The external ID of the property. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline AssetPropertySummary& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline AssetPropertySummary& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline AssetPropertySummary& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}
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

    Aws::Vector<AssetPropertyPathSegment> m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
