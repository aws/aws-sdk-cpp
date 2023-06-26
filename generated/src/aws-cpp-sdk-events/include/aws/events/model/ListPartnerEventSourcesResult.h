/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/PartnerEventSource.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class ListPartnerEventSourcesResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ListPartnerEventSourcesResult();
    AWS_CLOUDWATCHEVENTS_API ListPartnerEventSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API ListPartnerEventSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline const Aws::Vector<PartnerEventSource>& GetPartnerEventSources() const{ return m_partnerEventSources; }

    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline void SetPartnerEventSources(const Aws::Vector<PartnerEventSource>& value) { m_partnerEventSources = value; }

    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline void SetPartnerEventSources(Aws::Vector<PartnerEventSource>&& value) { m_partnerEventSources = std::move(value); }

    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline ListPartnerEventSourcesResult& WithPartnerEventSources(const Aws::Vector<PartnerEventSource>& value) { SetPartnerEventSources(value); return *this;}

    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline ListPartnerEventSourcesResult& WithPartnerEventSources(Aws::Vector<PartnerEventSource>&& value) { SetPartnerEventSources(std::move(value)); return *this;}

    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline ListPartnerEventSourcesResult& AddPartnerEventSources(const PartnerEventSource& value) { m_partnerEventSources.push_back(value); return *this; }

    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline ListPartnerEventSourcesResult& AddPartnerEventSources(PartnerEventSource&& value) { m_partnerEventSources.push_back(std::move(value)); return *this; }


    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline ListPartnerEventSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline ListPartnerEventSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline ListPartnerEventSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPartnerEventSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPartnerEventSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPartnerEventSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PartnerEventSource> m_partnerEventSources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
