/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/AuthType.h>
#include <aws/lambda-web/model/AutoDeploymentMode.h>
#include <aws/lambda-web/model/EndpointType.h>
#include <aws/lambda-web/model/ScalingConfig.h>
#include <aws/lambda-web/model/ThrottleConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {

/**
 * <p>The configuration for a web function endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/EndpointConfig">AWS
 * API Reference</a></p>
 */
class EndpointConfig {
 public:
  AWS_LAMBDAWEB_API EndpointConfig() = default;
  AWS_LAMBDAWEB_API EndpointConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API EndpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the endpoint. The name can contain letters, numbers, hyphens (-),
   * and underscores (_), and can't begin or end with a hyphen or an underscore. The
   * length constraint applies only to the full ARN. If you specify only the endpoint
   * name, it is limited to 64 characters in length.</p>
   */
  inline const Aws::String& GetEndpointName() const { return m_endpointName; }
  inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
  template <typename EndpointNameT = Aws::String>
  void SetEndpointName(EndpointNameT&& value) {
    m_endpointNameHasBeenSet = true;
    m_endpointName = std::forward<EndpointNameT>(value);
  }
  template <typename EndpointNameT = Aws::String>
  EndpointConfig& WithEndpointName(EndpointNameT&& value) {
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
  EndpointConfig& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of endpoint. Determines how traffic is served and routed across
   * Regions.</p>
   */
  inline EndpointType GetEndpointType() const { return m_endpointType; }
  inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
  inline void SetEndpointType(EndpointType value) {
    m_endpointTypeHasBeenSet = true;
    m_endpointType = value;
  }
  inline EndpointConfig& WithEndpointType(EndpointType value) {
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
  inline EndpointConfig& WithAuthType(AuthType value) {
    SetAuthType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The auto-deployment mode for the endpoint. If you don't specify a value, the
   * default is <code>Disabled</code>, and this default is returned in the
   * response.</p>
   */
  inline AutoDeploymentMode GetAutoDeploymentMode() const { return m_autoDeploymentMode; }
  inline bool AutoDeploymentModeHasBeenSet() const { return m_autoDeploymentModeHasBeenSet; }
  inline void SetAutoDeploymentMode(AutoDeploymentMode value) {
    m_autoDeploymentModeHasBeenSet = true;
    m_autoDeploymentMode = value;
  }
  inline EndpointConfig& WithAutoDeploymentMode(AutoDeploymentMode value) {
    SetAutoDeploymentMode(value);
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
  EndpointConfig& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  EndpointConfig& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scaling configuration for the endpoint.</p>
   */
  inline const ScalingConfig& GetScalingConfig() const { return m_scalingConfig; }
  inline bool ScalingConfigHasBeenSet() const { return m_scalingConfigHasBeenSet; }
  template <typename ScalingConfigT = ScalingConfig>
  void SetScalingConfig(ScalingConfigT&& value) {
    m_scalingConfigHasBeenSet = true;
    m_scalingConfig = std::forward<ScalingConfigT>(value);
  }
  template <typename ScalingConfigT = ScalingConfig>
  EndpointConfig& WithScalingConfig(ScalingConfigT&& value) {
    SetScalingConfig(std::forward<ScalingConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The throttling configuration for the endpoint.</p>
   */
  inline const ThrottleConfig& GetThrottleConfig() const { return m_throttleConfig; }
  inline bool ThrottleConfigHasBeenSet() const { return m_throttleConfigHasBeenSet; }
  template <typename ThrottleConfigT = ThrottleConfig>
  void SetThrottleConfig(ThrottleConfigT&& value) {
    m_throttleConfigHasBeenSet = true;
    m_throttleConfig = std::forward<ThrottleConfigT>(value);
  }
  template <typename ThrottleConfigT = ThrottleConfig>
  EndpointConfig& WithThrottleConfig(ThrottleConfigT&& value) {
    SetThrottleConfig(std::forward<ThrottleConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_endpointName;

  Aws::String m_description;

  EndpointType m_endpointType{EndpointType::NOT_SET};

  AuthType m_authType{AuthType::NOT_SET};

  AutoDeploymentMode m_autoDeploymentMode{AutoDeploymentMode::NOT_SET};

  Aws::Vector<Aws::String> m_regions;

  ScalingConfig m_scalingConfig;

  ThrottleConfig m_throttleConfig;
  bool m_endpointNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_endpointTypeHasBeenSet = false;
  bool m_authTypeHasBeenSet = false;
  bool m_autoDeploymentModeHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_scalingConfigHasBeenSet = false;
  bool m_throttleConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
