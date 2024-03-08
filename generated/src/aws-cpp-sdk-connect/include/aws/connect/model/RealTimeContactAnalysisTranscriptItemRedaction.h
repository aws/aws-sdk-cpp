/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Object describing redaction applied to the segment.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisTranscriptItemRedaction">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisTranscriptItemRedaction
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemRedaction();
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemRedaction(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisTranscriptItemRedaction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of character intervals each describing a part of the text that was
     * redacted. For <code>OutputType.Raw</code>, part of the original text that
     * contains data that can be redacted. For <code> OutputType.Redacted</code>, part
     * of the string with redaction tag.</p>
     */
    inline const Aws::Vector<RealTimeContactAnalysisCharacterInterval>& GetCharacterOffsets() const{ return m_characterOffsets; }

    /**
     * <p>List of character intervals each describing a part of the text that was
     * redacted. For <code>OutputType.Raw</code>, part of the original text that
     * contains data that can be redacted. For <code> OutputType.Redacted</code>, part
     * of the string with redaction tag.</p>
     */
    inline bool CharacterOffsetsHasBeenSet() const { return m_characterOffsetsHasBeenSet; }

    /**
     * <p>List of character intervals each describing a part of the text that was
     * redacted. For <code>OutputType.Raw</code>, part of the original text that
     * contains data that can be redacted. For <code> OutputType.Redacted</code>, part
     * of the string with redaction tag.</p>
     */
    inline void SetCharacterOffsets(const Aws::Vector<RealTimeContactAnalysisCharacterInterval>& value) { m_characterOffsetsHasBeenSet = true; m_characterOffsets = value; }

    /**
     * <p>List of character intervals each describing a part of the text that was
     * redacted. For <code>OutputType.Raw</code>, part of the original text that
     * contains data that can be redacted. For <code> OutputType.Redacted</code>, part
     * of the string with redaction tag.</p>
     */
    inline void SetCharacterOffsets(Aws::Vector<RealTimeContactAnalysisCharacterInterval>&& value) { m_characterOffsetsHasBeenSet = true; m_characterOffsets = std::move(value); }

    /**
     * <p>List of character intervals each describing a part of the text that was
     * redacted. For <code>OutputType.Raw</code>, part of the original text that
     * contains data that can be redacted. For <code> OutputType.Redacted</code>, part
     * of the string with redaction tag.</p>
     */
    inline RealTimeContactAnalysisTranscriptItemRedaction& WithCharacterOffsets(const Aws::Vector<RealTimeContactAnalysisCharacterInterval>& value) { SetCharacterOffsets(value); return *this;}

    /**
     * <p>List of character intervals each describing a part of the text that was
     * redacted. For <code>OutputType.Raw</code>, part of the original text that
     * contains data that can be redacted. For <code> OutputType.Redacted</code>, part
     * of the string with redaction tag.</p>
     */
    inline RealTimeContactAnalysisTranscriptItemRedaction& WithCharacterOffsets(Aws::Vector<RealTimeContactAnalysisCharacterInterval>&& value) { SetCharacterOffsets(std::move(value)); return *this;}

    /**
     * <p>List of character intervals each describing a part of the text that was
     * redacted. For <code>OutputType.Raw</code>, part of the original text that
     * contains data that can be redacted. For <code> OutputType.Redacted</code>, part
     * of the string with redaction tag.</p>
     */
    inline RealTimeContactAnalysisTranscriptItemRedaction& AddCharacterOffsets(const RealTimeContactAnalysisCharacterInterval& value) { m_characterOffsetsHasBeenSet = true; m_characterOffsets.push_back(value); return *this; }

    /**
     * <p>List of character intervals each describing a part of the text that was
     * redacted. For <code>OutputType.Raw</code>, part of the original text that
     * contains data that can be redacted. For <code> OutputType.Redacted</code>, part
     * of the string with redaction tag.</p>
     */
    inline RealTimeContactAnalysisTranscriptItemRedaction& AddCharacterOffsets(RealTimeContactAnalysisCharacterInterval&& value) { m_characterOffsetsHasBeenSet = true; m_characterOffsets.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RealTimeContactAnalysisCharacterInterval> m_characterOffsets;
    bool m_characterOffsetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
