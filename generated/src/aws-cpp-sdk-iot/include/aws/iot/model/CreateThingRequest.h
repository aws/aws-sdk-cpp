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
   * <p>The input for the CreateThing operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingRequest">AWS
   * API Reference</a></p>
   */
  class CreateThingRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateThingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateThing"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the thing to create.</p> <p>You can't change a thing's name after
     * you create it. To change a thing's name, you must create a new thing, give it
     * the new name, and then delete the old thing.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    CreateThingRequest& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing type associated with the new thing.</p>
     */
    inline const Aws::String& GetThingTypeName() const { return m_thingTypeName; }
    inline bool ThingTypeNameHasBeenSet() const { return m_thingTypeNameHasBeenSet; }
    template<typename ThingTypeNameT = Aws::String>
    void SetThingTypeName(ThingTypeNameT&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::forward<ThingTypeNameT>(value); }
    template<typename ThingTypeNameT = Aws::String>
    CreateThingRequest& WithThingTypeName(ThingTypeNameT&& value) { SetThingTypeName(std::forward<ThingTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute payload, which consists of up to three name/value pairs in a
     * JSON document. For example:</p> <p>
     * <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline const AttributePayload& GetAttributePayload() const { return m_attributePayload; }
    inline bool AttributePayloadHasBeenSet() const { return m_attributePayloadHasBeenSet; }
    template<typename AttributePayloadT = AttributePayload>
    void SetAttributePayload(AttributePayloadT&& value) { m_attributePayloadHasBeenSet = true; m_attributePayload = std::forward<AttributePayloadT>(value); }
    template<typename AttributePayloadT = AttributePayload>
    CreateThingRequest& WithAttributePayload(AttributePayloadT&& value) { SetAttributePayload(std::forward<AttributePayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the billing group the thing will be added to.</p>
     */
    inline const Aws::String& GetBillingGroupName() const { return m_billingGroupName; }
    inline bool BillingGroupNameHasBeenSet() const { return m_billingGroupNameHasBeenSet; }
    template<typename BillingGroupNameT = Aws::String>
    void SetBillingGroupName(BillingGroupNameT&& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = std::forward<BillingGroupNameT>(value); }
    template<typename BillingGroupNameT = Aws::String>
    CreateThingRequest& WithBillingGroupName(BillingGroupNameT&& value) { SetBillingGroupName(std::forward<BillingGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet = false;

    AttributePayload m_attributePayload;
    bool m_attributePayloadHasBeenSet = false;

    Aws::String m_billingGroupName;
    bool m_billingGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
