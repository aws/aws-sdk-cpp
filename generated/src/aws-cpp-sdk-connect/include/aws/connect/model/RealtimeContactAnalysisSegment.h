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
    AWS_CONNECT_API RealtimeContactAnalysisSegment();
    AWS_CONNECT_API RealtimeContactAnalysisSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealtimeContactAnalysisSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const RealTimeContactAnalysisSegmentTranscript& GetTranscript() const{ return m_transcript; }

    
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    
    inline void SetTranscript(const RealTimeContactAnalysisSegmentTranscript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    
    inline void SetTranscript(RealTimeContactAnalysisSegmentTranscript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    
    inline RealtimeContactAnalysisSegment& WithTranscript(const RealTimeContactAnalysisSegmentTranscript& value) { SetTranscript(value); return *this;}

    
    inline RealtimeContactAnalysisSegment& WithTranscript(RealTimeContactAnalysisSegmentTranscript&& value) { SetTranscript(std::move(value)); return *this;}


    
    inline const RealTimeContactAnalysisSegmentCategories& GetCategories() const{ return m_categories; }

    
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }

    
    inline void SetCategories(const RealTimeContactAnalysisSegmentCategories& value) { m_categoriesHasBeenSet = true; m_categories = value; }

    
    inline void SetCategories(RealTimeContactAnalysisSegmentCategories&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }

    
    inline RealtimeContactAnalysisSegment& WithCategories(const RealTimeContactAnalysisSegmentCategories& value) { SetCategories(value); return *this;}

    
    inline RealtimeContactAnalysisSegment& WithCategories(RealTimeContactAnalysisSegmentCategories&& value) { SetCategories(std::move(value)); return *this;}


    
    inline const RealTimeContactAnalysisSegmentIssues& GetIssues() const{ return m_issues; }

    
    inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }

    
    inline void SetIssues(const RealTimeContactAnalysisSegmentIssues& value) { m_issuesHasBeenSet = true; m_issues = value; }

    
    inline void SetIssues(RealTimeContactAnalysisSegmentIssues&& value) { m_issuesHasBeenSet = true; m_issues = std::move(value); }

    
    inline RealtimeContactAnalysisSegment& WithIssues(const RealTimeContactAnalysisSegmentIssues& value) { SetIssues(value); return *this;}

    
    inline RealtimeContactAnalysisSegment& WithIssues(RealTimeContactAnalysisSegmentIssues&& value) { SetIssues(std::move(value)); return *this;}


    
    inline const RealTimeContactAnalysisSegmentEvent& GetEvent() const{ return m_event; }

    
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    
    inline void SetEvent(const RealTimeContactAnalysisSegmentEvent& value) { m_eventHasBeenSet = true; m_event = value; }

    
    inline void SetEvent(RealTimeContactAnalysisSegmentEvent&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    
    inline RealtimeContactAnalysisSegment& WithEvent(const RealTimeContactAnalysisSegmentEvent& value) { SetEvent(value); return *this;}

    
    inline RealtimeContactAnalysisSegment& WithEvent(RealTimeContactAnalysisSegmentEvent&& value) { SetEvent(std::move(value)); return *this;}


    /**
     * <p>The analyzed attachments.</p>
     */
    inline const RealTimeContactAnalysisSegmentAttachments& GetAttachments() const{ return m_attachments; }

    /**
     * <p>The analyzed attachments.</p>
     */
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }

    /**
     * <p>The analyzed attachments.</p>
     */
    inline void SetAttachments(const RealTimeContactAnalysisSegmentAttachments& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>The analyzed attachments.</p>
     */
    inline void SetAttachments(RealTimeContactAnalysisSegmentAttachments&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>The analyzed attachments.</p>
     */
    inline RealtimeContactAnalysisSegment& WithAttachments(const RealTimeContactAnalysisSegmentAttachments& value) { SetAttachments(value); return *this;}

    /**
     * <p>The analyzed attachments.</p>
     */
    inline RealtimeContactAnalysisSegment& WithAttachments(RealTimeContactAnalysisSegmentAttachments&& value) { SetAttachments(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
