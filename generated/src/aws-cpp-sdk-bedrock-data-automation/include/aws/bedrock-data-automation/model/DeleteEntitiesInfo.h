/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
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
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Input for entities needed to be deleted</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DeleteEntitiesInfo">AWS
 * API Reference</a></p>
 */
class DeleteEntitiesInfo {
 public:
  AWS_BEDROCKDATAAUTOMATION_API DeleteEntitiesInfo() = default;
  AWS_BEDROCKDATAAUTOMATION_API DeleteEntitiesInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API DeleteEntitiesInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::Vector<Aws::String>& GetEntityIds() const { return m_entityIds; }
  inline bool EntityIdsHasBeenSet() const { return m_entityIdsHasBeenSet; }
  template <typename EntityIdsT = Aws::Vector<Aws::String>>
  void SetEntityIds(EntityIdsT&& value) {
    m_entityIdsHasBeenSet = true;
    m_entityIds = std::forward<EntityIdsT>(value);
  }
  template <typename EntityIdsT = Aws::Vector<Aws::String>>
  DeleteEntitiesInfo& WithEntityIds(EntityIdsT&& value) {
    SetEntityIds(std::forward<EntityIdsT>(value));
    return *this;
  }
  template <typename EntityIdsT = Aws::String>
  DeleteEntitiesInfo& AddEntityIds(EntityIdsT&& value) {
    m_entityIdsHasBeenSet = true;
    m_entityIds.emplace_back(std::forward<EntityIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_entityIds;
  bool m_entityIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
