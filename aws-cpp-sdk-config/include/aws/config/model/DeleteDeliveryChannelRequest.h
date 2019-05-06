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
   * <p>The input for the <a>DeleteDeliveryChannel</a> action. The action accepts the
   * following data, in JSON format. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteDeliveryChannelRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API DeleteDeliveryChannelRequest : public ConfigServiceRequest
  {
  public:
    DeleteDeliveryChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDeliveryChannel"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the delivery channel to delete.</p>
     */
    inline const Aws::String& GetDeliveryChannelName() const{ return m_deliveryChannelName; }

    /**
     * <p>The name of the delivery channel to delete.</p>
     */
    inline bool DeliveryChannelNameHasBeenSet() const { return m_deliveryChannelNameHasBeenSet; }

    /**
     * <p>The name of the delivery channel to delete.</p>
     */
    inline void SetDeliveryChannelName(const Aws::String& value) { m_deliveryChannelNameHasBeenSet = true; m_deliveryChannelName = value; }

    /**
     * <p>The name of the delivery channel to delete.</p>
     */
    inline void SetDeliveryChannelName(Aws::String&& value) { m_deliveryChannelNameHasBeenSet = true; m_deliveryChannelName = std::move(value); }

    /**
     * <p>The name of the delivery channel to delete.</p>
     */
    inline void SetDeliveryChannelName(const char* value) { m_deliveryChannelNameHasBeenSet = true; m_deliveryChannelName.assign(value); }

    /**
     * <p>The name of the delivery channel to delete.</p>
     */
    inline DeleteDeliveryChannelRequest& WithDeliveryChannelName(const Aws::String& value) { SetDeliveryChannelName(value); return *this;}

    /**
     * <p>The name of the delivery channel to delete.</p>
     */
    inline DeleteDeliveryChannelRequest& WithDeliveryChannelName(Aws::String&& value) { SetDeliveryChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the delivery channel to delete.</p>
     */
    inline DeleteDeliveryChannelRequest& WithDeliveryChannelName(const char* value) { SetDeliveryChannelName(value); return *this;}

  private:

    Aws::String m_deliveryChannelName;
    bool m_deliveryChannelNameHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
