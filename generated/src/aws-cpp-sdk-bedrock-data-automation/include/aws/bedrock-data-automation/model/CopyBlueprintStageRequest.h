/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/BlueprintStage.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>CopyBlueprintStage Request</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/CopyBlueprintStageRequest">AWS
 * API Reference</a></p>
 */
class CopyBlueprintStageRequest : public BedrockDataAutomationRequest {
 public:
  AWS_BEDROCKDATAAUTOMATION_API CopyBlueprintStageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CopyBlueprintStage"; }

  AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Blueprint to be copied</p>
   */
  inline const Aws::String& GetBlueprintArn() const { return m_blueprintArn; }
  inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
  template <typename BlueprintArnT = Aws::String>
  void SetBlueprintArn(BlueprintArnT&& value) {
    m_blueprintArnHasBeenSet = true;
    m_blueprintArn = std::forward<BlueprintArnT>(value);
  }
  template <typename BlueprintArnT = Aws::String>
  CopyBlueprintStageRequest& WithBlueprintArn(BlueprintArnT&& value) {
    SetBlueprintArn(std::forward<BlueprintArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Source stage to copy from</p>
   */
  inline BlueprintStage GetSourceStage() const { return m_sourceStage; }
  inline bool SourceStageHasBeenSet() const { return m_sourceStageHasBeenSet; }
  inline void SetSourceStage(BlueprintStage value) {
    m_sourceStageHasBeenSet = true;
    m_sourceStage = value;
  }
  inline CopyBlueprintStageRequest& WithSourceStage(BlueprintStage value) {
    SetSourceStage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Target stage to copy to</p>
   */
  inline BlueprintStage GetTargetStage() const { return m_targetStage; }
  inline bool TargetStageHasBeenSet() const { return m_targetStageHasBeenSet; }
  inline void SetTargetStage(BlueprintStage value) {
    m_targetStageHasBeenSet = true;
    m_targetStage = value;
  }
  inline CopyBlueprintStageRequest& WithTargetStage(BlueprintStage value) {
    SetTargetStage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Client token for idempotency</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CopyBlueprintStageRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_blueprintArn;

  BlueprintStage m_sourceStage{BlueprintStage::NOT_SET};

  BlueprintStage m_targetStage{BlueprintStage::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_blueprintArnHasBeenSet = false;
  bool m_sourceStageHasBeenSet = false;
  bool m_targetStageHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
