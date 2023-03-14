/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/EventsDetectionJobProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribeEventsDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeEventsDetectionJobResult();
    AWS_COMPREHEND_API DescribeEventsDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeEventsDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the properties associated with an event detection
     * job.</p>
     */
    inline const EventsDetectionJobProperties& GetEventsDetectionJobProperties() const{ return m_eventsDetectionJobProperties; }

    /**
     * <p>An object that contains the properties associated with an event detection
     * job.</p>
     */
    inline void SetEventsDetectionJobProperties(const EventsDetectionJobProperties& value) { m_eventsDetectionJobProperties = value; }

    /**
     * <p>An object that contains the properties associated with an event detection
     * job.</p>
     */
    inline void SetEventsDetectionJobProperties(EventsDetectionJobProperties&& value) { m_eventsDetectionJobProperties = std::move(value); }

    /**
     * <p>An object that contains the properties associated with an event detection
     * job.</p>
     */
    inline DescribeEventsDetectionJobResult& WithEventsDetectionJobProperties(const EventsDetectionJobProperties& value) { SetEventsDetectionJobProperties(value); return *this;}

    /**
     * <p>An object that contains the properties associated with an event detection
     * job.</p>
     */
    inline DescribeEventsDetectionJobResult& WithEventsDetectionJobProperties(EventsDetectionJobProperties&& value) { SetEventsDetectionJobProperties(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEventsDetectionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEventsDetectionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEventsDetectionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EventsDetectionJobProperties m_eventsDetectionJobProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
