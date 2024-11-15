/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Mqtt5Configuration.h>
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
   * <p>The ThingTypeProperties contains information about the thing type including:
   * a thing type description, and a list of searchable thing attribute
   * names.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingTypeProperties">AWS
   * API Reference</a></p>
   */
  class ThingTypeProperties
  {
  public:
    AWS_IOT_API ThingTypeProperties();
    AWS_IOT_API ThingTypeProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingTypeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeDescription() const{ return m_thingTypeDescription; }
    inline bool ThingTypeDescriptionHasBeenSet() const { return m_thingTypeDescriptionHasBeenSet; }
    inline void SetThingTypeDescription(const Aws::String& value) { m_thingTypeDescriptionHasBeenSet = true; m_thingTypeDescription = value; }
    inline void SetThingTypeDescription(Aws::String&& value) { m_thingTypeDescriptionHasBeenSet = true; m_thingTypeDescription = std::move(value); }
    inline void SetThingTypeDescription(const char* value) { m_thingTypeDescriptionHasBeenSet = true; m_thingTypeDescription.assign(value); }
    inline ThingTypeProperties& WithThingTypeDescription(const Aws::String& value) { SetThingTypeDescription(value); return *this;}
    inline ThingTypeProperties& WithThingTypeDescription(Aws::String&& value) { SetThingTypeDescription(std::move(value)); return *this;}
    inline ThingTypeProperties& WithThingTypeDescription(const char* value) { SetThingTypeDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of searchable thing attribute names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSearchableAttributes() const{ return m_searchableAttributes; }
    inline bool SearchableAttributesHasBeenSet() const { return m_searchableAttributesHasBeenSet; }
    inline void SetSearchableAttributes(const Aws::Vector<Aws::String>& value) { m_searchableAttributesHasBeenSet = true; m_searchableAttributes = value; }
    inline void SetSearchableAttributes(Aws::Vector<Aws::String>&& value) { m_searchableAttributesHasBeenSet = true; m_searchableAttributes = std::move(value); }
    inline ThingTypeProperties& WithSearchableAttributes(const Aws::Vector<Aws::String>& value) { SetSearchableAttributes(value); return *this;}
    inline ThingTypeProperties& WithSearchableAttributes(Aws::Vector<Aws::String>&& value) { SetSearchableAttributes(std::move(value)); return *this;}
    inline ThingTypeProperties& AddSearchableAttributes(const Aws::String& value) { m_searchableAttributesHasBeenSet = true; m_searchableAttributes.push_back(value); return *this; }
    inline ThingTypeProperties& AddSearchableAttributes(Aws::String&& value) { m_searchableAttributesHasBeenSet = true; m_searchableAttributes.push_back(std::move(value)); return *this; }
    inline ThingTypeProperties& AddSearchableAttributes(const char* value) { m_searchableAttributesHasBeenSet = true; m_searchableAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration to add user-defined properties to enrich MQTT 5
     * messages.</p>
     */
    inline const Mqtt5Configuration& GetMqtt5Configuration() const{ return m_mqtt5Configuration; }
    inline bool Mqtt5ConfigurationHasBeenSet() const { return m_mqtt5ConfigurationHasBeenSet; }
    inline void SetMqtt5Configuration(const Mqtt5Configuration& value) { m_mqtt5ConfigurationHasBeenSet = true; m_mqtt5Configuration = value; }
    inline void SetMqtt5Configuration(Mqtt5Configuration&& value) { m_mqtt5ConfigurationHasBeenSet = true; m_mqtt5Configuration = std::move(value); }
    inline ThingTypeProperties& WithMqtt5Configuration(const Mqtt5Configuration& value) { SetMqtt5Configuration(value); return *this;}
    inline ThingTypeProperties& WithMqtt5Configuration(Mqtt5Configuration&& value) { SetMqtt5Configuration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingTypeDescription;
    bool m_thingTypeDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_searchableAttributes;
    bool m_searchableAttributesHasBeenSet = false;

    Mqtt5Configuration m_mqtt5Configuration;
    bool m_mqtt5ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
