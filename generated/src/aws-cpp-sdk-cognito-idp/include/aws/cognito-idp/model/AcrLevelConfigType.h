/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
 * <p>The configuration for a single authentication context class reference (ACR)
 * level in a user pool. Each entry in an <code>AcrConfiguration</code> map
 * associates a level (<code>Level1</code> through <code>Level4</code>) with this
 * configuration, which provides the custom name that Amazon Cognito reports for
 * that level in the <code>acr</code> token claim.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AcrLevelConfigType">AWS
 * API Reference</a></p>
 */
class AcrLevelConfigType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API AcrLevelConfigType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API AcrLevelConfigType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API AcrLevelConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The custom name for this authentication context class reference (ACR) level.
   * This value is the URI that Amazon Cognito reports in the <code>acr</code> token
   * claim when a user meets this level. The name must be unique across all levels in
   * the user pool, including default names.</p>
   */
  inline const Aws::String& GetAcrValue() const { return m_acrValue; }
  inline bool AcrValueHasBeenSet() const { return m_acrValueHasBeenSet; }
  template <typename AcrValueT = Aws::String>
  void SetAcrValue(AcrValueT&& value) {
    m_acrValueHasBeenSet = true;
    m_acrValue = std::forward<AcrValueT>(value);
  }
  template <typename AcrValueT = Aws::String>
  AcrLevelConfigType& WithAcrValue(AcrValueT&& value) {
    SetAcrValue(std::forward<AcrValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acrValue;
  bool m_acrValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
