/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ConnectionState.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class DeauthorizeConnectionResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API DeauthorizeConnectionResult();
    AWS_CLOUDWATCHEVENTS_API DeauthorizeConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API DeauthorizeConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the connection that authorization was removed from.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArn = value; }
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArn = std::move(value); }
    inline void SetConnectionArn(const char* value) { m_connectionArn.assign(value); }
    inline DeauthorizeConnectionResult& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}
    inline DeauthorizeConnectionResult& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}
    inline DeauthorizeConnectionResult& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connection.</p>
     */
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }
    inline void SetConnectionState(const ConnectionState& value) { m_connectionState = value; }
    inline void SetConnectionState(ConnectionState&& value) { m_connectionState = std::move(value); }
    inline DeauthorizeConnectionResult& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}
    inline DeauthorizeConnectionResult& WithConnectionState(ConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DeauthorizeConnectionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DeauthorizeConnectionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the connection was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DeauthorizeConnectionResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DeauthorizeConnectionResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the connection was last authorized.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAuthorizedTime() const{ return m_lastAuthorizedTime; }
    inline void SetLastAuthorizedTime(const Aws::Utils::DateTime& value) { m_lastAuthorizedTime = value; }
    inline void SetLastAuthorizedTime(Aws::Utils::DateTime&& value) { m_lastAuthorizedTime = std::move(value); }
    inline DeauthorizeConnectionResult& WithLastAuthorizedTime(const Aws::Utils::DateTime& value) { SetLastAuthorizedTime(value); return *this;}
    inline DeauthorizeConnectionResult& WithLastAuthorizedTime(Aws::Utils::DateTime&& value) { SetLastAuthorizedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeauthorizeConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeauthorizeConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeauthorizeConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionArn;

    ConnectionState m_connectionState;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_lastAuthorizedTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
