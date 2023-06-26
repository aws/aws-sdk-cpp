/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/ChannelModeratedByAppInstanceUserSummary.h>
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
namespace Chime
{
namespace Model
{
  class DescribeChannelModeratedByAppInstanceUserResult
  {
  public:
    AWS_CHIME_API DescribeChannelModeratedByAppInstanceUserResult();
    AWS_CHIME_API DescribeChannelModeratedByAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API DescribeChannelModeratedByAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The moderated channel.</p>
     */
    inline const ChannelModeratedByAppInstanceUserSummary& GetChannel() const{ return m_channel; }

    /**
     * <p>The moderated channel.</p>
     */
    inline void SetChannel(const ChannelModeratedByAppInstanceUserSummary& value) { m_channel = value; }

    /**
     * <p>The moderated channel.</p>
     */
    inline void SetChannel(ChannelModeratedByAppInstanceUserSummary&& value) { m_channel = std::move(value); }

    /**
     * <p>The moderated channel.</p>
     */
    inline DescribeChannelModeratedByAppInstanceUserResult& WithChannel(const ChannelModeratedByAppInstanceUserSummary& value) { SetChannel(value); return *this;}

    /**
     * <p>The moderated channel.</p>
     */
    inline DescribeChannelModeratedByAppInstanceUserResult& WithChannel(ChannelModeratedByAppInstanceUserSummary&& value) { SetChannel(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeChannelModeratedByAppInstanceUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeChannelModeratedByAppInstanceUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeChannelModeratedByAppInstanceUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ChannelModeratedByAppInstanceUserSummary m_channel;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
