/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ExampleFieldCondition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p> A filter for <code>ListDatasetExamples</code>. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListDatasetExamplesFilter">AWS
 * API Reference</a></p>
 */
class ListDatasetExamplesFilter {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetExamplesFilter() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetExamplesFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetExamplesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Returns only examples created by this dataset generation. Specify one ID.
   * </p>
   */
  inline const Aws::Vector<Aws::String>& GetGenerationIds() const { return m_generationIds; }
  inline bool GenerationIdsHasBeenSet() const { return m_generationIdsHasBeenSet; }
  template <typename GenerationIdsT = Aws::Vector<Aws::String>>
  void SetGenerationIds(GenerationIdsT&& value) {
    m_generationIdsHasBeenSet = true;
    m_generationIds = std::forward<GenerationIdsT>(value);
  }
  template <typename GenerationIdsT = Aws::Vector<Aws::String>>
  ListDatasetExamplesFilter& WithGenerationIds(GenerationIdsT&& value) {
    SetGenerationIds(std::forward<GenerationIdsT>(value));
    return *this;
  }
  template <typename GenerationIdsT = Aws::String>
  ListDatasetExamplesFilter& AddGenerationIds(GenerationIdsT&& value) {
    m_generationIdsHasBeenSet = true;
    m_generationIds.emplace_back(std::forward<GenerationIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Returns only examples that meet at least one of these conditions. Examples
   * last written before example field filtering was available never match. </p>
   */
  inline const Aws::Vector<ExampleFieldCondition>& GetExampleFields() const { return m_exampleFields; }
  inline bool ExampleFieldsHasBeenSet() const { return m_exampleFieldsHasBeenSet; }
  template <typename ExampleFieldsT = Aws::Vector<ExampleFieldCondition>>
  void SetExampleFields(ExampleFieldsT&& value) {
    m_exampleFieldsHasBeenSet = true;
    m_exampleFields = std::forward<ExampleFieldsT>(value);
  }
  template <typename ExampleFieldsT = Aws::Vector<ExampleFieldCondition>>
  ListDatasetExamplesFilter& WithExampleFields(ExampleFieldsT&& value) {
    SetExampleFields(std::forward<ExampleFieldsT>(value));
    return *this;
  }
  template <typename ExampleFieldsT = ExampleFieldCondition>
  ListDatasetExamplesFilter& AddExampleFields(ExampleFieldsT&& value) {
    m_exampleFieldsHasBeenSet = true;
    m_exampleFields.emplace_back(std::forward<ExampleFieldsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_generationIds;

  Aws::Vector<ExampleFieldCondition> m_exampleFields;
  bool m_generationIdsHasBeenSet = false;
  bool m_exampleFieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
