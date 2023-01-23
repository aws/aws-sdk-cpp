/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Contains informations about errors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/BatchPutMessageErrorEntry">AWS
   * API Reference</a></p>
   */
  class BatchPutMessageErrorEntry
  {
  public:
    AWS_IOTANALYTICS_API BatchPutMessageErrorEntry();
    AWS_IOTANALYTICS_API BatchPutMessageErrorEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API BatchPutMessageErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the message that caused the error. See the value corresponding to
     * the <code>messageId</code> key in the message object.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The ID of the message that caused the error. See the value corresponding to
     * the <code>messageId</code> key in the message object.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The ID of the message that caused the error. See the value corresponding to
     * the <code>messageId</code> key in the message object.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The ID of the message that caused the error. See the value corresponding to
     * the <code>messageId</code> key in the message object.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The ID of the message that caused the error. See the value corresponding to
     * the <code>messageId</code> key in the message object.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The ID of the message that caused the error. See the value corresponding to
     * the <code>messageId</code> key in the message object.</p>
     */
    inline BatchPutMessageErrorEntry& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The ID of the message that caused the error. See the value corresponding to
     * the <code>messageId</code> key in the message object.</p>
     */
    inline BatchPutMessageErrorEntry& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the message that caused the error. See the value corresponding to
     * the <code>messageId</code> key in the message object.</p>
     */
    inline BatchPutMessageErrorEntry& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The code associated with the error.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The code associated with the error.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The code associated with the error.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The code associated with the error.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The code associated with the error.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The code associated with the error.</p>
     */
    inline BatchPutMessageErrorEntry& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The code associated with the error.</p>
     */
    inline BatchPutMessageErrorEntry& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The code associated with the error.</p>
     */
    inline BatchPutMessageErrorEntry& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The message associated with the error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The message associated with the error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The message associated with the error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The message associated with the error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The message associated with the error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The message associated with the error.</p>
     */
    inline BatchPutMessageErrorEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The message associated with the error.</p>
     */
    inline BatchPutMessageErrorEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The message associated with the error.</p>
     */
    inline BatchPutMessageErrorEntry& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
