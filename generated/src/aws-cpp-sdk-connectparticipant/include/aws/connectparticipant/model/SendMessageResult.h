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


    /**
     * <p>The ID of the message.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the message.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the message.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the message.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the message.</p>
     */
    inline SendMessageResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the message.</p>
     */
    inline SendMessageResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the message.</p>
     */
    inline SendMessageResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The time when the message was sent.</p> <p>It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetAbsoluteTime() const{ return m_absoluteTime; }

    /**
     * <p>The time when the message was sent.</p> <p>It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetAbsoluteTime(const Aws::String& value) { m_absoluteTime = value; }

    /**
     * <p>The time when the message was sent.</p> <p>It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetAbsoluteTime(Aws::String&& value) { m_absoluteTime = std::move(value); }

    /**
     * <p>The time when the message was sent.</p> <p>It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetAbsoluteTime(const char* value) { m_absoluteTime.assign(value); }

    /**
     * <p>The time when the message was sent.</p> <p>It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline SendMessageResult& WithAbsoluteTime(const Aws::String& value) { SetAbsoluteTime(value); return *this;}

    /**
     * <p>The time when the message was sent.</p> <p>It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline SendMessageResult& WithAbsoluteTime(Aws::String&& value) { SetAbsoluteTime(std::move(value)); return *this;}

    /**
     * <p>The time when the message was sent.</p> <p>It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline SendMessageResult& WithAbsoluteTime(const char* value) { SetAbsoluteTime(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_absoluteTime;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
