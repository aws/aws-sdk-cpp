/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ExampleCountByFieldCondition.h>
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
 * <p> A filter for <code>ListDatasets</code>. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListDatasetsFilter">AWS
 * API Reference</a></p>
 */
class ListDatasetsFilter {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetsFilter() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetsFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Returns only datasets whose DRAFT example counts meet at least one of these
   * conditions. </p>
   */
  inline const Aws::Vector<ExampleCountByFieldCondition>& GetExampleCountByField() const { return m_exampleCountByField; }
  inline bool ExampleCountByFieldHasBeenSet() const { return m_exampleCountByFieldHasBeenSet; }
  template <typename ExampleCountByFieldT = Aws::Vector<ExampleCountByFieldCondition>>
  void SetExampleCountByField(ExampleCountByFieldT&& value) {
    m_exampleCountByFieldHasBeenSet = true;
    m_exampleCountByField = std::forward<ExampleCountByFieldT>(value);
  }
  template <typename ExampleCountByFieldT = Aws::Vector<ExampleCountByFieldCondition>>
  ListDatasetsFilter& WithExampleCountByField(ExampleCountByFieldT&& value) {
    SetExampleCountByField(std::forward<ExampleCountByFieldT>(value));
    return *this;
  }
  template <typename ExampleCountByFieldT = ExampleCountByFieldCondition>
  ListDatasetsFilter& AddExampleCountByField(ExampleCountByFieldT&& value) {
    m_exampleCountByFieldHasBeenSet = true;
    m_exampleCountByField.emplace_back(std::forward<ExampleCountByFieldT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ExampleCountByFieldCondition> m_exampleCountByField;
  bool m_exampleCountByFieldHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
