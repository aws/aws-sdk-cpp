/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RealTimeContactAnalysisPostContactSummaryStatus.h>
#include <aws/connect/model/RealTimeContactAnalysisPostContactSummaryFailureCode.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the post-contact summary for a real-time contact
   * segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisSegmentPostContactSummary">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisSegmentPostContactSummary
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisSegmentPostContactSummary();
    AWS_CONNECT_API RealTimeContactAnalysisSegmentPostContactSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisSegmentPostContactSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the summary.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline RealTimeContactAnalysisSegmentPostContactSummary& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline RealTimeContactAnalysisSegmentPostContactSummary& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline RealTimeContactAnalysisSegmentPostContactSummary& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the summary was successfully COMPLETED or FAILED to be generated.</p>
     */
    inline const RealTimeContactAnalysisPostContactSummaryStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RealTimeContactAnalysisPostContactSummaryStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RealTimeContactAnalysisPostContactSummaryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RealTimeContactAnalysisSegmentPostContactSummary& WithStatus(const RealTimeContactAnalysisPostContactSummaryStatus& value) { SetStatus(value); return *this;}
    inline RealTimeContactAnalysisSegmentPostContactSummary& WithStatus(RealTimeContactAnalysisPostContactSummaryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the summary failed to be generated, one of the following failure codes
     * occurs:</p> <ul> <li> <p> <code>QUOTA_EXCEEDED</code>: The number of concurrent
     * analytics jobs reached your service quota.</p> </li> <li> <p>
     * <code>INSUFFICIENT_CONVERSATION_CONTENT</code>: The conversation needs to have
     * at least one turn from both the participants in order to generate the
     * summary.</p> </li> <li> <p> <code>FAILED_SAFETY_GUIDELINES</code>: The generated
     * summary cannot be provided because it failed to meet system safety
     * guidelines.</p> </li> <li> <p> <code>INVALID_ANALYSIS_CONFIGURATION</code>: This
     * code occurs when, for example, you're using a <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/supported-languages.html#supported-languages-contact-lens">language</a>
     * that isn't supported by generative AI-powered post-contact summaries. </p> </li>
     * <li> <p> <code>INTERNAL_ERROR</code>: Internal system error.</p> </li> </ul>
     */
    inline const RealTimeContactAnalysisPostContactSummaryFailureCode& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const RealTimeContactAnalysisPostContactSummaryFailureCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(RealTimeContactAnalysisPostContactSummaryFailureCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline RealTimeContactAnalysisSegmentPostContactSummary& WithFailureCode(const RealTimeContactAnalysisPostContactSummaryFailureCode& value) { SetFailureCode(value); return *this;}
    inline RealTimeContactAnalysisSegmentPostContactSummary& WithFailureCode(RealTimeContactAnalysisPostContactSummaryFailureCode&& value) { SetFailureCode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    RealTimeContactAnalysisPostContactSummaryStatus m_status;
    bool m_statusHasBeenSet = false;

    RealTimeContactAnalysisPostContactSummaryFailureCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
