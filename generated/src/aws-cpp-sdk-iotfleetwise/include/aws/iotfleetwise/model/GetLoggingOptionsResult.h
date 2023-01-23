/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/CloudWatchLogDeliveryOptions.h>
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

  private:

    CloudWatchLogDeliveryOptions m_cloudWatchLogDelivery;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
