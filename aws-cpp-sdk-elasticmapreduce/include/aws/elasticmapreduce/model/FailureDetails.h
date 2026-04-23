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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The details of the step failure. The service attempts to detect the root
   * cause for many common failures.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/FailureDetails">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API FailureDetails
  {
  public:
    FailureDetails();
    FailureDetails(Aws::Utils::Json::JsonView jsonValue);
    FailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reason for the step failure. In the case where the service cannot
     * successfully determine the root cause of the failure, it returns "Unknown Error"
     * as a reason.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the step failure. In the case where the service cannot
     * successfully determine the root cause of the failure, it returns "Unknown Error"
     * as a reason.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the step failure. In the case where the service cannot
     * successfully determine the root cause of the failure, it returns "Unknown Error"
     * as a reason.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the step failure. In the case where the service cannot
     * successfully determine the root cause of the failure, it returns "Unknown Error"
     * as a reason.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the step failure. In the case where the service cannot
     * successfully determine the root cause of the failure, it returns "Unknown Error"
     * as a reason.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for the step failure. In the case where the service cannot
     * successfully determine the root cause of the failure, it returns "Unknown Error"
     * as a reason.</p>
     */
    inline FailureDetails& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the step failure. In the case where the service cannot
     * successfully determine the root cause of the failure, it returns "Unknown Error"
     * as a reason.</p>
     */
    inline FailureDetails& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the step failure. In the case where the service cannot
     * successfully determine the root cause of the failure, it returns "Unknown Error"
     * as a reason.</p>
     */
    inline FailureDetails& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The descriptive message including the error the EMR service has identified as
     * the cause of step failure. This is text from an error log that describes the
     * root cause of the failure.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The descriptive message including the error the EMR service has identified as
     * the cause of step failure. This is text from an error log that describes the
     * root cause of the failure.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The descriptive message including the error the EMR service has identified as
     * the cause of step failure. This is text from an error log that describes the
     * root cause of the failure.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The descriptive message including the error the EMR service has identified as
     * the cause of step failure. This is text from an error log that describes the
     * root cause of the failure.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The descriptive message including the error the EMR service has identified as
     * the cause of step failure. This is text from an error log that describes the
     * root cause of the failure.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The descriptive message including the error the EMR service has identified as
     * the cause of step failure. This is text from an error log that describes the
     * root cause of the failure.</p>
     */
    inline FailureDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The descriptive message including the error the EMR service has identified as
     * the cause of step failure. This is text from an error log that describes the
     * root cause of the failure.</p>
     */
    inline FailureDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The descriptive message including the error the EMR service has identified as
     * the cause of step failure. This is text from an error log that describes the
     * root cause of the failure.</p>
     */
    inline FailureDetails& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The path to the log file where the step failure root cause was originally
     * recorded.</p>
     */
    inline const Aws::String& GetLogFile() const{ return m_logFile; }

    /**
     * <p>The path to the log file where the step failure root cause was originally
     * recorded.</p>
     */
    inline bool LogFileHasBeenSet() const { return m_logFileHasBeenSet; }

    /**
     * <p>The path to the log file where the step failure root cause was originally
     * recorded.</p>
     */
    inline void SetLogFile(const Aws::String& value) { m_logFileHasBeenSet = true; m_logFile = value; }

    /**
     * <p>The path to the log file where the step failure root cause was originally
     * recorded.</p>
     */
    inline void SetLogFile(Aws::String&& value) { m_logFileHasBeenSet = true; m_logFile = std::move(value); }

    /**
     * <p>The path to the log file where the step failure root cause was originally
     * recorded.</p>
     */
    inline void SetLogFile(const char* value) { m_logFileHasBeenSet = true; m_logFile.assign(value); }

    /**
     * <p>The path to the log file where the step failure root cause was originally
     * recorded.</p>
     */
    inline FailureDetails& WithLogFile(const Aws::String& value) { SetLogFile(value); return *this;}

    /**
     * <p>The path to the log file where the step failure root cause was originally
     * recorded.</p>
     */
    inline FailureDetails& WithLogFile(Aws::String&& value) { SetLogFile(std::move(value)); return *this;}

    /**
     * <p>The path to the log file where the step failure root cause was originally
     * recorded.</p>
     */
    inline FailureDetails& WithLogFile(const char* value) { SetLogFile(value); return *this;}

  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_logFile;
    bool m_logFileHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
