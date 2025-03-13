/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect-contact-lens/model/PostContactSummaryStatus.h>
#include <aws/connect-contact-lens/model/PostContactSummaryFailureCode.h>
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
namespace ConnectContactLens
{
namespace Model
{

  /**
   * <p>Information about the post-contact summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/PostContactSummary">AWS
   * API Reference</a></p>
   */
  class PostContactSummary
  {
  public:
    AWS_CONNECTCONTACTLENS_API PostContactSummary() = default;
    AWS_CONNECTCONTACTLENS_API PostContactSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API PostContactSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the summary.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    PostContactSummary& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the summary was successfully COMPLETED or FAILED to be generated.</p>
     */
    inline PostContactSummaryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PostContactSummaryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PostContactSummary& WithStatus(PostContactSummaryStatus value) { SetStatus(value); return *this;}
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
    inline PostContactSummaryFailureCode GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(PostContactSummaryFailureCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline PostContactSummary& WithFailureCode(PostContactSummaryFailureCode value) { SetFailureCode(value); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    PostContactSummaryStatus m_status{PostContactSummaryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    PostContactSummaryFailureCode m_failureCode{PostContactSummaryFailureCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
