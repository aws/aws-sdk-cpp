/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AttributePayload.h>
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
   * <p>Thing group properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingGroupProperties">AWS
   * API Reference</a></p>
   */
  class ThingGroupProperties
  {
  public:
    AWS_IOT_API ThingGroupProperties() = default;
    AWS_IOT_API ThingGroupProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingGroupProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The thing group description.</p>
     */
    inline const Aws::String& GetThingGroupDescription() const { return m_thingGroupDescription; }
    inline bool ThingGroupDescriptionHasBeenSet() const { return m_thingGroupDescriptionHasBeenSet; }
    template<typename ThingGroupDescriptionT = Aws::String>
    void SetThingGroupDescription(ThingGroupDescriptionT&& value) { m_thingGroupDescriptionHasBeenSet = true; m_thingGroupDescription = std::forward<ThingGroupDescriptionT>(value); }
    template<typename ThingGroupDescriptionT = Aws::String>
    ThingGroupProperties& WithThingGroupDescription(ThingGroupDescriptionT&& value) { SetThingGroupDescription(std::forward<ThingGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group attributes in JSON format.</p>
     */
    inline const AttributePayload& GetAttributePayload() const { return m_attributePayload; }
    inline bool AttributePayloadHasBeenSet() const { return m_attributePayloadHasBeenSet; }
    template<typename AttributePayloadT = AttributePayload>
    void SetAttributePayload(AttributePayloadT&& value) { m_attributePayloadHasBeenSet = true; m_attributePayload = std::forward<AttributePayloadT>(value); }
    template<typename AttributePayloadT = AttributePayload>
    ThingGroupProperties& WithAttributePayload(AttributePayloadT&& value) { SetAttributePayload(std::forward<AttributePayloadT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingGroupDescription;
    bool m_thingGroupDescriptionHasBeenSet = false;

    AttributePayload m_attributePayload;
    bool m_attributePayloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
