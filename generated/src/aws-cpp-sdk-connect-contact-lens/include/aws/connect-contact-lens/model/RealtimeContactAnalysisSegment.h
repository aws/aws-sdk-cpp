/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/connect-contact-lens/model/Transcript.h>
#include <aws/connect-contact-lens/model/Categories.h>
#include <aws/connect-contact-lens/model/PostContactSummary.h>
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
   * <p>An analyzed segment for a real-time analysis session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/RealtimeContactAnalysisSegment">AWS
   * API Reference</a></p>
   */
  class RealtimeContactAnalysisSegment
  {
  public:
    AWS_CONNECTCONTACTLENS_API RealtimeContactAnalysisSegment() = default;
    AWS_CONNECTCONTACTLENS_API RealtimeContactAnalysisSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API RealtimeContactAnalysisSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The analyzed transcript.</p>
     */
    inline const Transcript& GetTranscript() const { return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    template<typename TranscriptT = Transcript>
    void SetTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript = std::forward<TranscriptT>(value); }
    template<typename TranscriptT = Transcript>
    RealtimeContactAnalysisSegment& WithTranscript(TranscriptT&& value) { SetTranscript(std::forward<TranscriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matched category rules.</p>
     */
    inline const Categories& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Categories>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Categories>
    RealtimeContactAnalysisSegment& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the post-contact summary.</p>
     */
    inline const PostContactSummary& GetPostContactSummary() const { return m_postContactSummary; }
    inline bool PostContactSummaryHasBeenSet() const { return m_postContactSummaryHasBeenSet; }
    template<typename PostContactSummaryT = PostContactSummary>
    void SetPostContactSummary(PostContactSummaryT&& value) { m_postContactSummaryHasBeenSet = true; m_postContactSummary = std::forward<PostContactSummaryT>(value); }
    template<typename PostContactSummaryT = PostContactSummary>
    RealtimeContactAnalysisSegment& WithPostContactSummary(PostContactSummaryT&& value) { SetPostContactSummary(std::forward<PostContactSummaryT>(value)); return *this;}
    ///@}
  private:

    Transcript m_transcript;
    bool m_transcriptHasBeenSet = false;

    Categories m_categories;
    bool m_categoriesHasBeenSet = false;

    PostContactSummary m_postContactSummary;
    bool m_postContactSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
