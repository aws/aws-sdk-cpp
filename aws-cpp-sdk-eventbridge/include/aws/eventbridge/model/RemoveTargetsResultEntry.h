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
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Represents a target that failed to be removed from a rule.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/RemoveTargetsResultEntry">AWS
   * API Reference</a></p>
   */
  class AWS_EVENTBRIDGE_API RemoveTargetsResultEntry
  {
  public:
    RemoveTargetsResultEntry();
    RemoveTargetsResultEntry(Aws::Utils::Json::JsonView jsonValue);
    RemoveTargetsResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the target.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The ID of the target.</p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>The ID of the target.</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The ID of the target.</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>The ID of the target.</p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>The ID of the target.</p>
     */
    inline RemoveTargetsResultEntry& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The ID of the target.</p>
     */
    inline RemoveTargetsResultEntry& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target.</p>
     */
    inline RemoveTargetsResultEntry& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p>The error code that indicates why the target removal failed. If the value is
     * <code>ConcurrentModificationException</code>, too many requests were made at the
     * same time.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code that indicates why the target removal failed. If the value is
     * <code>ConcurrentModificationException</code>, too many requests were made at the
     * same time.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code that indicates why the target removal failed. If the value is
     * <code>ConcurrentModificationException</code>, too many requests were made at the
     * same time.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code that indicates why the target removal failed. If the value is
     * <code>ConcurrentModificationException</code>, too many requests were made at the
     * same time.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code that indicates why the target removal failed. If the value is
     * <code>ConcurrentModificationException</code>, too many requests were made at the
     * same time.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code that indicates why the target removal failed. If the value is
     * <code>ConcurrentModificationException</code>, too many requests were made at the
     * same time.</p>
     */
    inline RemoveTargetsResultEntry& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code that indicates why the target removal failed. If the value is
     * <code>ConcurrentModificationException</code>, too many requests were made at the
     * same time.</p>
     */
    inline RemoveTargetsResultEntry& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code that indicates why the target removal failed. If the value is
     * <code>ConcurrentModificationException</code>, too many requests were made at the
     * same time.</p>
     */
    inline RemoveTargetsResultEntry& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The error message that explains why the target removal failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message that explains why the target removal failed.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message that explains why the target removal failed.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message that explains why the target removal failed.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message that explains why the target removal failed.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message that explains why the target removal failed.</p>
     */
    inline RemoveTargetsResultEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message that explains why the target removal failed.</p>
     */
    inline RemoveTargetsResultEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message that explains why the target removal failed.</p>
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
} // namespace EventBridge
} // namespace Aws
