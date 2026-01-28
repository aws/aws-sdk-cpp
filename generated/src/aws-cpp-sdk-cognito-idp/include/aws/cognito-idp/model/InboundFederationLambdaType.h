/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/InboundFederationLambdaVersionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>The properties of an inbound federation Lambda trigger.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/InboundFederationLambdaType">AWS
 * API Reference</a></p>
 */
class InboundFederationLambdaType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API InboundFederationLambdaType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API InboundFederationLambdaType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API InboundFederationLambdaType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The user pool trigger version of the request that Amazon Cognito sends to
   * your Lambda function. Higher-numbered versions add fields that support new
   * features.</p> <p>You must use a <code>LambdaVersion</code> of <code>V1_0</code>
   * with an inbound federation function.</p>
   */
  inline InboundFederationLambdaVersionType GetLambdaVersion() const { return m_lambdaVersion; }
  inline bool LambdaVersionHasBeenSet() const { return m_lambdaVersionHasBeenSet; }
  inline void SetLambdaVersion(InboundFederationLambdaVersionType value) {
    m_lambdaVersionHasBeenSet = true;
    m_lambdaVersion = value;
  }
  inline InboundFederationLambdaType& WithLambdaVersion(InboundFederationLambdaVersionType value) {
    SetLambdaVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the function that you want to assign to
   * your Lambda trigger.</p>
   */
  inline const Aws::String& GetLambdaArn() const { return m_lambdaArn; }
  inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
  template <typename LambdaArnT = Aws::String>
  void SetLambdaArn(LambdaArnT&& value) {
    m_lambdaArnHasBeenSet = true;
    m_lambdaArn = std::forward<LambdaArnT>(value);
  }
  template <typename LambdaArnT = Aws::String>
  InboundFederationLambdaType& WithLambdaArn(LambdaArnT&& value) {
    SetLambdaArn(std::forward<LambdaArnT>(value));
    return *this;
  }
  ///@}
 private:
  InboundFederationLambdaVersionType m_lambdaVersion{InboundFederationLambdaVersionType::NOT_SET};

  Aws::String m_lambdaArn;
  bool m_lambdaVersionHasBeenSet = false;
  bool m_lambdaArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
