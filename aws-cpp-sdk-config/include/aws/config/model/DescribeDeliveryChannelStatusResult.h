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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_CONFIGSERVICE_API DescribeDeliveryChannelStatusResult
  {
  public:
    DescribeDeliveryChannelStatusResult();
    DescribeDeliveryChannelStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDeliveryChannelStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that contains the status of a specified delivery channel.</p>
     */
    inline const Aws::Vector<DeliveryChannelStatus>& GetDeliveryChannelsStatus() const{ return m_deliveryChannelsStatus; }

    /**
     * <p>A list that contains the status of a specified delivery channel.</p>
     */
    inline void SetDeliveryChannelsStatus(const Aws::Vector<DeliveryChannelStatus>& value) { m_deliveryChannelsStatus = value; }

    /**
     * <p>A list that contains the status of a specified delivery channel.</p>
     */
    inline void SetDeliveryChannelsStatus(Aws::Vector<DeliveryChannelStatus>&& value) { m_deliveryChannelsStatus = std::move(value); }

    /**
     * <p>A list that contains the status of a specified delivery channel.</p>
     */
    inline DescribeDeliveryChannelStatusResult& WithDeliveryChannelsStatus(const Aws::Vector<DeliveryChannelStatus>& value) { SetDeliveryChannelsStatus(value); return *this;}

    /**
     * <p>A list that contains the status of a specified delivery channel.</p>
     */
    inline DescribeDeliveryChannelStatusResult& WithDeliveryChannelsStatus(Aws::Vector<DeliveryChannelStatus>&& value) { SetDeliveryChannelsStatus(std::move(value)); return *this;}

    /**
     * <p>A list that contains the status of a specified delivery channel.</p>
     */
    inline DescribeDeliveryChannelStatusResult& AddDeliveryChannelsStatus(const DeliveryChannelStatus& value) { m_deliveryChannelsStatus.push_back(value); return *this; }

    /**
     * <p>A list that contains the status of a specified delivery channel.</p>
     */
    inline DescribeDeliveryChannelStatusResult& AddDeliveryChannelsStatus(DeliveryChannelStatus&& value) { m_deliveryChannelsStatus.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DeliveryChannelStatus> m_deliveryChannelsStatus;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
