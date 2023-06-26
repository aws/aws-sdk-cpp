/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/connect-contact-lens/model/Transcript.h>
#include <aws/connect-contact-lens/model/Categories.h>
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
    AWS_CONNECTCONTACTLENS_API RealtimeContactAnalysisSegment();
    AWS_CONNECTCONTACTLENS_API RealtimeContactAnalysisSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API RealtimeContactAnalysisSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The analyzed transcript.</p>
     */
    inline const Transcript& GetTranscript() const{ return m_transcript; }

    /**
     * <p>The analyzed transcript.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>The analyzed transcript.</p>
     */
    inline void SetTranscript(const Transcript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>The analyzed transcript.</p>
     */
    inline void SetTranscript(Transcript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>The analyzed transcript.</p>
     */
    inline RealtimeContactAnalysisSegment& WithTranscript(const Transcript& value) { SetTranscript(value); return *this;}

    /**
     * <p>The analyzed transcript.</p>
     */
    inline RealtimeContactAnalysisSegment& WithTranscript(Transcript&& value) { SetTranscript(std::move(value)); return *this;}


    /**
     * <p>The matched category rules.</p>
     */
    inline const Categories& GetCategories() const{ return m_categories; }

    /**
     * <p>The matched category rules.</p>
     */
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }

    /**
     * <p>The matched category rules.</p>
     */
    inline void SetCategories(const Categories& value) { m_categoriesHasBeenSet = true; m_categories = value; }

    /**
     * <p>The matched category rules.</p>
     */
    inline void SetCategories(Categories&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }

    /**
     * <p>The matched category rules.</p>
     */
    inline RealtimeContactAnalysisSegment& WithCategories(const Categories& value) { SetCategories(value); return *this;}

    /**
     * <p>The matched category rules.</p>
     */
    inline RealtimeContactAnalysisSegment& WithCategories(Categories&& value) { SetCategories(std::move(value)); return *this;}

  private:

    Transcript m_transcript;
    bool m_transcriptHasBeenSet = false;

    Categories m_categories;
    bool m_categoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
