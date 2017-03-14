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
   * <zonbook> <simpara>Represents a target that failed to be removed from a
   * rule.</simpara> </zonbook> <xhtml> <p>Represents a target that failed to be
   * removed from a rule.</p> </xhtml>
   */
  class AWS_CLOUDWATCHEVENTS_API RemoveTargetsResultEntry
  {
  public:
    RemoveTargetsResultEntry();
    RemoveTargetsResultEntry(const Aws::Utils::Json::JsonValue& jsonValue);
    RemoveTargetsResultEntry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline RemoveTargetsResultEntry& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline RemoveTargetsResultEntry& WithTargetId(Aws::String&& value) { SetTargetId(value); return *this;}

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline RemoveTargetsResultEntry& WithTargetId(const char* value) { SetTargetId(value); return *this;}

    /**
     * <zonbook> <simpara>The error code that indicates why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * target removal failed.</p> </xhtml>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <zonbook> <simpara>The error code that indicates why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * target removal failed.</p> </xhtml>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <zonbook> <simpara>The error code that indicates why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * target removal failed.</p> </xhtml>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <zonbook> <simpara>The error code that indicates why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * target removal failed.</p> </xhtml>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <zonbook> <simpara>The error code that indicates why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * target removal failed.</p> </xhtml>
     */
    inline RemoveTargetsResultEntry& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <zonbook> <simpara>The error code that indicates why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * target removal failed.</p> </xhtml>
     */
    inline RemoveTargetsResultEntry& WithErrorCode(Aws::String&& value) { SetErrorCode(value); return *this;}

    /**
     * <zonbook> <simpara>The error code that indicates why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error code that indicates why the
     * target removal failed.</p> </xhtml>
     */
    inline RemoveTargetsResultEntry& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

    /**
     * <zonbook> <simpara>The error message that explains why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * target removal failed.</p> </xhtml>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <zonbook> <simpara>The error message that explains why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * target removal failed.</p> </xhtml>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <zonbook> <simpara>The error message that explains why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * target removal failed.</p> </xhtml>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <zonbook> <simpara>The error message that explains why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * target removal failed.</p> </xhtml>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <zonbook> <simpara>The error message that explains why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * target removal failed.</p> </xhtml>
     */
    inline RemoveTargetsResultEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <zonbook> <simpara>The error message that explains why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * target removal failed.</p> </xhtml>
     */
    inline RemoveTargetsResultEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(value); return *this;}

    /**
     * <zonbook> <simpara>The error message that explains why the target removal
     * failed.</simpara> </zonbook> <xhtml> <p>The error message that explains why the
     * target removal failed.</p> </xhtml>
     */
    inline RemoveTargetsResultEntry& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:
    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;
    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;
    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
