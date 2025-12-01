/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>Contains information about a video segment retrieved from a knowledge base,
 * including its location and summary.</p> <p>This data type is used in the
 * following API operations:</p> <ul> <li> <p> <a
 * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Retrieve.html#API_agent-runtime_Retrieve_ResponseSyntax">Retrieve
 * response</a> – in the <code>video</code> field</p> </li> </ul><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/VideoSegment">AWS
 * API Reference</a></p>
 */
class VideoSegment {
 public:
  AWS_BEDROCKAGENTRUNTIME_API VideoSegment() = default;
  AWS_BEDROCKAGENTRUNTIME_API VideoSegment(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API VideoSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 URI where this specific video segment is stored in the multimodal
   * storage destination.</p>
   */
  inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
  inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
  template <typename S3UriT = Aws::String>
  void SetS3Uri(S3UriT&& value) {
    m_s3UriHasBeenSet = true;
    m_s3Uri = std::forward<S3UriT>(value);
  }
  template <typename S3UriT = Aws::String>
  VideoSegment& WithS3Uri(S3UriT&& value) {
    SetS3Uri(std::forward<S3UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A text summary describing the content of the video segment.</p>
   */
  inline const Aws::String& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = Aws::String>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = Aws::String>
  VideoSegment& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3Uri;
  bool m_s3UriHasBeenSet = false;

  Aws::String m_summary;
  bool m_summaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
