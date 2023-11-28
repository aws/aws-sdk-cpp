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
    AWS_CONNECT_API RealTimeContactAnalysisPointOfInterest();
    AWS_CONNECT_API RealTimeContactAnalysisPointOfInterest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisPointOfInterest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * point of interest. </p>
     */
    inline const Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>& GetTranscriptItems() const{ return m_transcriptItems; }

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * point of interest. </p>
     */
    inline bool TranscriptItemsHasBeenSet() const { return m_transcriptItemsHasBeenSet; }

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * point of interest. </p>
     */
    inline void SetTranscriptItems(const Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>& value) { m_transcriptItemsHasBeenSet = true; m_transcriptItems = value; }

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * point of interest. </p>
     */
    inline void SetTranscriptItems(Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>&& value) { m_transcriptItemsHasBeenSet = true; m_transcriptItems = std::move(value); }

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * point of interest. </p>
     */
    inline RealTimeContactAnalysisPointOfInterest& WithTranscriptItems(const Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>& value) { SetTranscriptItems(value); return *this;}

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * point of interest. </p>
     */
    inline RealTimeContactAnalysisPointOfInterest& WithTranscriptItems(Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>&& value) { SetTranscriptItems(std::move(value)); return *this;}

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * point of interest. </p>
     */
    inline RealTimeContactAnalysisPointOfInterest& AddTranscriptItems(const RealTimeContactAnalysisTranscriptItemWithCharacterOffsets& value) { m_transcriptItemsHasBeenSet = true; m_transcriptItems.push_back(value); return *this; }

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * point of interest. </p>
     */
    inline RealTimeContactAnalysisPointOfInterest& AddTranscriptItems(RealTimeContactAnalysisTranscriptItemWithCharacterOffsets&& value) { m_transcriptItemsHasBeenSet = true; m_transcriptItems.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets> m_transcriptItems;
    bool m_transcriptItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
