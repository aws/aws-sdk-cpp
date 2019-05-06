/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API CreateThingRequest : public IoTRequest
  {
  public:
    CreateThingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateThing"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the thing to create.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing to create.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing to create.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing to create.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing to create.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing to create.</p>
     */
    inline CreateThingRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing to create.</p>
     */
    inline CreateThingRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing to create.</p>
     */
    inline CreateThingRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The name of the thing type associated with the new thing.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }

    /**
     * <p>The name of the thing type associated with the new thing.</p>
     */
    inline bool ThingTypeNameHasBeenSet() const { return m_thingTypeNameHasBeenSet; }

    /**
     * <p>The name of the thing type associated with the new thing.</p>
     */
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }

    /**
     * <p>The name of the thing type associated with the new thing.</p>
     */
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::move(value); }

    /**
     * <p>The name of the thing type associated with the new thing.</p>
     */
    inline void SetThingTypeName(const char* value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName.assign(value); }

    /**
     * <p>The name of the thing type associated with the new thing.</p>
     */
    inline CreateThingRequest& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type associated with the new thing.</p>
     */
    inline CreateThingRequest& WithThingTypeName(Aws::String&& value) { SetThingTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing type associated with the new thing.</p>
     */
    inline CreateThingRequest& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}


    /**
     * <p>The attribute payload, which consists of up to three name/value pairs in a
     * JSON document. For example:</p> <p>
     * <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline const AttributePayload& GetAttributePayload() const{ return m_attributePayload; }

    /**
     * <p>The attribute payload, which consists of up to three name/value pairs in a
     * JSON document. For example:</p> <p>
     * <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline bool AttributePayloadHasBeenSet() const { return m_attributePayloadHasBeenSet; }

    /**
     * <p>The attribute payload, which consists of up to three name/value pairs in a
     * JSON document. For example:</p> <p>
     * <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline void SetAttributePayload(const AttributePayload& value) { m_attributePayloadHasBeenSet = true; m_attributePayload = value; }

    /**
     * <p>The attribute payload, which consists of up to three name/value pairs in a
     * JSON document. For example:</p> <p>
     * <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline void SetAttributePayload(AttributePayload&& value) { m_attributePayloadHasBeenSet = true; m_attributePayload = std::move(value); }

    /**
     * <p>The attribute payload, which consists of up to three name/value pairs in a
     * JSON document. For example:</p> <p>
     * <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline CreateThingRequest& WithAttributePayload(const AttributePayload& value) { SetAttributePayload(value); return *this;}

    /**
     * <p>The attribute payload, which consists of up to three name/value pairs in a
     * JSON document. For example:</p> <p>
     * <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline CreateThingRequest& WithAttributePayload(AttributePayload&& value) { SetAttributePayload(std::move(value)); return *this;}


    /**
     * <p>The name of the billing group the thing will be added to.</p>
     */
    inline const Aws::String& GetBillingGroupName() const{ return m_billingGroupName; }

    /**
     * <p>The name of the billing group the thing will be added to.</p>
     */
    inline bool BillingGroupNameHasBeenSet() const { return m_billingGroupNameHasBeenSet; }

    /**
     * <p>The name of the billing group the thing will be added to.</p>
     */
    inline void SetBillingGroupName(const Aws::String& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = value; }

    /**
     * <p>The name of the billing group the thing will be added to.</p>
     */
    inline void SetBillingGroupName(Aws::String&& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = std::move(value); }

    /**
     * <p>The name of the billing group the thing will be added to.</p>
     */
    inline void SetBillingGroupName(const char* value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName.assign(value); }

    /**
     * <p>The name of the billing group the thing will be added to.</p>
     */
    inline CreateThingRequest& WithBillingGroupName(const Aws::String& value) { SetBillingGroupName(value); return *this;}

    /**
     * <p>The name of the billing group the thing will be added to.</p>
     */
    inline CreateThingRequest& WithBillingGroupName(Aws::String&& value) { SetBillingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the billing group the thing will be added to.</p>
     */
    inline CreateThingRequest& WithBillingGroupName(const char* value) { SetBillingGroupName(value); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet;

    AttributePayload m_attributePayload;
    bool m_attributePayloadHasBeenSet;

    Aws::String m_billingGroupName;
    bool m_billingGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
