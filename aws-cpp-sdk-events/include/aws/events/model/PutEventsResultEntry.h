/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
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

  /**
   * <zonbook> <simpara>Represents an event that failed to be submitted.</simpara>
   * </zonbook> <xhtml> <p>Represents an event that failed to be submitted.</p>
   * </xhtml>
   */
  class AWS_CLOUDWATCHEVENTS_API PutEventsResultEntry
  {
  public:
    PutEventsResultEntry();
    PutEventsResultEntry(const Aws::Utils::Json::JsonValue& jsonValue);
    PutEventsResultEntry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <zonbook> <simpara>The ID of the event.</simpara> </zonbook> <xhtml> <p>The ID
     * of the event.</p> </xhtml>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <zonbook> <simpara>The ID of the event.</simpara> </zonbook> <xhtml> <p>The ID
     * of the event.</p> </xhtml>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <zonbook> <simpara>The ID of the event.</simpara> </zonbook> <xhtml> <p>The ID
     * of the event.</p> </xhtml>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <zonbook> <simpara>The ID of the event.</simpara> </zonbook> <xhtml> <p>The ID
     * of the event.</p> </xhtml>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <zonbook> <simpara>The ID of the event.</simpara> </zonbook> <xhtml> <p>The ID
     * of the event.</p> </xhtml>
     */
    inline PutEventsResultEntry& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <zonbook> <simpara>The ID of the event.</simpara> </zonbook> <xhtml> <p>The ID
     * of the event.</p> </xhtml>
     */
    inline PutEventsResultEntry& WithEventId(Aws::String&& value) { SetEventId(value); return *this;}

    /**
     * <zonbook> <simpara>The ID of the event.</simpara> </zonbook> <xhtml> <p>The ID
     * of the event.</p> </xhtml>
     */
    inline PutEventsResultEntry& WithEventId(const char* value) { SetEventId(value); return *this;}

    /**
     * <zonbook> <simpara>The error code that indicates why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * event submission failed.</p> </xhtml>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <zonbook> <simpara>The error code that indicates why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * event submission failed.</p> </xhtml>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <zonbook> <simpara>The error code that indicates why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * event submission failed.</p> </xhtml>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <zonbook> <simpara>The error code that indicates why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * event submission failed.</p> </xhtml>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <zonbook> <simpara>The error code that indicates why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * event submission failed.</p> </xhtml>
     */
    inline PutEventsResultEntry& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <zonbook> <simpara>The error code that indicates why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * event submission failed.</p> </xhtml>
     */
    inline PutEventsResultEntry& WithErrorCode(Aws::String&& value) { SetErrorCode(value); return *this;}

    /**
     * <zonbook> <simpara>The error code that indicates why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * event submission failed.</p> </xhtml>
     */
    inline PutEventsResultEntry& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

    /**
     * <zonbook> <simpara>The error message that explains why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * event submission failed.</p> </xhtml>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <zonbook> <simpara>The error message that explains why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * event submission failed.</p> </xhtml>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <zonbook> <simpara>The error message that explains why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * event submission failed.</p> </xhtml>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <zonbook> <simpara>The error message that explains why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * event submission failed.</p> </xhtml>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <zonbook> <simpara>The error message that explains why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * event submission failed.</p> </xhtml>
     */
    inline PutEventsResultEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <zonbook> <simpara>The error message that explains why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * event submission failed.</p> </xhtml>
     */
    inline PutEventsResultEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(value); return *this;}

    /**
     * <zonbook> <simpara>The error message that explains why the event submission
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * event submission failed.</p> </xhtml>
     */
    inline PutEventsResultEntry& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:
    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;
    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;
    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
