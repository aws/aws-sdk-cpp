/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RealTimeContactAnalysisTranscriptItemWithCharacterOffsets.h>
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
   * <p>The section of the contact transcript segment that category rule was
   * detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisPointOfInterest">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisPointOfInterest
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisPointOfInterest() = default;
    AWS_CONNECT_API RealTimeContactAnalysisPointOfInterest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisPointOfInterest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * point of interest. </p>
     */
    inline const Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>& GetTranscriptItems() const { return m_transcriptItems; }
    inline bool TranscriptItemsHasBeenSet() const { return m_transcriptItemsHasBeenSet; }
    template<typename TranscriptItemsT = Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>>
    void SetTranscriptItems(TranscriptItemsT&& value) { m_transcriptItemsHasBeenSet = true; m_transcriptItems = std::forward<TranscriptItemsT>(value); }
    template<typename TranscriptItemsT = Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>>
    RealTimeContactAnalysisPointOfInterest& WithTranscriptItems(TranscriptItemsT&& value) { SetTranscriptItems(std::forward<TranscriptItemsT>(value)); return *this;}
    template<typename TranscriptItemsT = RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>
    RealTimeContactAnalysisPointOfInterest& AddTranscriptItems(TranscriptItemsT&& value) { m_transcriptItemsHasBeenSet = true; m_transcriptItems.emplace_back(std::forward<TranscriptItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets> m_transcriptItems;
    bool m_transcriptItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
