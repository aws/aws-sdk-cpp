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
    AWS_IOTFLEETWISE_API GetLoggingOptionsResult() = default;
    AWS_IOTFLEETWISE_API GetLoggingOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetLoggingOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns information about log delivery to Amazon CloudWatch Logs.</p>
     */
    inline const CloudWatchLogDeliveryOptions& GetCloudWatchLogDelivery() const { return m_cloudWatchLogDelivery; }
    template<typename CloudWatchLogDeliveryT = CloudWatchLogDeliveryOptions>
    void SetCloudWatchLogDelivery(CloudWatchLogDeliveryT&& value) { m_cloudWatchLogDeliveryHasBeenSet = true; m_cloudWatchLogDelivery = std::forward<CloudWatchLogDeliveryT>(value); }
    template<typename CloudWatchLogDeliveryT = CloudWatchLogDeliveryOptions>
    GetLoggingOptionsResult& WithCloudWatchLogDelivery(CloudWatchLogDeliveryT&& value) { SetCloudWatchLogDelivery(std::forward<CloudWatchLogDeliveryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLoggingOptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CloudWatchLogDeliveryOptions m_cloudWatchLogDelivery;
    bool m_cloudWatchLogDeliveryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
