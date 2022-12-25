/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>DeliverConfigSnapshot</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeliverConfigSnapshotRequest">AWS
   * API Reference</a></p>
   */
  class DeliverConfigSnapshotRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeliverConfigSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeliverConfigSnapshot"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the delivery channel through which the snapshot is delivered.</p>
     */
    inline const Aws::String& GetDeliveryChannelName() const{ return m_deliveryChannelName; }

    /**
     * <p>The name of the delivery channel through which the snapshot is delivered.</p>
     */
    inline bool DeliveryChannelNameHasBeenSet() const { return m_deliveryChannelNameHasBeenSet; }

    /**
     * <p>The name of the delivery channel through which the snapshot is delivered.</p>
     */
    inline void SetDeliveryChannelName(const Aws::String& value) { m_deliveryChannelNameHasBeenSet = true; m_deliveryChannelName = value; }

    /**
     * <p>The name of the delivery channel through which the snapshot is delivered.</p>
     */
    inline void SetDeliveryChannelName(Aws::String&& value) { m_deliveryChannelNameHasBeenSet = true; m_deliveryChannelName = std::move(value); }

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
    inline DeliverConfigSnapshotRequest& WithDeliveryChannelName(Aws::String&& value) { SetDeliveryChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the delivery channel through which the snapshot is delivered.</p>
     */
    inline DeliverConfigSnapshotRequest& WithDeliveryChannelName(const char* value) { SetDeliveryChannelName(value); return *this;}

  private:

    Aws::String m_deliveryChannelName;
    bool m_deliveryChannelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
