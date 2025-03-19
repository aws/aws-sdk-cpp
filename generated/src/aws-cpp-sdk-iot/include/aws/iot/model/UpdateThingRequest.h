/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AttributePayload.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the UpdateThing operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThingRequest">AWS
   * API Reference</a></p>
   */
  class UpdateThingRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateThingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateThing"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the thing to update.</p> <p>You can't change a thing's name. To
     * change a thing's name, you must create a new thing, give it the new name, and
     * then delete the old thing.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    UpdateThingRequest& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeName() const { return m_thingTypeName; }
    inline bool ThingTypeNameHasBeenSet() const { return m_thingTypeNameHasBeenSet; }
    template<typename ThingTypeNameT = Aws::String>
    void SetThingTypeName(ThingTypeNameT&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::forward<ThingTypeNameT>(value); }
    template<typename ThingTypeNameT = Aws::String>
    UpdateThingRequest& WithThingTypeName(ThingTypeNameT&& value) { SetThingTypeName(std::forward<ThingTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of thing attributes, a JSON string containing name-value pairs. For
     * example:</p> <p> <code>{\"attributes\":{\"name1\":\"value2\"}}</code> </p>
     * <p>This data is used to add new attributes or update existing attributes.</p>
     */
    inline const AttributePayload& GetAttributePayload() const { return m_attributePayload; }
    inline bool AttributePayloadHasBeenSet() const { return m_attributePayloadHasBeenSet; }
    template<typename AttributePayloadT = AttributePayload>
    void SetAttributePayload(AttributePayloadT&& value) { m_attributePayloadHasBeenSet = true; m_attributePayload = std::forward<AttributePayloadT>(value); }
    template<typename AttributePayloadT = AttributePayload>
    UpdateThingRequest& WithAttributePayload(AttributePayloadT&& value) { SetAttributePayload(std::forward<AttributePayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected version of the thing record in the registry. If the version of
     * the record in the registry does not match the expected version specified in the
     * request, the <code>UpdateThing</code> request is rejected with a
     * <code>VersionConflictException</code>.</p>
     */
    inline long long GetExpectedVersion() const { return m_expectedVersion; }
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }
    inline UpdateThingRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Remove a thing type association. If <b>true</b>, the association is
     * removed.</p>
     */
    inline bool GetRemoveThingType() const { return m_removeThingType; }
    inline bool RemoveThingTypeHasBeenSet() const { return m_removeThingTypeHasBeenSet; }
    inline void SetRemoveThingType(bool value) { m_removeThingTypeHasBeenSet = true; m_removeThingType = value; }
    inline UpdateThingRequest& WithRemoveThingType(bool value) { SetRemoveThingType(value); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet = false;

    AttributePayload m_attributePayload;
    bool m_attributePayloadHasBeenSet = false;

    long long m_expectedVersion{0};
    bool m_expectedVersionHasBeenSet = false;

    bool m_removeThingType{false};
    bool m_removeThingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
