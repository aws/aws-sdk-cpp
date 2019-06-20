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
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents-data/model/ErrorCode.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Information about the error that occured when attempting to update a
   * detector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/BatchUpdateDetectorErrorEntry">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTSDATA_API BatchUpdateDetectorErrorEntry
  {
  public:
    BatchUpdateDetectorErrorEntry();
    BatchUpdateDetectorErrorEntry(Aws::Utils::Json::JsonView jsonValue);
    BatchUpdateDetectorErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>"messageId"</code> of the update request that caused the error.
     * (The value of the <code>"messageId"</code> in the update request
     * <code>"Detector"</code> object.)</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The <code>"messageId"</code> of the update request that caused the error.
     * (The value of the <code>"messageId"</code> in the update request
     * <code>"Detector"</code> object.)</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The <code>"messageId"</code> of the update request that caused the error.
     * (The value of the <code>"messageId"</code> in the update request
     * <code>"Detector"</code> object.)</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The <code>"messageId"</code> of the update request that caused the error.
     * (The value of the <code>"messageId"</code> in the update request
     * <code>"Detector"</code> object.)</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The <code>"messageId"</code> of the update request that caused the error.
     * (The value of the <code>"messageId"</code> in the update request
     * <code>"Detector"</code> object.)</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The <code>"messageId"</code> of the update request that caused the error.
     * (The value of the <code>"messageId"</code> in the update request
     * <code>"Detector"</code> object.)</p>
     */
    inline BatchUpdateDetectorErrorEntry& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The <code>"messageId"</code> of the update request that caused the error.
     * (The value of the <code>"messageId"</code> in the update request
     * <code>"Detector"</code> object.)</p>
     */
    inline BatchUpdateDetectorErrorEntry& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The <code>"messageId"</code> of the update request that caused the error.
     * (The value of the <code>"messageId"</code> in the update request
     * <code>"Detector"</code> object.)</p>
     */
    inline BatchUpdateDetectorErrorEntry& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The code of the error.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The code of the error.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The code of the error.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The code of the error.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The code of the error.</p>
     */
    inline BatchUpdateDetectorErrorEntry& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The code of the error.</p>
     */
    inline BatchUpdateDetectorErrorEntry& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>A message describing the error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A message describing the error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A message describing the error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A message describing the error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A message describing the error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A message describing the error.</p>
     */
    inline BatchUpdateDetectorErrorEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A message describing the error.</p>
     */
    inline BatchUpdateDetectorErrorEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A message describing the error.</p>
     */
    inline BatchUpdateDetectorErrorEntry& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
