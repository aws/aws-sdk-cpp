/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/ChannelMessageSummary.h>
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
namespace Chime
{
namespace Model
{
  class ListChannelMessagesResult
  {
  public:
    AWS_CHIME_API ListChannelMessagesResult();
    AWS_CHIME_API ListChannelMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListChannelMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the channel containing the requested messages.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel containing the requested messages.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }

    /**
     * <p>The ARN of the channel containing the requested messages.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel containing the requested messages.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel containing the requested messages.</p>
     */
    inline ListChannelMessagesResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel containing the requested messages.</p>
     */
    inline ListChannelMessagesResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel containing the requested messages.</p>
     */
    inline ListChannelMessagesResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline ListChannelMessagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline ListChannelMessagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline ListChannelMessagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The information about, and content of, each requested message.</p>
     */
    inline const Aws::Vector<ChannelMessageSummary>& GetChannelMessages() const{ return m_channelMessages; }

    /**
     * <p>The information about, and content of, each requested message.</p>
     */
    inline void SetChannelMessages(const Aws::Vector<ChannelMessageSummary>& value) { m_channelMessages = value; }

    /**
     * <p>The information about, and content of, each requested message.</p>
     */
    inline void SetChannelMessages(Aws::Vector<ChannelMessageSummary>&& value) { m_channelMessages = std::move(value); }

    /**
     * <p>The information about, and content of, each requested message.</p>
     */
    inline ListChannelMessagesResult& WithChannelMessages(const Aws::Vector<ChannelMessageSummary>& value) { SetChannelMessages(value); return *this;}

    /**
     * <p>The information about, and content of, each requested message.</p>
     */
    inline ListChannelMessagesResult& WithChannelMessages(Aws::Vector<ChannelMessageSummary>&& value) { SetChannelMessages(std::move(value)); return *this;}

    /**
     * <p>The information about, and content of, each requested message.</p>
     */
    inline ListChannelMessagesResult& AddChannelMessages(const ChannelMessageSummary& value) { m_channelMessages.push_back(value); return *this; }

    /**
     * <p>The information about, and content of, each requested message.</p>
     */
    inline ListChannelMessagesResult& AddChannelMessages(ChannelMessageSummary&& value) { m_channelMessages.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_channelArn;

    Aws::String m_nextToken;

    Aws::Vector<ChannelMessageSummary> m_channelMessages;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
