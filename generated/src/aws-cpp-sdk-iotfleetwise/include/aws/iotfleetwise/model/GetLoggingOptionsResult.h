/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/CloudWatchLogDeliveryOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class GetLoggingOptionsResult
  {
  public:
    AWS_IOTFLEETWISE_API GetLoggingOptionsResult();
    AWS_IOTFLEETWISE_API GetLoggingOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetLoggingOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns information about log delivery to Amazon CloudWatch Logs.</p>
     */
    inline const CloudWatchLogDeliveryOptions& GetCloudWatchLogDelivery() const{ return m_cloudWatchLogDelivery; }

    /**
     * <p>Returns information about log delivery to Amazon CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogDelivery(const CloudWatchLogDeliveryOptions& value) { m_cloudWatchLogDelivery = value; }

    /**
     * <p>Returns information about log delivery to Amazon CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogDelivery(CloudWatchLogDeliveryOptions&& value) { m_cloudWatchLogDelivery = std::move(value); }

    /**
     * <p>Returns information about log delivery to Amazon CloudWatch Logs.</p>
     */
    inline GetLoggingOptionsResult& WithCloudWatchLogDelivery(const CloudWatchLogDeliveryOptions& value) { SetCloudWatchLogDelivery(value); return *this;}

    /**
     * <p>Returns information about log delivery to Amazon CloudWatch Logs.</p>
     */
    inline GetLoggingOptionsResult& WithCloudWatchLogDelivery(CloudWatchLogDeliveryOptions&& value) { SetCloudWatchLogDelivery(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLoggingOptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLoggingOptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLoggingOptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CloudWatchLogDeliveryOptions m_cloudWatchLogDelivery;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
