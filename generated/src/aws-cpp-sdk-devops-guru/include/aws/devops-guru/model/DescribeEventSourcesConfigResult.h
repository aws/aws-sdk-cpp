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
    AWS_DEVOPSGURU_API DescribeEventSourcesConfigResult() = default;
    AWS_DEVOPSGURU_API DescribeEventSourcesConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeEventSourcesConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the event sources in the configuration.</p>
     */
    inline const EventSourcesConfig& GetEventSources() const { return m_eventSources; }
    template<typename EventSourcesT = EventSourcesConfig>
    void SetEventSources(EventSourcesT&& value) { m_eventSourcesHasBeenSet = true; m_eventSources = std::forward<EventSourcesT>(value); }
    template<typename EventSourcesT = EventSourcesConfig>
    DescribeEventSourcesConfigResult& WithEventSources(EventSourcesT&& value) { SetEventSources(std::forward<EventSourcesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEventSourcesConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EventSourcesConfig m_eventSources;
    bool m_eventSourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
