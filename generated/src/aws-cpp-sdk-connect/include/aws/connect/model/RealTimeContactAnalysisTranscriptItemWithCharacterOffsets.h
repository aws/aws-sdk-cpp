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
   * <p>Transcript representation containing Id and list of character intervals that
   * are associated with analysis data. For example, this object within a
   * <code>RealTimeContactAnalysisPointOfInterest</code> in
   * <code>Category.MatchedDetails</code> would have character interval describing
   * part of the text that matched category.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisTranscriptItemWithCharacterOffsets">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisTranscriptItemWithCharacterOffsets
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemWithCharacterOffsets();
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemWithCharacterOffsets(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemWithCharacterOffsets& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline RealTimeContactAnalysisTranscriptItemWithCharacterOffsets& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Transcript identifier. Matches the identifier from one of the
     * TranscriptSegments.</p>
     */
    inline RealTimeContactAnalysisTranscriptItemWithCharacterOffsets& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Transcript identifier. Matches the identifier from one of the
     * TranscriptSegments.</p>
     */
    inline RealTimeContactAnalysisTranscriptItemWithCharacterOffsets& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>List of character intervals within transcript content/text.</p>
     */
    inline const RealTimeContactAnalysisCharacterInterval& GetCharacterOffsets() const{ return m_characterOffsets; }

    /**
     * <p>List of character intervals within transcript content/text.</p>
     */
    inline bool CharacterOffsetsHasBeenSet() const { return m_characterOffsetsHasBeenSet; }

    /**
     * <p>List of character intervals within transcript content/text.</p>
     */
    inline void SetCharacterOffsets(const RealTimeContactAnalysisCharacterInterval& value) { m_characterOffsetsHasBeenSet = true; m_characterOffsets = value; }

    /**
     * <p>List of character intervals within transcript content/text.</p>
     */
    inline void SetCharacterOffsets(RealTimeContactAnalysisCharacterInterval&& value) { m_characterOffsetsHasBeenSet = true; m_characterOffsets = std::move(value); }

    /**
     * <p>List of character intervals within transcript content/text.</p>
     */
    inline RealTimeContactAnalysisTranscriptItemWithCharacterOffsets& WithCharacterOffsets(const RealTimeContactAnalysisCharacterInterval& value) { SetCharacterOffsets(value); return *this;}

    /**
     * <p>List of character intervals within transcript content/text.</p>
     */
    inline RealTimeContactAnalysisTranscriptItemWithCharacterOffsets& WithCharacterOffsets(RealTimeContactAnalysisCharacterInterval&& value) { SetCharacterOffsets(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    RealTimeContactAnalysisCharacterInterval m_characterOffsets;
    bool m_characterOffsetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
