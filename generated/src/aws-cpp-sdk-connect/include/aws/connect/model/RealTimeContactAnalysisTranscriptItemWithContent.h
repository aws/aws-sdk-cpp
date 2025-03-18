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
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemWithContent() = default;
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemWithContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemWithContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Part of the transcript content that contains identified issue. Can be
     * redacted</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    RealTimeContactAnalysisTranscriptItemWithContent& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

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
    RealTimeContactAnalysisTranscriptItemWithContent& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RealTimeContactAnalysisCharacterInterval& GetCharacterOffsets() const { return m_characterOffsets; }
    inline bool CharacterOffsetsHasBeenSet() const { return m_characterOffsetsHasBeenSet; }
    template<typename CharacterOffsetsT = RealTimeContactAnalysisCharacterInterval>
    void SetCharacterOffsets(CharacterOffsetsT&& value) { m_characterOffsetsHasBeenSet = true; m_characterOffsets = std::forward<CharacterOffsetsT>(value); }
    template<typename CharacterOffsetsT = RealTimeContactAnalysisCharacterInterval>
    RealTimeContactAnalysisTranscriptItemWithContent& WithCharacterOffsets(CharacterOffsetsT&& value) { SetCharacterOffsets(std::forward<CharacterOffsetsT>(value)); return *this;}
    ///@}
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
