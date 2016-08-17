/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>DeliveryChannelStatus</a> action.</p>
   */
  class AWS_CONFIGSERVICE_API DescribeDeliveryChannelStatusRequest : public ConfigServiceRequest
  {
  public:
    DescribeDeliveryChannelStatusRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeliveryChannelNames() const{ return m_deliveryChannelNames; }

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline void SetDeliveryChannelNames(const Aws::Vector<Aws::String>& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames = value; }

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline void SetDeliveryChannelNames(Aws::Vector<Aws::String>&& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames = value; }

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline DescribeDeliveryChannelStatusRequest& WithDeliveryChannelNames(const Aws::Vector<Aws::String>& value) { SetDeliveryChannelNames(value); return *this;}

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline DescribeDeliveryChannelStatusRequest& WithDeliveryChannelNames(Aws::Vector<Aws::String>&& value) { SetDeliveryChannelNames(value); return *this;}

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline DescribeDeliveryChannelStatusRequest& AddDeliveryChannelNames(const Aws::String& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames.push_back(value); return *this; }

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline DescribeDeliveryChannelStatusRequest& AddDeliveryChannelNames(Aws::String&& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames.push_back(value); return *this; }

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline DescribeDeliveryChannelStatusRequest& AddDeliveryChannelNames(const char* value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_deliveryChannelNames;
    bool m_deliveryChannelNamesHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
