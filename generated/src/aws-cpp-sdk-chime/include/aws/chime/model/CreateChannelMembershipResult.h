/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/Identity.h>
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
  class CreateChannelMembershipResult
  {
  public:
    AWS_CHIME_API CreateChannelMembershipResult();
    AWS_CHIME_API CreateChannelMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateChannelMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline CreateChannelMembershipResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline CreateChannelMembershipResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline CreateChannelMembershipResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The ARN and metadata of the member being added.</p>
     */
    inline const Identity& GetMember() const{ return m_member; }

    /**
     * <p>The ARN and metadata of the member being added.</p>
     */
    inline void SetMember(const Identity& value) { m_member = value; }

    /**
     * <p>The ARN and metadata of the member being added.</p>
     */
    inline void SetMember(Identity&& value) { m_member = std::move(value); }

    /**
     * <p>The ARN and metadata of the member being added.</p>
     */
    inline CreateChannelMembershipResult& WithMember(const Identity& value) { SetMember(value); return *this;}

    /**
     * <p>The ARN and metadata of the member being added.</p>
     */
    inline CreateChannelMembershipResult& WithMember(Identity&& value) { SetMember(std::move(value)); return *this;}

  private:

    Aws::String m_channelArn;

    Identity m_member;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
