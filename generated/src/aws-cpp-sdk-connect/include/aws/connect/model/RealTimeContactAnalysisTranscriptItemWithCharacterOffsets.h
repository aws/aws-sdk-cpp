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
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemWithCharacterOffsets() = default;
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemWithCharacterOffsets(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemWithCharacterOffsets& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Transcript identifier. Matches the identifier from one of the
     * TranscriptSegments.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RealTimeContactAnalysisTranscriptItemWithCharacterOffsets& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of character intervals within transcript content/text.</p>
     */
    inline const RealTimeContactAnalysisCharacterInterval& GetCharacterOffsets() const { return m_characterOffsets; }
    inline bool CharacterOffsetsHasBeenSet() const { return m_characterOffsetsHasBeenSet; }
    template<typename CharacterOffsetsT = RealTimeContactAnalysisCharacterInterval>
    void SetCharacterOffsets(CharacterOffsetsT&& value) { m_characterOffsetsHasBeenSet = true; m_characterOffsets = std::forward<CharacterOffsetsT>(value); }
    template<typename CharacterOffsetsT = RealTimeContactAnalysisCharacterInterval>
    RealTimeContactAnalysisTranscriptItemWithCharacterOffsets& WithCharacterOffsets(CharacterOffsetsT&& value) { SetCharacterOffsets(std::forward<CharacterOffsetsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    RealTimeContactAnalysisCharacterInterval m_characterOffsets;
    bool m_characterOffsetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
