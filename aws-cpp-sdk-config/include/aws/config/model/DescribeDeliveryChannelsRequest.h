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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>DescribeDeliveryChannels</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannelsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API DescribeDeliveryChannelsRequest : public ConfigServiceRequest
  {
  public:
    DescribeDeliveryChannelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDeliveryChannels"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of delivery channel names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeliveryChannelNames() const{ return m_deliveryChannelNames; }

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline bool DeliveryChannelNamesHasBeenSet() const { return m_deliveryChannelNamesHasBeenSet; }

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline void SetDeliveryChannelNames(const Aws::Vector<Aws::String>& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames = value; }

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline void SetDeliveryChannelNames(Aws::Vector<Aws::String>&& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames = std::move(value); }

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline DescribeDeliveryChannelsRequest& WithDeliveryChannelNames(const Aws::Vector<Aws::String>& value) { SetDeliveryChannelNames(value); return *this;}

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline DescribeDeliveryChannelsRequest& WithDeliveryChannelNames(Aws::Vector<Aws::String>&& value) { SetDeliveryChannelNames(std::move(value)); return *this;}

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline DescribeDeliveryChannelsRequest& AddDeliveryChannelNames(const Aws::String& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames.push_back(value); return *this; }

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline DescribeDeliveryChannelsRequest& AddDeliveryChannelNames(Aws::String&& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of delivery channel names.</p>
     */
    inline DescribeDeliveryChannelsRequest& AddDeliveryChannelNames(const char* value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_deliveryChannelNames;
    bool m_deliveryChannelNamesHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
