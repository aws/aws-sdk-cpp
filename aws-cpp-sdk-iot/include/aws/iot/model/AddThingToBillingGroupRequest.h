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
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API AddThingToBillingGroupRequest : public IoTRequest
  {
  public:
    AddThingToBillingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddThingToBillingGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupName() const{ return m_billingGroupName; }

    /**
     * <p>The name of the billing group.</p>
     */
    inline bool BillingGroupNameHasBeenSet() const { return m_billingGroupNameHasBeenSet; }

    /**
     * <p>The name of the billing group.</p>
     */
    inline void SetBillingGroupName(const Aws::String& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = value; }

    /**
     * <p>The name of the billing group.</p>
     */
    inline void SetBillingGroupName(Aws::String&& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = std::move(value); }

    /**
     * <p>The name of the billing group.</p>
     */
    inline void SetBillingGroupName(const char* value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName.assign(value); }

    /**
     * <p>The name of the billing group.</p>
     */
    inline AddThingToBillingGroupRequest& WithBillingGroupName(const Aws::String& value) { SetBillingGroupName(value); return *this;}

    /**
     * <p>The name of the billing group.</p>
     */
    inline AddThingToBillingGroupRequest& WithBillingGroupName(Aws::String&& value) { SetBillingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the billing group.</p>
     */
    inline AddThingToBillingGroupRequest& WithBillingGroupName(const char* value) { SetBillingGroupName(value); return *this;}


    /**
     * <p>The ARN of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupArn() const{ return m_billingGroupArn; }

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline bool BillingGroupArnHasBeenSet() const { return m_billingGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline void SetBillingGroupArn(const Aws::String& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = value; }

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline void SetBillingGroupArn(Aws::String&& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = std::move(value); }

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline void SetBillingGroupArn(const char* value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn.assign(value); }

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline AddThingToBillingGroupRequest& WithBillingGroupArn(const Aws::String& value) { SetBillingGroupArn(value); return *this;}

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline AddThingToBillingGroupRequest& WithBillingGroupArn(Aws::String&& value) { SetBillingGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the billing group.</p>
     */
    inline AddThingToBillingGroupRequest& WithBillingGroupArn(const char* value) { SetBillingGroupArn(value); return *this;}


    /**
     * <p>The name of the thing to be added to the billing group.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing to be added to the billing group.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing to be added to the billing group.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing to be added to the billing group.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing to be added to the billing group.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing to be added to the billing group.</p>
     */
    inline AddThingToBillingGroupRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing to be added to the billing group.</p>
     */
    inline AddThingToBillingGroupRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing to be added to the billing group.</p>
     */
    inline AddThingToBillingGroupRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The ARN of the thing to be added to the billing group.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * <p>The ARN of the thing to be added to the billing group.</p>
     */
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }

    /**
     * <p>The ARN of the thing to be added to the billing group.</p>
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }

    /**
     * <p>The ARN of the thing to be added to the billing group.</p>
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }

    /**
     * <p>The ARN of the thing to be added to the billing group.</p>
     */
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }

    /**
     * <p>The ARN of the thing to be added to the billing group.</p>
     */
    inline AddThingToBillingGroupRequest& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * <p>The ARN of the thing to be added to the billing group.</p>
     */
    inline AddThingToBillingGroupRequest& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the thing to be added to the billing group.</p>
     */
    inline AddThingToBillingGroupRequest& WithThingArn(const char* value) { SetThingArn(value); return *this;}

  private:

    Aws::String m_billingGroupName;
    bool m_billingGroupNameHasBeenSet;

    Aws::String m_billingGroupArn;
    bool m_billingGroupArnHasBeenSet;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
