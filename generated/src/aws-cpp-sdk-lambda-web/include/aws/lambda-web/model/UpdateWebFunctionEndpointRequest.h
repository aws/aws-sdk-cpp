/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-web/LambdaWebRequest.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/AuthType.h>
#include <aws/lambda-web/model/AutoDeploymentMode.h>
#include <aws/lambda-web/model/RevisionWeight.h>
#include <aws/lambda-web/model/ScalingConfig.h>
#include <aws/lambda-web/model/ThrottleConfig.h>

#include <utility>

namespace Aws {
namespace LambdaWeb {
namespace Model {

/**
 * <p>The request to update a web function endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/UpdateWebFunctionEndpointRequest">AWS
 * API Reference</a></p>
 */
class UpdateWebFunctionEndpointRequest : public LambdaWebRequest {
 public:
  AWS_LAMBDAWEB_API UpdateWebFunctionEndpointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateWebFunctionEndpoint"; }

  AWS_LAMBDAWEB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the web function. You can specify the function name or the
   * function ARN. The length constraint applies only to the full ARN. If you specify
   * only the function name, it is limited to 64 characters in length.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  UpdateWebFunctionEndpointRequest& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the endpoint to update. You can specify the endpoint name or the
   * endpoint ARN. The length constraint applies only to the full ARN. If you specify
   * only the endpoint name, it is limited to 64 characters in length.</p>
   */
  inline const Aws::String& GetEndpointName() const { return m_endpointName; }
  inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
  template <typename EndpointNameT = Aws::String>
  void SetEndpointName(EndpointNameT&& value) {
    m_endpointNameHasBeenSet = true;
    m_endpointName = std::forward<EndpointNameT>(value);
  }
  template <typename EndpointNameT = Aws::String>
  UpdateWebFunctionEndpointRequest& WithEndpointName(EndpointNameT&& value) {
    SetEndpointName(std::forward<EndpointNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the endpoint.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateWebFunctionEndpointRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization type for the endpoint.</p>
   */
  inline AuthType GetAuthType() const { return m_authType; }
  inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
  inline void SetAuthType(AuthType value) {
    m_authTypeHasBeenSet = true;
    m_authType = value;
  }
  inline UpdateWebFunctionEndpointRequest& WithAuthType(AuthType value) {
    SetAuthType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The auto-deployment mode for the endpoint.</p>
   */
  inline AutoDeploymentMode GetAutoDeploymentMode() const { return m_autoDeploymentMode; }
  inline bool AutoDeploymentModeHasBeenSet() const { return m_autoDeploymentModeHasBeenSet; }
  inline void SetAutoDeploymentMode(AutoDeploymentMode value) {
    m_autoDeploymentModeHasBeenSet = true;
    m_autoDeploymentMode = value;
  }
  inline UpdateWebFunctionEndpointRequest& WithAutoDeploymentMode(AutoDeploymentMode value) {
    SetAutoDeploymentMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of revision weights that determine how traffic is distributed across
   * revisions.</p>
   */
  inline const Aws::Vector<RevisionWeight>& GetRevisionWeights() const { return m_revisionWeights; }
  inline bool RevisionWeightsHasBeenSet() const { return m_revisionWeightsHasBeenSet; }
  template <typename RevisionWeightsT = Aws::Vector<RevisionWeight>>
  void SetRevisionWeights(RevisionWeightsT&& value) {
    m_revisionWeightsHasBeenSet = true;
    m_revisionWeights = std::forward<RevisionWeightsT>(value);
  }
  template <typename RevisionWeightsT = Aws::Vector<RevisionWeight>>
  UpdateWebFunctionEndpointRequest& WithRevisionWeights(RevisionWeightsT&& value) {
    SetRevisionWeights(std::forward<RevisionWeightsT>(value));
    return *this;
  }
  template <typename RevisionWeightsT = RevisionWeight>
  UpdateWebFunctionEndpointRequest& AddRevisionWeights(RevisionWeightsT&& value) {
    m_revisionWeightsHasBeenSet = true;
    m_revisionWeights.emplace_back(std::forward<RevisionWeightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scaling configuration for the endpoint. Omit this field to keep the
   * current scaling configuration. To clear a previously set
   * <code>maxEnvironments</code> value, specify an empty object.</p>
   */
  inline const ScalingConfig& GetScalingConfig() const { return m_scalingConfig; }
  inline bool ScalingConfigHasBeenSet() const { return m_scalingConfigHasBeenSet; }
  template <typename ScalingConfigT = ScalingConfig>
  void SetScalingConfig(ScalingConfigT&& value) {
    m_scalingConfigHasBeenSet = true;
    m_scalingConfig = std::forward<ScalingConfigT>(value);
  }
  template <typename ScalingConfigT = ScalingConfig>
  UpdateWebFunctionEndpointRequest& WithScalingConfig(ScalingConfigT&& value) {
    SetScalingConfig(std::forward<ScalingConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The throttling configuration for the endpoint. Omit this field to keep the
   * current throttling configuration. To clear a previously set
   * <code>rateLimit</code> value, specify an empty object.</p>
   */
  inline const ThrottleConfig& GetThrottleConfig() const { return m_throttleConfig; }
  inline bool ThrottleConfigHasBeenSet() const { return m_throttleConfigHasBeenSet; }
  template <typename ThrottleConfigT = ThrottleConfig>
  void SetThrottleConfig(ThrottleConfigT&& value) {
    m_throttleConfigHasBeenSet = true;
    m_throttleConfig = std::forward<ThrottleConfigT>(value);
  }
  template <typename ThrottleConfigT = ThrottleConfig>
  UpdateWebFunctionEndpointRequest& WithThrottleConfig(ThrottleConfigT&& value) {
    SetThrottleConfig(std::forward<ThrottleConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;

  Aws::String m_endpointName;

  Aws::String m_description;

  AuthType m_authType{AuthType::NOT_SET};

  AutoDeploymentMode m_autoDeploymentMode{AutoDeploymentMode::NOT_SET};

  Aws::Vector<RevisionWeight> m_revisionWeights;

  ScalingConfig m_scalingConfig;

  ThrottleConfig m_throttleConfig;
  bool m_functionNameHasBeenSet = false;
  bool m_endpointNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_authTypeHasBeenSet = false;
  bool m_autoDeploymentModeHasBeenSet = false;
  bool m_revisionWeightsHasBeenSet = false;
  bool m_scalingConfigHasBeenSet = false;
  bool m_throttleConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
