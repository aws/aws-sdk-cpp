/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p> Inline examples provided directly in the request body. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InlineExamplesSource">AWS
 * API Reference</a></p>
 */
class InlineExamplesSource {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InlineExamplesSource() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InlineExamplesSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InlineExamplesSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Examples to add. Each example is assigned an auto-generated UUID. </p>
   */
  inline const Aws::Vector<Aws::Utils::Document>& GetExamples() const { return m_examples; }
  inline bool ExamplesHasBeenSet() const { return m_examplesHasBeenSet; }
  template <typename ExamplesT = Aws::Vector<Aws::Utils::Document>>
  void SetExamples(ExamplesT&& value) {
    m_examplesHasBeenSet = true;
    m_examples = std::forward<ExamplesT>(value);
  }
  template <typename ExamplesT = Aws::Vector<Aws::Utils::Document>>
  InlineExamplesSource& WithExamples(ExamplesT&& value) {
    SetExamples(std::forward<ExamplesT>(value));
    return *this;
  }
  template <typename ExamplesT = Aws::Utils::Document>
  InlineExamplesSource& AddExamples(ExamplesT&& value) {
    m_examplesHasBeenSet = true;
    m_examples.emplace_back(std::forward<ExamplesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::Utils::Document> m_examples;
  bool m_examplesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
