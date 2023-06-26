﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelMessageStatusStructure.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{
  class GetChannelMessageStatusResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API GetChannelMessageStatusResult();
    AWS_CHIMESDKMESSAGING_API GetChannelMessageStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API GetChannelMessageStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The message status and details.</p>
     */
    inline const ChannelMessageStatusStructure& GetStatus() const{ return m_status; }

    /**
     * <p>The message status and details.</p>
     */
    inline void SetStatus(const ChannelMessageStatusStructure& value) { m_status = value; }

    /**
     * <p>The message status and details.</p>
     */
    inline void SetStatus(ChannelMessageStatusStructure&& value) { m_status = std::move(value); }

    /**
     * <p>The message status and details.</p>
     */
    inline GetChannelMessageStatusResult& WithStatus(const ChannelMessageStatusStructure& value) { SetStatus(value); return *this;}

    /**
     * <p>The message status and details.</p>
     */
    inline GetChannelMessageStatusResult& WithStatus(ChannelMessageStatusStructure&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetChannelMessageStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetChannelMessageStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetChannelMessageStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ChannelMessageStatusStructure m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
