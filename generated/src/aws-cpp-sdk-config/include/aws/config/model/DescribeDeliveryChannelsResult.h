/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/DeliveryChannel.h>
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
   * <p>The output for the <a>DescribeDeliveryChannels</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannelsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDeliveryChannelsResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelsResult() = default;
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that contains the descriptions of the specified delivery channel.</p>
     */
    inline const Aws::Vector<DeliveryChannel>& GetDeliveryChannels() const { return m_deliveryChannels; }
    template<typename DeliveryChannelsT = Aws::Vector<DeliveryChannel>>
    void SetDeliveryChannels(DeliveryChannelsT&& value) { m_deliveryChannelsHasBeenSet = true; m_deliveryChannels = std::forward<DeliveryChannelsT>(value); }
    template<typename DeliveryChannelsT = Aws::Vector<DeliveryChannel>>
    DescribeDeliveryChannelsResult& WithDeliveryChannels(DeliveryChannelsT&& value) { SetDeliveryChannels(std::forward<DeliveryChannelsT>(value)); return *this;}
    template<typename DeliveryChannelsT = DeliveryChannel>
    DescribeDeliveryChannelsResult& AddDeliveryChannels(DeliveryChannelsT&& value) { m_deliveryChannelsHasBeenSet = true; m_deliveryChannels.emplace_back(std::forward<DeliveryChannelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDeliveryChannelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeliveryChannel> m_deliveryChannels;
    bool m_deliveryChannelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
