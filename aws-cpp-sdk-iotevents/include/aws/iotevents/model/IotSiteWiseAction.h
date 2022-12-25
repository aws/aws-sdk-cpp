/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/AssetPropertyValue.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Sends information about the detector model instance and the event that
   * triggered the action to a specified asset property in AWS IoT SiteWise.</p>
   * <p>You must use expressions for all parameters in
   * <code>IotSiteWiseAction</code>. The expressions accept literals, operators,
   * functions, references, and substitutions templates.</p> <p class="title">
   * <b>Examples</b> </p> <ul> <li> <p>For literal values, the expressions must
   * contain single quotes. For example, the value for the <code>propertyAlias</code>
   * parameter can be <code>'/company/windfarm/3/turbine/7/temperature'</code>.</p>
   * </li> <li> <p>For references, you must specify either variables or input values.
   * For example, the value for the <code>assetId</code> parameter can be
   * <code>$input.TurbineInput.assetId1</code>.</p> </li> <li> <p>For a substitution
   * template, you must use <code>${}</code>, and the template must be in single
   * quotes. A substitution template can also contain a combination of literals,
   * operators, functions, references, and substitution templates.</p> <p>In the
   * following example, the value for the <code>propertyAlias</code> parameter uses a
   * substitution template. </p> <p>
   * <code>'company/windfarm/${$input.TemperatureInput.sensorData.windfarmID}/turbine/
   * ${$input.TemperatureInput.sensorData.turbineID}/temperature'</code> </p> </li>
   * </ul> <p>You must specify either <code>propertyAlias</code> or both
   * <code>assetId</code> and <code>propertyId</code> to identify the target asset
   * property in AWS IoT SiteWise.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-expressions.html">Expressions</a>
   * in the <i>AWS IoT Events Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/IotSiteWiseAction">AWS
   * API Reference</a></p>
   */
  class IotSiteWiseAction
  {
  public:
    AWS_IOTEVENTS_API IotSiteWiseAction();
    AWS_IOTEVENTS_API IotSiteWiseAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API IotSiteWiseAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for this entry. You can use the entry ID to track which
     * data entry causes an error in case of failure. The default is a new unique
     * identifier.</p>
     */
    inline const Aws::String& GetEntryId() const{ return m_entryId; }

    /**
     * <p>A unique identifier for this entry. You can use the entry ID to track which
     * data entry causes an error in case of failure. The default is a new unique
     * identifier.</p>
     */
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }

    /**
     * <p>A unique identifier for this entry. You can use the entry ID to track which
     * data entry causes an error in case of failure. The default is a new unique
     * identifier.</p>
     */
    inline void SetEntryId(const Aws::String& value) { m_entryIdHasBeenSet = true; m_entryId = value; }

    /**
     * <p>A unique identifier for this entry. You can use the entry ID to track which
     * data entry causes an error in case of failure. The default is a new unique
     * identifier.</p>
     */
    inline void SetEntryId(Aws::String&& value) { m_entryIdHasBeenSet = true; m_entryId = std::move(value); }

    /**
     * <p>A unique identifier for this entry. You can use the entry ID to track which
     * data entry causes an error in case of failure. The default is a new unique
     * identifier.</p>
     */
    inline void SetEntryId(const char* value) { m_entryIdHasBeenSet = true; m_entryId.assign(value); }

    /**
     * <p>A unique identifier for this entry. You can use the entry ID to track which
     * data entry causes an error in case of failure. The default is a new unique
     * identifier.</p>
     */
    inline IotSiteWiseAction& WithEntryId(const Aws::String& value) { SetEntryId(value); return *this;}

    /**
     * <p>A unique identifier for this entry. You can use the entry ID to track which
     * data entry causes an error in case of failure. The default is a new unique
     * identifier.</p>
     */
    inline IotSiteWiseAction& WithEntryId(Aws::String&& value) { SetEntryId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for this entry. You can use the entry ID to track which
     * data entry causes an error in case of failure. The default is a new unique
     * identifier.</p>
     */
    inline IotSiteWiseAction& WithEntryId(const char* value) { SetEntryId(value); return *this;}


    /**
     * <p>The ID of the asset that has the specified property.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The ID of the asset that has the specified property.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The ID of the asset that has the specified property.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The ID of the asset that has the specified property.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The ID of the asset that has the specified property.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The ID of the asset that has the specified property.</p>
     */
    inline IotSiteWiseAction& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset that has the specified property.</p>
     */
    inline IotSiteWiseAction& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset that has the specified property.</p>
     */
    inline IotSiteWiseAction& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The ID of the asset property.</p>
     */
    inline const Aws::String& GetPropertyId() const{ return m_propertyId; }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline void SetPropertyId(const Aws::String& value) { m_propertyIdHasBeenSet = true; m_propertyId = value; }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline void SetPropertyId(Aws::String&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::move(value); }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline void SetPropertyId(const char* value) { m_propertyIdHasBeenSet = true; m_propertyId.assign(value); }

    /**
     * <p>The ID of the asset property.</p>
     */
    inline IotSiteWiseAction& WithPropertyId(const Aws::String& value) { SetPropertyId(value); return *this;}

    /**
     * <p>The ID of the asset property.</p>
     */
    inline IotSiteWiseAction& WithPropertyId(Aws::String&& value) { SetPropertyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset property.</p>
     */
    inline IotSiteWiseAction& WithPropertyId(const char* value) { SetPropertyId(value); return *this;}


    /**
     * <p>The alias of the asset property.</p>
     */
    inline const Aws::String& GetPropertyAlias() const{ return m_propertyAlias; }

    /**
     * <p>The alias of the asset property.</p>
     */
    inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }

    /**
     * <p>The alias of the asset property.</p>
     */
    inline void SetPropertyAlias(const Aws::String& value) { m_propertyAliasHasBeenSet = true; m_propertyAlias = value; }

    /**
     * <p>The alias of the asset property.</p>
     */
    inline void SetPropertyAlias(Aws::String&& value) { m_propertyAliasHasBeenSet = true; m_propertyAlias = std::move(value); }

    /**
     * <p>The alias of the asset property.</p>
     */
    inline void SetPropertyAlias(const char* value) { m_propertyAliasHasBeenSet = true; m_propertyAlias.assign(value); }

    /**
     * <p>The alias of the asset property.</p>
     */
    inline IotSiteWiseAction& WithPropertyAlias(const Aws::String& value) { SetPropertyAlias(value); return *this;}

    /**
     * <p>The alias of the asset property.</p>
     */
    inline IotSiteWiseAction& WithPropertyAlias(Aws::String&& value) { SetPropertyAlias(std::move(value)); return *this;}

    /**
     * <p>The alias of the asset property.</p>
     */
    inline IotSiteWiseAction& WithPropertyAlias(const char* value) { SetPropertyAlias(value); return *this;}


    /**
     * <p>The value to send to the asset property. This value contains timestamp,
     * quality, and value (TQV) information. </p>
     */
    inline const AssetPropertyValue& GetPropertyValue() const{ return m_propertyValue; }

    /**
     * <p>The value to send to the asset property. This value contains timestamp,
     * quality, and value (TQV) information. </p>
     */
    inline bool PropertyValueHasBeenSet() const { return m_propertyValueHasBeenSet; }

    /**
     * <p>The value to send to the asset property. This value contains timestamp,
     * quality, and value (TQV) information. </p>
     */
    inline void SetPropertyValue(const AssetPropertyValue& value) { m_propertyValueHasBeenSet = true; m_propertyValue = value; }

    /**
     * <p>The value to send to the asset property. This value contains timestamp,
     * quality, and value (TQV) information. </p>
     */
    inline void SetPropertyValue(AssetPropertyValue&& value) { m_propertyValueHasBeenSet = true; m_propertyValue = std::move(value); }

    /**
     * <p>The value to send to the asset property. This value contains timestamp,
     * quality, and value (TQV) information. </p>
     */
    inline IotSiteWiseAction& WithPropertyValue(const AssetPropertyValue& value) { SetPropertyValue(value); return *this;}

    /**
     * <p>The value to send to the asset property. This value contains timestamp,
     * quality, and value (TQV) information. </p>
     */
    inline IotSiteWiseAction& WithPropertyValue(AssetPropertyValue&& value) { SetPropertyValue(std::move(value)); return *this;}

  private:

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;

    Aws::String m_propertyAlias;
    bool m_propertyAliasHasBeenSet = false;

    AssetPropertyValue m_propertyValue;
    bool m_propertyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
