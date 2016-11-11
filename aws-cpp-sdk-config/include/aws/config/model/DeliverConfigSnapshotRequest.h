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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>DeliverConfigSnapshot</a> action.</p>
   */
  class AWS_CONFIGSERVICE_API DeliverConfigSnapshotRequest : public ConfigServiceRequest
  {
  public:
    DeliverConfigSnapshotRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the delivery channel through which the snapshot is delivered.</p>
     */
    inline const Aws::String& GetDeliveryChannelName() const{ return m_deliveryChannelName; }

    /**
     * <p>The name of the delivery channel through which the snapshot is delivered.</p>
     */
    inline void SetDeliveryChannelName(const Aws::String& value) { m_deliveryChannelNameHasBeenSet = true; m_deliveryChannelName = value; }

    /**
     * <p>The name of the delivery channel through which the snapshot is delivered.</p>
     */
    inline void SetDeliveryChannelName(Aws::String&& value) { m_deliveryChannelNameHasBeenSet = true; m_deliveryChannelName = value; }

    /**
     * <p>The name of the delivery channel through which the snapshot is delivered.</p>
     */
    inline void SetDeliveryChannelName(const char* value) { m_deliveryChannelNameHasBeenSet = true; m_deliveryChannelName.assign(value); }

    /**
     * <p>The name of the delivery channel through which the snapshot is delivered.</p>
     */
    inline DeliverConfigSnapshotRequest& WithDeliveryChannelName(const Aws::String& value) { SetDeliveryChannelName(value); return *this;}

    /**
     * <p>The name of the delivery channel through which the snapshot is delivered.</p>
     */
    inline DeliverConfigSnapshotRequest& WithDeliveryChannelName(Aws::String&& value) { SetDeliveryChannelName(value); return *this;}

    /**
     * <p>The name of the delivery channel through which the snapshot is delivered.</p>
     */
    inline DeliverConfigSnapshotRequest& WithDeliveryChannelName(const char* value) { SetDeliveryChannelName(value); return *this;}

  private:
    Aws::String m_deliveryChannelName;
    bool m_deliveryChannelNameHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
