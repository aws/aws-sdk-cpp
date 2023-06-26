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
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelsResult();
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDeliveryChannelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDeliveryChannelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDeliveryChannelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DeliveryChannel> m_deliveryChannels;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
