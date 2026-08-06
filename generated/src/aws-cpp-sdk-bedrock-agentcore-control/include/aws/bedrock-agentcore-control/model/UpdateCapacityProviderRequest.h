/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/UpdatedDescription.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class UpdateCapacityProviderRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateCapacityProviderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCapacityProvider"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the capacity provider to update.</p>
   */
  inline const Aws::String& GetCapacityProviderId() const { return m_capacityProviderId; }
  inline bool CapacityProviderIdHasBeenSet() const { return m_capacityProviderIdHasBeenSet; }
  template <typename CapacityProviderIdT = Aws::String>
  void SetCapacityProviderId(CapacityProviderIdT&& value) {
    m_capacityProviderIdHasBeenSet = true;
    m_capacityProviderId = std::forward<CapacityProviderIdT>(value);
  }
  template <typename CapacityProviderIdT = Aws::String>
  UpdateCapacityProviderRequest& WithCapacityProviderId(CapacityProviderIdT&& value) {
    SetCapacityProviderId(std::forward<CapacityProviderIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the capacity provider.</p>
   */
  inline const UpdatedDescription& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = UpdatedDescription>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = UpdatedDescription>
  UpdateCapacityProviderRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If you don't specify this field, a value is randomly
   * generated for you. If this token matches a previous request, the service ignores
   * the request, but doesn't return an error. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateCapacityProviderRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityProviderId;

  UpdatedDescription m_description;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_capacityProviderIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
