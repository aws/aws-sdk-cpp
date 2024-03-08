/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/DeliverySource.h>
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
  class PutDeliverySourceResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutDeliverySourceResult();
    AWS_CLOUDWATCHLOGS_API PutDeliverySourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutDeliverySourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing information about the delivery source that was just
     * created or updated.</p>
     */
    inline const DeliverySource& GetDeliverySource() const{ return m_deliverySource; }

    /**
     * <p>A structure containing information about the delivery source that was just
     * created or updated.</p>
     */
    inline void SetDeliverySource(const DeliverySource& value) { m_deliverySource = value; }

    /**
     * <p>A structure containing information about the delivery source that was just
     * created or updated.</p>
     */
    inline void SetDeliverySource(DeliverySource&& value) { m_deliverySource = std::move(value); }

    /**
     * <p>A structure containing information about the delivery source that was just
     * created or updated.</p>
     */
    inline PutDeliverySourceResult& WithDeliverySource(const DeliverySource& value) { SetDeliverySource(value); return *this;}

    /**
     * <p>A structure containing information about the delivery source that was just
     * created or updated.</p>
     */
    inline PutDeliverySourceResult& WithDeliverySource(DeliverySource&& value) { SetDeliverySource(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutDeliverySourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutDeliverySourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutDeliverySourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeliverySource m_deliverySource;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
