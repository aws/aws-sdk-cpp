/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RealTimeContactAnalysisSegmentTranscript.h>
#include <aws/connect/model/RealTimeContactAnalysisSegmentCategories.h>
#include <aws/connect/model/RealTimeContactAnalysisSegmentIssues.h>
#include <aws/connect/model/RealTimeContactAnalysisSegmentEvent.h>
#include <aws/connect/model/RealTimeContactAnalysisSegmentAttachments.h>
#include <aws/connect/model/RealTimeContactAnalysisSegmentPostContactSummary.h>
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
   * <p>An analyzed segment for a real-time analysis session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealtimeContactAnalysisSegment">AWS
   * API Reference</a></p>
   */
  class RealtimeContactAnalysisSegment
  {
  public:
    AWS_CONNECT_API RealtimeContactAnalysisSegment() = default;
    AWS_CONNECT_API RealtimeContactAnalysisSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealtimeContactAnalysisSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const RealTimeContactAnalysisSegmentTranscript& GetTranscript() const { return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    template<typename TranscriptT = RealTimeContactAnalysisSegmentTranscript>
    void SetTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript = std::forward<TranscriptT>(value); }
    template<typename TranscriptT = RealTimeContactAnalysisSegmentTranscript>
    RealtimeContactAnalysisSegment& WithTranscript(TranscriptT&& value) { SetTranscript(std::forward<TranscriptT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RealTimeContactAnalysisSegmentCategories& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = RealTimeContactAnalysisSegmentCategories>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = RealTimeContactAnalysisSegmentCategories>
    RealtimeContactAnalysisSegment& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RealTimeContactAnalysisSegmentIssues& GetIssues() const { return m_issues; }
    inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }
    template<typename IssuesT = RealTimeContactAnalysisSegmentIssues>
    void SetIssues(IssuesT&& value) { m_issuesHasBeenSet = true; m_issues = std::forward<IssuesT>(value); }
    template<typename IssuesT = RealTimeContactAnalysisSegmentIssues>
    RealtimeContactAnalysisSegment& WithIssues(IssuesT&& value) { SetIssues(std::forward<IssuesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RealTimeContactAnalysisSegmentEvent& GetEvent() const { return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    template<typename EventT = RealTimeContactAnalysisSegmentEvent>
    void SetEvent(EventT&& value) { m_eventHasBeenSet = true; m_event = std::forward<EventT>(value); }
    template<typename EventT = RealTimeContactAnalysisSegmentEvent>
    RealtimeContactAnalysisSegment& WithEvent(EventT&& value) { SetEvent(std::forward<EventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analyzed attachments.</p>
     */
    inline const RealTimeContactAnalysisSegmentAttachments& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = RealTimeContactAnalysisSegmentAttachments>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = RealTimeContactAnalysisSegmentAttachments>
    RealtimeContactAnalysisSegment& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the post-contact summary.</p>
     */
    inline const RealTimeContactAnalysisSegmentPostContactSummary& GetPostContactSummary() const { return m_postContactSummary; }
    inline bool PostContactSummaryHasBeenSet() const { return m_postContactSummaryHasBeenSet; }
    template<typename PostContactSummaryT = RealTimeContactAnalysisSegmentPostContactSummary>
    void SetPostContactSummary(PostContactSummaryT&& value) { m_postContactSummaryHasBeenSet = true; m_postContactSummary = std::forward<PostContactSummaryT>(value); }
    template<typename PostContactSummaryT = RealTimeContactAnalysisSegmentPostContactSummary>
    RealtimeContactAnalysisSegment& WithPostContactSummary(PostContactSummaryT&& value) { SetPostContactSummary(std::forward<PostContactSummaryT>(value)); return *this;}
    ///@}
  private:

    RealTimeContactAnalysisSegmentTranscript m_transcript;
    bool m_transcriptHasBeenSet = false;

    RealTimeContactAnalysisSegmentCategories m_categories;
    bool m_categoriesHasBeenSet = false;

    RealTimeContactAnalysisSegmentIssues m_issues;
    bool m_issuesHasBeenSet = false;

    RealTimeContactAnalysisSegmentEvent m_event;
    bool m_eventHasBeenSet = false;

    RealTimeContactAnalysisSegmentAttachments m_attachments;
    bool m_attachmentsHasBeenSet = false;

    RealTimeContactAnalysisSegmentPostContactSummary m_postContactSummary;
    bool m_postContactSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
