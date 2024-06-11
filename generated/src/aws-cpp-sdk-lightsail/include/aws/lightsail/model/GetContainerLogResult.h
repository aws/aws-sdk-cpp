﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ContainerServiceLogEvent.h>
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
namespace Lightsail
{
namespace Model
{
  class GetContainerLogResult
  {
  public:
    AWS_LIGHTSAIL_API GetContainerLogResult();
    AWS_LIGHTSAIL_API GetContainerLogResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetContainerLogResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe the log events of a container.</p>
     */
    inline const Aws::Vector<ContainerServiceLogEvent>& GetLogEvents() const{ return m_logEvents; }
    inline void SetLogEvents(const Aws::Vector<ContainerServiceLogEvent>& value) { m_logEvents = value; }
    inline void SetLogEvents(Aws::Vector<ContainerServiceLogEvent>&& value) { m_logEvents = std::move(value); }
    inline GetContainerLogResult& WithLogEvents(const Aws::Vector<ContainerServiceLogEvent>& value) { SetLogEvents(value); return *this;}
    inline GetContainerLogResult& WithLogEvents(Aws::Vector<ContainerServiceLogEvent>&& value) { SetLogEvents(std::move(value)); return *this;}
    inline GetContainerLogResult& AddLogEvents(const ContainerServiceLogEvent& value) { m_logEvents.push_back(value); return *this; }
    inline GetContainerLogResult& AddLogEvents(ContainerServiceLogEvent&& value) { m_logEvents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetContainerLog</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetContainerLogResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetContainerLogResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetContainerLogResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetContainerLogResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetContainerLogResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetContainerLogResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerServiceLogEvent> m_logEvents;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
