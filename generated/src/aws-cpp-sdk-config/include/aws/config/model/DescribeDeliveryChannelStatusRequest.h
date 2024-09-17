/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The input for the <a>DeliveryChannelStatus</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannelStatusRequest">AWS
   * API Reference</a></p>
   */
  class DescribeDeliveryChannelStatusRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDeliveryChannelStatus"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of delivery channel names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeliveryChannelNames() const{ return m_deliveryChannelNames; }
    inline bool DeliveryChannelNamesHasBeenSet() const { return m_deliveryChannelNamesHasBeenSet; }
    inline void SetDeliveryChannelNames(const Aws::Vector<Aws::String>& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames = value; }
    inline void SetDeliveryChannelNames(Aws::Vector<Aws::String>&& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames = std::move(value); }
    inline DescribeDeliveryChannelStatusRequest& WithDeliveryChannelNames(const Aws::Vector<Aws::String>& value) { SetDeliveryChannelNames(value); return *this;}
    inline DescribeDeliveryChannelStatusRequest& WithDeliveryChannelNames(Aws::Vector<Aws::String>&& value) { SetDeliveryChannelNames(std::move(value)); return *this;}
    inline DescribeDeliveryChannelStatusRequest& AddDeliveryChannelNames(const Aws::String& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames.push_back(value); return *this; }
    inline DescribeDeliveryChannelStatusRequest& AddDeliveryChannelNames(Aws::String&& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames.push_back(std::move(value)); return *this; }
    inline DescribeDeliveryChannelStatusRequest& AddDeliveryChannelNames(const char* value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_deliveryChannelNames;
    bool m_deliveryChannelNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
