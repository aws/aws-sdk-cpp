/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/ThingConnectivity.h>
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
   * <p>The thing search index document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingDocument">AWS
   * API Reference</a></p>
   */
  class ThingDocument
  {
  public:
    AWS_IOT_API ThingDocument() = default;
    AWS_IOT_API ThingDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The thing name.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    ThingDocument& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing ID.</p>
     */
    inline const Aws::String& GetThingId() const { return m_thingId; }
    inline bool ThingIdHasBeenSet() const { return m_thingIdHasBeenSet; }
    template<typename ThingIdT = Aws::String>
    void SetThingId(ThingIdT&& value) { m_thingIdHasBeenSet = true; m_thingId = std::forward<ThingIdT>(value); }
    template<typename ThingIdT = Aws::String>
    ThingDocument& WithThingId(ThingIdT&& value) { SetThingId(std::forward<ThingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing type name.</p>
     */
    inline const Aws::String& GetThingTypeName() const { return m_thingTypeName; }
    inline bool ThingTypeNameHasBeenSet() const { return m_thingTypeNameHasBeenSet; }
    template<typename ThingTypeNameT = Aws::String>
    void SetThingTypeName(ThingTypeNameT&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::forward<ThingTypeNameT>(value); }
    template<typename ThingTypeNameT = Aws::String>
    ThingDocument& WithThingTypeName(ThingTypeNameT&& value) { SetThingTypeName(std::forward<ThingTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Thing group and billing group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThingGroupNames() const { return m_thingGroupNames; }
    inline bool ThingGroupNamesHasBeenSet() const { return m_thingGroupNamesHasBeenSet; }
    template<typename ThingGroupNamesT = Aws::Vector<Aws::String>>
    void SetThingGroupNames(ThingGroupNamesT&& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames = std::forward<ThingGroupNamesT>(value); }
    template<typename ThingGroupNamesT = Aws::Vector<Aws::String>>
    ThingDocument& WithThingGroupNames(ThingGroupNamesT&& value) { SetThingGroupNames(std::forward<ThingGroupNamesT>(value)); return *this;}
    template<typename ThingGroupNamesT = Aws::String>
    ThingDocument& AddThingGroupNames(ThingGroupNamesT&& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames.emplace_back(std::forward<ThingGroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    ThingDocument& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    ThingDocument& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The unnamed shadow and named shadow.</p> <p>For more information about
     * shadows, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-device-shadows.html">IoT
     * Device Shadow service.</a> </p>
     */
    inline const Aws::String& GetShadow() const { return m_shadow; }
    inline bool ShadowHasBeenSet() const { return m_shadowHasBeenSet; }
    template<typename ShadowT = Aws::String>
    void SetShadow(ShadowT&& value) { m_shadowHasBeenSet = true; m_shadow = std::forward<ShadowT>(value); }
    template<typename ShadowT = Aws::String>
    ThingDocument& WithShadow(ShadowT&& value) { SetShadow(std::forward<ShadowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains Device Defender data.</p> <p>For more information about Device
     * Defender, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender.html">Device
     * Defender</a>. </p>
     */
    inline const Aws::String& GetDeviceDefender() const { return m_deviceDefender; }
    inline bool DeviceDefenderHasBeenSet() const { return m_deviceDefenderHasBeenSet; }
    template<typename DeviceDefenderT = Aws::String>
    void SetDeviceDefender(DeviceDefenderT&& value) { m_deviceDefenderHasBeenSet = true; m_deviceDefender = std::forward<DeviceDefenderT>(value); }
    template<typename DeviceDefenderT = Aws::String>
    ThingDocument& WithDeviceDefender(DeviceDefenderT&& value) { SetDeviceDefender(std::forward<DeviceDefenderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the thing is connected to the Amazon Web Services IoT Core
     * service.</p>
     */
    inline const ThingConnectivity& GetConnectivity() const { return m_connectivity; }
    inline bool ConnectivityHasBeenSet() const { return m_connectivityHasBeenSet; }
    template<typename ConnectivityT = ThingConnectivity>
    void SetConnectivity(ConnectivityT&& value) { m_connectivityHasBeenSet = true; m_connectivity = std::forward<ConnectivityT>(value); }
    template<typename ConnectivityT = ThingConnectivity>
    ThingDocument& WithConnectivity(ConnectivityT&& value) { SetConnectivity(std::forward<ConnectivityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_thingId;
    bool m_thingIdHasBeenSet = false;

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_thingGroupNames;
    bool m_thingGroupNamesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_shadow;
    bool m_shadowHasBeenSet = false;

    Aws::String m_deviceDefender;
    bool m_deviceDefenderHasBeenSet = false;

    ThingConnectivity m_connectivity;
    bool m_connectivityHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
