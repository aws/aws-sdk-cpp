/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/Delivery.h>
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
  class CreateDeliveryResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API CreateDeliveryResult();
    AWS_CLOUDWATCHLOGS_API CreateDeliveryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API CreateDeliveryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains information about the delivery that you just
     * created.</p>
     */
    inline const Delivery& GetDelivery() const{ return m_delivery; }

    /**
     * <p>A structure that contains information about the delivery that you just
     * created.</p>
     */
    inline void SetDelivery(const Delivery& value) { m_delivery = value; }

    /**
     * <p>A structure that contains information about the delivery that you just
     * created.</p>
     */
    inline void SetDelivery(Delivery&& value) { m_delivery = std::move(value); }

    /**
     * <p>A structure that contains information about the delivery that you just
     * created.</p>
     */
    inline CreateDeliveryResult& WithDelivery(const Delivery& value) { SetDelivery(value); return *this;}

    /**
     * <p>A structure that contains information about the delivery that you just
     * created.</p>
     */
    inline CreateDeliveryResult& WithDelivery(Delivery&& value) { SetDelivery(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDeliveryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDeliveryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDeliveryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Delivery m_delivery;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
