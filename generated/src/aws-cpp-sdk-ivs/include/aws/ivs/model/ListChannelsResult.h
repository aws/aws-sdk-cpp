/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/ChannelSummary.h>
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
namespace IVS
{
namespace Model
{
  class ListChannelsResult
  {
  public:
    AWS_IVS_API ListChannelsResult();
    AWS_IVS_API ListChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API ListChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of the matching channels.</p>
     */
    inline const Aws::Vector<ChannelSummary>& GetChannels() const{ return m_channels; }

    /**
     * <p>List of the matching channels.</p>
     */
    inline void SetChannels(const Aws::Vector<ChannelSummary>& value) { m_channels = value; }

    /**
     * <p>List of the matching channels.</p>
     */
    inline void SetChannels(Aws::Vector<ChannelSummary>&& value) { m_channels = std::move(value); }

    /**
     * <p>List of the matching channels.</p>
     */
    inline ListChannelsResult& WithChannels(const Aws::Vector<ChannelSummary>& value) { SetChannels(value); return *this;}

    /**
     * <p>List of the matching channels.</p>
     */
    inline ListChannelsResult& WithChannels(Aws::Vector<ChannelSummary>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * <p>List of the matching channels.</p>
     */
    inline ListChannelsResult& AddChannels(const ChannelSummary& value) { m_channels.push_back(value); return *this; }

    /**
     * <p>List of the matching channels.</p>
     */
    inline ListChannelsResult& AddChannels(ChannelSummary&& value) { m_channels.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more channels than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more channels than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more channels than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more channels than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more channels than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more channels than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more channels than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ChannelSummary> m_channels;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
