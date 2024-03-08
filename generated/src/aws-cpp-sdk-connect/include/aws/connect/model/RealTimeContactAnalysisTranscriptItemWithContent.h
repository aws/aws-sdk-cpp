/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RealTimeContactAnalysisCharacterInterval.h>
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
   * <p>Transcript representation containing Id, Content and list of character
   * intervals that are associated with analysis data. For example, this object
   * within an issue detected would describe both content that contains identified
   * issue and intervals where that content is taken from.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisTranscriptItemWithContent">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisTranscriptItemWithContent
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemWithContent();
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemWithContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemWithContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Part of the transcript content that contains identified issue. Can be
     * redacted</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>Part of the transcript content that contains identified issue. Can be
     * redacted</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>Part of the transcript content that contains identified issue. Can be
     * redacted</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>Part of the transcript content that contains identified issue. Can be
     * redacted</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>Part of the transcript content that contains identified issue. Can be
     * redacted</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>Part of the transcript content that contains identified issue. Can be
     * redacted</p>
     */
    inline RealTimeContactAnalysisTranscriptItemWithContent& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>Part of the transcript content that contains identified issue. Can be
     * redacted</p>
     */
    inline RealTimeContactAnalysisTranscriptItemWithContent& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>Part of the transcript content that contains identified issue. Can be
     * redacted</p>
     */
    inline RealTimeContactAnalysisTranscriptItemWithContent& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>Transcript identifier. Matches the identifier from one of the
     * TranscriptSegments.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Transcript identifier. Matches the identifier from one of the
     * TranscriptSegments.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Transcript identifier. Matches the identifier from one of the
     * TranscriptSegments.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Transcript identifier. Matches the identifier from one of the
     * TranscriptSegments.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Transcript identifier. Matches the identifier from one of the
     * TranscriptSegments.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Transcript identifier. Matches the identifier from one of the
     * TranscriptSegments.</p>
     */
    inline RealTimeContactAnalysisTranscriptItemWithContent& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Transcript identifier. Matches the identifier from one of the
     * TranscriptSegments.</p>
     */
    inline RealTimeContactAnalysisTranscriptItemWithContent& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Transcript identifier. Matches the identifier from one of the
     * TranscriptSegments.</p>
     */
    inline RealTimeContactAnalysisTranscriptItemWithContent& WithId(const char* value) { SetId(value); return *this;}


    
    inline const RealTimeContactAnalysisCharacterInterval& GetCharacterOffsets() const{ return m_characterOffsets; }

    
    inline bool CharacterOffsetsHasBeenSet() const { return m_characterOffsetsHasBeenSet; }

    
    inline void SetCharacterOffsets(const RealTimeContactAnalysisCharacterInterval& value) { m_characterOffsetsHasBeenSet = true; m_characterOffsets = value; }

    
    inline void SetCharacterOffsets(RealTimeContactAnalysisCharacterInterval&& value) { m_characterOffsetsHasBeenSet = true; m_characterOffsets = std::move(value); }

    
    inline RealTimeContactAnalysisTranscriptItemWithContent& WithCharacterOffsets(const RealTimeContactAnalysisCharacterInterval& value) { SetCharacterOffsets(value); return *this;}

    
    inline RealTimeContactAnalysisTranscriptItemWithContent& WithCharacterOffsets(RealTimeContactAnalysisCharacterInterval&& value) { SetCharacterOffsets(std::move(value)); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    RealTimeContactAnalysisCharacterInterval m_characterOffsets;
    bool m_characterOffsetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
