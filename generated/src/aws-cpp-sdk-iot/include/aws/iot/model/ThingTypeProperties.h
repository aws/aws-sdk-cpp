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
    AWS_IOT_API ThingTypeProperties() = default;
    AWS_IOT_API ThingTypeProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingTypeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeDescription() const { return m_thingTypeDescription; }
    inline bool ThingTypeDescriptionHasBeenSet() const { return m_thingTypeDescriptionHasBeenSet; }
    template<typename ThingTypeDescriptionT = Aws::String>
    void SetThingTypeDescription(ThingTypeDescriptionT&& value) { m_thingTypeDescriptionHasBeenSet = true; m_thingTypeDescription = std::forward<ThingTypeDescriptionT>(value); }
    template<typename ThingTypeDescriptionT = Aws::String>
    ThingTypeProperties& WithThingTypeDescription(ThingTypeDescriptionT&& value) { SetThingTypeDescription(std::forward<ThingTypeDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of searchable thing attribute names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSearchableAttributes() const { return m_searchableAttributes; }
    inline bool SearchableAttributesHasBeenSet() const { return m_searchableAttributesHasBeenSet; }
    template<typename SearchableAttributesT = Aws::Vector<Aws::String>>
    void SetSearchableAttributes(SearchableAttributesT&& value) { m_searchableAttributesHasBeenSet = true; m_searchableAttributes = std::forward<SearchableAttributesT>(value); }
    template<typename SearchableAttributesT = Aws::Vector<Aws::String>>
    ThingTypeProperties& WithSearchableAttributes(SearchableAttributesT&& value) { SetSearchableAttributes(std::forward<SearchableAttributesT>(value)); return *this;}
    template<typename SearchableAttributesT = Aws::String>
    ThingTypeProperties& AddSearchableAttributes(SearchableAttributesT&& value) { m_searchableAttributesHasBeenSet = true; m_searchableAttributes.emplace_back(std::forward<SearchableAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration to add user-defined properties to enrich MQTT 5
     * messages.</p>
     */
    inline const Mqtt5Configuration& GetMqtt5Configuration() const { return m_mqtt5Configuration; }
    inline bool Mqtt5ConfigurationHasBeenSet() const { return m_mqtt5ConfigurationHasBeenSet; }
    template<typename Mqtt5ConfigurationT = Mqtt5Configuration>
    void SetMqtt5Configuration(Mqtt5ConfigurationT&& value) { m_mqtt5ConfigurationHasBeenSet = true; m_mqtt5Configuration = std::forward<Mqtt5ConfigurationT>(value); }
    template<typename Mqtt5ConfigurationT = Mqtt5Configuration>
    ThingTypeProperties& WithMqtt5Configuration(Mqtt5ConfigurationT&& value) { SetMqtt5Configuration(std::forward<Mqtt5ConfigurationT>(value)); return *this;}
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
