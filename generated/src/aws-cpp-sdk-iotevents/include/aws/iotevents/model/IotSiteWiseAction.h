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
    AWS_IOTEVENTS_API IotSiteWiseAction() = default;
    AWS_IOTEVENTS_API IotSiteWiseAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API IotSiteWiseAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for this entry. You can use the entry ID to track which
     * data entry causes an error in case of failure. The default is a new unique
     * identifier.</p>
     */
    inline const Aws::String& GetEntryId() const { return m_entryId; }
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }
    template<typename EntryIdT = Aws::String>
    void SetEntryId(EntryIdT&& value) { m_entryIdHasBeenSet = true; m_entryId = std::forward<EntryIdT>(value); }
    template<typename EntryIdT = Aws::String>
    IotSiteWiseAction& WithEntryId(EntryIdT&& value) { SetEntryId(std::forward<EntryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset that has the specified property.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    IotSiteWiseAction& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset property.</p>
     */
    inline const Aws::String& GetPropertyId() const { return m_propertyId; }
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }
    template<typename PropertyIdT = Aws::String>
    void SetPropertyId(PropertyIdT&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::forward<PropertyIdT>(value); }
    template<typename PropertyIdT = Aws::String>
    IotSiteWiseAction& WithPropertyId(PropertyIdT&& value) { SetPropertyId(std::forward<PropertyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the asset property.</p>
     */
    inline const Aws::String& GetPropertyAlias() const { return m_propertyAlias; }
    inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }
    template<typename PropertyAliasT = Aws::String>
    void SetPropertyAlias(PropertyAliasT&& value) { m_propertyAliasHasBeenSet = true; m_propertyAlias = std::forward<PropertyAliasT>(value); }
    template<typename PropertyAliasT = Aws::String>
    IotSiteWiseAction& WithPropertyAlias(PropertyAliasT&& value) { SetPropertyAlias(std::forward<PropertyAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to send to the asset property. This value contains timestamp,
     * quality, and value (TQV) information. </p>
     */
    inline const AssetPropertyValue& GetPropertyValue() const { return m_propertyValue; }
    inline bool PropertyValueHasBeenSet() const { return m_propertyValueHasBeenSet; }
    template<typename PropertyValueT = AssetPropertyValue>
    void SetPropertyValue(PropertyValueT&& value) { m_propertyValueHasBeenSet = true; m_propertyValue = std::forward<PropertyValueT>(value); }
    template<typename PropertyValueT = AssetPropertyValue>
    IotSiteWiseAction& WithPropertyValue(PropertyValueT&& value) { SetPropertyValue(std::forward<PropertyValueT>(value)); return *this;}
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

    AssetPropertyValue m_propertyValue;
    bool m_propertyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
