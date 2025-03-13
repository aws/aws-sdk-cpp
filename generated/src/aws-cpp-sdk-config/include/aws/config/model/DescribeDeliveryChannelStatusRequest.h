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
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelStatusRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetDeliveryChannelNames() const { return m_deliveryChannelNames; }
    inline bool DeliveryChannelNamesHasBeenSet() const { return m_deliveryChannelNamesHasBeenSet; }
    template<typename DeliveryChannelNamesT = Aws::Vector<Aws::String>>
    void SetDeliveryChannelNames(DeliveryChannelNamesT&& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames = std::forward<DeliveryChannelNamesT>(value); }
    template<typename DeliveryChannelNamesT = Aws::Vector<Aws::String>>
    DescribeDeliveryChannelStatusRequest& WithDeliveryChannelNames(DeliveryChannelNamesT&& value) { SetDeliveryChannelNames(std::forward<DeliveryChannelNamesT>(value)); return *this;}
    template<typename DeliveryChannelNamesT = Aws::String>
    DescribeDeliveryChannelStatusRequest& AddDeliveryChannelNames(DeliveryChannelNamesT&& value) { m_deliveryChannelNamesHasBeenSet = true; m_deliveryChannelNames.emplace_back(std::forward<DeliveryChannelNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_deliveryChannelNames;
    bool m_deliveryChannelNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
