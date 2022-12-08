/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EventsResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class PutEventsResult
  {
  public:
    AWS_PINPOINT_API PutEventsResult();
    AWS_PINPOINT_API PutEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API PutEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const EventsResponse& GetEventsResponse() const{ return m_eventsResponse; }

    
    inline void SetEventsResponse(const EventsResponse& value) { m_eventsResponse = value; }

    
    inline void SetEventsResponse(EventsResponse&& value) { m_eventsResponse = std::move(value); }

    
    inline PutEventsResult& WithEventsResponse(const EventsResponse& value) { SetEventsResponse(value); return *this;}

    
    inline PutEventsResult& WithEventsResponse(EventsResponse&& value) { SetEventsResponse(std::move(value)); return *this;}

  private:

    EventsResponse m_eventsResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
