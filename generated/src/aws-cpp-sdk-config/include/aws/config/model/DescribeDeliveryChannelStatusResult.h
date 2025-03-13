/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/DeliveryChannelStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{
  /**
   * <p>The output for the <a>DescribeDeliveryChannelStatus</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannelStatusResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDeliveryChannelStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelStatusResult() = default;
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that contains the status of a specified delivery channel.</p>
     */
    inline const Aws::Vector<DeliveryChannelStatus>& GetDeliveryChannelsStatus() const { return m_deliveryChannelsStatus; }
    template<typename DeliveryChannelsStatusT = Aws::Vector<DeliveryChannelStatus>>
    void SetDeliveryChannelsStatus(DeliveryChannelsStatusT&& value) { m_deliveryChannelsStatusHasBeenSet = true; m_deliveryChannelsStatus = std::forward<DeliveryChannelsStatusT>(value); }
    template<typename DeliveryChannelsStatusT = Aws::Vector<DeliveryChannelStatus>>
    DescribeDeliveryChannelStatusResult& WithDeliveryChannelsStatus(DeliveryChannelsStatusT&& value) { SetDeliveryChannelsStatus(std::forward<DeliveryChannelsStatusT>(value)); return *this;}
    template<typename DeliveryChannelsStatusT = DeliveryChannelStatus>
    DescribeDeliveryChannelStatusResult& AddDeliveryChannelsStatus(DeliveryChannelsStatusT&& value) { m_deliveryChannelsStatusHasBeenSet = true; m_deliveryChannelsStatus.emplace_back(std::forward<DeliveryChannelsStatusT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDeliveryChannelStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeliveryChannelStatus> m_deliveryChannelsStatus;
    bool m_deliveryChannelsStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
