/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure that contains Evidently's response to the sent events, including
   * an event ID and error codes, if any. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/PutProjectEventsResultEntry">AWS
   * API Reference</a></p>
   */
  class PutProjectEventsResultEntry
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API PutProjectEventsResultEntry();
    AWS_CLOUDWATCHEVIDENTLY_API PutProjectEventsResultEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API PutProjectEventsResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error code
     * is returned here.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error code
     * is returned here.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error code
     * is returned here.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error code
     * is returned here.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error code
     * is returned here.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error code
     * is returned here.</p>
     */
    inline PutProjectEventsResultEntry& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error code
     * is returned here.</p>
     */
    inline PutProjectEventsResultEntry& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error code
     * is returned here.</p>
     */
    inline PutProjectEventsResultEntry& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error
     * message is returned here.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error
     * message is returned here.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error
     * message is returned here.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error
     * message is returned here.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error
     * message is returned here.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error
     * message is returned here.</p>
     */
    inline PutProjectEventsResultEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error
     * message is returned here.</p>
     */
    inline PutProjectEventsResultEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>If the <code>PutProjectEvents</code> operation has an error, the error
     * message is returned here.</p>
     */
    inline PutProjectEventsResultEntry& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>A unique ID assigned to this <code>PutProjectEvents</code> operation. </p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>A unique ID assigned to this <code>PutProjectEvents</code> operation. </p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>A unique ID assigned to this <code>PutProjectEvents</code> operation. </p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>A unique ID assigned to this <code>PutProjectEvents</code> operation. </p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>A unique ID assigned to this <code>PutProjectEvents</code> operation. </p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>A unique ID assigned to this <code>PutProjectEvents</code> operation. </p>
     */
    inline PutProjectEventsResultEntry& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>A unique ID assigned to this <code>PutProjectEvents</code> operation. </p>
     */
    inline PutProjectEventsResultEntry& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>A unique ID assigned to this <code>PutProjectEvents</code> operation. </p>
     */
    inline PutProjectEventsResultEntry& WithEventId(const char* value) { SetEventId(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
