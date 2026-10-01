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
#include <aws/lambda-web/model/EndpointType.h>
#include <aws/lambda-web/model/RevisionWeight.h>
#include <aws/lambda-web/model/ScalingConfig.h>
#include <aws/lambda-web/model/ThrottleConfig.h>

#include <utility>

namespace Aws {
namespace LambdaWeb {
namespace Model {

/**
 * <p>The request to create a web function endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/CreateWebFunctionEndpointRequest">AWS
 * API Reference</a></p>
 */
class CreateWebFunctionEndpointRequest : public LambdaWebRequest {
 public:
  AWS_LAMBDAWEB_API CreateWebFunctionEndpointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateWebFunctionEndpoint"; }

  AWS_LAMBDAWEB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the web function to create the endpoint for. You can specify the
   * function name or the function ARN. The length constraint applies only to the
   * full ARN. If you specify only the function name, it is limited to 64 characters
   * in length.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  CreateWebFunctionEndpointRequest& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the endpoint to create. The name can contain letters, numbers,
   * hyphens (-), and underscores (_), and can't begin or end with a hyphen or an
   * underscore. The length constraint applies only to the full ARN. If you specify
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
  CreateWebFunctionEndpointRequest& WithEndpointName(EndpointNameT&& value) {
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
  CreateWebFunctionEndpointRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of endpoint to create. Determines how traffic is served and routed
   * across Regions.</p>
   */
  inline EndpointType GetEndpointType() const { return m_endpointType; }
  inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
  inline void SetEndpointType(EndpointType value) {
    m_endpointTypeHasBeenSet = true;
    m_endpointType = value;
  }
  inline CreateWebFunctionEndpointRequest& WithEndpointType(EndpointType value) {
    SetEndpointType(value);
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
  inline CreateWebFunctionEndpointRequest& WithAuthType(AuthType value) {
    SetAuthType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The auto-deployment mode for the endpoint. Controls whether the endpoint
   * automatically serves the newest revision. If you don't specify a value, the
   * default is <code>Disabled</code>, and this default is returned in the
   * response.</p>
   */
  inline AutoDeploymentMode GetAutoDeploymentMode() const { return m_autoDeploymentMode; }
  inline bool AutoDeploymentModeHasBeenSet() const { return m_autoDeploymentModeHasBeenSet; }
  inline void SetAutoDeploymentMode(AutoDeploymentMode value) {
    m_autoDeploymentModeHasBeenSet = true;
    m_autoDeploymentMode = value;
  }
  inline CreateWebFunctionEndpointRequest& WithAutoDeploymentMode(AutoDeploymentMode value) {
    SetAutoDeploymentMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of revision weights that determine how traffic is distributed across
   * revisions. Up to two revisions can be specified for canary or blue-green
   * deployments.</p>
   */
  inline const Aws::Vector<RevisionWeight>& GetRevisionWeights() const { return m_revisionWeights; }
  inline bool RevisionWeightsHasBeenSet() const { return m_revisionWeightsHasBeenSet; }
  template <typename RevisionWeightsT = Aws::Vector<RevisionWeight>>
  void SetRevisionWeights(RevisionWeightsT&& value) {
    m_revisionWeightsHasBeenSet = true;
    m_revisionWeights = std::forward<RevisionWeightsT>(value);
  }
  template <typename RevisionWeightsT = Aws::Vector<RevisionWeight>>
  CreateWebFunctionEndpointRequest& WithRevisionWeights(RevisionWeightsT&& value) {
    SetRevisionWeights(std::forward<RevisionWeightsT>(value));
    return *this;
  }
  template <typename RevisionWeightsT = RevisionWeight>
  CreateWebFunctionEndpointRequest& AddRevisionWeights(RevisionWeightsT&& value) {
    m_revisionWeightsHasBeenSet = true;
    m_revisionWeights.emplace_back(std::forward<RevisionWeightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Regions for the endpoint. Required when the endpoint type is
   * <code>MultiRegion</code> or <code>PerRegion</code>: specify at least one Region
   * other than the Region where you create the endpoint (the home Region). The home
   * Region is added automatically if you don't include it; specifying only the home
   * Region isn't allowed. When the endpoint type is <code>HomeRegion</code>, omit
   * this field or specify only the home Region.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  CreateWebFunctionEndpointRequest& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  CreateWebFunctionEndpointRequest& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scaling configuration for the endpoint. There is no default value. If you
   * don't specify a scaling configuration, it is absent from the response.</p>
   */
  inline const ScalingConfig& GetScalingConfig() const { return m_scalingConfig; }
  inline bool ScalingConfigHasBeenSet() const { return m_scalingConfigHasBeenSet; }
  template <typename ScalingConfigT = ScalingConfig>
  void SetScalingConfig(ScalingConfigT&& value) {
    m_scalingConfigHasBeenSet = true;
    m_scalingConfig = std::forward<ScalingConfigT>(value);
  }
  template <typename ScalingConfigT = ScalingConfig>
  CreateWebFunctionEndpointRequest& WithScalingConfig(ScalingConfigT&& value) {
    SetScalingConfig(std::forward<ScalingConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The throttling configuration for the endpoint. There is no default value. If
   * you don't specify a throttling configuration, it is absent from the
   * response.</p>
   */
  inline const ThrottleConfig& GetThrottleConfig() const { return m_throttleConfig; }
  inline bool ThrottleConfigHasBeenSet() const { return m_throttleConfigHasBeenSet; }
  template <typename ThrottleConfigT = ThrottleConfig>
  void SetThrottleConfig(ThrottleConfigT&& value) {
    m_throttleConfigHasBeenSet = true;
    m_throttleConfig = std::forward<ThrottleConfigT>(value);
  }
  template <typename ThrottleConfigT = ThrottleConfig>
  CreateWebFunctionEndpointRequest& WithThrottleConfig(ThrottleConfigT&& value) {
    SetThrottleConfig(std::forward<ThrottleConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;

  Aws::String m_endpointName;

  Aws::String m_description;

  EndpointType m_endpointType{EndpointType::NOT_SET};

  AuthType m_authType{AuthType::NOT_SET};

  AutoDeploymentMode m_autoDeploymentMode{AutoDeploymentMode::NOT_SET};

  Aws::Vector<RevisionWeight> m_revisionWeights;

  Aws::Vector<Aws::String> m_regions;

  ScalingConfig m_scalingConfig;

  ThrottleConfig m_throttleConfig;
  bool m_functionNameHasBeenSet = false;
  bool m_endpointNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_endpointTypeHasBeenSet = false;
  bool m_authTypeHasBeenSet = false;
  bool m_autoDeploymentModeHasBeenSet = false;
  bool m_revisionWeightsHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_scalingConfigHasBeenSet = false;
  bool m_throttleConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
