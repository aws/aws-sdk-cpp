/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/SessionStatus.h>
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
namespace Athena
{
namespace Model
{
  class GetSessionStatusResult
  {
  public:
    AWS_ATHENA_API GetSessionStatusResult();
    AWS_ATHENA_API GetSessionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetSessionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The session ID.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The session ID.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>The session ID.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>The session ID.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>The session ID.</p>
     */
    inline GetSessionStatusResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The session ID.</p>
     */
    inline GetSessionStatusResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The session ID.</p>
     */
    inline GetSessionStatusResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>Contains information about the status of the session.</p>
     */
    inline const SessionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Contains information about the status of the session.</p>
     */
    inline void SetStatus(const SessionStatus& value) { m_status = value; }

    /**
     * <p>Contains information about the status of the session.</p>
     */
    inline void SetStatus(SessionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Contains information about the status of the session.</p>
     */
    inline GetSessionStatusResult& WithStatus(const SessionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Contains information about the status of the session.</p>
     */
    inline GetSessionStatusResult& WithStatus(SessionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_sessionId;

    SessionStatus m_status;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
