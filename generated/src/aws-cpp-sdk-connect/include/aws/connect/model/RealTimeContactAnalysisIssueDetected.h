/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RealTimeContactAnalysisTranscriptItemWithContent.h>
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
   * <p>Potential issues that are detected based on an artificial intelligence
   * analysis of each turn in the conversation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisIssueDetected">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisIssueDetected
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisIssueDetected();
    AWS_CONNECT_API RealTimeContactAnalysisIssueDetected(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisIssueDetected& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * issue.</p>
     */
    inline const Aws::Vector<RealTimeContactAnalysisTranscriptItemWithContent>& GetTranscriptItems() const{ return m_transcriptItems; }

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * issue.</p>
     */
    inline bool TranscriptItemsHasBeenSet() const { return m_transcriptItemsHasBeenSet; }

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * issue.</p>
     */
    inline void SetTranscriptItems(const Aws::Vector<RealTimeContactAnalysisTranscriptItemWithContent>& value) { m_transcriptItemsHasBeenSet = true; m_transcriptItems = value; }

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * issue.</p>
     */
    inline void SetTranscriptItems(Aws::Vector<RealTimeContactAnalysisTranscriptItemWithContent>&& value) { m_transcriptItemsHasBeenSet = true; m_transcriptItems = std::move(value); }

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * issue.</p>
     */
    inline RealTimeContactAnalysisIssueDetected& WithTranscriptItems(const Aws::Vector<RealTimeContactAnalysisTranscriptItemWithContent>& value) { SetTranscriptItems(value); return *this;}

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * issue.</p>
     */
    inline RealTimeContactAnalysisIssueDetected& WithTranscriptItems(Aws::Vector<RealTimeContactAnalysisTranscriptItemWithContent>&& value) { SetTranscriptItems(std::move(value)); return *this;}

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * issue.</p>
     */
    inline RealTimeContactAnalysisIssueDetected& AddTranscriptItems(const RealTimeContactAnalysisTranscriptItemWithContent& value) { m_transcriptItemsHasBeenSet = true; m_transcriptItems.push_back(value); return *this; }

    /**
     * <p>List of the transcript items (segments) that are associated with a given
     * issue.</p>
     */
    inline RealTimeContactAnalysisIssueDetected& AddTranscriptItems(RealTimeContactAnalysisTranscriptItemWithContent&& value) { m_transcriptItemsHasBeenSet = true; m_transcriptItems.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RealTimeContactAnalysisTranscriptItemWithContent> m_transcriptItems;
    bool m_transcriptItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
