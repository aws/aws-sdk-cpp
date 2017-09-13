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
  class AWS_CONFIGSERVICE_API DescribeDeliveryChannelsResult
  {
  public:
    DescribeDeliveryChannelsResult();
    DescribeDeliveryChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDeliveryChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that contains the descriptions of the specified delivery channel.</p>
     */
    inline const Aws::Vector<DeliveryChannel>& GetDeliveryChannels() const{ return m_deliveryChannels; }

    /**
     * <p>A list that contains the descriptions of the specified delivery channel.</p>
     */
    inline void SetDeliveryChannels(const Aws::Vector<DeliveryChannel>& value) { m_deliveryChannels = value; }

    /**
     * <p>A list that contains the descriptions of the specified delivery channel.</p>
     */
    inline void SetDeliveryChannels(Aws::Vector<DeliveryChannel>&& value) { m_deliveryChannels = std::move(value); }

    /**
     * <p>A list that contains the descriptions of the specified delivery channel.</p>
     */
    inline DescribeDeliveryChannelsResult& WithDeliveryChannels(const Aws::Vector<DeliveryChannel>& value) { SetDeliveryChannels(value); return *this;}

    /**
     * <p>A list that contains the descriptions of the specified delivery channel.</p>
     */
    inline DescribeDeliveryChannelsResult& WithDeliveryChannels(Aws::Vector<DeliveryChannel>&& value) { SetDeliveryChannels(std::move(value)); return *this;}

    /**
     * <p>A list that contains the descriptions of the specified delivery channel.</p>
     */
    inline DescribeDeliveryChannelsResult& AddDeliveryChannels(const DeliveryChannel& value) { m_deliveryChannels.push_back(value); return *this; }

    /**
     * <p>A list that contains the descriptions of the specified delivery channel.</p>
     */
    inline DescribeDeliveryChannelsResult& AddDeliveryChannels(DeliveryChannel&& value) { m_deliveryChannels.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DeliveryChannel> m_deliveryChannels;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
