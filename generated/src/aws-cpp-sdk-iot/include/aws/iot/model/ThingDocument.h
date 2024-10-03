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
    AWS_IOT_API ThingDocument();
    AWS_IOT_API ThingDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The thing name.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }
    inline ThingDocument& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline ThingDocument& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline ThingDocument& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing ID.</p>
     */
    inline const Aws::String& GetThingId() const{ return m_thingId; }
    inline bool ThingIdHasBeenSet() const { return m_thingIdHasBeenSet; }
    inline void SetThingId(const Aws::String& value) { m_thingIdHasBeenSet = true; m_thingId = value; }
    inline void SetThingId(Aws::String&& value) { m_thingIdHasBeenSet = true; m_thingId = std::move(value); }
    inline void SetThingId(const char* value) { m_thingIdHasBeenSet = true; m_thingId.assign(value); }
    inline ThingDocument& WithThingId(const Aws::String& value) { SetThingId(value); return *this;}
    inline ThingDocument& WithThingId(Aws::String&& value) { SetThingId(std::move(value)); return *this;}
    inline ThingDocument& WithThingId(const char* value) { SetThingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing type name.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }
    inline bool ThingTypeNameHasBeenSet() const { return m_thingTypeNameHasBeenSet; }
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::move(value); }
    inline void SetThingTypeName(const char* value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName.assign(value); }
    inline ThingDocument& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}
    inline ThingDocument& WithThingTypeName(Aws::String&& value) { SetThingTypeName(std::move(value)); return *this;}
    inline ThingDocument& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Thing group and billing group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThingGroupNames() const{ return m_thingGroupNames; }
    inline bool ThingGroupNamesHasBeenSet() const { return m_thingGroupNamesHasBeenSet; }
    inline void SetThingGroupNames(const Aws::Vector<Aws::String>& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames = value; }
    inline void SetThingGroupNames(Aws::Vector<Aws::String>&& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames = std::move(value); }
    inline ThingDocument& WithThingGroupNames(const Aws::Vector<Aws::String>& value) { SetThingGroupNames(value); return *this;}
    inline ThingDocument& WithThingGroupNames(Aws::Vector<Aws::String>&& value) { SetThingGroupNames(std::move(value)); return *this;}
    inline ThingDocument& AddThingGroupNames(const Aws::String& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames.push_back(value); return *this; }
    inline ThingDocument& AddThingGroupNames(Aws::String&& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames.push_back(std::move(value)); return *this; }
    inline ThingDocument& AddThingGroupNames(const char* value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline ThingDocument& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline ThingDocument& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline ThingDocument& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline ThingDocument& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline ThingDocument& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline ThingDocument& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ThingDocument& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline ThingDocument& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline ThingDocument& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unnamed shadow and named shadow.</p> <p>For more information about
     * shadows, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-device-shadows.html">IoT
     * Device Shadow service.</a> </p>
     */
    inline const Aws::String& GetShadow() const{ return m_shadow; }
    inline bool ShadowHasBeenSet() const { return m_shadowHasBeenSet; }
    inline void SetShadow(const Aws::String& value) { m_shadowHasBeenSet = true; m_shadow = value; }
    inline void SetShadow(Aws::String&& value) { m_shadowHasBeenSet = true; m_shadow = std::move(value); }
    inline void SetShadow(const char* value) { m_shadowHasBeenSet = true; m_shadow.assign(value); }
    inline ThingDocument& WithShadow(const Aws::String& value) { SetShadow(value); return *this;}
    inline ThingDocument& WithShadow(Aws::String&& value) { SetShadow(std::move(value)); return *this;}
    inline ThingDocument& WithShadow(const char* value) { SetShadow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains Device Defender data.</p> <p>For more information about Device
     * Defender, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender.html">Device
     * Defender</a>. </p>
     */
    inline const Aws::String& GetDeviceDefender() const{ return m_deviceDefender; }
    inline bool DeviceDefenderHasBeenSet() const { return m_deviceDefenderHasBeenSet; }
    inline void SetDeviceDefender(const Aws::String& value) { m_deviceDefenderHasBeenSet = true; m_deviceDefender = value; }
    inline void SetDeviceDefender(Aws::String&& value) { m_deviceDefenderHasBeenSet = true; m_deviceDefender = std::move(value); }
    inline void SetDeviceDefender(const char* value) { m_deviceDefenderHasBeenSet = true; m_deviceDefender.assign(value); }
    inline ThingDocument& WithDeviceDefender(const Aws::String& value) { SetDeviceDefender(value); return *this;}
    inline ThingDocument& WithDeviceDefender(Aws::String&& value) { SetDeviceDefender(std::move(value)); return *this;}
    inline ThingDocument& WithDeviceDefender(const char* value) { SetDeviceDefender(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the thing is connected to the Amazon Web Services IoT Core
     * service.</p>
     */
    inline const ThingConnectivity& GetConnectivity() const{ return m_connectivity; }
    inline bool ConnectivityHasBeenSet() const { return m_connectivityHasBeenSet; }
    inline void SetConnectivity(const ThingConnectivity& value) { m_connectivityHasBeenSet = true; m_connectivity = value; }
    inline void SetConnectivity(ThingConnectivity&& value) { m_connectivityHasBeenSet = true; m_connectivity = std::move(value); }
    inline ThingDocument& WithConnectivity(const ThingConnectivity& value) { SetConnectivity(value); return *this;}
    inline ThingDocument& WithConnectivity(ThingConnectivity&& value) { SetConnectivity(std::move(value)); return *this;}
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
