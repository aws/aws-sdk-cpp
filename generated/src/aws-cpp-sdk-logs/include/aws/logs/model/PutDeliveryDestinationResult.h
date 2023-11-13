/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/DeliveryDestination.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class PutDeliveryDestinationResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutDeliveryDestinationResult();
    AWS_CLOUDWATCHLOGS_API PutDeliveryDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutDeliveryDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing information about the delivery destination that you
     * just created or updated.</p>
     */
    inline const DeliveryDestination& GetDeliveryDestination() const{ return m_deliveryDestination; }

    /**
     * <p>A structure containing information about the delivery destination that you
     * just created or updated.</p>
     */
    inline void SetDeliveryDestination(const DeliveryDestination& value) { m_deliveryDestination = value; }

    /**
     * <p>A structure containing information about the delivery destination that you
     * just created or updated.</p>
     */
    inline void SetDeliveryDestination(DeliveryDestination&& value) { m_deliveryDestination = std::move(value); }

    /**
     * <p>A structure containing information about the delivery destination that you
     * just created or updated.</p>
     */
    inline PutDeliveryDestinationResult& WithDeliveryDestination(const DeliveryDestination& value) { SetDeliveryDestination(value); return *this;}

    /**
     * <p>A structure containing information about the delivery destination that you
     * just created or updated.</p>
     */
    inline PutDeliveryDestinationResult& WithDeliveryDestination(DeliveryDestination&& value) { SetDeliveryDestination(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutDeliveryDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutDeliveryDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutDeliveryDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeliveryDestination m_deliveryDestination;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
