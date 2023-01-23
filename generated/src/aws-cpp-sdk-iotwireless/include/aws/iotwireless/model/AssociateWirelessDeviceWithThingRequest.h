/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class AssociateWirelessDeviceWithThingRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API AssociateWirelessDeviceWithThingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateWirelessDeviceWithThing"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the resource to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline AssociateWirelessDeviceWithThingRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline AssociateWirelessDeviceWithThingRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline AssociateWirelessDeviceWithThingRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN of the thing to associate with the wireless device.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * <p>The ARN of the thing to associate with the wireless device.</p>
     */
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }

    /**
     * <p>The ARN of the thing to associate with the wireless device.</p>
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }

    /**
     * <p>The ARN of the thing to associate with the wireless device.</p>
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }

    /**
     * <p>The ARN of the thing to associate with the wireless device.</p>
     */
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }

    /**
     * <p>The ARN of the thing to associate with the wireless device.</p>
     */
    inline AssociateWirelessDeviceWithThingRequest& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * <p>The ARN of the thing to associate with the wireless device.</p>
     */
    inline AssociateWirelessDeviceWithThingRequest& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the thing to associate with the wireless device.</p>
     */
    inline AssociateWirelessDeviceWithThingRequest& WithThingArn(const char* value) { SetThingArn(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
