/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/ChannelMessage.h>
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
  class GetChannelMessageResult
  {
  public:
    AWS_CHIME_API GetChannelMessageResult();
    AWS_CHIME_API GetChannelMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetChannelMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of and content in the message.</p>
     */
    inline const ChannelMessage& GetChannelMessage() const{ return m_channelMessage; }

    /**
     * <p>The details of and content in the message.</p>
     */
    inline void SetChannelMessage(const ChannelMessage& value) { m_channelMessage = value; }

    /**
     * <p>The details of and content in the message.</p>
     */
    inline void SetChannelMessage(ChannelMessage&& value) { m_channelMessage = std::move(value); }

    /**
     * <p>The details of and content in the message.</p>
     */
    inline GetChannelMessageResult& WithChannelMessage(const ChannelMessage& value) { SetChannelMessage(value); return *this;}

    /**
     * <p>The details of and content in the message.</p>
     */
    inline GetChannelMessageResult& WithChannelMessage(ChannelMessage&& value) { SetChannelMessage(std::move(value)); return *this;}

  private:

    ChannelMessage m_channelMessage;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
