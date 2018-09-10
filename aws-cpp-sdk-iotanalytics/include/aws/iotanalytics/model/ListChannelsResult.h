﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/ChannelSummary.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class AWS_IOTANALYTICS_API ListChannelsResult
  {
  public:
    ListChannelsResult();
    ListChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of "ChannelSummary" objects.</p>
     */
    inline const Aws::Vector<ChannelSummary>& GetChannelSummaries() const{ return m_channelSummaries; }

    /**
     * <p>A list of "ChannelSummary" objects.</p>
     */
    inline void SetChannelSummaries(const Aws::Vector<ChannelSummary>& value) { m_channelSummaries = value; }

    /**
     * <p>A list of "ChannelSummary" objects.</p>
     */
    inline void SetChannelSummaries(Aws::Vector<ChannelSummary>&& value) { m_channelSummaries = std::move(value); }

    /**
     * <p>A list of "ChannelSummary" objects.</p>
     */
    inline ListChannelsResult& WithChannelSummaries(const Aws::Vector<ChannelSummary>& value) { SetChannelSummaries(value); return *this;}

    /**
     * <p>A list of "ChannelSummary" objects.</p>
     */
    inline ListChannelsResult& WithChannelSummaries(Aws::Vector<ChannelSummary>&& value) { SetChannelSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of "ChannelSummary" objects.</p>
     */
    inline ListChannelsResult& AddChannelSummaries(const ChannelSummary& value) { m_channelSummaries.push_back(value); return *this; }

    /**
     * <p>A list of "ChannelSummary" objects.</p>
     */
    inline ListChannelsResult& AddChannelSummaries(ChannelSummary&& value) { m_channelSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ChannelSummary> m_channelSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
