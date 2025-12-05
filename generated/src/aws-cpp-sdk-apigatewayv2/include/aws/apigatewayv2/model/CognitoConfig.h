/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The configuration for using Amazon Cognito user pools to control access to
 * your portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CognitoConfig">AWS
 * API Reference</a></p>
 */
class CognitoConfig {
 public:
  AWS_APIGATEWAYV2_API CognitoConfig() = default;
  AWS_APIGATEWAYV2_API CognitoConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API CognitoConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The app client ID.</p>
   */
  inline const Aws::String& GetAppClientId() const { return m_appClientId; }
  inline bool AppClientIdHasBeenSet() const { return m_appClientIdHasBeenSet; }
  template <typename AppClientIdT = Aws::String>
  void SetAppClientId(AppClientIdT&& value) {
    m_appClientIdHasBeenSet = true;
    m_appClientId = std::forward<AppClientIdT>(value);
  }
  template <typename AppClientIdT = Aws::String>
  CognitoConfig& WithAppClientId(AppClientIdT&& value) {
    SetAppClientId(std::forward<AppClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user pool ARN.</p>
   */
  inline const Aws::String& GetUserPoolArn() const { return m_userPoolArn; }
  inline bool UserPoolArnHasBeenSet() const { return m_userPoolArnHasBeenSet; }
  template <typename UserPoolArnT = Aws::String>
  void SetUserPoolArn(UserPoolArnT&& value) {
    m_userPoolArnHasBeenSet = true;
    m_userPoolArn = std::forward<UserPoolArnT>(value);
  }
  template <typename UserPoolArnT = Aws::String>
  CognitoConfig& WithUserPoolArn(UserPoolArnT&& value) {
    SetUserPoolArn(std::forward<UserPoolArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user pool domain.</p>
   */
  inline const Aws::String& GetUserPoolDomain() const { return m_userPoolDomain; }
  inline bool UserPoolDomainHasBeenSet() const { return m_userPoolDomainHasBeenSet; }
  template <typename UserPoolDomainT = Aws::String>
  void SetUserPoolDomain(UserPoolDomainT&& value) {
    m_userPoolDomainHasBeenSet = true;
    m_userPoolDomain = std::forward<UserPoolDomainT>(value);
  }
  template <typename UserPoolDomainT = Aws::String>
  CognitoConfig& WithUserPoolDomain(UserPoolDomainT&& value) {
    SetUserPoolDomain(std::forward<UserPoolDomainT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_appClientId;

  Aws::String m_userPoolArn;

  Aws::String m_userPoolDomain;
  bool m_appClientIdHasBeenSet = false;
  bool m_userPoolArnHasBeenSet = false;
  bool m_userPoolDomainHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
