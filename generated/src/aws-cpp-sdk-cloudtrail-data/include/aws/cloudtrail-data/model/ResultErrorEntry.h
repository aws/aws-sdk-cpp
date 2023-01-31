/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail-data/CloudTrailData_EXPORTS.h>
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
namespace CloudTrailData
{
namespace Model
{

  /**
   * <p>Includes the error code and error message for events that could not be
   * ingested by CloudTrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-data-2021-08-11/ResultErrorEntry">AWS
   * API Reference</a></p>
   */
  class ResultErrorEntry
  {
  public:
    AWS_CLOUDTRAILDATA_API ResultErrorEntry();
    AWS_CLOUDTRAILDATA_API ResultErrorEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAILDATA_API ResultErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAILDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code for events that could not be ingested by CloudTrail. Possible
     * error codes include: <code>FieldTooLong</code>, <code>FieldNotFound</code>,
     * <code>InvalidChecksum</code>, <code>InvalidData</code>,
     * <code>InvalidRecipient</code>, <code>InvalidEventSource</code>,
     * <code>AccountNotSubscribed</code>, <code>Throttling</code>, and
     * <code>InternalFailure</code>.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code for events that could not be ingested by CloudTrail. Possible
     * error codes include: <code>FieldTooLong</code>, <code>FieldNotFound</code>,
     * <code>InvalidChecksum</code>, <code>InvalidData</code>,
     * <code>InvalidRecipient</code>, <code>InvalidEventSource</code>,
     * <code>AccountNotSubscribed</code>, <code>Throttling</code>, and
     * <code>InternalFailure</code>.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code for events that could not be ingested by CloudTrail. Possible
     * error codes include: <code>FieldTooLong</code>, <code>FieldNotFound</code>,
     * <code>InvalidChecksum</code>, <code>InvalidData</code>,
     * <code>InvalidRecipient</code>, <code>InvalidEventSource</code>,
     * <code>AccountNotSubscribed</code>, <code>Throttling</code>, and
     * <code>InternalFailure</code>.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code for events that could not be ingested by CloudTrail. Possible
     * error codes include: <code>FieldTooLong</code>, <code>FieldNotFound</code>,
     * <code>InvalidChecksum</code>, <code>InvalidData</code>,
     * <code>InvalidRecipient</code>, <code>InvalidEventSource</code>,
     * <code>AccountNotSubscribed</code>, <code>Throttling</code>, and
     * <code>InternalFailure</code>.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code for events that could not be ingested by CloudTrail. Possible
     * error codes include: <code>FieldTooLong</code>, <code>FieldNotFound</code>,
     * <code>InvalidChecksum</code>, <code>InvalidData</code>,
     * <code>InvalidRecipient</code>, <code>InvalidEventSource</code>,
     * <code>AccountNotSubscribed</code>, <code>Throttling</code>, and
     * <code>InternalFailure</code>.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code for events that could not be ingested by CloudTrail. Possible
     * error codes include: <code>FieldTooLong</code>, <code>FieldNotFound</code>,
     * <code>InvalidChecksum</code>, <code>InvalidData</code>,
     * <code>InvalidRecipient</code>, <code>InvalidEventSource</code>,
     * <code>AccountNotSubscribed</code>, <code>Throttling</code>, and
     * <code>InternalFailure</code>.</p>
     */
    inline ResultErrorEntry& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code for events that could not be ingested by CloudTrail. Possible
     * error codes include: <code>FieldTooLong</code>, <code>FieldNotFound</code>,
     * <code>InvalidChecksum</code>, <code>InvalidData</code>,
     * <code>InvalidRecipient</code>, <code>InvalidEventSource</code>,
     * <code>AccountNotSubscribed</code>, <code>Throttling</code>, and
     * <code>InternalFailure</code>.</p>
     */
    inline ResultErrorEntry& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code for events that could not be ingested by CloudTrail. Possible
     * error codes include: <code>FieldTooLong</code>, <code>FieldNotFound</code>,
     * <code>InvalidChecksum</code>, <code>InvalidData</code>,
     * <code>InvalidRecipient</code>, <code>InvalidEventSource</code>,
     * <code>AccountNotSubscribed</code>, <code>Throttling</code>, and
     * <code>InternalFailure</code>.</p>
     */
    inline ResultErrorEntry& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The message that describes the error for events that could not be ingested by
     * CloudTrail.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The message that describes the error for events that could not be ingested by
     * CloudTrail.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The message that describes the error for events that could not be ingested by
     * CloudTrail.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The message that describes the error for events that could not be ingested by
     * CloudTrail.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The message that describes the error for events that could not be ingested by
     * CloudTrail.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The message that describes the error for events that could not be ingested by
     * CloudTrail.</p>
     */
    inline ResultErrorEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The message that describes the error for events that could not be ingested by
     * CloudTrail.</p>
     */
    inline ResultErrorEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The message that describes the error for events that could not be ingested by
     * CloudTrail.</p>
     */
    inline ResultErrorEntry& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The original event ID from the source event that could not be ingested by
     * CloudTrail.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The original event ID from the source event that could not be ingested by
     * CloudTrail.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The original event ID from the source event that could not be ingested by
     * CloudTrail.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The original event ID from the source event that could not be ingested by
     * CloudTrail.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The original event ID from the source event that could not be ingested by
     * CloudTrail.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The original event ID from the source event that could not be ingested by
     * CloudTrail.</p>
     */
    inline ResultErrorEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The original event ID from the source event that could not be ingested by
     * CloudTrail.</p>
     */
    inline ResultErrorEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The original event ID from the source event that could not be ingested by
     * CloudTrail.</p>
     */
    inline ResultErrorEntry& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrailData
} // namespace Aws
