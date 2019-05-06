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
  class AWS_IOT_API DescribeBillingGroupRequest : public IoTRequest
  {
  public:
    DescribeBillingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBillingGroup"; }

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
    inline DescribeBillingGroupRequest& WithBillingGroupName(const Aws::String& value) { SetBillingGroupName(value); return *this;}

    /**
     * <p>The name of the billing group.</p>
     */
    inline DescribeBillingGroupRequest& WithBillingGroupName(Aws::String&& value) { SetBillingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the billing group.</p>
     */
    inline DescribeBillingGroupRequest& WithBillingGroupName(const char* value) { SetBillingGroupName(value); return *this;}

  private:

    Aws::String m_billingGroupName;
    bool m_billingGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
