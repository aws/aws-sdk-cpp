/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AddThingToBillingGroupRequest : public IoTRequest
  {
  public:
    AWS_IOT_API AddThingToBillingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddThingToBillingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the billing group.</p>  <p>This call is asynchronous. It
     * might take several seconds for the detachment to propagate.</p> 
     */
    inline const Aws::String& GetBillingGroupName() const{ return m_billingGroupName; }
    inline bool BillingGroupNameHasBeenSet() const { return m_billingGroupNameHasBeenSet; }
    inline void SetBillingGroupName(const Aws::String& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = value; }
    inline void SetBillingGroupName(Aws::String&& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = std::move(value); }
    inline void SetBillingGroupName(const char* value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName.assign(value); }
    inline AddThingToBillingGroupRequest& WithBillingGroupName(const Aws::String& value) { SetBillingGroupName(value); return *this;}
    inline AddThingToBillingGroupRequest& WithBillingGroupName(Aws::String&& value) { SetBillingGroupName(std::move(value)); return *this;}
    inline AddThingToBillingGroupRequest& WithBillingGroupName(const char* value) { SetBillingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupArn() const{ return m_billingGroupArn; }
    inline bool BillingGroupArnHasBeenSet() const { return m_billingGroupArnHasBeenSet; }
    inline void SetBillingGroupArn(const Aws::String& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = value; }
    inline void SetBillingGroupArn(Aws::String&& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = std::move(value); }
    inline void SetBillingGroupArn(const char* value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn.assign(value); }
    inline AddThingToBillingGroupRequest& WithBillingGroupArn(const Aws::String& value) { SetBillingGroupArn(value); return *this;}
    inline AddThingToBillingGroupRequest& WithBillingGroupArn(Aws::String&& value) { SetBillingGroupArn(std::move(value)); return *this;}
    inline AddThingToBillingGroupRequest& WithBillingGroupArn(const char* value) { SetBillingGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing to be added to the billing group.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }
    inline AddThingToBillingGroupRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline AddThingToBillingGroupRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline AddThingToBillingGroupRequest& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the thing to be added to the billing group.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }
    inline AddThingToBillingGroupRequest& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}
    inline AddThingToBillingGroupRequest& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}
    inline AddThingToBillingGroupRequest& WithThingArn(const char* value) { SetThingArn(value); return *this;}
    ///@}
  private:

    Aws::String m_billingGroupName;
    bool m_billingGroupNameHasBeenSet = false;

    Aws::String m_billingGroupArn;
    bool m_billingGroupArnHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
