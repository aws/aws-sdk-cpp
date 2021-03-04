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
  class AWS_CLOUDWATCHEVENTS_API CreateConnectionResult
  {
  public:
    CreateConnectionResult();
    CreateConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the connection that was created by the request.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The ARN of the connection that was created by the request.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArn = value; }

    /**
     * <p>The ARN of the connection that was created by the request.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArn = std::move(value); }

    /**
     * <p>The ARN of the connection that was created by the request.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArn.assign(value); }

    /**
     * <p>The ARN of the connection that was created by the request.</p>
     */
    inline CreateConnectionResult& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The ARN of the connection that was created by the request.</p>
     */
    inline CreateConnectionResult& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the connection that was created by the request.</p>
     */
    inline CreateConnectionResult& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The state of the connection that was created by the request.</p>
     */
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }

    /**
     * <p>The state of the connection that was created by the request.</p>
     */
    inline void SetConnectionState(const ConnectionState& value) { m_connectionState = value; }

    /**
     * <p>The state of the connection that was created by the request.</p>
     */
    inline void SetConnectionState(ConnectionState&& value) { m_connectionState = std::move(value); }

    /**
     * <p>The state of the connection that was created by the request.</p>
     */
    inline CreateConnectionResult& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}

    /**
     * <p>The state of the connection that was created by the request.</p>
     */
    inline CreateConnectionResult& WithConnectionState(ConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline CreateConnectionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the connection was created.</p>
     */
    inline CreateConnectionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp for the time that the connection was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A time stamp for the time that the connection was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>A time stamp for the time that the connection was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>A time stamp for the time that the connection was last updated.</p>
     */
    inline CreateConnectionResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A time stamp for the time that the connection was last updated.</p>
     */
    inline CreateConnectionResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_connectionArn;

    ConnectionState m_connectionState;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
