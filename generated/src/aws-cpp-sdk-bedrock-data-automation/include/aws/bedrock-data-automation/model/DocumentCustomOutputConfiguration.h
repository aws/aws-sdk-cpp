/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/BlueprintItem.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Custom Configuration of Document</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DocumentCustomOutputConfiguration">AWS
 * API Reference</a></p>
 */
class DocumentCustomOutputConfiguration {
 public:
  AWS_BEDROCKDATAAUTOMATION_API DocumentCustomOutputConfiguration() = default;
  AWS_BEDROCKDATAAUTOMATION_API DocumentCustomOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API DocumentCustomOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::Vector<BlueprintItem>& GetFallbackBlueprints() const { return m_fallbackBlueprints; }
  inline bool FallbackBlueprintsHasBeenSet() const { return m_fallbackBlueprintsHasBeenSet; }
  template <typename FallbackBlueprintsT = Aws::Vector<BlueprintItem>>
  void SetFallbackBlueprints(FallbackBlueprintsT&& value) {
    m_fallbackBlueprintsHasBeenSet = true;
    m_fallbackBlueprints = std::forward<FallbackBlueprintsT>(value);
  }
  template <typename FallbackBlueprintsT = Aws::Vector<BlueprintItem>>
  DocumentCustomOutputConfiguration& WithFallbackBlueprints(FallbackBlueprintsT&& value) {
    SetFallbackBlueprints(std::forward<FallbackBlueprintsT>(value));
    return *this;
  }
  template <typename FallbackBlueprintsT = BlueprintItem>
  DocumentCustomOutputConfiguration& AddFallbackBlueprints(FallbackBlueprintsT&& value) {
    m_fallbackBlueprintsHasBeenSet = true;
    m_fallbackBlueprints.emplace_back(std::forward<FallbackBlueprintsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BlueprintItem> m_fallbackBlueprints;
  bool m_fallbackBlueprintsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
