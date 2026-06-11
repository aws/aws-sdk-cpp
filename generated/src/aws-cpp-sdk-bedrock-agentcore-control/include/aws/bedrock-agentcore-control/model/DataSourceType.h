/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/InlineExamplesSource.h>
#include <aws/bedrock-agentcore-control/model/S3Source.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p> Source of examples to add to the dataset. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DataSourceType">AWS
 * API Reference</a></p>
 */
class DataSourceType {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DataSourceType() = default;
  AWS_BEDROCKAGENTCORECONTROL_API DataSourceType(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API DataSourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Inline examples provided directly in the request body. </p>
   */
  inline const InlineExamplesSource& GetInlineExamples() const { return m_inlineExamples; }
  inline bool InlineExamplesHasBeenSet() const { return m_inlineExamplesHasBeenSet; }
  template <typename InlineExamplesT = InlineExamplesSource>
  void SetInlineExamples(InlineExamplesT&& value) {
    m_inlineExamplesHasBeenSet = true;
    m_inlineExamples = std::forward<InlineExamplesT>(value);
  }
  template <typename InlineExamplesT = InlineExamplesSource>
  DataSourceType& WithInlineExamples(InlineExamplesT&& value) {
    SetInlineExamples(std::forward<InlineExamplesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Amazon S3 URI pointing to a JSONL file in the customer's bucket. </p>
   */
  inline const S3Source& GetS3Source() const { return m_s3Source; }
  inline bool S3SourceHasBeenSet() const { return m_s3SourceHasBeenSet; }
  template <typename S3SourceT = S3Source>
  void SetS3Source(S3SourceT&& value) {
    m_s3SourceHasBeenSet = true;
    m_s3Source = std::forward<S3SourceT>(value);
  }
  template <typename S3SourceT = S3Source>
  DataSourceType& WithS3Source(S3SourceT&& value) {
    SetS3Source(std::forward<S3SourceT>(value));
    return *this;
  }
  ///@}
 private:
  InlineExamplesSource m_inlineExamples;

  S3Source m_s3Source;
  bool m_inlineExamplesHasBeenSet = false;
  bool m_s3SourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
