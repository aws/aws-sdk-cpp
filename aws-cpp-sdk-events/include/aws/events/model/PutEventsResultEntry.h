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
   * <p>A PutEventsResult contains a list of PutEventsResultEntry.</p>
   */
  class AWS_CLOUDWATCHEVENTS_API PutEventsResultEntry
  {
  public:
    PutEventsResultEntry();
    PutEventsResultEntry(const Aws::Utils::Json::JsonValue& jsonValue);
    PutEventsResultEntry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of the event submitted to Amazon CloudWatch Events.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The ID of the event submitted to Amazon CloudWatch Events.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The ID of the event submitted to Amazon CloudWatch Events.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The ID of the event submitted to Amazon CloudWatch Events.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The ID of the event submitted to Amazon CloudWatch Events.</p>
     */
    inline PutEventsResultEntry& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The ID of the event submitted to Amazon CloudWatch Events.</p>
     */
    inline PutEventsResultEntry& WithEventId(Aws::String&& value) { SetEventId(value); return *this;}

    /**
     * <p>The ID of the event submitted to Amazon CloudWatch Events.</p>
     */
    inline PutEventsResultEntry& WithEventId(const char* value) { SetEventId(value); return *this;}

    /**
     * <p>The error code representing why the event submission failed on this
     * entry.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code representing why the event submission failed on this
     * entry.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code representing why the event submission failed on this
     * entry.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code representing why the event submission failed on this
     * entry.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code representing why the event submission failed on this
     * entry.</p>
     */
    inline PutEventsResultEntry& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code representing why the event submission failed on this
     * entry.</p>
     */
    inline PutEventsResultEntry& WithErrorCode(Aws::String&& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code representing why the event submission failed on this
     * entry.</p>
     */
    inline PutEventsResultEntry& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error message explaining why the event submission failed on this
     * entry.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message explaining why the event submission failed on this
     * entry.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message explaining why the event submission failed on this
     * entry.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message explaining why the event submission failed on this
     * entry.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message explaining why the event submission failed on this
     * entry.</p>
     */
    inline PutEventsResultEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message explaining why the event submission failed on this
     * entry.</p>
     */
    inline PutEventsResultEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message explaining why the event submission failed on this
     * entry.</p>
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
