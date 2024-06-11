/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
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
namespace ConnectParticipant
{
namespace Model
{
  class SendMessageResult
  {
  public:
    AWS_CONNECTPARTICIPANT_API SendMessageResult();
    AWS_CONNECTPARTICIPANT_API SendMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTPARTICIPANT_API SendMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the message.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline SendMessageResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SendMessageResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SendMessageResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the message was sent.</p> <p>It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetAbsoluteTime() const{ return m_absoluteTime; }
    inline void SetAbsoluteTime(const Aws::String& value) { m_absoluteTime = value; }
    inline void SetAbsoluteTime(Aws::String&& value) { m_absoluteTime = std::move(value); }
    inline void SetAbsoluteTime(const char* value) { m_absoluteTime.assign(value); }
    inline SendMessageResult& WithAbsoluteTime(const Aws::String& value) { SetAbsoluteTime(value); return *this;}
    inline SendMessageResult& WithAbsoluteTime(Aws::String&& value) { SetAbsoluteTime(std::move(value)); return *this;}
    inline SendMessageResult& WithAbsoluteTime(const char* value) { SetAbsoluteTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SendMessageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SendMessageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SendMessageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_absoluteTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
