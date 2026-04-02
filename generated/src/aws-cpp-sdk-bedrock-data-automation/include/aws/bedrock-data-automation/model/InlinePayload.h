/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DeleteEntitiesInfo.h>
#include <aws/bedrock-data-automation/model/UpsertEntityInfo.h>
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
 * <p>Input payload structure definition</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/InlinePayload">AWS
 * API Reference</a></p>
 */
class InlinePayload {
 public:
  AWS_BEDROCKDATAAUTOMATION_API InlinePayload() = default;
  AWS_BEDROCKDATAAUTOMATION_API InlinePayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API InlinePayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::Vector<UpsertEntityInfo>& GetUpsertEntitiesInfo() const { return m_upsertEntitiesInfo; }
  inline bool UpsertEntitiesInfoHasBeenSet() const { return m_upsertEntitiesInfoHasBeenSet; }
  template <typename UpsertEntitiesInfoT = Aws::Vector<UpsertEntityInfo>>
  void SetUpsertEntitiesInfo(UpsertEntitiesInfoT&& value) {
    m_upsertEntitiesInfoHasBeenSet = true;
    m_upsertEntitiesInfo = std::forward<UpsertEntitiesInfoT>(value);
  }
  template <typename UpsertEntitiesInfoT = Aws::Vector<UpsertEntityInfo>>
  InlinePayload& WithUpsertEntitiesInfo(UpsertEntitiesInfoT&& value) {
    SetUpsertEntitiesInfo(std::forward<UpsertEntitiesInfoT>(value));
    return *this;
  }
  template <typename UpsertEntitiesInfoT = UpsertEntityInfo>
  InlinePayload& AddUpsertEntitiesInfo(UpsertEntitiesInfoT&& value) {
    m_upsertEntitiesInfoHasBeenSet = true;
    m_upsertEntitiesInfo.emplace_back(std::forward<UpsertEntitiesInfoT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const DeleteEntitiesInfo& GetDeleteEntitiesInfo() const { return m_deleteEntitiesInfo; }
  inline bool DeleteEntitiesInfoHasBeenSet() const { return m_deleteEntitiesInfoHasBeenSet; }
  template <typename DeleteEntitiesInfoT = DeleteEntitiesInfo>
  void SetDeleteEntitiesInfo(DeleteEntitiesInfoT&& value) {
    m_deleteEntitiesInfoHasBeenSet = true;
    m_deleteEntitiesInfo = std::forward<DeleteEntitiesInfoT>(value);
  }
  template <typename DeleteEntitiesInfoT = DeleteEntitiesInfo>
  InlinePayload& WithDeleteEntitiesInfo(DeleteEntitiesInfoT&& value) {
    SetDeleteEntitiesInfo(std::forward<DeleteEntitiesInfoT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<UpsertEntityInfo> m_upsertEntitiesInfo;

  DeleteEntitiesInfo m_deleteEntitiesInfo;
  bool m_upsertEntitiesInfoHasBeenSet = false;
  bool m_deleteEntitiesInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
