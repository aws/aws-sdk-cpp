/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpsWorksCM
{
namespace Model
{

  /**
   * <p>An event that is related to the server, such as the start of maintenance or
   * backup. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/ServerEvent">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKSCM_API ServerEvent
  {
  public:
    ServerEvent();
    ServerEvent(Aws::Utils::Json::JsonView jsonValue);
    ServerEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time when the event occurred. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the event occurred. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the event occurred. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the event occurred. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the event occurred. </p>
     */
    inline ServerEvent& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the event occurred. </p>
     */
    inline ServerEvent& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the server on or for which the event occurred. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the server on or for which the event occurred. </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the server on or for which the event occurred. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server on or for which the event occurred. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the server on or for which the event occurred. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the server on or for which the event occurred. </p>
     */
    inline ServerEvent& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server on or for which the event occurred. </p>
     */
    inline ServerEvent& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the server on or for which the event occurred. </p>
     */
    inline ServerEvent& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>A human-readable informational or status message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A human-readable informational or status message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A human-readable informational or status message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A human-readable informational or status message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A human-readable informational or status message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A human-readable informational or status message.</p>
     */
    inline ServerEvent& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A human-readable informational or status message.</p>
     */
    inline ServerEvent& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A human-readable informational or status message.</p>
     */
    inline ServerEvent& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The Amazon S3 URL of the event's log file.</p>
     */
    inline const Aws::String& GetLogUrl() const{ return m_logUrl; }

    /**
     * <p>The Amazon S3 URL of the event's log file.</p>
     */
    inline bool LogUrlHasBeenSet() const { return m_logUrlHasBeenSet; }

    /**
     * <p>The Amazon S3 URL of the event's log file.</p>
     */
    inline void SetLogUrl(const Aws::String& value) { m_logUrlHasBeenSet = true; m_logUrl = value; }

    /**
     * <p>The Amazon S3 URL of the event's log file.</p>
     */
    inline void SetLogUrl(Aws::String&& value) { m_logUrlHasBeenSet = true; m_logUrl = std::move(value); }

    /**
     * <p>The Amazon S3 URL of the event's log file.</p>
     */
    inline void SetLogUrl(const char* value) { m_logUrlHasBeenSet = true; m_logUrl.assign(value); }

    /**
     * <p>The Amazon S3 URL of the event's log file.</p>
     */
    inline ServerEvent& WithLogUrl(const Aws::String& value) { SetLogUrl(value); return *this;}

    /**
     * <p>The Amazon S3 URL of the event's log file.</p>
     */
    inline ServerEvent& WithLogUrl(Aws::String&& value) { SetLogUrl(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URL of the event's log file.</p>
     */
    inline ServerEvent& WithLogUrl(const char* value) { SetLogUrl(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_logUrl;
    bool m_logUrlHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
