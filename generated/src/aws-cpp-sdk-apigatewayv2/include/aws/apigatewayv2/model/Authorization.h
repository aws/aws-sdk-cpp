/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/CognitoConfig.h>
#include <aws/apigatewayv2/model/None.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>Represents an authorization configuration for a portal.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/Authorization">AWS
 * API Reference</a></p>
 */
class Authorization {
 public:
  AWS_APIGATEWAYV2_API Authorization() = default;
  AWS_APIGATEWAYV2_API Authorization(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Authorization& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Cognito configuration.</p>
   */
  inline const CognitoConfig& GetCognitoConfig() const { return m_cognitoConfig; }
  inline bool CognitoConfigHasBeenSet() const { return m_cognitoConfigHasBeenSet; }
  template <typename CognitoConfigT = CognitoConfig>
  void SetCognitoConfig(CognitoConfigT&& value) {
    m_cognitoConfigHasBeenSet = true;
    m_cognitoConfig = std::forward<CognitoConfigT>(value);
  }
  template <typename CognitoConfigT = CognitoConfig>
  Authorization& WithCognitoConfig(CognitoConfigT&& value) {
    SetCognitoConfig(std::forward<CognitoConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provide no authorization for your portal. This makes your portal publicly
   * accesible on the web.</p>
   */
  inline const None& GetNone() const { return m_none; }
  inline bool NoneHasBeenSet() const { return m_noneHasBeenSet; }
  template <typename NoneT = None>
  void SetNone(NoneT&& value) {
    m_noneHasBeenSet = true;
    m_none = std::forward<NoneT>(value);
  }
  template <typename NoneT = None>
  Authorization& WithNone(NoneT&& value) {
    SetNone(std::forward<NoneT>(value));
    return *this;
  }
  ///@}
 private:
  CognitoConfig m_cognitoConfig;
  bool m_cognitoConfigHasBeenSet = false;

  None m_none;
  bool m_noneHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
