/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class FailureDetails
  {
  public:
    AWS_EMR_API FailureDetails() = default;
    AWS_EMR_API FailureDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API FailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reason for the step failure. In the case where the service cannot
     * successfully determine the root cause of the failure, it returns "Unknown Error"
     * as a reason.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    FailureDetails& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive message including the error the Amazon EMR service has
     * identified as the cause of step failure. This is text from an error log that
     * describes the root cause of the failure.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    FailureDetails& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the log file where the step failure root cause was originally
     * recorded.</p>
     */
    inline const Aws::String& GetLogFile() const { return m_logFile; }
    inline bool LogFileHasBeenSet() const { return m_logFileHasBeenSet; }
    template<typename LogFileT = Aws::String>
    void SetLogFile(LogFileT&& value) { m_logFileHasBeenSet = true; m_logFile = std::forward<LogFileT>(value); }
    template<typename LogFileT = Aws::String>
    FailureDetails& WithLogFile(LogFileT&& value) { SetLogFile(std::forward<LogFileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_logFile;
    bool m_logFileHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
