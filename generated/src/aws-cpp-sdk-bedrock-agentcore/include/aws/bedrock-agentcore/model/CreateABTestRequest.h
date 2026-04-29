/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ABTestEvaluationConfig.h>
#include <aws/bedrock-agentcore/model/GatewayFilter.h>
#include <aws/bedrock-agentcore/model/Variant.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class CreateABTestRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API CreateABTestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateABTest"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the A/B test. Must be unique within your account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateABTestRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the A/B test.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateABTestRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the gateway to use for traffic
   * splitting.</p>
   */
  inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
  inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
  template <typename GatewayArnT = Aws::String>
  void SetGatewayArn(GatewayArnT&& value) {
    m_gatewayArnHasBeenSet = true;
    m_gatewayArn = std::forward<GatewayArnT>(value);
  }
  template <typename GatewayArnT = Aws::String>
  CreateABTestRequest& WithGatewayArn(GatewayArnT&& value) {
    SetGatewayArn(std::forward<GatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of variants for the A/B test. Must contain exactly two variants: a
   * control (C) and a treatment (T1), each with a configuration bundle or target
   * reference and a traffic weight.</p>
   */
  inline const Aws::Vector<Variant>& GetVariants() const { return m_variants; }
  inline bool VariantsHasBeenSet() const { return m_variantsHasBeenSet; }
  template <typename VariantsT = Aws::Vector<Variant>>
  void SetVariants(VariantsT&& value) {
    m_variantsHasBeenSet = true;
    m_variants = std::forward<VariantsT>(value);
  }
  template <typename VariantsT = Aws::Vector<Variant>>
  CreateABTestRequest& WithVariants(VariantsT&& value) {
    SetVariants(std::forward<VariantsT>(value));
    return *this;
  }
  template <typename VariantsT = Variant>
  CreateABTestRequest& AddVariants(VariantsT&& value) {
    m_variantsHasBeenSet = true;
    m_variants.emplace_back(std::forward<VariantsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter to restrict which gateway target paths are included in the
   * A/B test.</p>
   */
  inline const GatewayFilter& GetGatewayFilter() const { return m_gatewayFilter; }
  inline bool GatewayFilterHasBeenSet() const { return m_gatewayFilterHasBeenSet; }
  template <typename GatewayFilterT = GatewayFilter>
  void SetGatewayFilter(GatewayFilterT&& value) {
    m_gatewayFilterHasBeenSet = true;
    m_gatewayFilter = std::forward<GatewayFilterT>(value);
  }
  template <typename GatewayFilterT = GatewayFilter>
  CreateABTestRequest& WithGatewayFilter(GatewayFilterT&& value) {
    SetGatewayFilter(std::forward<GatewayFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evaluation configuration specifying which online evaluation
   * configurations to use for measuring variant performance.</p>
   */
  inline const ABTestEvaluationConfig& GetEvaluationConfig() const { return m_evaluationConfig; }
  inline bool EvaluationConfigHasBeenSet() const { return m_evaluationConfigHasBeenSet; }
  template <typename EvaluationConfigT = ABTestEvaluationConfig>
  void SetEvaluationConfig(EvaluationConfigT&& value) {
    m_evaluationConfigHasBeenSet = true;
    m_evaluationConfig = std::forward<EvaluationConfigT>(value);
  }
  template <typename EvaluationConfigT = ABTestEvaluationConfig>
  CreateABTestRequest& WithEvaluationConfig(EvaluationConfigT&& value) {
    SetEvaluationConfig(std::forward<EvaluationConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role ARN that grants permissions for the A/B test to access gateway
   * and evaluation resources.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateABTestRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to enable the A/B test immediately upon creation. If true, traffic
   * splitting begins automatically.</p>
   */
  inline bool GetEnableOnCreate() const { return m_enableOnCreate; }
  inline bool EnableOnCreateHasBeenSet() const { return m_enableOnCreateHasBeenSet; }
  inline void SetEnableOnCreate(bool value) {
    m_enableOnCreateHasBeenSet = true;
    m_enableOnCreate = value;
  }
  inline CreateABTestRequest& WithEnableOnCreate(bool value) {
    SetEnableOnCreate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If this token matches a previous request, the service
   * ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateABTestRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_gatewayArn;

  Aws::Vector<Variant> m_variants;

  GatewayFilter m_gatewayFilter;

  ABTestEvaluationConfig m_evaluationConfig;

  Aws::String m_roleArn;

  bool m_enableOnCreate{false};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_gatewayArnHasBeenSet = false;
  bool m_variantsHasBeenSet = false;
  bool m_gatewayFilterHasBeenSet = false;
  bool m_evaluationConfigHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_enableOnCreateHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
