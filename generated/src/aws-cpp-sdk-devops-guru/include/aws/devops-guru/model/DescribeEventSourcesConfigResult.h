/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/EventSourcesConfig.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class DescribeEventSourcesConfigResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeEventSourcesConfigResult();
    AWS_DEVOPSGURU_API DescribeEventSourcesConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeEventSourcesConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the event sources in the configuration.</p>
     */
    inline const EventSourcesConfig& GetEventSources() const{ return m_eventSources; }

    /**
     * <p>Lists the event sources in the configuration.</p>
     */
    inline void SetEventSources(const EventSourcesConfig& value) { m_eventSources = value; }

    /**
     * <p>Lists the event sources in the configuration.</p>
     */
    inline void SetEventSources(EventSourcesConfig&& value) { m_eventSources = std::move(value); }

    /**
     * <p>Lists the event sources in the configuration.</p>
     */
    inline DescribeEventSourcesConfigResult& WithEventSources(const EventSourcesConfig& value) { SetEventSources(value); return *this;}

    /**
     * <p>Lists the event sources in the configuration.</p>
     */
    inline DescribeEventSourcesConfigResult& WithEventSources(EventSourcesConfig&& value) { SetEventSources(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEventSourcesConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEventSourcesConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEventSourcesConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EventSourcesConfig m_eventSources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
