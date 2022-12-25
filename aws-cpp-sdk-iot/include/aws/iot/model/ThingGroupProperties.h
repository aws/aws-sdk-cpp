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
    AWS_IOT_API ThingGroupProperties();
    AWS_IOT_API ThingGroupProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingGroupProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The thing group description.</p>
     */
    inline const Aws::String& GetThingGroupDescription() const{ return m_thingGroupDescription; }

    /**
     * <p>The thing group description.</p>
     */
    inline bool ThingGroupDescriptionHasBeenSet() const { return m_thingGroupDescriptionHasBeenSet; }

    /**
     * <p>The thing group description.</p>
     */
    inline void SetThingGroupDescription(const Aws::String& value) { m_thingGroupDescriptionHasBeenSet = true; m_thingGroupDescription = value; }

    /**
     * <p>The thing group description.</p>
     */
    inline void SetThingGroupDescription(Aws::String&& value) { m_thingGroupDescriptionHasBeenSet = true; m_thingGroupDescription = std::move(value); }

    /**
     * <p>The thing group description.</p>
     */
    inline void SetThingGroupDescription(const char* value) { m_thingGroupDescriptionHasBeenSet = true; m_thingGroupDescription.assign(value); }

    /**
     * <p>The thing group description.</p>
     */
    inline ThingGroupProperties& WithThingGroupDescription(const Aws::String& value) { SetThingGroupDescription(value); return *this;}

    /**
     * <p>The thing group description.</p>
     */
    inline ThingGroupProperties& WithThingGroupDescription(Aws::String&& value) { SetThingGroupDescription(std::move(value)); return *this;}

    /**
     * <p>The thing group description.</p>
     */
    inline ThingGroupProperties& WithThingGroupDescription(const char* value) { SetThingGroupDescription(value); return *this;}


    /**
     * <p>The thing group attributes in JSON format.</p>
     */
    inline const AttributePayload& GetAttributePayload() const{ return m_attributePayload; }

    /**
     * <p>The thing group attributes in JSON format.</p>
     */
    inline bool AttributePayloadHasBeenSet() const { return m_attributePayloadHasBeenSet; }

    /**
     * <p>The thing group attributes in JSON format.</p>
     */
    inline void SetAttributePayload(const AttributePayload& value) { m_attributePayloadHasBeenSet = true; m_attributePayload = value; }

    /**
     * <p>The thing group attributes in JSON format.</p>
     */
    inline void SetAttributePayload(AttributePayload&& value) { m_attributePayloadHasBeenSet = true; m_attributePayload = std::move(value); }

    /**
     * <p>The thing group attributes in JSON format.</p>
     */
    inline ThingGroupProperties& WithAttributePayload(const AttributePayload& value) { SetAttributePayload(value); return *this;}

    /**
     * <p>The thing group attributes in JSON format.</p>
     */
    inline ThingGroupProperties& WithAttributePayload(AttributePayload&& value) { SetAttributePayload(std::move(value)); return *this;}

  private:

    Aws::String m_thingGroupDescription;
    bool m_thingGroupDescriptionHasBeenSet = false;

    AttributePayload m_attributePayload;
    bool m_attributePayloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
